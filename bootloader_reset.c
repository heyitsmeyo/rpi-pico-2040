#include "pico/stdlib.h"
#include "pico/bootrom.h"

int main() {
    sleep_ms(5000);
    reset_usb_boot(0, 0);
    while (true) {
        tight_loop_contents();
    }
}

