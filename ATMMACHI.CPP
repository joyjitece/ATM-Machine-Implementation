#include<iostream.h>
#include<conio.h>
class Account
{
public:
double balance;
int id;  //just like the account number of person
Account(void);     //default
Account(int a,double b);    //parametrized constructor
void getdata()
{
cout<<"\nEnter ID:";
cin>>id;
cout<<"\nEnter Balance:";
cin>>balance;
}
void showdata()
{
cout<<"\nID:"<<id;
cout<<"\nBalance:"<<balance;
}

void withdraw(double amount)
{
if(amount>balance)
{
cout<<"\nYou only have Rs "<<balance<<"Withdrawl Not possible!";
}
balance=balance-amount;      //where amount is the withdrawl amt entered by user
}

void deposit(double amount)
{
balance=balance+amount;
}
  };

Account::Account(void)
{
//default account
id=0;
balance=0;
}

Account::Account(int a,double b)
{
id=a;
balance=b;
}

void main()
{

clrscr();
cout<<"\nWelcome to Joyjit's ATM Machine!";
Account obj(1,100);
obj.showdata();
int choice;
double amt;
do
{
cout<<"\nEnter your Choice: \n1.Withdraw Money\n2.Deposit Money\n3.Create New Account\n4.Exit";
cin>>choice;

switch(choice)
{
case 1: cout<<"\nEnter amount to withdraw:";
	cin>>amt;
	obj.withdraw(amt);
	obj.showdata();
break;
case 2: cout<<"\nEnter amount to deposit:";
	cin>>amt;
	obj.deposit(amt);
	obj.showdata();
break;
case 3: obj.getdata();
	cout<<"New Account Successfully Created!";
break;
case 4: cout<<"\n Exiting Program....";
break;
default:
cout<<"\nInvalid Choice! Select a valid option!";

}
  }
while(choice!=4);  //until user exits program

getch();

}
