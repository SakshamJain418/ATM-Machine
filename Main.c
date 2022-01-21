#include<stdio.h>
#include<windows.h>
#include<time.h>

int main()
{
	system("color 3F");
	int pin=1234,option,enteredPin,count=0,amount=1;
	float balance=5000;
	int continueTransaction=1;
	int note2000,note500,note100=0;
	
	time_t now;
	time(&now);
	printf("\n");
	printf("\t\t\t              %s",ctime(&now));
	printf("\n\t\t\t==================*WELCOME TO ATM*==================");
	
	printf("\nEnter pin Number : ");
	scanf("%d",&enteredPin);
	if(pin!=enteredPin)
	{
		printf("\nInvalid Pin Number!!!");
		exit(0);
	}
	
	while(continueTransaction != 0)
	{
	printf("\n\n\t\t\t==================*Avalable Transitions*=============");
	printf("\n\n\t\t1.Withdrawl Amount");
	printf("\n\n\t\t2.Deposite Amount");
	printf("\n\n\t\t3.Check Balance");
	
	printf("\n\n\t\tPlease Select The Opstion : ");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			while(amount % 500 != 0)
			{
				printf("\n\n\t\tPlease Enter The Amount You Want To Withdrawl : ");
				scanf("%d",&amount);
				if(amount%100!=0)
				printf("\n\tThe Amount Should Be Multiple of 500");
			}
			if(balance<amount){
				printf("\n\tSorry Insuffecient Balance");
				amount = 1;
				break;
			}
			else
			{
				balance=balance-amount;
				printf("\n\tyou have withdrael Rs.%d.Your current balance is Rs.%.2f",amount,balance);
						if(balance>=2000)
	          { 
	             note2000=balance/2000;
	             balance=balance-note2000*2000;
	          }
	           if(balance>=500)
	           {
		         note500=balance/500;
		         balance=balance-note500*500;
	           }
	            if(balance>=100)
	            {
		         note100=balance/100;
		         balance=balance-note100*100;
				}
	            // if(amount<100)
	            // {
			     //  printf("\nplease enter amount which is grater than 100");
	           // }
	
	             printf("\nNote of 2000 :  %d",note2000);
	             printf("\nNote of 500 :  %d",note500);
	             printf("\nNote of 100 :  %d",note100);
	             			
					//Remaning Notes	
					printf("\n2000 Remaning Notes: %d",1000-note2000);
					printf("\n500 Remaning Notes: %d",1000-note500);
					printf("\n100 Remaning Notes: %d",1000-note100);
					
			    printf("\n\n\t\t\t=============*Thankyou for working with us*=============");
				amount = 1;
			    break;
			}
			
			case 2:
				printf("\n\tPlease Enter The Amount You Want To Deposite : ");
				scanf("%d",&amount);
				balance=balance+amount;
				printf("\n\tYou have deposite Rs.%d.Your current Balance is Rs.%.2f",amount,balance);
						if(balance>=2000)
	          { 
	             note2000=balance/2000;
	             balance=balance-note2000*2000;
	          }
	           if(balance>=500)
	           {
		         note500=balance/500;
		         balance=balance-note500*500;
	           }
	            if(balance>=100)
	            {
		         note100=balance/100;
		         balance=balance-note100*100;
	            }
	             //if(amount<100)
	             //{
			     //  printf("\nplease enter amount which is grater than 100");
	          //  }
	
	             printf("\nNote of 2000 :  %d",note2000);
	             printf("\nNote of 500 :  %d",note500);
	             printf("\nNote of 100 :  %d",note100);
	             
	             //Remaning notes;
				printf("\n2000 Remaning Notes: %d",1000-note2000);
				printf("\n500 Remaning Notes: %d",1000-note500);
				printf("\n100 Remaning Notes: %d",1000-note100);

				printf("\n\n\t\t\t=============*Thankyou for working with us*=============");
				amount=1;
				break;
				
				case 3:
						printf("\n\tYour Balance is %.2f",balance);
						if(balance>=2000)
	          { 
	             note2000=balance/2000;
	             balance=balance-note2000*2000;
	          }
	           if(balance>=500)
	           {
		         note500=balance/500;
		         balance=balance-note500*500;
	           }
	            if(balance>=100)
	            {
		         note100=balance/100;
		         balance=balance-note100*100;
	            }
	            // if(amount<100)
	             //{
			      // printf("\nplease enter amount which is grater than 100");
	            //}
	
	             printf("\nNote of 2000 :  %d",note2000);
	             printf("\nNote of 5000 :  %d",note500);
	             printf("\nNote of 100 :  %d",note100);
	              
	             //Remaning notes;
				printf("\n2000 Remaning Notes: %d",1000-note2000);
				printf("\n500 Remaning Notes: %d",1000-note500);
				printf("\n100 Remaning Notes: %d",1000-note100);
					break;	
				
				default:
					printf("\n\tPlease select the valid opstions");
	}
	printf("\n\n\tDo you want to prefer another transition?press 1[Yes], 0[No] : ");
	scanf("%d",&continueTransaction);
	}
	
	return(0);
	}

