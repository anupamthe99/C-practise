#include <stdio.h>
void pattern();
int main()
{
	pattern();
	return 0;
}
void pattern(){
	int i,j;
	for( i=1;i<=5;i+2){
		for( j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
}
