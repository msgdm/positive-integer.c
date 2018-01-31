#include<stdio.h>
main()
{
	int a,b,c=0;
	printf("enter the number\n");
	scanf("%d",&b);
	for(a=1;a<=b;++a)
	c+=a;
	printf("%d",c);
}
