//#include<stdio.h>
//void main(){
//	int num;
//	int count0;
//	int count=2147483648;//resoult is -2147483648
//	long long count1=4147483648;
//	long count2=214568;//与int的字节数相同
//	num=sizeof(int);//得到int的字节数
//	count0=-2147483649;//resoult is 2147483647
//	printf("int's Byte=%d\ncount=%d\ncount0=%d",num,count,count0);
//	printf("count1=%lld\ncount2=%ld",count1,count2);
//	getchar();
//}
///*the range of int is -2147483648 to 2147483647
//variable 就如同一个圆一般（补码），一旦超过就会如时钟一样从头或从末开始 
//2021-02-01 14:42:16*/