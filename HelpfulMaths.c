#include<stdio.h>
#include<string.h>

int main(){

    char s[100],s2[100];
    char temp;

    scanf("%s",s);
    int len = strlen(s);

    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1-i;j = j+2)
        {
            if(s[j]>s[j+2]){
                temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
        
    }
    
    printf("%s",s); 

  

    return 0;

}