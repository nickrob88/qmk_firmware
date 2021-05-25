#include <stdio.h>
#include "led.h"
#include "host.h"
#include "lily58.h"

char host_led_state_str[24];

const char *read_host_led_state(void)
{
  snprintf(host_led_state_str, sizeof(host_led_state_str), "%s %s %s",
           (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)) ? "CAPS" : " ",
           (IS_HOST_LED_ON(USB_LED_NUM_LOCK)) ? "NUM" : " ",
           (IS_HOST_LED_ON(USB_LED_SCROLL_LOCK)) ? "SCROLL" : " ");

  return host_led_state_str;
}
