#include<iostream>
using namespace std;

class Base
{
    public:
  virtual void Display()  = 0;
  virtual ~Base()
  {
    cout<<"Base class object destroyed...."<<endl;
  }
};

class Derived1 : public Base
{
    public:
    void Display() override
    {
        cout<<"It is 1 st derived class...."<<endl;
    }

   ~Derived1()
    {
        cout<<"1 st Derived class object got destroyed...."<<endl;
    }
};

class Derived2 : public Base
{
    public:
    void Display() override
    {
        cout<<"It is 2 nd derived class...."<<endl;
    }
    ~Derived2()
    {
        cout<<"2 nd Derived class object got destroyed...."<<endl;
    }
};

class Derived3 : public Base
{
    public:
    void Display() override
    {
        cout<<"It is 3 rd derived class...."<<endl;
    }

    ~Derived3()
    {
        cout<<"3 rd Derived class object got destroyed...."<<endl;
    }
};

int main()
{
    Base *b1 = new Derived1;
    Base *b2 = new Derived2;
    Base *b3 = new Derived3;

    b1->Display(); 
    b2->Display(); 
    b3->Display(); 

    delete b1;
    delete b2;
    delete b3;

    return 0;
}