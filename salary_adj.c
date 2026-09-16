#include <stdio.h>
#include <stdlib.h>


int main () {
    float wage;
    printf ("type your wage\n");
    scanf ("%f" , &wage);


    if (wage <= 1500) {
        printf ("new salary %.2f" , wage + (wage * 0.15));
    }else if (wage >= 1500.01 && wage <= 3000){
        printf("new salary %.2f" , wage + (wage * 0.10));
    }else {
    printf("new salary %.2f" , wage + (wage * 0.05));
    }

    result 0;
    }
