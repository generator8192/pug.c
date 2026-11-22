#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pug.h"

int main() {
    srand(time(NULL))
    float okak = obska(4, 2, 2);
    printf("okak: %f\n", okak);
    return(0);
}
