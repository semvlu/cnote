#include <stdio.h>
typedef union num
{
    int x;
    double y;
}n;
// union is a derived data type that
// its mem share the same storage space
int main()
{
    n value;
    value.x = 50;
    printf("%d, %lf\n", value.x, value.y);
    value.y = 100.0;
    printf("%d, %lf\n", value.x, value.y);

}