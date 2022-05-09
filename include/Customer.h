#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<string>
using namespace std;
class Customer
{
    public:
        Customer();
        Customer(int ,string);
        virtual ~Customer();
        virtual string print();
        virtual string read();

    protected:
        int c_id;
        string c_phone;
    private:

};

#endif // CUSTOMER_H
