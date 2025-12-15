#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
   int i,j;
   int count;
    char s[500];
    gets(s);
    for(i=0;s[i]!='/0';i++)
    { 
        coount=0;
        for(j=i+1;s[j]!='/0';j++)
        {
            if(s[i]==s[j])
            count++;
        }
        printf("%d",count);
    }
   
    return 0;
}