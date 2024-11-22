// #include <iostream>
// #include <string>

// using namespace std;

// class MyInteger
// {
//    friend ostream& operator<<(ostream& out, MyInteger myint);

// public:
//     MyInteger():n_Num(0)
//     {}
//     MyInteger& operator++()
//     {
//       n_Num++;
//      return *this;
//     }
//     MyInteger operator++(int)
//     {
//       MyInteger temp= *this;
//       n_Num++;
//       return temp;

//     }
    
// private:
//     int n_Num;
// };
// ostream& operator<<(ostream& out, MyInteger myint) {
// 	out << myint.n_Num;
// 	return out;
// }




// void test01()
// {
//     MyInteger integer;
//     cout << ++integer <<endl;
// }
// void test02()
// {
//     MyInteger integer;
//     cout << integer++ <<endl;
//     cout << integer <<endl;
// }
// int main()
// {

//     test02();

//     system("pause");
//     return 0;
// }

//递减运算符重载
#include <iostream>
using  namespace std;
class Integer
{
    friend ostream& operator<<(ostream& out,Integer &p);
private:
    int n;
public:
    Integer():n(10){}
    Integer& operator--()
    {
        this->n--;
        return *this;
    }
    Integer operator--(int)
    {
        Integer t;
        t= *this;
        n--;
        return t;
    }


};
ostream& operator<<(ostream& out,Integer &p)
{
    cout <<p.n<<endl;
    return out;
}
void test01()
{
    Integer i;
    cout << --i ;
    cout <<  i;
}
void test02()
{
    Integer i;
    cout << --i ;
    cout <<  i;
}

int main()
{
    test02();//前置递减
    //test02();//后置递减
    system("pause");
    return 0;
}