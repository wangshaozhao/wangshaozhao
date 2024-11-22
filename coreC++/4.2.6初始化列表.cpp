#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    int m_A;
    int m_B;
    int m_C;

    Person(int a,int b,int c):m_A(1), m_B(2), m_C(3)
    {
        m_A = a;
        m_B = b;
        m_C = c;
    }
    void PrintPerson() {
	cout << "mA:" << m_A << endl;
	cout << "mB:" << m_B << endl;
	cout << "mC:" << m_C << endl;
    }
};
void test01()
{
    Person p1(10,20,30);
    p1.PrintPerson();
    return ;
}




int main()
{

    test01();
    system("pause");
    return 0;

}