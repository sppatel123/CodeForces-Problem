#include<stdio.h>
#include<ctype.h>

int main(){

    char t[1000];
    scanf("%s",t);

    for(int i=0;i<1;i++){
        t[i]= toupper(t[i]);
    }
    printf("%s",t);
    return 0;

}