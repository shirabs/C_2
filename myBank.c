#include "myBank.h"
#include <stdio.h>
int i = 1;

// if account open tag it with 1 else 0;
void Open(double fm)
{
    if (i == 51)
    {
        printf("All the account staffed\n");
        return;
    }
    while (account[0][i] != 0)
    {
        i++;
    }
    account[0][i] = 1;
    account[1][i] = fm;
    printf("The num of new you account is:  %d\n ", 900 + i);
    return;
}

void Balance(int numa) { 
    
    if (account[0][numa - 900] == 0)
    {
        printf("Bank account does not exist\n");
        return;
    }
    printf("The balance of the account %d is: %.2f\n", numa, account[1][numa - 900]);
}

void Deposit(int numa,double money) 
{
    if (account[0][numa - 900] == 0)
    {
        printf("Bank account does not exist\n");
        return;
    }
    if (money <0&&money*-1> account[1][numa - 900]) {
        printf("Cannot withdraw more than the balance\n");
        return;
    }
    account[1][numa - 900] += money;
    printf("The new balance of the account %d is: %.2f\n", numa, account[1][numa - 900]);
}

void Withdrawal(int numa,double money)
{
    
    Deposit(numa, -1 * money);
}

void Closeaccount(int numa)
{
    if (account[0][numa - 900] == 0)
    {
        printf("Bank account does not exist\n");
        return;
    }
    account[0][numa - 900] = 0;
    account[1][numa - 900] = 0;
    i = numa - 900;

}


void InterstRate(double rate)
{
    for (int j = 1; j <= 51; j++) 
    {
        account[1][j] *= (1+rate/100);  
    }
}

void Printall()
{
    for (int j = 1; j <= 51; j++)
    {
        if (account[0][j] == 1) {
            printf("Num of the account: %d , the balane: %.2f \n", j + 900, account[1][j]);
        }
    }
}

void Closeall()
{
    for (int j = 1; j <= 51; j++)
    {
        account[0][i] = 0;
        account[1][i] = 0;
    }
}
