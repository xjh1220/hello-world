//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数
//求100~10000内的所有超级素数，及他们的平均数
#include <stdio.h>
int f(int x){
	int i,t=0,y;
	for(i=2;i<=x;i++){
		if(x/i==0){
			t++;
		}
		if(t==1){
			y=x;
		}else{
			y=0;
		}
	}
	return y;
}
int main(){
	int i,j,k,h=0;
	int x[5];
	int b=0;
	for(i=100;i<=100;i++){
		x[0]=i%10;
		x[1]=(i%100-x[0])/10;
		x[2]=(i-x[0]-x[1]*10)%1000;
		x[3]=(i-x[0]-x[1]*10-x[2]*100)%10000;
		x[4]=(i-x[0]-x[1]*10-x[2]*100-x[3]*1000)/10000;
		j=x[0]+x[1]+x[2]+x[3]+x[4];
		k=x[0]*x[0]+x[1]*x[1]+x[2]*x[2]+x[3]*x[3]+x[4]*x[4];
		if(i==f(i)&&j==f(j)&&k==f(k)){
			printf("%d",i);
			h=h+i;
			b++;
		}
	}
	printf("Averger is %d",h/b);
	return 0;
}
