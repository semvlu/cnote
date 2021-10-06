#include <stdio.h>
int main()
{
    int in, out, fir, firr, sec, secr, trd, trdr, four, fif;
    scanf("%d", &in);
    fir = in / 10000;
    firr = in % 10000;
    sec = firr/ 1000;
    secr = firr % 1000;
    trd = secr / 100;
    trdr = secr % 100;
    four = trdr / 10;
    fif = trdr % 10;
    out = fir + sec + trd + four + fif; 
    printf("%d", out);
}