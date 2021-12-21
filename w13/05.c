#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct address_t
{
    int a;
    int b;
    int c;
    int d;
    char n[11];
}addr;
//scan_address();
int local_address(addr _1, addr _2);

int main()
{
    addr book[100];
    int cnt = 0;
    char list[27] = "";
    scanf("%s", list);
    while (list != "0.0.0.0 none")
    {
        int a, b, c, d;
        char *n;
        char *ptr = strtok(list, ". ");
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
                n = ptr;
                break;
            default:
                break;
            }
            ptr = strtok(NULL, ". ");
        }
        printf("%d %d %d %d\t %s", a, b, c, d, n);
        //book[cnt] = {a, b, c, d, n};
        cnt++;
        memset(list, 0, sizeof(list));
        scanf("%s", list);
    }
}

/*int local_address(addr _1, addr _2)
{
    if ()
        return 1;
    else
        return 0;
}*/