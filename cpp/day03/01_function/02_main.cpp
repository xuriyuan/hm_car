#include <iostream>


//����

using namespace std;


int main() {

    int age = 18;
    age = 20;
    cout << "age=" << age <<endl;


    //���Զ���age�ı���
    //����age��һ�����ã����õ����ֽ����� age2
    int &age2 = age;
    age2 = 33; //ʹ�����ã����������޸�ֵ����ôԭ�е�����Ҳ������޸ġ�
    cout << "age=" << age <<endl;


    cout <<"age�ĵ�ַ��" << &age<<endl;
    cout <<"age2�ĵ�ַ��" << &age2<<endl;

    return 0;
}
