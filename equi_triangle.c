#include<stdio.h>
int main(){
int num;
printf("Enter the value of the number of rows you wnats\n");
scanf("%d",&num);
for(int i=0;i<num;i++){
    for(int j=0;j<2*num;j++){
        if(j>=num-1-i && j<=num-1+i){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}