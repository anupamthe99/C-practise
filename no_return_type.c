#include <stdio.h>
void add(int,int);
int main(){
    int a,b;
printf("Enter a number :");
scanf("%d",&a);
printf("Enter a number :");
scanf("%d",&b);
add(a,b);
return 0;
}
void add(int x,int y){
    int c;
    c=x+y;
printf("Sum %d",c);
    
}