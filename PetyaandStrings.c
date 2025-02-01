#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){

   char str1[100],str2[100];
    int i,a=0;
   scanf("%s",str1);
   scanf("%s",str2);

    strlwr(str1);
    strlwr(str2);

    for ( i = 0; i < 100; i++)
    {
        int as,as2;
        as = str1[i];
        as2 = str2[i];
        
        
        if(strcmp(str1,str2)==0){
            printf("%d",a);
            return 0;
        }
        if(as>as2){
                a=1;
                printf("%d",a);
                break;
        }else if(as<as2){
                a=-1;
                printf("%d",a);
                break;
        }
    }
    return 0;
}




    


