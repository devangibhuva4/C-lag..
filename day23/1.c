#include<stdio.h>

sum (int devangi[], int size){
	int c=0,i;
	
	for(i=0; i<size ;i++){
		c+= devangi[i];
	}
	
	printf("sum : %d",c);

}


int main(){
	
	int n;
	
	printf("Enter value :");
	
	scanf("%d",&n);
	
	int arr[n],i;
	
	for(i=0; i<n;i++){
		
		printf("Enter value [%d] :",i);
		scanf("%d",&arr[i]);
	
	}
	
	sum(arr,n);
	
	
	return 0;
	
}
