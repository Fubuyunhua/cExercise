//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	void check(int*);
//	int*p,i;
//	p=(int*)malloc(5*sizeof(int));//����void��int���ͣ�ʹ��ǿ��ת��c99�ܽ�void�Զ�ת��
//	for(i=0;i<5;i++){
//		scanf("%d",p+i);
//	}
//	check(p);
//	free(p);//����pָ��ĵ�ַ
//	getchar();
//	getchar();
//	return 0;
//}
//void check(int*p){
//	int i;
//	printf("������ĳɼ���");
//	for(i=0;i<5;i++){
//		if(p[i]<60)printf("%d\n",p[i]);
//	}
//}
///*
//��̬�����ַ�ĺ���malloc��Ϊ����һ�������Ŀռ䣬������
//ÿһ���������Ͷ�ռ�й̶��ռ����д��malloc��n*sizeof���������ͣ���
//*/