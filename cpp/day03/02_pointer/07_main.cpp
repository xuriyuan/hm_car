#include <iostream>
#include <synchapi.h>


//��������ָ��

using namespace std;

//ͨ��������������
int getAge(){
    int age = 18;
    return age;
}

//��ԶҪ��ס��ָ�벻Ҫ��ͨ�Ķ�����ֻҪ��ַ��
int* getAge02(){
    int age = 19;
    return &age;
}

int* getAge03(){
    int *p1 =new int(20);
    return p1;
}

int main() {

    int a = getAge();
    cout << "a=" << a <<endl;

    cout <<"--------------------------------------------------" << endl;
    int *page = getAge02();
    Sleep(3000);
    cout << "�����" << *page <<endl;

    cout <<"--------------------------------------------------" << endl;
    int *page3 = getAge03();
    cout << "���2��" << *page3 <<endl;
    delete page3; //�ͷŶ��ڴ�Ŀռ䡣

    return 0;
}
