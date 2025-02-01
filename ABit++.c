#include<stdio.h>
int main(){
    int line,x=0;
    scanf("%d",&line);

    for(int i=1; i<=line ; i++){
        char a[4];
        a[3]=='\0';
        scanf("%s", &a);

        if(a[1]=='+'){
            x = x+1;
        }else{
            x = x-1;
        }
       
    }
    printf("%d",x);
    return 0;
}