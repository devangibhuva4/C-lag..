#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter size :");
	scanf("%d",&n);
	
	int a[n];
	int *b;
	int i;
	
	for (i=0; i<n; i++){
		
		printf("Enter value :");
		scanf("%d",&a[i]);
			
			
	}
	
	int sum;
	int e[n];
	int j=n-1;
	
	for(i=0; i<n;i++){
		
		sum = a[i];
		a[i] = e[j];		
		e[j] = sum;
		j--;
	}
	for(j=0; j<n; j++){
		printf("%d\n",e[j]);
	}
	
	
	
	return  0;
}
