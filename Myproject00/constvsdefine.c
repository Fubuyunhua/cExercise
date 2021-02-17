//#include<stdio.h>
//#define A 1
//#define B A+1
//#define C A/B*3//C的值为1/1+1*3=4
//#define pi 3.14
//#undef pi    //取消定义
//#define pi 3.1415  //对pi进行重新定义
//const double Pi = 3.14;
//void main(){
//	printf("C=%d",C);
//	getchar();
//}
///*
//总结：
//1.当#define中的值无小数点时，默认其为整型；
//2.当#define中的值有小数点时，其为浮点型；
//3.#define定义的值并不是按一个整体来的如1+2！=（1+2）注：会出现边界效应（即非同整体而是分下来的）；
//4.define可以配合#ifdef、#ifndef、#endif使代码更加灵活；
//5.const不可以重新定义，而define可以通过#undef；
//*/