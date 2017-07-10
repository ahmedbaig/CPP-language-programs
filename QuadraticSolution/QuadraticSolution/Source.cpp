#include <iostream>
#include <math.h>

using namespace std;

int quad(int, int, int);
int quad(int a, int b, int c){
	double root1, root2, root3;
	
	root3 = sqrt(pow(b, 2) - (4 * a *c));

	root1 = (-b + root3) / (2.0 * a);
	root2 = (-b - root3) / (2.0 * a);

	cout << "First root will be " << root1 << endl;
	cout << "Second root will be " << root2 << endl;
	return 0;
}
int main(){
	double a, b, c;
	cout << "Enter value of a : ";
	cin >> a;
	cout << "Enter value of b : ";
	cin >> b;
	cout << "Enter value of c : ";
	cin >> c;

	quad(a, b, c);
	system("PAUSE");
	return 0;
}