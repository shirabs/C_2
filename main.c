#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include "myBank.h"
#include "stdbool.h"

#define O 'O'
#define B 'B'
#define D 'D'
#define W 'W'
#define C 'C'
#define P 'P'
#define I 'I'
#define E 'E'

int main() {
	bool b = true;
	char choice;
	printf("Please choose a transaction type:\n O - Open Account\n B - Balance Inquiry\n D - Deposit\n W - Withdrawal\n C - Close Account\n I - Interest\n P - Print\n E - Exit\n ");
	while (b)
	{

		choice = getchar();
		if (choice == '\n')
			continue;
		double m;
		int n;
		switch (choice)
		{

		case(O):
		{
			printf("Please enter an initial amount of money: ");
			if (scanf("%lf", &m) == 1)
			{
				Open(m);
			}
			else
			{
				printf("Failed to read the account number\n");
			}
			break;

		}

		case(B):
		{
			printf("Please enter an account number where you would like to know the balance: ");
			if (scanf("%d", &n) == 1)
			{
				Balance(n);
			}
			else
			{
				printf("Failed to read the account number\n");
			}
			break;
		}

		case(D):
		{
			printf("Please enter a bank account number to deposit the money: \n");
			if (scanf("%d", &n) == 1)
				{
				if (account[0][n - 900] == 0) 
				{
					printf("Bank account does not exist\n");
					break;
				}
			
				printf("Please enter a sum of money to deposit: ");
				if (scanf("%lf", &m) == 1)
				{
					Deposit(n, m);
				}
			}
			else
			{
				printf("Failed to read the account number\n");
			}
			break;
		}

		case(W):
		{
			printf("Please enter a bank account number to withdraw the money: ");
			if (scanf("%d", &n) == 1)
			{
				if (account[0][n - 900] == 0)
				{
					printf("Bank account does not exist\n");
					break;
				}
				printf("Please enter a sum of money to withdraw (>=0): ");
				if (scanf("%lf", &m) == 1)
				{
					Withdrawal(n, m);
				}
			}
			else
			{
				printf("Failed to read the account number\n");
			}
			break;
		}

		case(C):
		{
			printf("Please enter a bank account number to close: ");
			if (scanf("%d", &n) == 1)
			{
				Closeaccount(n);
			}
			else
			{
				printf("Failed to read the account number\n");
			}
			break;
		}

		case(I):
		{
			printf("Please enter interest rate: ");
			if (scanf("%lf", &m) == 1)
			{
				InterstRate(m);
			}
			else
			{
				printf("Failed to read the account number\n");
			}
			break;
		}

		case(P):
		{
			Printall();
			break;
		}

		case(E):
		{
			Closeall();
			b = false;
			break;
		}
		default:
			printf("Invalid transaction type\n");
			break;
		}
		if (b)
		{
		printf("\nPlease choose a transaction type:\n O - Open Account\n B - Balance Inquiry\n D - Deposit\n W - Withdrawal\n C - Close Account\n I - Interest\n P - Print\n E - Exit\n ");
	    }
	}
	return 0;
}