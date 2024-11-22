#include <iostream>
#include <string>

using namespace std;

//构造函数调用规则
//1.创建一个类，C++编译器至少会提供3个函数
//（1）默认构造——空实现
//（2）析构函数——空实现
//（3）拷贝函数——值拷贝
//如果写了有参构造，编译器不再提供默认构造，但提供拷贝构造
//如果写了拷贝构造，编译器不再提供默认构造和拷贝构造
class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数" <<endl;
    }

    ~Person()
    {
        cout << "Person的析构函数" <<endl;
    }
    Person(int age)
    {
        m_Age = age;
        cout << "Person有参构造函数" << endl;
    }
/*
    Person(const Person &p)
    {
        m_Age = p.m_Age;
        cout << "Person拷贝构造函数" << endl;
    }
*/
public:
    int m_Age;
};

void test01()
{
    Person p;
    p.m_Age = 18;
    Person p2(p);
    return ;
}

int main(){

    test01();

    system ("pause");
    return 0;
}