

#include <stdio.h>

int main()
{
    int x;
    int y;
    int c;
    scanf("%d",& x);
    scanf("%d",& y);
    
    c= (x*x*x)+(3*x*y)*(x+y)+(y*y*y);
    printf("%d",c);

    return 0;
}
