#include <iostream>
using namespace std;
class calculator
{
public:
    float num1, num2, num3;
    char a = '+';
    char b = '-';
    char c = '*';
    char d = '/';
    char opt;
    string oper;
    void inputNumbers()
    {
        cout << "Enter first number = ";
        cin >> num1;
        cout << "Enter second number = ";
        cin >> num2;
        cout << "Enter third number = ";
        cin >> num3;
    }
    void firstOperation()
    {
        cout << "Enter any letter from a to d to choose your operation :";
        cin >> opt;
        if (opt == 'a')
        {
            float sum = num1 + num2;
        }
        else if (opt == 'b')
        {
            float subt = num1 - num2;
        }
        else if (opt == 'c')
        {
            float product = num1 * num2;
        }
        else if (opt == 'd')
        {
            float divide = num1 / num2;
        }
    }
    void secondOperation()
    {
        cout << "Enter your last operation you performed :";
        cin >> oper;
        if (oper == "addition")
        {
            cout << "choose your next operation : ";
            cin >> opt;
            if (opt == 'a')
            {
                float res1;
                res1 = num1 + num2 + num3;
                cout << num1 << "+" << num2 << "+" << num3 << "=" << res1;
            }
            else if (opt == 'b')
            {
                float res2;
                res2 = num1 + num2 - num3;
                cout << num1 << "+" << num2 << "-" << num3 << "=" << res2;
            }
            else if (opt == 'c')
            {
                float res3;
                res3 = num1 + num2 * num3;
                cout << num1 << "+" << num2 << "*" << num3 << "=" << res3;
            }
            else if (opt == 'd')
            {
                float res4;
                res4 = num1 + num2 / num3;
                cout << num1 << "+" << num2 << "/" << num3 << "=" << res4;
            }
            else
            {
                cout << "No second operation is performed";
            }
        }
        else if (oper == "subtraction")
        {
            cout << "choose your next operation : ";
            cin >> opt;
            if (opt == 'a')
            {
                float res4;
                res4 = num1 - num2 + num3;
                cout << num1 << "-" << num2 << "+" << num3 << "=" << res4;
            }
            else if (opt == 'b')
            {
                float res5;
                res5 = num1 - num2 - num3;
                cout << num1 << "-" << num2 << "-" << num3 << "=" << res5;
            }
            else if (opt == 'c')
            {
                float res6;
                res6 = num1 - num2 * num3;
                cout << num1 << "-" << num2 << "*" << num3 << "=" << res6;
            }
            else if (opt == 'd')
            {
                float res7;
                res7 = num1 - num2 / num3;
                cout << num1 << "-" << num2 << "/" << num3 << "=" << res7;
            }
            else
            {
                cout << "No second operation is performed";
            }
        }
        else if (oper == "multiply")
        {
            cout << "choose your next operation : ";
            cin >> opt;
            if (opt == 'a')
            {
                float res8;
                res8 = num1 * num2 + num3;
                cout << num1 << "*" << num2 << "+" << num3 << "=" << res8;
            }
            else if (opt == 'b')
            {
                float res9;
                res9 = num1 * num2 - num3;
                cout << num1 << "*" << num2 << "-" << num3 << "=" << res9;
            }
            else if (opt == 'c')
            {
                float res10;
                res10 = num1 * num2 * num3;
                cout << num1 << "*" << num2 << "*" << num3 << "=" << res10;
            }
            else if (opt == 'd')
            {
                float res11;
                res11 = num1 * num2 / num3;
                cout << num1 << "*" << num2 << "/" << num3 << "=" << res11;
            }
            else
            {
                cout << "No second operation is performed";
            }
        }
        else if (oper == "division")
        {
            cout << "choose your next operation : ";
            cin >> opt;
            if (opt == 'a')
            {
                float res12;
                res12 = num1 / num2 + num3;
                cout << num1 << "/" << num2 << "+" << num3 << "=" << res12;
            }
            else if (opt == 'b')
            {
                float res13;
                res13 = num1 / num2 - num3;
                cout << num1 << "/" << num2 << "-" << num3 << "=" << res13;
            }
            else if (opt == 'c')
            {
                float res14;
                res14 = num1 / num2 * num3;
                cout << num1 << "/" << num2 << "*" << num3 << "=" << res14;
            }
            else if (opt == 'd')
            {
                float res15;
                res15 = num1 / num2 / num3;
                cout << num1 << "/" << num2 << "/" << num3 << "=" << res15;
            }
            else
            {
                cout << "No second operation is performed";
            }
        }
        else
        {
            cout << "No second operation is performed";
        }
    }
};
int main()
{
    calculator c;
    c.inputNumbers();
    c.firstOperation();
    c.secondOperation();
    return 0;
}