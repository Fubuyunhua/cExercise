///*
//要求：设计一个账号输入程序，有三次机会，输入账号为张无忌、888即可登陆；
//分析：需要一个计次数的变量；
//	 一个账号名、一个密码、一个剩余次数
//*/
//#include<stdio.h>
//#include<string.h>
//void main(){
//	int chance=3;
//	char name[20]="";
//	char password[20]="";
//	for(;chance>0;chance--){
//		printf("请输入账号名\n");
//		scanf("%s",name);
//		printf("请输入密码\n");
//		scanf("%s",password);
//		if((strcmp("张无忌",name)==0)&&(strcmp("888",password)==0)){
//			printf("登陆成功\n");
//			break;
//		}
//		printf("还有%d次机会",(chance-1));
//
//	}
//	getchar();
//	getchar();
//}
///*
//	要注意数组的长度，输入数据不能越界，否则会报错
//	**************
//	run time check failure #2  ……around"***"currupted
//*/