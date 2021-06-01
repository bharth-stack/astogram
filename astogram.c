#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,k=0,l=0,m;
    scanf("%s",a);
    scanf("%s",b);
        for(m=0;a[m]!='\0';m++)
        {
            if(a[m]==b[m])
            {
                l++;
            }
        }

if(strlen(a)==strlen(b))
{
    for(i=0;a[i]!='\0';i++)
    {
            for(j=0;a[j]!='\0';j++)
            {
                k=0;
                if(a[i]==b[j])
                {
                    k=1;
                    b[j]=-1;
                    break;
                }

            }
            if(k!=1)
            {
                printf("-1");
break;
            }




    }
}
if(a[i]=='\0')
        printf("%d",l);
else if(a[i]!='\0')
printf("-1");
    return 0;
}
