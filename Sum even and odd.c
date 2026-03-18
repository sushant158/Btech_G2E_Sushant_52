#include<stdio.h>
int main(){
    int num,sum_even=0,sum_odd=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for (int i=0; i <=num; i++)
    {
        if (i%2==0)
        {
            sum_even=sum_even+i;
        }
        else{
            sum_odd=sum_odd+i;
        }
        
    }
    printf("The sum of even numbers are:%d\n",sum_even);
    printf("The sum of odd numbers are:%d",sum_odd);
    
    return 0;

}
