#include<stdio.h>

int main(){

    int i,j;
    int in[5][5],out,temp,posi_r,posi_c;
    for( i=0 ;i<5 ;i++){
        for( j=0;j<5;j++){
           
            scanf(" %d",&in[i][j]);
        }
    }
    for ( i = 0; i < 5; i++)
    { for( j=0;j<5;j++){
           
        if(in[i][j]==1){
            // printf(" %d %d",i+1,j+1);
            posi_r=(i+1);
            posi_c=(j+1);
        }      
        }
    }
    if(posi_r<3){
        temp=3-posi_r;
    }else{
        temp=posi_r-3;
    }
    if (posi_c<3) {
        out=3-posi_c;
    }else{
        out=posi_c-3;
    }
    out=out+temp;
    printf("%d",out);

    return 0;
}