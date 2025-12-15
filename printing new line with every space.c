#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int main() 
{
 char s[500];
 int i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
     { 
        if(s[i]==' ')
        {
          printf("\n");
        }
        else {
        printf("%c",s[i]);
        }
        
     }
    
    return 0;