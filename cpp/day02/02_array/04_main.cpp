#include <iostream>
#include <synchapi.h>


//using�����ռ�
using namespace std;


//������һ�������ĵ�ַ��������ݡ�  &����ȡ��ַ�������ԶԱ���|�����Ԫ�ؽ���ȡ��ַ

//��������ĳ���
int main(){


    //���飬��6��Ԫ��
    int scores []{10,20,30,40,50,60};

    //����ÿһ��Ԫ�س�����Ȼ���Ԫ�ؽ���ȡ��ַ����һ��Ԫ���Ƿ���ʲô�ط��ġ���
    for (int i = 0; i < sizeof(scores) / sizeof(int); ++i) {
        cout << scores[i] << "�ĵ�ַ��" << &scores[i] << endl;
    }

    //�����п��ܻ��쳣
    cout << scores[500] << endl;


    return 0;
}
