#include <iostream>


//�����Ĳ�������ָ�룬
//�����ָ�뵱�ɺ����Ĳ��������ݣ���Ȼ���ⲻ�˿��������鷢����
//�������ǵ�ַ �� ��Ϊ��ַ����һ��ʮ�����Ƶ����֡�

using namespace std;

void changeScore(int * s){ //������ָ�� s ָ���� score
    *s = 100; //ʹ���˽����õķ�ʽ���޸�score����ֵ
}

int main() {

    //ԭʼ����
    int score = 50;

    //�޸ķ���
    changeScore(&score);

    cout << "������" << score << endl;


    return 0;
}
