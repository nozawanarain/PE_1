/*
「３と５の倍数」
10未満の自然数のうち, 3 もしくは 5 の倍数になっているものは 3, 5, 6, 9 の4つがあり, これらの合計は 23 になる.

同じようにして, 1000 未満の 3 か 5 の倍数になっている数字の合計を求めよ.
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