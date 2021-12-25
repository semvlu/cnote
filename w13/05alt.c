#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct address_t
{
    int a;
    int b;
    int c;
    int d;
    char n[11] ;
}addr;
addr scan_address(addr list);
int local_address(addr _1, addr _2);

int main()
{
    addr book[100];
    int cnt = 0;
    book[cnt] = scan_address(book[cnt]);
    while (cnt < 100 && book[cnt].a != 0 && book[cnt].b != 0 
    && book[cnt].c != 0 && book[cnt].d != 0 && book[cnt].n != "none")
    {
        cnt++;
        book[cnt] = scan_address(book[cnt]);
    }

    for (int i = 0; i <= cnt; i++)
    {
        for (int j = i + 1; j <= cnt; j++)
        {
            if (local_address(book[i], book[j]) == 1)
            {
                printf("Machines %s and %s are on the same local network.\n", book[i].n, book[j].n);
            }
        }
    }
}

addr scan_address(addr list)
{
    char d;
    scanf("%d%c %d%c %d%c %d%c %s%c", &list.a,&d,&list.b,&d,
    &list.c,&d,&list.d,&d,list.n,&d);
    return list;
}

int local_address(addr _1, addr _2)
{
    if (_1.a == _2.a && _1.b == _2.b)
        return 1;
    else
        return 0;
}