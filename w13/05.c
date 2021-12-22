#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// don't know how to extract the name
typedef struct address_t
{
    int a;
    int b;
    int c;
    int d;
    char n[11];
}addr;
addr scan_address(char z[27]);
int local_address(addr _1, addr _2);

int main()
{
    addr book[100];
    int cnt = 0;
    char list[27] = "";
    fgets(list, sizeof(list), stdin);
    while (list != "0.0.0.0 none" || cnt < 100)
    {
        printf("cnt:%d list:%s\n",cnt,list);
        book[cnt] = scan_address(list);
        cnt++;
        printf("%d %d %d %d\t %s\n",book[0].a,book[0].b,book[0].c,book[0].d,book[0].n);
        memset(list, 0, sizeof(list));
        fgets(list, sizeof(list), stdin);
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (local_address(book[j], book[i]) == 1)
            {
                printf("Machines %s and %s are on the same local network.", book[j].n, book[i].n);
            }
        }
    }
}

addr scan_address(char z[27])
{
    int a, b, c, d;
    char n[11] = "";
    char *ptr = strtok(z, ". ");
    int wcnt = 0;
    while (ptr != NULL)
    {
        switch (wcnt)
        {
        case 0:
            a = strtol(ptr, &ptr, 10);
            wcnt++;
            break;
        case 1:
            b = strtol(ptr, &ptr, 10); 
            wcnt++;
            break;
        case 2:
            c = strtol(ptr, &ptr, 10); 
            wcnt++;
            break;
        case 3:
            d = strtol(ptr, &ptr, 10);
            wcnt++;
            break;
        case 4:
            strcat(n, ptr);
            break;
        default:
            break;
        }
        ptr = strtok(NULL, ". ");
    }
    addr p = {a, b, c, d, n};
    return p;
}

int local_address(addr _1, addr _2)
{
    if (_1.a == _2.a && _1.b == _2.b)
        return 1;
    else
        return 0;
}
