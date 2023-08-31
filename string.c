#include<stdio.h>
char* cat(char *a, char*b)
{
        int i,j=0;
        for(i=0;*(a+i)!='\0';i++)
        {
                ;
        }
        for(i=i;*(b+j)!='\0';i++)
        {
                *(a+i)=*(b+j);
                j++;
        }
        *(a+i)='\0';
        return a;
}

char* rev(char *c)
{
        int i,j;
        char str2[100];
        char *d = str2;
        i=0;
        while(*(c+i)!='\0')
        {
                i++;
        }
        j=0;
        while(i!=0)
        {
                i--;
                *(d+j)=*(c+i);
                j++;
        }
        *(d+j)='\0';
        return d;
}
int length(char *e)
{
        int i,j=0;
        for(i=0;*(e+i)!='\0';i++)
        {
                j++;
        }
        return j;
}

int compare(char *f, char *g)
{
        int count=0;
        while(*f != '\0' && *g != '\0')
        {
                if(*f != *g)
                {
                        count++;
                }
                f++;
                g++;
        }

        return count;
}

char* copy(char* m, char* n)
{
        int i=0;
        while(*(n+i)!='\0')
        {
                *(m+i)=*(n+i);
                i++;
        }
        *(m+i)='\0';
        return m;
}

