//Program to print area of two rectangles by creating a class rectangle and a function named area//

#include <iostream>
using namespace std;

class Rect
{
private:
    int a, b;

public:
    Rect(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int area()
    {
        return this->a * this->b;
    }
};

int main()
{
    Rect obj = Rect(3, 4);
    cout << obj.area() << "\n";

    return 0;
}