#include <iostream>


//c++ �������� :: ���õĴ���

using namespace std;

//Ҫ���ú����ڲ��ܹ��޸��ⲿ���������ݣ�ֻ��Ҫ����һ���������ɡ�
//�����ú����Ĳ������ⲿ�ı�����ͬһ��������
//�����ú����Ĳ�����Ϊ�ⲿ�����ı�����
//˭�Ǳ�����˭�������á�

void changeScore(int & score){
    score = 100;
}

int main() {

    //����ķ���
    int score = 50;

    //�޸ķ���
    changeScore(score);

    cout << "score="<<score<<endl;

    return 0;
}
