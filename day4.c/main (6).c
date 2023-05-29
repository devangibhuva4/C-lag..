

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
    
  
    
    c= (x*x*x)-(y*y*y)-(z*z*z)-3*(x+y)+3*(y+z)+3*(z+x);
    printf("%d",c);

    return 0;
}
