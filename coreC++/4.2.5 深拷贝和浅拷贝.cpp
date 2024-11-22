#include <iostream>
#include <string>
using namespace std;
//浅拷贝会带来堆区内存重复释放，深拷贝就是自定义一个拷贝构造函数使得在堆区再创建一个内存
class Person {
public:
	//无参（默认）构造函数
	Person() {
		cout << "无参构造函数!" << endl;
	}
	//有参构造函数
	Person(int age ,int height) {
		
		cout << "有参构造函数!" << endl;

		m_age = age;
		m_height = new int(height);
		
	}
	//拷贝构造函数  
	Person(const Person& p) {
		cout << "拷贝构造函数!" << endl;
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		m_age = p.m_age;
		m_height = new int(*p.m_height);//而不是m_height = p.m_height
		
	}

	//析构函数
	~Person() {
		cout << "析构函数!" << endl;
		if (m_height != NULL)
		{
			delete m_height;
		}
	}
private:
    int m_age;
    int *m_height;
};

int main()
{



    system("pause");
    return 0;
}