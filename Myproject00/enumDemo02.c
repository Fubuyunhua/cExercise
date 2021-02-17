//#include<stdio.h>
//void main(){
//	enum DAY{Mon=1,Tus,Wes,Thr,Fri,Sta,Sun//定义枚举量里的内容，当只给出局部的值时会自动加一补完
//	}day;//相当于enum DAY day;定义完DAY这个数据类型后又定义了一个此类型的变量
//	for(day=Mon;day<=Sun;day++){
//		printf("枚举值%d\n",day);
//	}
//	getchar();
//}
///*
//	可以见得，在枚举类型中，先是定义一个枚举类型的数据类型，然后，再定义一个此类型的
//	变量。此时，可以把这个变量看作一个普通的变量名，而赋值时只要将枚举的量付给他就行了
//*/