#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("enter value :");
	scanf("%d",&a);
	 
	 b = a%2;
	 
	 switch(b){
	 	
	 	case 1 :
		printf("your value is even!");
	      break;
	      
	    case 0 :
	     printf("your value is odd");
	 	  break;
	 	  
	 	  default :
	 	  	printf("invalid value");
	 	  	break;
	 	  
	 	
	 }
	 
	return 0;
}