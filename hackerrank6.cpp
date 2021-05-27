
#include <stdio.h>
int max_of_four(int,int,int,int);

int max_of_four(int a,int b,int c,int d)
{
    int gre;
    if(a>b && a >c && a >d)
        gre = a;
    else if(b>a && b>c && b>d)
        gre = b;
    else if(c>a && c>b && c>d)
        gre = c;
    else if(d>a && d>b && d>c)
        gre = d;
    else if(a=b=c=d)
        gre = a;
    return gre;

}


