//============================================================================
// Name        : Zjp009.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string keyboard="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
	for(char c ; cin.get(c);)
		if(c==' ' || c== '\n')
			cout << c;
		else
			for(int i = 1 ; i < keyboard.length();i++)
				if(keyboard[i]==c)
				{
					cout << keyboard[i-1];
					break;
				}
	return 0;
}
