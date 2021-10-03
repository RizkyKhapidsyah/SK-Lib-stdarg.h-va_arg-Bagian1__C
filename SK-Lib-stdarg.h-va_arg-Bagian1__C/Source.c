#include <stdio.h>      /* printf */
#include <stdarg.h>     /* va_list, va_start, va_arg, va_end */
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int FindMax(int n, ...) {
    int i, val, largest;
    va_list vl;
    va_start(vl, n);
    
    largest = va_arg(vl, int);

    for (i = 1; i < n; i++) {
        val = va_arg(vl, int);
        largest = (largest > val) ? largest : val;
    }

    va_end(vl);
    return largest;
}

int main() {
    int m;
    m = FindMax(7, 702, 422, 631, 834, 892, 104, 772);
    printf("The largest value is: %d\n", m);
    _getch();
    return 0;
}