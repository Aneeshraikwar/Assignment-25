#include <iostream>
#include <cmath>
using namespace std;
class time
{
private:
    int hr, min, sec;

public:
    void set_time(int a, int b, int c)
    {
        hr = a;
        min = b;
        sec = c;
    }
    void display(){
        cout<<hr<<" hr "<<min<<" min "<<sec<<" sec "<<endl;
    }

};
int main()
{
    time C;
    C.set_time(3,45,56);
    C.display();

    return 0;
}
