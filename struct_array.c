// Array of struct 

#include <stdio.h>

//struct
struct student_name{
	int rollno;
	char name[20];
	float marks;
};
int main(){
	int size;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	int i=0;
	struct student_name a[size];
	for(i=0;i<size;i++){
		printf("Enter the rollnumber :");
		scanf("%d",&a[i].rollno);
		printf("Enter the name :");
		scanf("%s",&a[i].name);
		printf("Enter the marks :");
		scanf("%f",&a[i].marks);
	}
	for(i=0;i<size;i++){
		printf("The name of the student is %s whose roll no is %d and got marks of %f",a[i].name,a[i].rollno,a[i].marks);
	}
	
}
