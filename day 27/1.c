#include<stdio.h>


void swap (int*n1, int*n2){
	int n3;
	
  n3 = *n1;
 *n1 = *n2;
 *n2 =  n3;
 
    printf("A :%d\n",*n1);
    printf("B :%d\n",*n2);
    
}
int main(){
	
	int a, b;
	
	printf("Enter value of A :");
	scanf("%d",&a);
	
	printf("Enter value of B :");
	scanf("%d",&b);
	
	swap(&a, &b);

	return 0;
	
}
