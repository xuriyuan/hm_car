#include <iostream>


//c++ �������ε�Ĭ�Ϸ�ʽ :: ֵ�Ŀ���

using namespace std;

//ר�������޸ķ���
// �����Ĳ�����ʵ���Ͼ��Ǻ����ڲ���һ�����������������һ�������ĸ��塣
void changeScore(int s){  // int s = score ;
    cout << "s�ĵ�ַ��" << &s << endl;
    s = 100;
}
int main() {
    //���Եĳɼ�
    int score = 50 ;
    cout << "score�ĵ�ַ��" << &score << endl;

    changeScore(score);

    //��ӡ������
    cout <<"score = "<< score <<endl;
    return 0;
}
