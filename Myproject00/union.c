//#include<stdio.h>
//union MyUnion{//���ڴ�Ŀռ���ȡ���������Ǹ���Ա
//	float score;
//	char course[10];
//};
//struct person{
//	char name[20];
//	int num;
//	char sex;
//	char profession;
//	union{
//		float score;
//		char course[10];
//	}sc;
//};
//void main(){
//	int i;
//	struct person persons[2];
//	for(i=0;i<2;i++){
//		printf("�����������༶�š��Ա�ְҵ\n");
//		scanf("%s %d %c %c",persons[i].name,&(persons[i].num),&(persons[i].sex),&(persons[i].profession));
//		if(persons[i].profession=='s'){
//			printf("ѧ������ɼ�\n");
//			scanf("%f",&(persons[i].sc.score));
//		}
//		else {
//			printf("��ʦ����γ�\n");
//			scanf("%s",&(persons[i].sc.course));
//		}
//		fflush(stdin);
//	}
//	for(i=0;i<2;i++){
//		if(persons[i].profession=='s')
//			printf("%s %d %c %c %f\n",persons[i].name,persons[i].num,persons[i].sex,persons[i].profession,persons[i].sc.score);
//		else {
//			printf("%s %d %c %c %s\n",persons[i].name,persons[i].num,persons[i].sex,persons[i].profession,persons[i].sc.course);
//			}
//	}
//	getchar();
//	getchar();
//}