#include<iostream>

using namespace std;// not discussed yet.

// Prototype, Declaration
int start_noar();
int start_ar();
int Tax_Amount(int house_Sq);
int Tax_Amount(int house_Sq, int Vehicle_CC);
int Tax_Amount(int house_Sq, int Vehicle_CC, char Comercial);
int Tax_Amount_Arrears(int house_Sq, int Vehicle_CC = 100, int Comercial = 500);

void main(void)
{
	int arr, ar;
	
	cout << "\n\n_________WelCome to CDGK Taxation Department System __________ " << endl;
	cout << "\nDo you have any previous tax arrears \n\n{ Press 1 = yes, 0 = no }\n\nChoice : ";
	cin >> ar;
	switch (ar){
	case 0:
		start_noar();
		break;
	case 1:
		start_ar();
		break;
	default:
		cout << "\nYour input was not recognized" << endl;
	}
	system("PAUSE");
}

//Function Defination

int start_noar(){
	int hsq, VCC;
	char com;

	cout << "\n\n Plesae Enter House SQ :";
	cin >> hsq;
	cout << "\n\n Please Enter Vehicle CC : { Enter 0 for N/A } ";
	cin >> VCC;
	cout << "\n\n Are These Property Use as Comercial:  { Press y = yes, n = no } ";
	cin >> com;
	// Function Calling Work:
	if (VCC == 0 && com == 'n')
	{
		cout << " \n\n Dear Customer Your Net Tax Payable Amount is :  " << Tax_Amount(hsq) << endl;
	}
	if (VCC>0 && com == 'n')
	{
		cout << " \n\n Dear Customer Your Net Tax Payable Amount is :  " << Tax_Amount(hsq, VCC) << endl;
	}
	if (VCC>0 && com == 'y')
	{
		cout << " \n Dear Customer Your Net Tax Payable Amount is :  " << Tax_Amount(hsq, VCC, com) << endl;
	}
	return 0;
}

int start_ar(){
	int hsq, VCC;
	char com;

	cout << "\n\n Plesae Enter House SQ :";
	cin >> hsq;
	cout << "\n\n Please Enter Vehicle CC : { Enter 0 for N/A } ";
	cin >> VCC;
	cout << "\n\n Are These Property Use as Comercial:  { Press y = yes, n = no } ";
	cin >> com;
	// Function Calling Work:
	if (VCC == 0 && com == 'n')
	{
		cout << " \n\n Dear Customer Your Net Tax Payable Amount is :  " << Tax_Amount_Arrears(hsq,0,0) << endl;
	}
	if (VCC>0 && com == 'n')
	{
		cout << " \n\n Dear Customer Your Net Tax Payable Amount is :  " << Tax_Amount_Arrears(hsq, VCC+100,0) << endl;
	}
	if (VCC>0 && com == 'y')
	{
		cout << " \n Dear Customer Your Net Tax Payable Amount is :  " << Tax_Amount_Arrears(hsq) << endl;
	}
	return 0;
}

int Tax_Amount(int house_Sq)
{
	return (house_Sq * 1000);
}

int Tax_Amount(int house_Sq, int Vehicle_CC)
{
	return(house_Sq * 1000) + (Vehicle_CC * 100);
}

int Tax_Amount(int house_Sq, int Vehicle_CC, char Comercial)
{
	return (house_Sq * 2000) + (Vehicle_CC * 200);	 
}

int Tax_Amount_Arrears(int house_Sq, int Vehicle_CC, int Comercial){
	return(house_Sq * 2000) + (Vehicle_CC * 200) + (Comercial * 1000);
}