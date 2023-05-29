

#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int c;
    printf("enter first value\n");
    scanf("%d",& x);
   printf("enter second value");
    scanf("%d",& y);
    printf("enter third value");
    scanf("%d",& z);
    
  
    
    c= (x*x*x)+(y*y*y)+(z*z*z)+3*(x+y)*(y+z)*(z+x);
    printf("%d",c);

    return 0;
}
