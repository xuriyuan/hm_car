#include <iostream>
#include <synchapi.h>


//using�����ռ�
using namespace std;


//��������ĳ���
int main(){


    int scores []{10,20,30,40,50,60};


    //1. ��������ռ�õ��ܿռ�
    cout << "������ܿռ��С��" << sizeof(scores) << endl; //24���ֽ�

    //2. ÿһ��Ԫ��ռ�õĿռ䡣
    cout << "ÿһ��Ԫ��ռ�õĿռ䣺" << sizeof(int) << endl; //4���ֽ�

    //3. ����Ŀռ��С
    cout << "����ĳ��ȴ�С��" << sizeof(scores) / sizeof(int) <<endl;


    //4. ��������
    for (int i = 0; i < sizeof(scores) / sizeof(int); ++i) {
        cout << i << "===" << scores[i] <<endl;
    }


    return 0;
}
