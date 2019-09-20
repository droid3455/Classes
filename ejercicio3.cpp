#include <iostream>

using namespace std;

int perfectos(int n)
{
    int cont = 0;
    while(cont<=n)
    {
        cont = cont + 1;
        int res = 0;
        int i = 1;
        for(i; i<cont;)
        {
            if(cont%i==0)
            {
             res = res + i ;
             if(res==cont)
             {
                 cout<< cont << endl;
             }
            }
            i=i+1;
        }

    }
}
int main()
{
    perfectos(10000);
}
