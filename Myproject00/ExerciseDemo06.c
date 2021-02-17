///*
//目的：写一个代码，比如老公所带现金为一万元，老婆购物一次花费一千元，当老公的金额小于等于两千时停止购物。
//但老婆每次购物都会询问老公，是否能够继续购物，当老公回答y时可以n结束。
//分析：1.需要一个变量储存金额、一个储存回答量；
//      2.需要对回答进行比较，运用到sting头文件和strcmp函数；
//	  3.运用do while循环
//*/
//#include<stdio.h>
//#include<string.h>
//void main(){
//	double sum=10000.0;
//	char answer[10]="y";
//	do{
//		sum-=1000.0;
//		printf("\n能否继续购物？\n");
//		scanf("%c",answer);
//		//getchar();
//	}while((sum>2000.0)&&(strcmp("y",answer)==0));
//	getchar();
//	printf("lest go home");
//	getchar();
//}
///*
//如果将scanf后的getchar去掉，那么只能执行两次，因为缓存区保留着第一次的换行符，第二次将其输入到第二次的scanf\
//中，随后结束循环，直接处于第一个gethcar（后）语句中，这是输入的字符加回车会直接结束程序（‘’+\n）
//总结：scang和getchar一样都是从缓存区读取一次数据，读完一次后这条语句就不会再作用了
//
//*/