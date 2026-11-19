#include<stdio.h>
int main()
{
  int ep,ch,chance=0 ;
  int  pin=1185;
  int amount,deposit;
  int balance=100020;
  while(chance<3)
    {
  printf(" enter the pin : ");
  scanf("%d",&ep);
  if( ep==pin)
  {
    printf("welcome");
    break;
  }
  else
  {
    chance=chance+1;
    printf("  wrong pin  sorry!\n");
  }
    }
  if(chance==3)
  {
    printf("card blocked");
    return 0;
  }

  while(1)
    {
      printf("\n 1.balance 2.deposit 3.withdraw 4.exit\n");
      scanf("%d",&ch);
 switch(ch)
  {
    case 1:
           printf("your balance is Rs.%d",balance);
           break;
    case 2 :
            printf("Enter deposit amount : ");
            scanf("%d",&deposit);
            balance=balance + deposit;
            printf("Deposit done.New balance is Rs.%d",balance);
            break;
    case 3:
           printf( "Enter withdraw amount : ");
           scanf("%d",&amount);
           if (amount>balance)
           {
           printf("sorry! Not enough amount");
           }
           else
           {
           printf("withdraw done.New balance is Rs.%d",balance-amount);
           }
           break;
    case 4:
           break;
    default :
             printf("invalid choice");
  }
      printf("\n Thankyou!");
      return 0;
      }
  }
   
