#include <stdio.h>
#include <math.h>
#include <string.h>
#include "pug.h"
#include "soup.h"

int tr = 0;

int stage1(float a, float b, float c, float *oa, float *ob) {
    if (a != c) {
        if (a > c) {
            a = roundf(obska(c, b, 0));
        } else {
            a = roundf(obska(c, b, 2));
        }
        *oa = a;
        *ob = b;
        return 2;
    } else {
        *oa = a;
        return 1;
    }
}

void stage2(const char *l, const char *i, char *output) {
    int len_i = strlen(i);
    if (tr >= len_i) {
        strcpy(output, i);
        return;
    }
    
    int len_l = strlen(l);
    for (int q = 0; q < len_l; q++) {
        if (l[q] == i[tr]) {
            tr++;
            break;
        }
    }
    strncpy(output, i, tr);
    output[tr] = '\0';
}
