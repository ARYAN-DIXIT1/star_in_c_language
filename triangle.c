#include<stdio.h>
void starpattern(int num);
int main(){
int num;
printf("Enter the value of the number of rows you wnats\n");
scanf("%d",&num);
starpattern(num);
return 0;
}
void starpattern(int num){
    if(num==1){
        printf("*\n");
        return ;
    }
    starpattern(num-1);
    for(int i=0;i<2*num-1;i++){
        printf("*");
    }
    printf("\n");
}