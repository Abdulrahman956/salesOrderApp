#include<iostream>
#include<string>
#include<cstdlib>
#include"Customer.h"
using namespace std;

void printline(string s, bool el = true)
{
    cout<< s <<(el?"\n":"\t");
}
int Cust_size = 10;
int Cust_count = 0;
Customer *Cust = new Customer[Cust_size];
void DataEntry()
{

    int c=1;
    while(c!=0)
    {
        system("cls");
        printline("\t 1. Add New Customer");
        printline("\t 2. Update Customer");
        printline("\t 3. Delete Customer");
        printline("\t 4. Add New product in stock");
        printline("\t 5. Update product in stock");
        printline("\t 6. Delete product from the stock");
        printline("\t 0. Return to main menu ");
        printline("\t Enter Selection: ");
        cin>>c;
        switch(c)
        {
        case 1:
            printline("Add new customer ...");
            if(Cust_count<Cust_size)
            {
                Cust[Cust_count++].read();
            }
            else
                printline("No place for more customer !");
                break;
        case 2:
            printline("Update customer ...");
            break;
        case 3:
            printline("Delete customer ...");
            break;
        case 4:
            printline("Add New product in stock ...");
            break;
        case 5:
            printline("Update product in stock ...");
            break;
        case 6:
            printline("Delete product from the stock ...");
            break;

        case 0:
            return;
        default:
            printline("\t\t\tInvalid choice  try again ");

        }

    }
}
void SalesProcess()
{
    int c=1;
    while(c!=0)
    {
        system("cls");
        printline("\t 1. Add Transaction");
        printline("\t 2. Update Order");
        printline("\t 3. Pay Order");
        printline("\t 0. Return to main menu");
        printline("\t Enter Selection: ");
        cin>>c;

        switch(c)
        {
        case 1:
            printline("Add Transaction ...");
            break;
        case 2:
            printline("Update Order ...");
            break;
        case 3:
            printline("Pay Order ...");
            break;
        case 0:
            return ;
        default:
            printline("\t\t\tInvalid choice  try again ");

        }
    }
}
void Print()
{
    system("cls");
    int c=1;
    while(c!=0)
    {

        printline("\t 1. Customer");
        printline("\t 2. Stock data");
        printline("\t 3. Transactions");
        printline("\t 0. Return to main menu");
        printline("\t Enter Selection: ");
        cin>>c;

        switch(c)
        {
        case 1:
            printline("Customers ...");
            for(int i = 0; i < Cust_count ; ++i)
                Cust[i].Print();
            break;
        case 2:
            printline("Stock data ...");
            break;
        case 3:
            printline("Transactions ...");
            break;
        case 0:
            return ;
        default:
            printline("\t\t\tInvalid choice  try again ");

        }
    }
}
int main()
{
    system("cls");
    int c=1;
    while(c!=0)
    {
        printline("\t What do you want: ");
        printline("\t 1. DataEntry");
        printline("\t 2. SalesProcess");
        printline("\t 3. Print");
        printline("\t 0. Exist");
        printline("\t Enter Selection: ");
        cin>>c;

        switch(c)
        {
        case 1:
            DataEntry();
            break;
        case 2:
            SalesProcess();
            break;
        case 3:
            Print();
            break;
        case 0:
            printline("\t\t\t\t Thanks :)");
            return 0;
        default:
            printline("\t\t\tInvalid choice  try again ");
        }
    }

    return 0;
}
