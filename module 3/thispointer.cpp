#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    calculation(int a, int b);

    void addition();
    void subtraction();
};
calculation::calculation(int a, int b)
{
    this->a = a;
    this->b = b;
}

void calculation::addition()
{
    int answer = a + b;
    cout << "Addition= " << answer;
}
void calculation::subtraction()
{
    int answer = a - b;
    cout << "Subtraction= " << answer;
}
int main()
{
    calculation obj1(10, 20);
    obj1.addition();
    return 0;
}