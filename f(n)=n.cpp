//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//��f(n)=n����Сn��ֵ
#include <stdio.h>
int main(){
	int n,i,j=10,t=1,x;
	while(1){
	for(i=0;i<=n;i++){
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
	}
	if(n==x){
		break;
	}
}
	printf("%d",x);
	return 0;
}
