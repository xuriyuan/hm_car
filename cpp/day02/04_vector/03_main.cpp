#include <iostream>
#include <vector>

using namespace std;

//vector��Сϸ�ڣ� Խ����
int main(){

    //1. ����һ��vector
    vector<int> scores{10,20,30,40,50,60};

    //2. ȡֵ [] ��  at()
    cout << scores[100] << endl;
    cout << scores.at(100) << endl;


    return 0;
}
