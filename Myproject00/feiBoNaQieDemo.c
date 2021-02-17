#include<stdio.h>
/*
斐波那契数列：1，1，2，3，5，8……
性质：从第三个开始每一个的值为前两项之和
分析：1.采用递归函数；
	  2.当所求项的序号大于2时，递归；
	  3.当所求项序号小于等于2时，值为1；
	  4.形式参数有一个n；
	  5.
*/
int FeBo(int n){
	if(n>2){
		return	FeBo(n-1)+FeBo(n-2);
	}
	else{
		return 1;
	}
}
void main(){
	int n=1;
	int res=1;
	printf("");
	scanf("%d",&n);
	res=FeBo(n);
	printf("第%d个的值：%d",n,res);
	getchar();
	getchar();
}