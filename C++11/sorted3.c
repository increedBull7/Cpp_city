#include<stdio.h>
int main()
{
    int a,b,c,mid;
    printf("Enter three Integers");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>=b&&a>=c)
    {
        if(b>c)
        printf("%d,%d,%d",c,b,a);
        else
        printf("%d,%d,%d",b,c,a);
    }
    
    else if(a<=b&&a<=c)
    {
        if(b>c)
        printf("%d,%d,%d",a,c,b);
        else
        printf("%d,%d,%d",a,b,c);
      }  
      else if(c<=b)
      printf("%d,%d,%d",c,a,b);
      else
      printf("%d,%d,%d",b,a,c);
      
      
}