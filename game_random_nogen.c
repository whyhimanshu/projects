#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,enterednum;
    int count=1;
    srand(time(0));
    number = rand()%100+1;  /*generates a number between 1aand 100*/
   
    
    while(enterednum!=number){
    printf("Enter the number which you want (less than 100)😎 : \n");
    scanf("%d",&enterednum);
    if(enterednum>number){
        printf("LESS NUMBER PLEASE\n");
    }
    else if(number>enterednum){
        printf("BIGGER NUMBER PLEASE\n");
    }
    else{
        printf("Congratulations🥳 you predicted number in %d times and the number is %d\n",count,number);
    }
    count++;
        }   
return 0;
}