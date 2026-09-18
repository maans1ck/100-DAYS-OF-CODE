#include <stdio.h>
int main(void)
{
    int n;float sum=0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   if(i==1)
        sum=1.0;
        else{
            float n=(2*i)-1;float d=(2*i);
            sum+=n/d;
        }
        
        
        
    }
    printf("%.2f",sum);
}