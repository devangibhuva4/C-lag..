#include<stdio.h>

int main(){
	int n,i;
	
	printf("enter size os array:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0; i<n; i++){
	
	  printf("enter elements[%d]:",i);
	  scanf("%d",&a[i]);
	
    }
	for(i=0; i<n; i++){
	
	  printf("%d\n",a[i]); 
   }
	return 0;
}
