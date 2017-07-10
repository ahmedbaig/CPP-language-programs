// Pointers.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdafx.h>

using namespace std;

int main(){
	// ka kam hota hai ke address save karna.
	int a = 25;
	int *aptr;
	// pointer ke andar number nahi jate. ex: aptr= 25; NOT POSSIBLE.
	cout << &a;
	system("PAUSE");
}

