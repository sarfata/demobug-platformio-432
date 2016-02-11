#include "FakeDisplay.h"
#include <font_Nunito.h>

void print_hello_world() {
  // Some fake computation to see if the font is available
  if (Nunito_20.data[0] > 0)
    return;

  return;
}
