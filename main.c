#include<stdio.h>
#include"string.h"
int main()
{
        char str[100],str1[100],str3[100];

        printf("Enter a string 1: \n");
        scanf("%s",str);
        printf("Enter a string 2: \n");
        scanf("%s",str1);

        printf("reversed string1: %s\n",rev(str));
        printf("reversed string2: %s\n",rev(str1));

        printf("length of the string1: %d\n",length(str));

        printf("After comparison between string1 and string2: %d\n",compare(str,str1));

        printf("copied string of string1 is: %s\n",copy(str3,str));

        printf("After concatinuation: %s\n",cat(str,str1));

        return 0;
}
