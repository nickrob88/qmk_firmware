#include <stdio.h>
#include <stdbool.h>
#include "lily58.h"

char mode_icon_top[10];
char mode_icon_bottom[10];
static char logo[][2][3] = {{{0x95, 0x96, 0}, {0xb5, 0xb6, 0}}, {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}}};

const char *read_mode_icon_top(bool swap) {
  if (swap == false) {
    snprintf(mode_icon_top, sizeof(mode_icon_top), "%s ", logo[0][0]);
  } else {
    snprintf(mode_icon_top, sizeof(mode_icon_top), "%s ", logo[1][0]);
  }

  return mode_icon_top;
}

const char *read_mode_icon_bottom(bool swap) {
  if (swap == false) {
    snprintf(mode_icon_bottom, sizeof(mode_icon_bottom), "%s ", logo[0][1]);
  } else {
    snprintf(mode_icon_bottom, sizeof(mode_icon_bottom), "%s ", logo[1][1]);
  }

  return mode_icon_bottom;
}