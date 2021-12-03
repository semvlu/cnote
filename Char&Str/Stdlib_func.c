#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *test = "67 students";
    char *testPtr;
    double d = strtod(test, &testPtr); // convert str to double
    printf("%f ", d);

    char *b = "959 A3B";
    char *bPtr;
    long b1 = strtol(b, &bPtr, 10); // convert string to long
    long b2 = strtol(bPtr, &bPtr, 16);
    printf("%ld %ld",b1, b2);
}