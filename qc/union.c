#include<stdio.h>
union student
{
	int num;
	char name[10];
};
int main()
{
	union student stu;
	scanf("%d %s",&stu.num,stu.name);
	printf("%d\n%s\n",stu.num,stu.name);
	printf("%p\n",&stu.num);
	printf("%p\n",stu.name);
}
