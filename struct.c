#include <Stdio.h>
struct student{
	int rollno;
	char name[20];
	float marks;
};
int main(){
	struct student a;
	printf("Enter the roll number :");
	scanf("%d",&a.rollno);
	printf("Enter the name :");
	scanf("%s",&a.name);
	printf("Enter the marks :");
	scanf("%f",&a.marks);
	printf("The rollno is %d.The name is %s and you got the marks of %f",a.rollno,a.name,a.marks);
}
