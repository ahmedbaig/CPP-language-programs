#include<iostream>
#include<string>

using namespace std;

//Global Declerations
int x = 0;

//Fuction declerations
void inputs();
void calculate(float *, string *);

int main(){
	inputs();
	system("PAUSE");
}
void inputs(){
	float rain[12], *rainptr;
	string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" }, *monthptr;
	
	//pointer food
	rainptr = rain;
	monthptr = month;

	for (x = 0; x <= 11; x++){
		cout << "Enter rain rates(mm) for month of " << *(monthptr + x) << " : ";
		cin >> rain[x];
	}
	calculate(rainptr, monthptr);
}
void calculate(float *rainptr, string *monthptr){
	double high = 7.6, low = 2.6, sum[2], ans;
	string summon[2];
	
	cout << "\n\n* * * * * * Calculations * * * * * * " << endl;
	
	for (x = 0; x <= 11; x++){
	
		if (*(rainptr + x) <= low){

			sum[0] = *(rainptr + x);
			summon[0] = *(monthptr + x);

			cout << "The lowest mm of rainfall in one year is " << *(rainptr + x) << "mm on month of " << *(monthptr + x) << endl;
		}
		
		else {}

		if (*(rainptr + x) >= high){

			sum[1] = *(rainptr + x);
			summon[1] = *(monthptr + x);

			cout << "The highest mm of rainfall in one year is " << *(rainptr + x) << "mm on month of " << *(monthptr + x) << endl;
		}
		
		else {}

	}
	
	ans = (sum[1] + sum[0]) / 2;
	cout << "The average rainfall rate of highest recorded in " << summon[1] << " and lowest recorded in " << summon[0] << " for current year is " << ans << endl;

}
