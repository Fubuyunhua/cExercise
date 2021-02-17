//#include<stdio.h>
//struct Dog{
//	char* name;
//	int age;
//	char* color;
//};
//char *say(struct Dog dog){
//	static char into[10];//由于要将本函数的值传出去，所以用static
//	sprintf(into,"%s%d%s",dog.name,dog.age,dog.color);//将结构体里的内容打印到字符串中
//	return into;
//}
//void main(){
//
//	struct Dog dog;
//	char *into=NULL;
//	dog.name="小黑";
//	dog.age=2;
//	dog.color="black";
//	into=say(dog);
//	printf("\n小狗：%s",into);
//	getchar();
//
//}