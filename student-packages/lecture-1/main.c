// Pico SDK libraries
#include "pico/stdlib.h"

#define LED_PIN 6
#define BLINK_DELAY_MS 500
#define BLINK_DELAY_MS2 1000


int main()
{
    // Initialize GPIO pins
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Infinite loop
    while (1)
    {

        gpio_put(LED_PIN, 1);
        sleep_ms(BLINK_DELAY_MS);

        
        gpio_put(LED_PIN, 0);
        sleep_ms(BLINK_DELAY_MS);

        gpio_put(LED_PIN, 1);
        sleep_ms(BLINK_DELAY_MS);

        
        gpio_put(LED_PIN, 0);
        sleep_ms(BLINK_DELAY_MS);

        gpio_put(LED_PIN, 1);
        sleep_ms(BLINK_DELAY_MS);

        
        gpio_put(LED_PIN, 0);
        sleep_ms(BLINK_DELAY_MS);

        gpio_put(LED_PIN, 1);
        sleep_ms(BLINK_DELAY_MS2);

        
        gpio_put(LED_PIN, 0);
        sleep_ms(BLINK_DELAY_MS2);

        gpio_put(LED_PIN, 1);
        sleep_ms(BLINK_DELAY_MS2);

        
        gpio_put(LED_PIN, 0);
        sleep_ms(BLINK_DELAY_MS2);

        gpio_put(LED_PIN, 1);
        sleep_ms(BLINK_DELAY_MS2);

        
        gpio_put(LED_PIN, 0);
        sleep_ms(BLINK_DELAY_MS2);

        gpio_put(LED_PIN, 1);
        sleep_ms(BLINK_DELAY_MS);

        
        gpio_put(LED_PIN, 0);
        sleep_ms(BLINK_DELAY_MS);

        gpio_put(LED_PIN, 1);
        sleep_ms(BLINK_DELAY_MS);

        
        gpio_put(LED_PIN, 0);
        sleep_ms(BLINK_DELAY_MS);

        gpio_put(LED_PIN, 1);
        sleep_ms(BLINK_DELAY_MS);

        
        gpio_put(LED_PIN, 0);
        sleep_ms(BLINK_DELAY_MS);

        sleep_ms(3000);
    }
    return 0;
}
