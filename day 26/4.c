#include<stdio.h>

int main(){
	
	char str[30],*pt;
	int i = 0;
	
	printf("Enter values :");

	
	gets(str);
	pt = str;
	
	while(*pt != '\0'){
	   i++;
	   pt++;

	}
	
	printf("Length of string :%d",i);
	
	
	return 0;
}
