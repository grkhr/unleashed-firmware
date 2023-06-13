
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

    if(strcmp(string, "up") == 0) {
        canvas_draw_circle(canvas, 84, 42, 8);
        canvas_draw_circle(canvas, 84, 25, 8);
        canvas_draw_line(canvas, 55, 42, 76, 42);
        canvas_draw_line(canvas, 55, 25, 76, 25);
        canvas_draw_line(canvas, 55, 42, 47, 40);
        canvas_draw_line(canvas, 47, 40, 45, 38);
        canvas_draw_line(canvas, 45, 38, 44, 35);
        canvas_draw_line(canvas, 54, 25, 47, 27);
        canvas_draw_line(canvas, 48, 27, 48, 27);
        canvas_draw_line(canvas, 47, 27, 47, 27);
        canvas_draw_line(canvas, 47, 27, 47, 27);
        canvas_draw_dot(canvas, 45, 30);
        canvas_draw_dot(canvas, 45, 30);
        canvas_draw_dot(canvas, 44, 31);
        canvas_draw_dot(canvas, 44, 32);
        canvas_draw_dot(canvas, 44, 34);
        canvas_draw_dot(canvas, 44, 33);
        canvas_draw_line(canvas, 44, 33, 52, 33);
        canvas_draw_dot(canvas, 82, 30);
        canvas_draw_dot(canvas, 87, 30);
        canvas_draw_dot(canvas, 88, 22);
        canvas_draw_dot(canvas, 86, 18);
        canvas_draw_dot(canvas, 83, 18);
        canvas_draw_dot(canvas, 88, 18);
        canvas_draw_dot(canvas, 88, 22);
        canvas_draw_dot(canvas, 90, 25);
        canvas_draw_dot(canvas, 90, 30);
        canvas_draw_dot(canvas, 90, 27);
        canvas_draw_dot(canvas, 90, 22);
        canvas_draw_dot(canvas, 89, 19);
        canvas_draw_dot(canvas, 85, 18);
        canvas_draw_dot(canvas, 87, 20);
        canvas_draw_dot(canvas, 88, 20);
        canvas_draw_dot(canvas, 84, 20);
        canvas_draw_dot(canvas, 82, 20);
        canvas_draw_dot(canvas, 81, 20);
        canvas_draw_dot(canvas, 79, 22);
        canvas_draw_dot(canvas, 80, 21);
        canvas_draw_dot(canvas, 87, 19);
        canvas_draw_dot(canvas, 88, 23);
        canvas_draw_dot(canvas, 84, 26);
        canvas_draw_dot(canvas, 78, 26);
        canvas_draw_dot(canvas, 91, 23);
        canvas_draw_dot(canvas, 85, 48);
        canvas_draw_dot(canvas, 87, 48);
        canvas_draw_dot(canvas, 88, 46);
        canvas_draw_dot(canvas, 91, 44);
        canvas_draw_dot(canvas, 91, 42);
        canvas_draw_dot(canvas, 90, 40);
        canvas_draw_dot(canvas, 89, 38);
        canvas_draw_dot(canvas, 86, 37);
        canvas_draw_dot(canvas, 89, 41);
        canvas_draw_dot(canvas, 89, 45);
        canvas_draw_dot(canvas, 86, 46);
        canvas_draw_dot(canvas, 82, 47);
        canvas_draw_dot(canvas, 83, 48);
        canvas_draw_dot(canvas, 86, 48);
        canvas_draw_dot(canvas, 81, 46);
        canvas_draw_dot(canvas, 80, 47);
        canvas_draw_dot(canvas, 83, 48);
        canvas_draw_dot(canvas, 85, 49);
        canvas_draw_dot(canvas, 84, 49);
        canvas_draw_dot(canvas, 81, 48);
        canvas_draw_dot(canvas, 89, 47);
        canvas_draw_dot(canvas, 91, 46);
        canvas_draw_dot(canvas, 79, 39);
        canvas_draw_dot(canvas, 78, 42);
        canvas_draw_dot(canvas, 85, 41);
        canvas_draw_dot(canvas, 82, 43);
        canvas_draw_dot(canvas, 45, 29);
        canvas_draw_dot(canvas, 46, 28);
        canvas_draw_dot(canvas, 54, 33);
        canvas_draw_dot(canvas, 55, 34);
        canvas_draw_dot(canvas, 56, 35);
        canvas_draw_dot(canvas, 55, 32);
        canvas_draw_dot(canvas, 56, 31);
        canvas_draw_dot(canvas, 57, 29);
        canvas_draw_dot(canvas, 57, 36);
        canvas_draw_dot(canvas, 57, 37);
        canvas_draw_dot(canvas, 57, 39);
        canvas_draw_dot(canvas, 56, 40);
        canvas_draw_dot(canvas, 57, 28);
        canvas_draw_dot(canvas, 56, 26);
        canvas_draw_dot(canvas, 56, 27);
        canvas_draw_dot(canvas, 56, 41);
        canvas_draw_dot(canvas, 61, 27);
        canvas_draw_dot(canvas, 69, 27);
        canvas_draw_dot(canvas, 66, 28);
        canvas_draw_dot(canvas, 68, 38);
        canvas_draw_dot(canvas, 61, 33);
        canvas_draw_dot(canvas, 73, 36);
    }

    if(strcmp(string, "down") == 0) {
        canvas_draw_circle(canvas, 44, 22, 8);
        canvas_draw_circle(canvas, 44, 39, 8);
        canvas_draw_line(canvas, 73, 22, 52, 22);
        canvas_draw_line(canvas, 73, 39, 52, 39);
        canvas_draw_line(canvas, 73, 22, 81, 24);
        canvas_draw_line(canvas, 81, 24, 83, 26);
        canvas_draw_line(canvas, 83, 26, 84, 29);
        canvas_draw_line(canvas, 74, 39, 81, 37);
        canvas_draw_line(canvas, 80, 37, 80, 37);
        canvas_draw_line(canvas, 81, 37, 81, 37);
        canvas_draw_line(canvas, 81, 37, 81, 37);
        canvas_draw_dot(canvas, 83, 34);
        canvas_draw_dot(canvas, 83, 34);
        canvas_draw_dot(canvas, 84, 33);
        canvas_draw_dot(canvas, 84, 32);
        canvas_draw_dot(canvas, 84, 30);
        canvas_draw_dot(canvas, 84, 31);
        canvas_draw_line(canvas, 84, 31, 76, 31);
        canvas_draw_dot(canvas, 46, 34);
        canvas_draw_dot(canvas, 41, 34);
        canvas_draw_dot(canvas, 40, 42);
        canvas_draw_dot(canvas, 42, 46);
        canvas_draw_dot(canvas, 45, 46);
        canvas_draw_dot(canvas, 40, 46);
        canvas_draw_dot(canvas, 40, 42);
        canvas_draw_dot(canvas, 38, 39);
        canvas_draw_dot(canvas, 38, 34);
        canvas_draw_dot(canvas, 38, 37);
        canvas_draw_dot(canvas, 38, 42);
        canvas_draw_dot(canvas, 39, 45);
        canvas_draw_dot(canvas, 43, 46);
        canvas_draw_dot(canvas, 41, 44);
        canvas_draw_dot(canvas, 40, 44);
        canvas_draw_dot(canvas, 44, 44);
        canvas_draw_dot(canvas, 46, 44);
        canvas_draw_dot(canvas, 47, 44);
        canvas_draw_dot(canvas, 49, 42);
        canvas_draw_dot(canvas, 48, 43);
        canvas_draw_dot(canvas, 41, 45);
        canvas_draw_dot(canvas, 40, 41);
        canvas_draw_dot(canvas, 44, 38);
        canvas_draw_dot(canvas, 50, 38);
        canvas_draw_dot(canvas, 37, 41);
        canvas_draw_dot(canvas, 43, 16);
        canvas_draw_dot(canvas, 41, 16);
        canvas_draw_dot(canvas, 40, 18);
        canvas_draw_dot(canvas, 37, 20);
        canvas_draw_dot(canvas, 37, 22);
        canvas_draw_dot(canvas, 38, 24);
        canvas_draw_dot(canvas, 39, 26);
        canvas_draw_dot(canvas, 42, 27);
        canvas_draw_dot(canvas, 39, 23);
        canvas_draw_dot(canvas, 39, 19);
        canvas_draw_dot(canvas, 42, 18);
        canvas_draw_dot(canvas, 46, 17);
        canvas_draw_dot(canvas, 45, 16);
        canvas_draw_dot(canvas, 42, 16);
        canvas_draw_dot(canvas, 47, 18);
        canvas_draw_dot(canvas, 48, 17);
        canvas_draw_dot(canvas, 45, 16);
        canvas_draw_dot(canvas, 43, 15);
        canvas_draw_dot(canvas, 44, 15);
        canvas_draw_dot(canvas, 47, 16);
        canvas_draw_dot(canvas, 39, 17);
        canvas_draw_dot(canvas, 37, 18);
        canvas_draw_dot(canvas, 49, 25);
        canvas_draw_dot(canvas, 50, 22);
        canvas_draw_dot(canvas, 43, 23);
        canvas_draw_dot(canvas, 46, 21);
        canvas_draw_dot(canvas, 83, 35);
        canvas_draw_dot(canvas, 82, 36);
        canvas_draw_dot(canvas, 74, 31);
        canvas_draw_dot(canvas, 73, 30);
        canvas_draw_dot(canvas, 72, 29);
        canvas_draw_dot(canvas, 73, 32);
        canvas_draw_dot(canvas, 72, 33);
        canvas_draw_dot(canvas, 71, 35);
        canvas_draw_dot(canvas, 71, 28);
        canvas_draw_dot(canvas, 71, 27);
        canvas_draw_dot(canvas, 71, 25);
        canvas_draw_dot(canvas, 72, 24);
        canvas_draw_dot(canvas, 71, 36);
        canvas_draw_dot(canvas, 72, 38);
        canvas_draw_dot(canvas, 72, 37);
        canvas_draw_dot(canvas, 72, 23);
        canvas_draw_dot(canvas, 67, 37);
        canvas_draw_dot(canvas, 59, 37);
        canvas_draw_dot(canvas, 62, 36);
        canvas_draw_dot(canvas, 60, 26);
        canvas_draw_dot(canvas, 67, 31);
        canvas_draw_dot(canvas, 55, 28);
    }

    if(strcmp(string, "right") == 0) {
        canvas_draw_circle(canvas, 54, 47, 8);
        canvas_draw_circle(canvas, 71, 47, 8);
        canvas_draw_line(canvas, 54, 18, 54, 39);
        canvas_draw_line(canvas, 71, 18, 71, 39);
        canvas_draw_line(canvas, 54, 18, 56, 10);
        canvas_draw_line(canvas, 56, 10, 58, 8);
        canvas_draw_line(canvas, 58, 8, 61, 7);
        canvas_draw_line(canvas, 71, 17, 69, 10);
        canvas_draw_line(canvas, 69, 11, 69, 11);
        canvas_draw_line(canvas, 69, 10, 69, 10);
        canvas_draw_line(canvas, 69, 10, 69, 10);
        canvas_draw_dot(canvas, 66, 8);
        canvas_draw_dot(canvas, 66, 8);
        canvas_draw_dot(canvas, 65, 7);
        canvas_draw_dot(canvas, 64, 7);
        canvas_draw_dot(canvas, 62, 7);
        canvas_draw_dot(canvas, 63, 7);
        canvas_draw_line(canvas, 63, 7, 63, 15);
        canvas_draw_dot(canvas, 66, 45);
        canvas_draw_dot(canvas, 66, 50);
        canvas_draw_dot(canvas, 74, 51);
        canvas_draw_dot(canvas, 78, 49);
        canvas_draw_dot(canvas, 78, 46);
        canvas_draw_dot(canvas, 78, 51);
        canvas_draw_dot(canvas, 74, 51);
        canvas_draw_dot(canvas, 71, 53);
        canvas_draw_dot(canvas, 66, 53);
        canvas_draw_dot(canvas, 69, 53);
        canvas_draw_dot(canvas, 74, 53);
        canvas_draw_dot(canvas, 77, 52);
        canvas_draw_dot(canvas, 78, 48);
        canvas_draw_dot(canvas, 76, 50);
        canvas_draw_dot(canvas, 76, 51);
        canvas_draw_dot(canvas, 76, 47);
        canvas_draw_dot(canvas, 76, 45);
        canvas_draw_dot(canvas, 76, 44);
        canvas_draw_dot(canvas, 74, 42);
        canvas_draw_dot(canvas, 75, 43);
        canvas_draw_dot(canvas, 77, 50);
        canvas_draw_dot(canvas, 73, 51);
        canvas_draw_dot(canvas, 70, 47);
        canvas_draw_dot(canvas, 70, 41);
        canvas_draw_dot(canvas, 73, 54);
        canvas_draw_dot(canvas, 48, 48);
        canvas_draw_dot(canvas, 48, 50);
        canvas_draw_dot(canvas, 50, 51);
        canvas_draw_dot(canvas, 52, 54);
        canvas_draw_dot(canvas, 54, 54);
        canvas_draw_dot(canvas, 56, 53);
        canvas_draw_dot(canvas, 58, 52);
        canvas_draw_dot(canvas, 59, 49);
        canvas_draw_dot(canvas, 55, 52);
        canvas_draw_dot(canvas, 51, 52);
        canvas_draw_dot(canvas, 50, 49);
        canvas_draw_dot(canvas, 49, 45);
        canvas_draw_dot(canvas, 48, 46);
        canvas_draw_dot(canvas, 48, 49);
        canvas_draw_dot(canvas, 50, 44);
        canvas_draw_dot(canvas, 49, 43);
        canvas_draw_dot(canvas, 48, 46);
        canvas_draw_dot(canvas, 47, 48);
        canvas_draw_dot(canvas, 47, 47);
        canvas_draw_dot(canvas, 48, 44);
        canvas_draw_dot(canvas, 49, 52);
        canvas_draw_dot(canvas, 50, 54);
        canvas_draw_dot(canvas, 57, 42);
        canvas_draw_dot(canvas, 54, 41);
        canvas_draw_dot(canvas, 55, 48);
        canvas_draw_dot(canvas, 53, 45);
        canvas_draw_dot(canvas, 67, 8);
        canvas_draw_dot(canvas, 68, 9);
        canvas_draw_dot(canvas, 63, 17);
        canvas_draw_dot(canvas, 62, 18);
        canvas_draw_dot(canvas, 61, 19);
        canvas_draw_dot(canvas, 64, 18);
        canvas_draw_dot(canvas, 65, 19);
        canvas_draw_dot(canvas, 67, 20);
        canvas_draw_dot(canvas, 60, 20);
        canvas_draw_dot(canvas, 59, 20);
        canvas_draw_dot(canvas, 57, 20);
        canvas_draw_dot(canvas, 56, 19);
        canvas_draw_dot(canvas, 68, 20);
        canvas_draw_dot(canvas, 70, 19);
        canvas_draw_dot(canvas, 69, 19);
        canvas_draw_dot(canvas, 55, 19);
        canvas_draw_dot(canvas, 69, 24);
        canvas_draw_dot(canvas, 69, 32);
        canvas_draw_dot(canvas, 68, 29);
        canvas_draw_dot(canvas, 58, 31);
        canvas_draw_dot(canvas, 63, 24);
        canvas_draw_dot(canvas, 60, 36);
    }

    if(strcmp(string, "left") == 0) {
        canvas_draw_circle(canvas, 54, 12, 8);
        canvas_draw_circle(canvas, 71, 12, 8);
        canvas_draw_line(canvas, 54, 41, 54, 20);
        canvas_draw_line(canvas, 71, 41, 71, 20);
        canvas_draw_line(canvas, 54, 41, 56, 49);
        canvas_draw_line(canvas, 56, 49, 58, 51);
        canvas_draw_line(canvas, 58, 51, 61, 52);
        canvas_draw_line(canvas, 71, 42, 69, 49);
        canvas_draw_line(canvas, 69, 48, 69, 48);
        canvas_draw_line(canvas, 69, 49, 69, 49);
        canvas_draw_line(canvas, 69, 49, 69, 49);
        canvas_draw_dot(canvas, 66, 51);
        canvas_draw_dot(canvas, 66, 51);
        canvas_draw_dot(canvas, 65, 52);
        canvas_draw_dot(canvas, 64, 52);
        canvas_draw_dot(canvas, 62, 52);
        canvas_draw_dot(canvas, 63, 52);
        canvas_draw_line(canvas, 63, 52, 63, 44);
        canvas_draw_dot(canvas, 66, 14);
        canvas_draw_dot(canvas, 66, 9);
        canvas_draw_dot(canvas, 74, 8);
        canvas_draw_dot(canvas, 78, 10);
        canvas_draw_dot(canvas, 78, 13);
        canvas_draw_dot(canvas, 78, 8);
        canvas_draw_dot(canvas, 74, 8);
        canvas_draw_dot(canvas, 71, 6);
        canvas_draw_dot(canvas, 66, 6);
        canvas_draw_dot(canvas, 69, 6);
        canvas_draw_dot(canvas, 74, 6);
        canvas_draw_dot(canvas, 77, 7);
        canvas_draw_dot(canvas, 78, 11);
        canvas_draw_dot(canvas, 76, 9);
        canvas_draw_dot(canvas, 76, 8);
        canvas_draw_dot(canvas, 76, 12);
        canvas_draw_dot(canvas, 76, 14);
        canvas_draw_dot(canvas, 76, 15);
        canvas_draw_dot(canvas, 74, 17);
        canvas_draw_dot(canvas, 75, 16);
        canvas_draw_dot(canvas, 77, 9);
        canvas_draw_dot(canvas, 73, 8);
        canvas_draw_dot(canvas, 70, 12);
        canvas_draw_dot(canvas, 70, 18);
        canvas_draw_dot(canvas, 73, 5);
        canvas_draw_dot(canvas, 48, 11);
        canvas_draw_dot(canvas, 48, 9);
        canvas_draw_dot(canvas, 50, 8);
        canvas_draw_dot(canvas, 52, 5);
        canvas_draw_dot(canvas, 54, 5);
        canvas_draw_dot(canvas, 56, 6);
        canvas_draw_dot(canvas, 58, 7);
        canvas_draw_dot(canvas, 59, 10);
        canvas_draw_dot(canvas, 55, 7);
        canvas_draw_dot(canvas, 51, 7);
        canvas_draw_dot(canvas, 50, 10);
        canvas_draw_dot(canvas, 49, 14);
        canvas_draw_dot(canvas, 48, 13);
        canvas_draw_dot(canvas, 48, 10);
        canvas_draw_dot(canvas, 50, 15);
        canvas_draw_dot(canvas, 49, 16);
        canvas_draw_dot(canvas, 48, 13);
        canvas_draw_dot(canvas, 47, 11);
        canvas_draw_dot(canvas, 47, 12);
        canvas_draw_dot(canvas, 48, 15);
        canvas_draw_dot(canvas, 49, 7);
        canvas_draw_dot(canvas, 50, 5);
        canvas_draw_dot(canvas, 57, 17);
        canvas_draw_dot(canvas, 54, 18);
        canvas_draw_dot(canvas, 55, 11);
        canvas_draw_dot(canvas, 53, 14);
        canvas_draw_dot(canvas, 67, 51);
        canvas_draw_dot(canvas, 68, 50);
        canvas_draw_dot(canvas, 63, 42);
        canvas_draw_dot(canvas, 62, 41);
        canvas_draw_dot(canvas, 61, 40);
        canvas_draw_dot(canvas, 64, 41);
        canvas_draw_dot(canvas, 65, 40);
        canvas_draw_dot(canvas, 67, 39);
        canvas_draw_dot(canvas, 60, 39);
        canvas_draw_dot(canvas, 59, 39);
        canvas_draw_dot(canvas, 57, 39);
        canvas_draw_dot(canvas, 56, 40);
        canvas_draw_dot(canvas, 68, 39);
        canvas_draw_dot(canvas, 70, 40);
        canvas_draw_dot(canvas, 69, 40);
        canvas_draw_dot(canvas, 55, 40);
        canvas_draw_dot(canvas, 69, 35);
        canvas_draw_dot(canvas, 69, 27);
        canvas_draw_dot(canvas, 68, 30);
        canvas_draw_dot(canvas, 58, 28);
        canvas_draw_dot(canvas, 63, 35);
        canvas_draw_dot(canvas, 60, 23);
    }

    if(strcmp(string, "center") == 0) {
        canvas_draw_line(canvas, 28, 22, 43, 14);
        canvas_draw_line(canvas, 43, 14, 80, 14);
        canvas_draw_line(canvas, 80, 14, 96, 22);
        canvas_draw_line(canvas, 28, 22, 25, 26);
        canvas_draw_line(canvas, 96, 22, 98, 25);
        canvas_draw_line(canvas, 25, 31, 27, 34);
        canvas_draw_line(canvas, 27, 34, 42, 41);
        canvas_draw_line(canvas, 42, 41, 80, 41);
        canvas_draw_line(canvas, 81, 40, 97, 32);
        canvas_draw_line(canvas, 97, 31, 98, 29);
        canvas_draw_line(canvas, 33, 25, 39, 23);
        canvas_draw_line(canvas, 40, 22, 82, 22);
        canvas_draw_line(canvas, 82, 21, 87, 25);
        canvas_draw_line(canvas, 33, 27, 41, 30);
        canvas_draw_line(canvas, 45, 29, 82, 29);
        canvas_draw_line(canvas, 83, 28, 87, 27);
        canvas_draw_line(canvas, 41, 26, 77, 26);
    }
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

        // MENU
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
        if(event.key == InputKeyOk) {
            if(event.type == InputTypeShort) {
                InfraredMessage message;
                message.protocol = InfraredProtocolNECext;
                message.address = 0x000087EE;
                message.command = 0x00002E5D;
                infrared_send(&message, 1);

                char* UIMessage = "center";
                view_port_draw_callback_set(view_port, draw_callback, UIMessage);
            }

            if(event.type == InputTypeLong) {
                InfraredMessage message;
                message.protocol = InfraredProtocolNECext;
                message.address = 0x000087EE;
                message.command = 0x00002E5D;
                infrared_send(&message, 1);

                char* UIMessage = "center";
                view_port_draw_callback_set(view_port, draw_callback, UIMessage);
            }
        }
    }

    furi_message_queue_free(event_queue);

    gui_remove_view_port(gui, view_port);
    view_port_free(view_port);
    furi_record_close(RECORD_GUI);

    return 0;
}