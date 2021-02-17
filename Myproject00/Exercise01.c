//#include<stdio.h>
//#include<stdlib.h>
//void main(){
//	unsigned char a,b,c,d,e,H=0x00,ara[8];
//	unsigned char i,j,temp=0x05;
//	a='\n';
//	b='\t';
//	c='\r';
//	d='\\';
//	e='1';
//	for(i=0;i<8;i++){
//		j=temp>>7;
//		ara[i]=temp>>7;
//		temp<<=1;
//	}
//	printf("%c%c%c%c%c\n%#x\n%#x",a,b,c,d,e,temp,j);
//	for(i=0;i<8;i++){
//		printf("\n%d",ara[i]);
//		H<<=1;
//		H|=ara[i];
//	}
//	printf("\nH=%#x",H);
//	system("pause");
//
//}