#include<stdio.h>
int main()
 {
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	while(b!=0)
	{
	    c=a%b;
		a=b;
		b=c;
	}
	if(a==1)
	{
		printf("yes");
	}else
	{
		printf("no");
	}
	return 0;
}
