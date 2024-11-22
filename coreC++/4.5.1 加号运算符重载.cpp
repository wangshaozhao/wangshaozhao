#include <iostream>
#include <string>

using namespace std;



class Person
{
public:
    int m_A;
    int m_B;
    Person operator-(Person &p)
    {
        // Person temp;
        // temp.m_A = this->m_A + p.m_A;
        // temp.m_B = this->m_B + p.m_B;
        // return temp;
        this->m_A += p.m_A;
        this->m_B  += p.m_B;
        return *this;

    }

};

void test01()
{
    Person p1;
    Person p2;
    p1.m_A = 1;
    p1.m_B = 10;
    p2.m_A = 2;
    p2.m_B = 20;
    Person p3 = p1 - p2;
    cout <<p3.m_A <<endl;
    cout <<p3.m_B <<endl;
}
int main()
{

    test01();

    system("pause");
    return 0;
}