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
	printf("��С��������%d",d);
	return 0;
} 
