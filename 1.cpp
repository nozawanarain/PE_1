/*
�u�R�ƂT�̔{���v
10�����̎��R���̂���, 3 �������� 5 �̔{���ɂȂ��Ă�����̂� 3, 5, 6, 9 ��4������, �����̍��v�� 23 �ɂȂ�.

�����悤�ɂ���, 1000 ������ 3 �� 5 �̔{���ɂȂ��Ă��鐔���̍��v�����߂�.
*/
#include<iostream>

using namespace std;
int main(int argc , char* argv[]){

	int ans = 0;
	for(int i = 1 ; i < 1000 ; i++){
		if(i % 3 == 0){
			ans += i;
		}else if(i % 5 == 0){
			ans += i;
		}else{
		}
	}
	cout << "ans:" << ans << endl;
	while(1);

	return 0;
}