#include <iostream>
#include <ostream>

using namespace std;

int calcSum(int a, int b)
{
    int sum = (a + b);
    cout << "calculated sum of your numbers are: " << sum << endl;
}
int calcDif(int a,int b)
{
    int difference = (a - b);
    if (difference <= 0){
        cout << "***error***" << endl << "difference must be greater than 0." << endl;
    } else {
        cout << "calculated difference of your numbers are: " << difference << endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}

int retDif(int a, int b)
{
    int dif = (a - b);
    if (dif <= 0)
    {
        return -1;
    }
    return dif;
}


int main()
{

    int a;
    int b;

    cout << "enter your first number:" << endl;
    cin >> a;
    cout << "Enter your second number:"<< endl;
    cin >> b;
    cout << "Here are your numbers:" << a << ", " << b << endl;

    calcSum(a,b);
    calcDif(a,b);
    cout << "****************" << endl;
    cout << "returned sum of your numbers is: " << retSum(a, b) << endl;
    if (retDif(a,b) == -1){
        cout << "***error***" << endl << "difference must be greater than 0."<< endl;
    } else {
        cout << "returned difference of your numbers is: "<< retDif(a,b) << endl;
    }
    return 0;
}
