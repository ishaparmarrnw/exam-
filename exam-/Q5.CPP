#include<iostream>
using namespace std;
class Animal
{
    public:
    virtual void sound()=0;
    virtual void move()=0;
};
class Dog:public Animal
{
  public:
   void sound() override
   {
    cout  << "dog barks " <<endl;

   }
   void move()override{
    cout << "dog runs " <<endl;
   }
};
class Bird:public Animal
{
    public:
     void sound()override{
        cout << "bird chirps " << endl;
     }
     void move()override{
        cout <<"bird flies " << endl;
     }
};
int main()
{
    Dog dogs;
    Bird birds;
    Animal*animal1=&dogs;
    Animal*animal2=&birds;
    animal1->sound();
    animal1->move();
   animal2->sound();
    animal2->move();
  return 0;
}