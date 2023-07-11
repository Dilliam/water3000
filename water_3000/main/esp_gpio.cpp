#include "esp_gpio.h"
#include "driver/gpio.h"

void set_gpio_out(int pin, int level)
{
    gpio_reset_pin(pin);
    gpio_set_direction(pin,GPIO_MODE_OUTPUT);
    gpio_set_level(pin,level);
}