//#include<stdio.h>
//void main(){
//	//浮点型默认为double类型
//	float num00 = 1.1;//实际上为double类型但从第六位截断 
//	float num01 = 1.2f;//为float类型
//	double num03 = 1.3;
//	double d1 = 5.12;
//	double d2 = .512;//=0.512
//	double d3 = 5.12e2;//=5.12*10^2
//	double d4 = 5.112e-2;//=5.12*10^(-2)
//	printf("\nnum00=%f\nnum01=%f\nnum03=%f\nd1=%f\td2=%f\td3=%f\nd4=%f",num00,num01,num03,d1,d2,d3);
//	getchar();
//}
///*
//result:
//
//num00=1.100000
//num01=1.200000
//num03=1.300000
//d1=5.120000     d2=0.512000     d3=512.000000
//d4=0.000000
//*/
//#include<stdio.h>
//void main(){
//	//浮点型默认为double类型
//	float num00 = 1.103461346413;//实际上为double类型但从第六位截断 (double最多15位）
//	float num01 = 1.2f;//为float类型
//	double num03 = 1.3;
//	double d1 = 5.12;
//	double d2 = .512;//=0.512
//	double d3 = 5.12E2;//=5.12*10^2
//	double d4 = 5.112E-2;//=5.12*10^(-2)
//	printf("\nnum00=%.12f\nnum01=%f\nnum03=%f\nd1=%f\td2=%f\td3=%f\nd4=%f",num00,num01,num03,d1,d2,d3);
//	getchar();
//}
///*
//num00=1.103461384773
//num01=1.200000
//num03=1.300000
//d1=5.120000     d2=0.512000     d3=512.000000
//d4=0.000000
//由于num00位float当满足所需的小数位后的值为无用值，若用double则会自动补零
//
//2021-02-01 15:03:39
//
//*/