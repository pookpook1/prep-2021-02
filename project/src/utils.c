#include <stdio.h>

size_t timer_from(unsigned char from) {
    size_t counter = 0;
    for (int i = from; i >= 0; --i) {
        counter++;
        printf("%d",i);
    }
    return counter;
}
