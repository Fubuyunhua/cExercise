#include<stdio.h>
/*
쳲��������У�1��1��2��3��5��8����
���ʣ��ӵ�������ʼÿһ����ֵΪǰ����֮��
������1.���õݹ麯����
	  2.�����������Ŵ���2ʱ���ݹ飻
	  3.�����������С�ڵ���2ʱ��ֵΪ1��
	  4.��ʽ������һ��n��
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
	printf("��%d����ֵ��%d",n,res);
	getchar();
	getchar();
}