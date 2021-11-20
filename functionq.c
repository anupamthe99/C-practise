#include <stdio.h>
int add(int,int);
int main(){
    int a,b;
printf("Enter a number :");
scanf("%d",&a);
printf("Enter a number :");
scanf("%d",&b);
printf("Sum %d",add(a,b));
return 0;
}
int add(int x,int y){
    int c;
    c=x+y;
    return c;
}