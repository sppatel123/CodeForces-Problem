#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[101],out[101];
    int capital=0,small=0,len;
    
    scanf("%s",s);
    len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if(isupper (s[i])){
            capital++;
        }else{
            small++;
        }
    }
    
    // printf("%d",capital);
    // printf("%d",small);
    if(capital>small){
        strupr(s);
    }else{
        strlwr(s);
        
    } 


    printf("%s",s);
    return 0;
}

