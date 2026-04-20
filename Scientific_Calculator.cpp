#include <iostream> 
#include <cmath>
using namespace std;
class Calculator
{
    public:
    double add(double a,double b)
    {
        return a + b;
    }
    double subtract(double a,double b)
    {
        return a - b;
    }
    double multiply(double a,double b)
    {
        return a * b;
    }
    double divide(double a,double b)
    {
        if(b == 0)
        {
            cout <<"Error: Division by zero";
            return 0;
        }
        return a / b;
    }
};
class Scientific_Calculator
{
    public:
    double sinVal(double x)
    {
        return sin(x);  //in Radians
    } 
    double cosVal(double x)
    {
        return cos(x); 
    }
    double power(double base,double exp)
    {
        return pow(base,exp);
    }
    double squareRootVal(double x)
    {
        if(x < 0)
        {
            cout <<"Please enter a positive number";
            return 0;
        }
        return sqrt(x);
    }
    double logVal(double x)
    {
        if(x < 0)
        {
            cout <<"Please enter a positive number";
            return 0;
        }
        return log(x);
    }
};
int main()
{
    Calculator calc;
    Scientific_Calculator scalc;
    int choice;
    double a,b;
    cout << "1.Add\n" << "2.Subtract\n" <<"3.Multiply\n" <<"4.Divide\n" <<"5.Sine function\n" <<"6.Cosine Function\n" <<"7.Exponent\n"
         << "8.Square Root\n" << "9.Logarithm\n";
    cin >> choice;
    while(choice > 9 || choice < 1)
    {
        
        if(!(cin >> choice))
        {
            cin.clear();
            cin.ignore(1000,'\n');
            cout <<"Please select a valid operation: "; //Got problem here and was stuck in an infinite loop
        }
        
    }
    cout << "Enter two numbers: ";
    cin >> a >> b;



    switch(choice)
    {
        case 1: cout << "The sum of "        << a << " and " << b << " is "   << calc.add(a,b);      break;
        case 2: cout << "The difference of " << a << " and " << b << " is "   << calc.subtract(a,b); break;
        case 3: cout << "The product of "    << a << " and " << b << " is "   << calc.multiply(a,b); break;
        case 4: cout << "The quotient of "   << a << " and " << b << " is "   << calc.divide(a,b);   break;

        case 5: cout << "Sin value of " << a << " is " <<scalc.sinVal(a) << " and sin value of " << b << " is " << scalc.sinVal(b); break;
        case 6: cout << "Cos value of " << a << " is " <<scalc.cosVal(a) << " and cos value of " << b << " is " << scalc.cosVal(b); break;

        case 7: cout << a << " raise to power " << b << " is " << scalc.power(a,b); break;
        case 8: cout << "Square root of " << a << " is " << scalc.squareRootVal(a) << " and square root of " << b << " is " << scalc.squareRootVal(b); break;
        case 9: cout << "Log value of "   << a << " is " << scalc.logVal(a)        << " and log value of "   << b << " is " << scalc.logVal(b); break;

    }
    return 0;
}