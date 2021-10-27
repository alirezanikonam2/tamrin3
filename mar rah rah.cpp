#include<iostream>
using namespace std;

int main(){


	int a, b, c, d;
	cout << "this app used for print #* As many as you want" << endl <<
		"enter how meny do you want print #*";
	cin >> a;
	if (a % 2 == 0){
		while (a > 0){
			cout << "#*";
			a -= 2;
		}
	}
	else if (a % 2 != 0){
		while (a > 1){
			cout << "#*";
			a-=2;
		}
		cout << "#";
	}
	system("pause");
	return 0;
}