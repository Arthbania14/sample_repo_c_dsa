#include <stdio.h>
int main(void)
{
    int t1=0;
    int t2=1;
    int t3;
    int i=1;
    printf("FIBONACCI SERIES IS AS FOLLOWS : \n");
    printf("%d. \n%d. \n",t1,t2);
    while(i<=8)
    {
        t3=t1+t2;
        
        
            t1=t2;
            t2=t3;
            
            printf("%d. \n",t3);
            i++;

        
    }
}