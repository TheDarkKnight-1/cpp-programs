#include <iostream>
using namespace std;

class abc{
  public:
    static int count;
    abc(){
        count++;
    }
    static void show_count(){
        cout<<count<<" ";
    }
};
int abc::count=0;
int main()
{
    abc a,b,c;
    abc::show_count();
    return 0;
}
