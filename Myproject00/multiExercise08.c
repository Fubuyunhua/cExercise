/*
	题目：打印金字塔
	要求：打印一个指定层数和类型的金字塔
	指导意见：化繁为简、先死后活、要将题目拆解，一步一步完成完善
	分析：1.以星号为点，组成金字塔型的像素；
		  2.通过多重循环来实现；
		  3.先想直角三角形金字塔；
			1）要考虑行和列；
			2）用两个整型量来控制；
			3)先试试五行的直角金字塔；
		  4.在想实心对称金字塔；
			1）金字塔关于整体中线对称；
			2）选取一个合适的中线；
			3）每次小循环里的空格值和*号值不同；
*/

/*
****************************************
程序作用：打印指定行数的直角三角形金字塔
注意事项：再使用scanf时要注意接收输入\
时造成的垃圾输入回车符
****************************************
#include<stdio.h>
void main(){
	int i,j,z;
	printf("请输入所打印金字塔的行数\n");
	scanf("%d",&i);
	getchar();
	z=i;
	for(;i>0;i--){
		for(j=1;j<=(z+1-i);j++){
			printf("*");
		}
		printf("\n");
	}
	getchar();
}*/
/*
********************************
程序作用：输出一个每层为等差
数列的金字塔
********************************
#include<stdio.h>
void main(){
	int z;
	int i=0,j,k;
	printf("please intput 层数\n");
	scanf("%d",&z);
	getchar();
	for(i=1;i<=z;i++){
		for(k=z-i;k>0;k--){
			printf(" ");
		}
		for(j=1;j<=(i*2-1);j++){
			printf("*");
		}
		printf("\n");
	}
	getchar();
}*/
/**********************************
程序功能：打印空心金字塔
注意事项：走到这一步要循序渐进，将
要求一步一步的拆分
***********************************/
//#include<stdio.h>
//void main(){
//	int z;
//	int i=0,j,k;
//	printf("please intput 层数\n");
//	scanf("%d",&z);
//	getchar();
//	for(i=1;i<=z;i++){
//		for(k=z-i;k>0;k--){
//			printf(" ");//打印每行开始的空格
//		}
//		for(j=1;j<=(i*2-1);j++){//打印每行星星和空格需要的个数
//			if(((j==1)||(j==(2*i-1)))&&i!=z){//如果为第一个或者是最后一个且不是最后一行
//				printf("*");
//			}
//			else if(j!=(2*i-1)&&(i!=z)){//打印每行星星中间的空格
//				printf(" ");
//			}
//			else{//如果是最后一行
//				printf("*");//最后一行
//			}
//		}
//		printf("\n");
//	}
//	getchar();
//}
//#include<stdio.h>
//void main(){
//	int i,j,z=10;
//	for(i=1;i<=(z/2+1);i++){
//		for(j=(z/2+1-i);j>0;j--){
//			printf(" ");
//		}
//		for(j=1;j<=(2*i-1);j++){
//			if(((j==1)||(j==(2*i-1)))){
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//
//	}
//	for(i=1;i<=z/2;i++){
//		for(j=1;j<=i;j++){
//			printf(" ");
//		}
//		for(j=1;j<=2*(z/2)-1;j++){
//			if(j==1||j==(2*(z/2+1-i)-1)){
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//
//	}
//	getchar();
//}