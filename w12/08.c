#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *art[5]={"the","a","one","some","any"};
	char *n[5]={"boy","girl","dog","town","car"};
	char *v[5]={"drove","jumped","ran","walked","skipped"};
	char *prep[5]={"to","from","over","under","on"};
	for(int i = 0;i < 20; i++)
    {
		int ra = rand() % 5;
		int ra1 = rand() % 5;
		int rn = rand() % 5;
		int rn1 = rand() % 5;
		int rv = rand() % 5;
		int rp = rand () % 5;
		if(art[ra] == "the")
        {
			printf("%s %s %s %s %s %s.\n","The",n[rn],v[rv],prep[rp],art[ra1],n[rn1]);
		}
		else if(art[ra] == "any")
        {
			printf("%s %s %s %s %s %s.\n","Any",n[rn],v[rv],prep[rp],art[ra1],n[rn1]);
		}
		else if(art[ra] == "a")
        {
			printf("%s %s %s %s %s %s.\n","A",n[rn],v[rv],prep[rp],art[ra1],n[rn1]);
		}
		else if(art[ra] == "one")
        {
			printf("%s %s %s %s %s %s.\n","One",n[rn],v[rv],prep[rp],art[ra1],n[rn1]);
		}
		else
        {
			printf("%s %s %s %s %s %s.\n","Some",n[rn],v[rv],prep[rp],art[ra1],n[rn1]);
		}
	}
}