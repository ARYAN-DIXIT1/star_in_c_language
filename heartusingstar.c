#include<stdio.h>
int main(){
int num;
printf("Enter the value of the number of rows you wnats\n");
scanf("%d",&num);
for(int i=1;i<num;i++){
    for(int j=0;j<2*num;j++){
        if(j>=num-1-i && j<=num-1+i){
            printf("*");
        }
        else{
            printf(" ");
        }

    }
    for(int j=2*num;j<4*num;j++){
        if(j>=3*num-1-i && j<=3*num-1+i){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
int x=2*num-1;
for(int i=1;i<=x;i++){
    for(int j=1;j<=i;j++){
        printf(" ");
    }
    for(int j=1;j<=(2*x)-(2*i-1);j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}