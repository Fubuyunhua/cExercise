//#include<stdio.h>
//struct Dog{
//	char* name;
//	int age;
//	char* color;
//};
//char *say(struct Dog dog){
//	static char into[10];//����Ҫ����������ֵ����ȥ��������static
//	sprintf(into,"%s%d%s",dog.name,dog.age,dog.color);//���ṹ��������ݴ�ӡ���ַ�����
//	return into;
//}
//void main(){
//
//	struct Dog dog;
//	char *into=NULL;
//	dog.name="С��";
//	dog.age=2;
//	dog.color="black";
//	into=say(dog);
//	printf("\nС����%s",into);
//	getchar();
//
//}