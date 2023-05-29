

#include <stdio.h>

int main()
{
    int x;
    int y;
    int c;
    scanf("%d",& x);
   
    scanf("%d",& y);
  
    
    c= (x*x*x)-(y*y*y)-(3*x*y)*(x+y);
    printf("%d",c);

    return 0;
}
