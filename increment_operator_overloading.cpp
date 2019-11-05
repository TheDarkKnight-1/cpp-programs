/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class complex{
    int real;
    int imag;
    public:
       friend istream& operator>>(istream &din,complex &c){
            cin>>c.real;
            cin>>c.imag;
            return(din);
        }
        
        friend ostream& operator<<(ostream &dout,const complex &x){
            cout<<x.real<<"+"<<x.imag;
            return(dout);
        }
};
int main()
{
    
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}
