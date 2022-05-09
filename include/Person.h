#include"Customer.h"
#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person : public Customer
{
    public:
        Person();
        virtual ~Person();
        string read();
        string print();
    protected:

    private:
        string address;
        string name;
};

#endif // PERSON_H
