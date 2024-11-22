#include <iostream>
#include <string>

using namespace std;

class Person
{
    friend ostream& operator<<(ostream& cout,Person &p);
private :
    int m_A;
    int m_B;
public:
    Person(int a,int b):m_A(a),m_B(b)
    {}
};
ostream& operator<<(ostream& out,Person &p)
{
    out << p.m_A <<endl <<p.m_B;
    return out;
}


void test01()
{
    Person p(1,2);
    cout << p <<endl;
}
int main()
{

    test01();

    system("pause");
    return 0;
}