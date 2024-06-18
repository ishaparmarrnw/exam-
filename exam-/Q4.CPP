#include<iostream>
#include<stdexcept>
using namespace std;
class calculator 
{
    public:
    double divison (double a,double b)
    {
        if(b==0)
        {
            throw std::runtime_error ("divison by zero is not allowed: ");
            return a/b;
        }
    }
};
int main()
{
calculator calc;
double num1=10.0;
double num2=0.0;
try
{
   double result =calc.divison(num1,num2);
   cout << "result of divison: " << result << endl;
}
catch(const std::exception& e)
{
    std::cerr << "exception caught:" << e.what() << endl;
}
return 0;
}

