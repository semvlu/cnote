#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct fraction
{
    int num;
    int denom;
};
void reduce(struct fraction f, struct fraction * reduced_f);

int main()
{
    char f[300];
    char *fPtr;
    scanf("%s", f);
    long _num = strtol(f, &fPtr, 10);
    fPtr = strtok(f, "/");
    fPtr = strtok(NULL, "/");
    long _denom = strtol(fPtr, &fPtr, 10);
    struct fraction a = {_num, _denom};
    struct fraction *_a = &a;
    reduce(a, _a);
}

void reduce(struct fraction f, struct fraction * reduced_f)
{
    // GCD
    int gcd;
    for (int i = 1; i <= f.num && i <= f.denom; i++)
    {
        if(f.num % i == 0 && f.denom % i == 0)
            gcd = i;
    }
    f.num /= gcd;
    f.denom /= gcd;
    printf("%d/%d\n", f.num, f.denom);
}