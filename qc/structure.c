#include<stdio.h>
struct student
{
	int num;
	char name[10];
};
int main()
{
	struct student stu={123,"krishna"};
	printf("%d\n%s\n",stu.num,stu.name);
	printf("%p\n",&stu.num);
	printf("%p\n",stu.name);
	
}
