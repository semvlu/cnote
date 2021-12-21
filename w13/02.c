#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Complex
{
    double re;
    double im;
}comp;
comp add_complex(comp a, comp b);
char c1[70]= "", *c1Ptr, c2[70]= "", *c2Ptr;

int main()
{

    fgets(c1, sizeof(c1), stdin);
    fgets(c2, sizeof(c2), stdin);
    double c1_re = strtod(c1, &c1Ptr);
    double c1_im = strtod(c1Ptr, &c1Ptr);

    double c2_re = strtod(c2, &c2Ptr);
    double c2_im = strtod(c2Ptr, &c2Ptr);
    comp _c1 = {c1_re, c1_im};
    comp _c2 = {c2_re, c2_im};
    comp sum = add_complex(_c1, _c2);
    printf("%.1lf+%.1lfi", sum.re, sum.im);
}

comp add_complex(comp a, comp b)
{
    comp c;
    c.re = a.re + b.re;
    c.im = a.im +b.im;
    return c;
}