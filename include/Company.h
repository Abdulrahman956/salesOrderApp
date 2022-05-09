#ifndef COMPANY_H
#define COMPANY_H
#include<string>
#include"Customer.h"
using namespace std;

class Company : public Customer
{
    public:
        Company();
        virtual ~Company();
        string print();
        string read();
    protected:

    private:
        string location;
        string company_name;
};

#endif // COMPANY_H
