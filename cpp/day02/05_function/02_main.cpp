#include <iostream>
#include <vector>

using namespace std;


//����ֵ  ������ �� ���п��޵ı仯����ϳ���4�����͡�

//1. û�з���ֵ��û�в�����
void sayHi01(){
    cout <<"���ѽ~~" << endl;
}

//2. û�з���ֵ�� �в���
void sayHi02(string name){
    cout << "��ã�" << name << endl;
}

//3. �з���ֵ��û�в���
string sayHi03(){
    return "���ѽ~~03";
}

//4. �з���ֵ���в���
string sayHi04(string name){
    return "��ã�" + name ;
}
int main(){
    sayHi01();
    sayHi02("����");

    string result = sayHi03();
    cout << result << endl;

    string result2 = sayHi04("����");
    cout << result2 << endl;



    return 0;
}
