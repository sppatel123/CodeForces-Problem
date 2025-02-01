#include<stdio.h>

int main(){

    int num,count=0;
    char line[51];

    scanf("%d",&num);
    scanf("%s",line);

    for (int i = 0; i < num; i++)
    {
        if(line[i]==line[i+1]){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;

}