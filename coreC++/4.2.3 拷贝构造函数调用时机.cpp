#include <iostream>
#include <string>
void doWork(Person p);
using namespace std;

//拷贝构造函数调用时机

//1、使用一个已经创建完毕的对象初始化另一个对象

//2、值传递的方式给函数参数传值

//3、值方式返回局部对象

class Person
{
public:
    Person()
    {
        cout << "默认构造函数" << endl;
    }

    Person(int age)
    {
        m_Age = age;
        cout << "有参构造函数" << endl;
    }

    Person(const Person &p)
    {
        m_Age = p.m_Age;
        cout << "拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "析构函数" << endl;
    }

private:
    int m_Age;

};

void test01()//1、使用一个已经创建完毕的对象初始化另一个对象
{
    Person p1(20);
    Person p2(p1);
}
void doWork(Person p)
{
    return;
}
void test02()//2、值传递的方式给函数参数传值
{
    Person p;
    doWork(p);
    return;
}

int main()
{

    test02();

    system("pause");
    return 0;

}

