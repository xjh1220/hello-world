//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。 
#include <stdio.h>
int main(){
	int x[5];
	int j,k,t,a,i;
	printf("Enter 5 numbers:");
	scanf("%d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4]);
	for(j=0;j<5;j++){
		for(k=j+1;k<5;k++){
			if(x[j]>x[k]){
				t=x[j];
				x[j]=x[k];
				x[k]=t;
			}
		}
	}
	a=x[0]+x[1]*10+x[2]*100+x[3]*1000+x[4]*10000;
	t=0;
	for(i=2;i<=a;i++){
		if(a/i==0){
			t++;
		}
		if(t==1){
			printf("%d",a);
	    }
	}
	if(t!=1){
			printf("ERROR");
		}
	return 0;
} 
