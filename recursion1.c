#include <stdio.h>
//function declare
int factorial(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("The factorial of the %d is %d",n, factorial(n)); //fucntion call
    return 0;
}
// fucntion define
int factorial(int a)
{
    if(a==1){
        return 1;
    }
    else{
        return a *factorial(a-1);
    }
}