#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=num;i>0;i--){
        fact=fact*i;
    }
    printf("The factorial of the numbers is :%d",fact);
    return 0;

}
