
#include <stdio.h>

int main()
{
    int i=1;
    int n;
    int a;
    
    printf("enter value:");
    scanf("%d",&n);
    
    while(i<=n){
        
        printf("%d\n",n);
        printf(" * ");
        printf("%d\n",i);
        printf(" = ");
        
      i++;
    }
     
    
    return 0;
}
