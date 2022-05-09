#include "Company.h"
#include<iostream>
#include<string>
using namespace std;
Company::Company()
{
    //ctor
}

Company::~Company()
{
    //dtor
}
string Company::print()
{
     Customer::print();
     cout<<"company name is: "<< company_name;
     cout<<"location of company is: "<< location;
}
string Company::read()
{
    Customer::read();
    cout<<"Enter your company name: ";
    cin>>company_name ;
    cout<<"Enter location of company: ";
    cin>>location;
}
