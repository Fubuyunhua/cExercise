//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	void check(int*);
//	int*p,i;
//	p=(int*)malloc(5*sizeof(int));//由于void与int不和，使用强制转换c99能将void自动转化
//	for(i=0;i<5;i++){
//		scanf("%d",p+i);
//	}
//	check(p);
//	free(p);//销毁p指向的地址
//	getchar();
//	getchar();
//	return 0;
//}
//void check(int*p){
//	int i;
//	printf("不及格的成绩有");
//	for(i=0;i<5;i++){
//		if(p[i]<60)printf("%d\n",p[i]);
//	}
//}
///*
//动态分配地址的函数malloc，为分配一个连续的空间，而由于
//每一个数据类型都占有固定空间可以写成malloc（n*sizeof（数据类型））
//*/