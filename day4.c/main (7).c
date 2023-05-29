

#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int c;
    printf("enter first value\n");
    scanf("%d",& x);
   printf("enter second value\n");
    scanf("%d",& y);
    printf("enter third value\n");
    scanf("%d",& z);
    
  
    
    c= (x*x)+(y*y)+(z*z)+2*(x*y)+(y*z)+(z*x);
    printf("%d",c);

    return 0;
}
