#include <iostream>

using namespace std;

int factorial(int n)
{
    int res = 1;
    for(int i= n-1; i>=1; i-=1)
    {
        res = n*i;
        n = res;
    }
    cout<< res<< endl;
}

int factorialRecursivo(int n, int res)
{
    cout<< res << endl;
    if(n==1)
    {
        return 0;
    }
    factorialRecursivo(n-1,res*n );
}
int main()
{
    /*
    factorial(5);
    */
    factorialRecursivo(6, 1);
}
