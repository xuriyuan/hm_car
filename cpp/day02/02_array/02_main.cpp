#include <iostream>
#include <synchapi.h>


//using�����ռ�
using namespace std;


//��������
int main(){

    //1. ��������
    int scores[3];

    //2. �鿴ÿһ��Ԫ�� ������±��Ǵ�0��ʼ�ġ�
    cout << "scores[0] =" << scores[0] << endl;
    cout << "scores[1] =" << scores[1] << endl;
    cout << "scores[2] =" << scores[2] << endl;

    //__________________________________________________






    //3. ��������ʼ������
    int scores2[]{10,20,30,40,50,60};


    //�����޸�ֵ...
    scores2[0] = 100;


    for (int i = 0; i < 6 ; ++i) {
        cout << i << "=" << scores2[i] <<endl;
    }

    //����������������������������������������������������������������������������������������
    //for(Ԫ�ص����� ������: ����){ ���ڷ�Χ��forѭ��
    for(int s : scores2){
        cout << "s====" << s <<endl;
    }


    return 0;
}
