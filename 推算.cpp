//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有
//_______个。
//编程：输入旅行社有72人
//     输入会英语48人
//     输入会俄语36人
//     输入两样都不会有8人
//     输出两样都会的有   人 
//     输出：输入数据错误，无法计算 
#include <stdio.h>
int main(){
	int a,b,c,d,x;
	printf("旅行社有多少人\n");
	scanf("%d",&a);
	printf("会英语多少人\n");
	scanf("%d",&b);
	printf("会俄语多少人\n");
	scanf("%d",&c);
	printf("两样都不会多少人\n");
	scanf("%d",&d);
	if(a<b||a<c||a<d){
		printf("error");
	}else{ 
	x=b+c+d-a;
	printf("两样都会%d人",x);
	}
	return 0;
} 
