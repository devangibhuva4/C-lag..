#include<stdio.h>

int main(){
	
	int  a[6];
	int *b[6];
	
	int i, n;
	
	printf("Enter size of array :");
	scanf("%d",&n);
	
	int c[n];
	
	for(i=0; i<=4; i++){
		b[i]=&a[i];
		printf("%u => %d\n",b[i],*b[i]);
	}
	
}
