#include <iostream>
#include <vector>

using namespace std;

//vector�Ļ��������� ��ɾ�Ĳ�
int main(){

    //1. ����һ��vector
    vector<int> scores {10,20,30,40,50,60};

    //2. ��ȡָ��λ�õ�ֵ
    cout <<"scores[0]=" << scores[0] << endl;
    cout << "scores.at(0)=" << scores.at(0) << endl;

    //3. �޸�ֵ
    scores.at(0) = 100;
    cout << "scores.at(0)=" << scores.at(0) << endl;

    //4. ���ֵ
    scores.push_back(70);
    scores.push_back(80);

    //5. ����
    for (int i = 0; i < scores.size(); ++i) {
        cout << i << "=" << scores.at(i) << endl;
    }

    cout <<"--------------------------------" <<endl;

    //6. ɾ��������ɾ�������ǱȽ��鷳��
    //�õ���0��Ԫ�صĵ�����

    scores.erase(scores.begin()); //ɾ����0��Ԫ��

    for (int i = 0; i < scores.size(); ++i) {
        cout << i << "=" << scores.at(i) << endl;
    }
    return 0;
}
