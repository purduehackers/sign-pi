#include <pico/stdlib.h>
#include <pico/cyw43_arch.h>
#include <hardware/pwm.h>

const size_t BLOCK_1_BLUE = 0;
const size_t BLOCK_1_GREEN = 1;
const size_t BLOCK_1_RED = 2;
const size_t BLOCK_2_BLUE = 3;
const size_t BLOCK_2_GREEN = 4;
const size_t BLOCK_2_RED = 5;
const size_t BLOCK_3_BLUE = 6;
const size_t BLOCK_3_GREEN = 7;
const size_t BLOCK_3_RED = 8;
const size_t BLOCK_4_BLUE = 9;
const size_t BLOCK_4_GREEN = 10;
const size_t BLOCK_4_RED = 11;
const size_t BLOCK_5_BLUE = 12;
const size_t BLOCK_5_GREEN = 13;
const size_t BLOCK_5_RED = 14;

/*
LAYOUT: (TOP)
    4
5       3
  2   1
(BOTTOM)
*/

void init_pwm() {
    for (size_t i = 0; i < 15; i++) {
        gpio_set_function(i, GPIO_FUNC_PWM);
    }

    for (size_t i = 0; i < 8; i++) {
        pwm_set_wrap(i, 255);
        pwm_set_enabled(i, true);
    }
}

void configure_pwm(size_t gpio) {
    size_t slice = pwm_gpio_to_slice_num(gpio);

    pwm_set_wrap(slice, 255);

    pwm_set_enabled(slice, true);
}

int main() {
    stdio_init_all();

    if (cyw43_arch_init()) {
        printf("Wi-Fi init failed");
        return -1;
    }

    init_pwm();

    while (true) {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        pwm_set_gpio_level(BLOCK_1_BLUE, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_1_GREEN, 0);
        pwm_set_gpio_level(BLOCK_1_RED, 0);
        pwm_set_gpio_level(BLOCK_2_BLUE, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_2_GREEN, 0);
        pwm_set_gpio_level(BLOCK_2_RED, 0);
        pwm_set_gpio_level(BLOCK_3_BLUE, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_3_GREEN, 0);
        pwm_set_gpio_level(BLOCK_3_RED, 0);
        pwm_set_gpio_level(BLOCK_4_BLUE, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_4_GREEN, 0);
        pwm_set_gpio_level(BLOCK_4_RED, 0);
        pwm_set_gpio_level(BLOCK_5_BLUE, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_5_GREEN, 0);
        pwm_set_gpio_level(BLOCK_5_RED, 0);
        sleep_ms(500);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        pwm_set_gpio_level(BLOCK_1_GREEN, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_1_RED, 0);
        pwm_set_gpio_level(BLOCK_1_BLUE, 0);
        pwm_set_gpio_level(BLOCK_2_GREEN, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_2_RED, 0);
        pwm_set_gpio_level(BLOCK_2_BLUE, 0);
        pwm_set_gpio_level(BLOCK_3_GREEN, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_3_RED, 0);
        pwm_set_gpio_level(BLOCK_3_BLUE, 0);
        pwm_set_gpio_level(BLOCK_4_GREEN, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_4_RED, 0);
        pwm_set_gpio_level(BLOCK_4_BLUE, 0);
        pwm_set_gpio_level(BLOCK_5_GREEN, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_5_RED, 0);
        pwm_set_gpio_level(BLOCK_5_BLUE, 0);
        sleep_ms(500);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        pwm_set_gpio_level(BLOCK_1_RED, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_1_BLUE, 0);
        pwm_set_gpio_level(BLOCK_1_GREEN, 0);
        pwm_set_gpio_level(BLOCK_2_RED, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_2_BLUE, 0);
        pwm_set_gpio_level(BLOCK_2_GREEN, 0);
        pwm_set_gpio_level(BLOCK_3_RED, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_3_BLUE, 0);
        pwm_set_gpio_level(BLOCK_3_GREEN, 0);
        pwm_set_gpio_level(BLOCK_4_RED, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_4_BLUE, 0);
        pwm_set_gpio_level(BLOCK_4_GREEN, 0);
        pwm_set_gpio_level(BLOCK_5_RED, (255 * 3) / 4);
        pwm_set_gpio_level(BLOCK_5_BLUE, 0);
        pwm_set_gpio_level(BLOCK_5_GREEN, 0);
        sleep_ms(500);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        pwm_set_gpio_level(BLOCK_1_RED, 255 / 2);
        pwm_set_gpio_level(BLOCK_1_BLUE, 255 / 2);
        pwm_set_gpio_level(BLOCK_1_GREEN, 255 / 2);
        pwm_set_gpio_level(BLOCK_2_RED, 255 / 2);
        pwm_set_gpio_level(BLOCK_2_BLUE, 255 / 2);
        pwm_set_gpio_level(BLOCK_2_GREEN, 255 / 2);
        pwm_set_gpio_level(BLOCK_3_RED, 255 / 2);
        pwm_set_gpio_level(BLOCK_3_BLUE, 255 / 2);
        pwm_set_gpio_level(BLOCK_3_GREEN, 255 / 2);
        pwm_set_gpio_level(BLOCK_4_RED, 255 / 2);
        pwm_set_gpio_level(BLOCK_4_BLUE, 255 / 2);
        pwm_set_gpio_level(BLOCK_4_GREEN, 255 / 2);
        pwm_set_gpio_level(BLOCK_5_RED, 255 / 2);
        pwm_set_gpio_level(BLOCK_5_BLUE, 255 / 2);
        pwm_set_gpio_level(BLOCK_5_GREEN, 255 / 2);
        sleep_ms(500);
    }
}