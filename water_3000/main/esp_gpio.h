#ifndef ESP_GPIO_H
#define ESP_GPIO_H

namespace ESP_GPIO
{
    class ESP_GPIO
    {
        public:
            void set_gpio_out(int pin, int level);
            int get_gpio(int pin);
    };
}
#endif