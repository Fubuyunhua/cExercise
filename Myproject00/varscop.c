//#include<stdio.h>
//int price=200;
//void f1(){
//	printf("\nprice=%d",price);//局部可以直接访问寻找外部变量
//}
//void f2(){
//	price=250;
//	printf("\nprice=%d",price);
//}
//void f3(){
//	int price=125;//局部变量可以和全局变量重名，运行时，就近以局部变量为准
//	printf("scope price =%d\n",price);
//}
//void f4(int n){//形参
//	printf("variable=%d\n",n);
//}
//void main(){
//	f1();
//	f2();
//	f3();
//	f4(5);
//	f1();
//	getchar();
//}