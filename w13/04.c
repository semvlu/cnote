#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct sci_not_t
{
    // manti * 10^(exp) = (manti)e(exp)
    double m;
    int e;
}sci;
sci scan_sci(char c[200]);
double sum(sci a, sci b);
double diff(sci a, sci b);
double prod(sci a, sci b);
double quo(sci a, sci b);
sci print_sci(double j);

int main()
{
    char a[200];
    char b[200];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    sci _a = scan_sci(a);
    sci _b = scan_sci(b);

    double s = sum(_a, _b);
    double d = diff(_a, _b); 
    double p = prod(_a, _b);
    double q = quo(_a, _b); 

    sci SUM = print_sci(s);
    sci DIFF = print_sci(d);
    sci PROD = print_sci(p);
    sci QUO = print_sci(q);

    printf("%.5lfe%d\n", SUM.m, SUM.e);
    printf("%.5lfe%d\n", DIFF.m, DIFF.e);
    printf("%.5lfe%d\n", PROD.m, PROD.e);
    printf("%.5lfe%d\n", QUO.m, QUO.e);
}

sci print_sci(double j) // scan_sci^{-1}, but have double, char 'e' & int
{
    int e;
    for (int i = -30; i < 30; i++)
    {
        if ( (j >= pow(10, i)) && (j <= pow(10, i+1)) )
        {
            e = i + 1;
            break;
        } 
    }
    double m = j / pow(10,e);
    sci final = {m, e};
    return final;
}

double sum(sci a, sci b)
{
    double s = (a.m) * pow(10,a.e) + (b.m) * pow(10,b.e);
    return s;
}

double diff(sci a, sci b)
{
    double d = (a.m) * pow(10,a.e) - (b.m) * pow(10,b.e);
    return d;
}

double prod(sci a, sci b)
{
    double p = (a.m) * pow(10,a.e) * (b.m) * pow(10,b.e);
    return p;
}

double quo(sci a, sci b)
{
    double q = (a.m) * pow(10,a.e) / (b.m) * pow(10,b.e);
    return q;
}

sci scan_sci(char c[200])
{
    char *cPtr;
    cPtr = strtok(c, "e");
    cPtr = strtok(NULL, "e");
    int exp = strtol(cPtr, &cPtr, 10);
    double manti = atof(c);
    sci S = {manti, exp};
    return S;
}