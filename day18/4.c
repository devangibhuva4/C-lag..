#include<stdio.h>

int main(){
	
	int a[50],b[50],c[50],i,n;
	
    printf("enter the size of array :\t");
	scanf("%d",&n);
	
	printf("enter %d  elements in first array :\t",n);
	for(i=0;i<n;i++){
		
		printf("%d\n",&a[i]);
	}
	
	printf("enter %d  elements in second array :\t",n);
	for(i=0;i<n;i++){
		
		printf("%d\n",&b[i]);
	}
	
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
	}
	printf("sum of these two array is :\t");
	for(i=0;i<n;i++){
		
		printf("%d\n",c[i]);
	}
	
return;
}
