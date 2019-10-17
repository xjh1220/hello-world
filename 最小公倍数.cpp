#include<stdio.h>
int main() {
	int a,b,c,d;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	d=a*b;
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	d=d/a;
	printf("最小公倍数是%d",d);
	return 0;
} 
