#include <iostream>


//ָ��ĵ�ַ��ָ��Ĵ�С
// ȡ��ַ����ȡ��ַ��&
// ��ռ�õĴ�С��ʹ��sizeof()

using namespace std;

int main() {


    //����
    int age = 18;
    cout << "age�ĵ�ַ��" << &age  << endl;
    cout << "ageռ�ö��Ŀռ䣺" << sizeof(age) << endl; //4���ֽ�



    //ָ�� * ����˼���������˱�ʶ�������ã����߱������� ����p��ָ�롣
    int * p = &age;
    cout << "p�ĵ�ַ��" << &p <<endl;
    cout << "pռ�ö��Ŀռ䣺" << sizeof(p) << endl; //8���ֽ�, ��64λ��ϵͳ�£�ָ���ռ�ÿռ���Զ��8�� 32λ��ϵͳ����4.


    string name = "����";
    string *pname = &name;
    cout << "pname�Ŀռ䣺" << sizeof(pname) <<endl;


    return 0;
}
