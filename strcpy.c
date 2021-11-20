#include <stdio.h>
#include <string.h>
int main(){
char name[20]="anupam chauhan";
char copyname[20];
strcpy(copyname,name);
puts(copyname);
return 0;
}