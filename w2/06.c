#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1, y1, r1, x2, y2, r2, cx, cy, cd;
    scanf("%f %f %f %f %f %f", &x1, &y1, &r1, &x2, &y2, &r2);
    cx = fabsf(x2 - x1); 
    cy = fabsf(y2 - y1);
    cd =sqrt (cx * cx + cy * cy);

    if (cd <= (r1 - r2))
    {
        printf("Inside");
    }
    else if (cd <= (r1 + r2))
    {
        printf("Overlap");
    }
    else
    {
        printf("Not overlap");
    }
}