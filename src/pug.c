#include <stdlib.h>
#include "pug.h"

float obska(float a, float b, int t) {
    if (t == 2) {
        return(a + (b * a));
    } else {
        if (a == 0) {
            a = 0.001;
        }
        return(a - (b / a));
    }
}
