//#include<stdio.h>
//extern int num;
//void fstatic(){
//	static int n=10;
//	n++;
//	printf("n=%d\n",n);
//}
//void main(){
//	fstatic();//n=11
//	fstatic();//n=12
//	printf("全局变量=%d",num);
//	getchar();
//}
/*
	static为静态变量，存储在静态区域
	此变量若非全局变量，则只能初始化一次，在此重复操作时
	是沿着上次的值进行操作
	若为全局变量，则只能运用在所定义的文件里
	普通全局变量则可以通过extern来调用不同文件里的全局变量
*/