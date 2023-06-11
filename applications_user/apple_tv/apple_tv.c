
#include <stdio.h>
#include <furi.h>
#include <gui/gui.h>
#include <input/input.h>
#include <notification/notification_messages.h>

// #include <infrared_worker.h>
// #include <../../applications/main/infrared/infrared_signal.h>
// #include <../../applications/main/infrared/infrared_remote_button.h>
#include <infrared_transmit.h>

static void draw_callback(Canvas* canvas, void* ctx) {
    char* string = (char*)ctx; // Cast the void pointer to a char*

    canvas_clear(canvas);
    canvas_set_font(canvas, FontPrimary);
    canvas_draw_str(canvas, 0, 10, string); // Use the passed string
}

static void input_callback(InputEvent* input_event, void* ctx) {
    // Проверяем, что контекст не нулевой
    furi_assert(ctx);
    FuriMessageQueue* event_queue = ctx;

    furi_message_queue_put(event_queue, input_event, FuriWaitForever);
}

int32_t apple_tv_app(void* p) {
    UNUSED(p);

    InputEvent event;
    FuriMessageQueue* event_queue = furi_message_queue_alloc(8, sizeof(InputEvent));

    ViewPort* view_port = view_port_alloc();

    char* message = "Hello World!";
    view_port_draw_callback_set(view_port, draw_callback, message);
    view_port_input_callback_set(view_port, input_callback, event_queue);

    Gui* gui = furi_record_open(RECORD_GUI);
    gui_add_view_port(gui, view_port, GuiLayerFullscreen);

    while(1) {
        furi_check(furi_message_queue_get(event_queue, &event, FuriWaitForever) == FuriStatusOk);

        if(event.key == InputKeyBack) {
            if(event.type == InputTypeLong) {
                break; // exit
            }

            if(event.type == InputTypeShort) {
                InfraredMessage message;
                message.protocol = InfraredProtocolNECext;
                message.address = 0x000087EE;
                message.command = 0x00002E02;
                infrared_send(&message, 1);

                char* UIMessage = "menu";
                view_port_draw_callback_set(view_port, draw_callback, UIMessage);
            }
        }

        // if UP
        if(event.key == InputKeyLeft && event.type == InputTypeShort) {
            InfraredMessage message;
            message.protocol = InfraredProtocolNECext;
            message.address = 0x000087EE;
            message.command = 0x00002E0B;
            infrared_send(&message, 1);

            char* UIMessage = "up";
            view_port_draw_callback_set(view_port, draw_callback, UIMessage);
        }

        // if DOWN
        if(event.key == InputKeyRight && event.type == InputTypeShort) {
            InfraredMessage message;
            message.protocol = InfraredProtocolNECext;
            message.address = 0x000087EE;
            message.command = 0x00002E0D;
            infrared_send(&message, 1);

            char* UIMessage = "down";
            view_port_draw_callback_set(view_port, draw_callback, UIMessage);
        }

        // if RIGHT
        if(event.key == InputKeyUp && event.type == InputTypeShort) {
            InfraredMessage message;
            message.protocol = InfraredProtocolNECext;
            message.address = 0x000087EE;
            message.command = 0x00002E07;
            infrared_send(&message, 1);

            char* UIMessage = "right";
            view_port_draw_callback_set(view_port, draw_callback, UIMessage);
        }

        // if LEFT
        if(event.key == InputKeyDown && event.type == InputTypeShort) {
            InfraredMessage message;
            message.protocol = InfraredProtocolNECext;
            message.address = 0x000087EE;
            message.command = 0x00002E08;
            infrared_send(&message, 1);

            char* UIMessage = "left";
            view_port_draw_callback_set(view_port, draw_callback, UIMessage);
        }

        // if  Ok
        if(event.key == InputKeyOk && event.type == InputTypeShort) {
            InfraredMessage message;
            message.protocol = InfraredProtocolNECext;
            message.address = 0x000087EE;
            message.command = 0x00002E5D;
            infrared_send(&message, 1);

            char* UIMessage = "center";
            view_port_draw_callback_set(view_port, draw_callback, UIMessage);
        }
    }

    furi_message_queue_free(event_queue);

    gui_remove_view_port(gui, view_port);
    view_port_free(view_port);
    furi_record_close(RECORD_GUI);

    return 0;
}