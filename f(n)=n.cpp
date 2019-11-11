//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//求f(n)=n的最小n的值
#include <stdio.h>
int main(){
	int n,i,j=10,t=1,x;
	while(1){
		n=0;
		n=n+1;
		while(n/j!=0){
			int a,b,c;
			a=n-(n/j)*j;
			b=n/j;
			c=n/(j*10);
			j=j*10;
			if(b==1){
				x=b+1+a;
			}else{
				if(b==0){
					x=1;
				}else{
					if(a==1){
						x=(a+1)*10+1;
					}else{
						x=(c+1)*10+2;
					}
				}
			}
		}
	if(n==x){
		break;
	}
}
	printf("%d",x);
	return 0;
}
