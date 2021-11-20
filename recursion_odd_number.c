#include <stdio.h>
// fuction declare
int sum_of_odd(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n); 
    printf("The sum of odd number upto %d is %d", n, sum_of_odd(n));//Function call
    return 0;
}
// function defination
int sum_of_odd(int n){
    //recursive function syntax:
    if(n%2==0){
        n=n-1
    }
    else{

    }
}
5