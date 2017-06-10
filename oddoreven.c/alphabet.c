#include<stdio.h>
int main()
{
char ab;
scanf("%c",&ab);
if(ab >= 'a' && ab <= 'z')
{
	printf("alphabet");
}
else
{
	printf("not a alphabet");
}
return 0;
}
