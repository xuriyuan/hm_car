#include <iostream>
#include <vector>

using namespace std;

//������ԭ�ͣ�

// ������ʹ��֮ǰ������������������߱��������������ֽ�ʲô�������Ĳ�������Щ�������ķ���ֵ��ʲô����

/*void sayHi(){
    cout << "���~" << endl;
}*/


//ǰ��ֻҪ���������������ɡ� ����Ǻ�����ԭ�͡�
void sayHi();


int main(){
    //undefined reference to `sayHi()' ��仰���ܾ����������������˼���ǣ� û�ж���sayhi������syahi����û��ʵ�֡�
    sayHi();
    return 0;
}

//������Ǻ����ľ���ʵ�֣�Ҳ���Խ��������Ķ��塣
void sayHi(){
    cout << "���~" << endl;
}
