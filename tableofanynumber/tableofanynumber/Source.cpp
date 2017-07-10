#include <iostream>

using namespace std;

int table(int, int);
int table(int t, int i){
	long int ans;
	ans = t*i;
	cout << t << "x" << i << "=" << ans << "  ";
	table(t, i + 1);
	return 0;
}
void main(){
	int t, i = 0;
	cin >> t;
	table(t, i);
}
