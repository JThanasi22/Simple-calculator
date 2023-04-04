//
//  main.c
//  calculator
//
//  Created by Jord Thanasi on 30.3.23.
//

#include <stdio.h>
#include <math.h>

void calSum (int n1, int n2);
void cALDiff (int n1, int n2);
void calMul (int n1, int n2);
void calDiv (int n1, int n2);
void calPow (int n1, int n2);
void calSqrt (int n1);
int main()
{
    char o;
    int n1, n2;
    float x;
    printf ("Choose an operator(+, -, *, /, ^, 's'=sqrt, 'a'=ave)\n");
    scanf ("%c", &o);
    printf ("First number: ");
    scanf(" %d", &n1);
    if( o=='^')
    {
        printf("Value of the power: ");
        scanf(" %d", &n2);
    }
    else if (o=='s')
    {
   
    }
    else
    {
        printf ("Second number: ");
        scanf (" %d", &n2);
    }
        switch(o)
        {
            case '+':
                calSum (n1, n2);
                break;
              
            case '-':
                cALDiff (n1, n2);
                break;
                  
            case '*':
                calMul (n1, n2);
                break;
              
            case '/':
                calDiv (n1, n2);
                break;
            
            case '^':
                calPow (n1, n2);
                break;
            
            case 's':
                calSqrt (n1);
                break;
          
            default:
                printf ("Error");
        }
        return 0;
    }
void calSum (int n1, int n2)
{
    float x;
    x = n1 + n2;
    printf ("%.2f", x);
}
void cALDiff (int n1, int n2)
{
    float x;
    x = n1 - n2;
    printf ("%.2f", x);
}
void calMul (int n1, int n2)
{
    float x;
    x = n1 * n2;
    printf ("%.2f", x);
}
void calDiv (int n1, int n2)
{
    float x;
    while (n2 == 0)
    {
        printf ("Error cant divide by 0\n");
        scanf ("%d", &n2);
    }
    x = n1 / n2;
    printf ("%.2f", x);
}
void calPow (int n1, int n2)
{
    float x=1;
    for(int i=0;i<n2;i++)
    {
        x=x*n1;
    }
    printf ("%.2f", x);
}
void calSqrt (int n1)
{
    float x;
    x=sqrtf(n1*1.0);
    printf ("%.2f", x);
}
void calAve (int n1, int n2)
{
    float x;
    x=(n1+n2)/2.0;
    printf("%.2f", x);
}
