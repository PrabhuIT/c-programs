#include <stdio.h>

int main(void) {
    int num,a[10000],i,t,j;
    printf("enter total numbers");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=1;j<num;j++)
        {
            if(a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
   
    printf("%d\t",a[0]);


	return 0;
}
