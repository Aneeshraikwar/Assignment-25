#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
private:
    int x, y;

public:
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void printdate()
    {
        cout  << x << "+" <<y<<"i" << endl;
    }
};
int main()
{
  Complex c;
  c.setdata(5,4);
  c.printdate();
    return 0;
}
