#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "soup.h"
#include "pug.h"

int main() {
    //some variables stuff
    srand(time(NULL));
    char letters[] = "qwertyuiopasdfghjklzxcvbnm";
    float number = 67;
    char word[] = "okak";
    float sas = 1.0f;
    float sas1 = 1.0f;
    float res1 = 0.0f;
    float res2 = 0.0f;
    bool run = true;
    float S1;
    char S2[64] = "";
    int steps = 0;
    //the real BAD code
    while (run) {
        steps++;
        S1 = stage1(sas, sas1, number, &res1, &res2);
        stage2(letters, word, S2);
        if (S1 == 2) {
            sas = res1;
            sas1 = res2;
        } else if (S1 == 1) {
            sas = res1;
            printf("okak %f\n", sas);
            run = false;
        }
        if (strcmp(S2, word) == 0) {
            printf("%s %.2f\n", S2, sas);
            run = false;
        }
    }
    return(0);
}
