#include<stdio.h>
#include<stdlib.h>
int main(){
    float x,y;
    int acc,pass;
    char ch;
    int user_acc; 
    int user_pass; 
    printf("Enter your account number\n");
    scanf("%d",&acc);
    printf("Enter the password\n");
    scanf("%d",&pass);
    user_acc = acc;
    user_pass = pass;
    printf("Enter the initial amount\n");
    scanf("%f",&x);
    printf("your account has been created\n");

    printf("Enter your account number\n");
    scanf("%d",&acc);
    if(acc  != user_acc){
        printf("the account number doesnt exist\n");
        
    }
    else{
        printf("Enter the password\n");
        scanf("%d",&pass);
        if(pass != user_pass){
            printf("wrong password\n");
            
        }
        else{
    while(1){
    printf("Enter\nc for credit\nd fo debit \nb for balance\nx to logout\n");
    scanf("\n%c",&ch);
    switch (ch)
    {
    case 'c':
        printf("Enter the credit amount\n");
        scanf("%f",&y);
        x = x+y;
        printf("Amount added = %f\n Total balance = %f",y,x);
        break;
    case 'd':
        printf("Enter the debit amount\n");
        scanf("%f",&y);
        if(x>=y){
        x = x-y;
        printf("Amount debited = %f\n Total balance = %f",y,x);
        }
        else{
            printf("Insufficient amount in your account\n");
        }
        break;
    case 'b':
        printf("Total Balance = %f\n",x);
        break;
    case 'x':
        printf("You have been successfully logged out!\n");
        exit(0);
    default:
        printf("invalid option");
        break;
    }
    }
    }
    }
    return 0;
}