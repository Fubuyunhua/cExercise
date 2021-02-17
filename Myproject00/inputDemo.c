//#include<stdio.h>
//void main(){
//	char name[20]="";
//	int age=20;
//	double saraly=0.0;
//	char genda=' ';
//	printf("please input your name:\n");
//	scanf("%s",name);
//	printf("please input your age:\n");
//	scanf("%d",&age);
//	printf("please input your saraly:\n");
//	scanf("%lf",&saraly);
//	//getchar();
//	printf("please input your genda:\n");
//	getchar();
//	//scanf("%c",&genda);//genda收到的是上条语句的回车符，里面无内容
//	scanf("%c",&genda);//等待用户数据
//	printf("\nname:%s \nage:%d \nsalary:%.2f \ngenda:%c",name,age,saraly,genda);
//	printf("ceshi");
//	getchar();//接收回车
//	getchar();//让控制台暂停
//}
///*
//	问题：由于在接收字符数据时，在上一条语句输入的回车也算是输入的字符，因此，会导致直接跳到最后的阶段
//	getchar();只有紧跟着接收语句才能接收到才有用
//	要注意到字符接收中的回车也是字符
//	也可以用getchar（）；接收缓存区的换行符
//*/