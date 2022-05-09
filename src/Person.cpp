#include "Person.h"
#include<iostream>
using namespace std;
Person::Person()
{
    //ctor
}

Person::~Person()
{
    //dtor
}
string Person::read()
{
    Customer::read();
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your address: ";
    cin>>address;
}
string Person::print()
{
    Customer::print();
    cout<<"Name is: "<<name;
    cout<<"Address is: "<<address;
}
