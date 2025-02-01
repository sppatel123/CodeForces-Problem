
#include<stdio.h>

int main(){

    int n,k,result=0;
    scanf("%d",&n);
    scanf("%d",&k);
    
    char score[n];
    for(int i = 0; i <n; i++){
        scanf("%d",&score[i]);
    }

    for(int i = 0; i <n; i++){
        if((score[i] >= score[k-1]) && (score[i] > 0)){
            result++;
        }
    }
    printf("%d",result);
    return 0;
}