#include<iostream>
using namespace std;
int main(){

	int *a;
	int b, c, d=0;
	  
	cout << "this program used to find out if your input number are from small to large" << endl <<
		"enter how meny number do you want enter";
	cin >> c;
	a = new int[c];
	for (int i = 0; i < c; i++){
		cout << "please enter number" << i + 1 << endl;
		cin >> a[i];
	}

	for (int j = 0; j < c; j++){
		for (int k = 0; k < c; k++){
			if (a[k]>a[j]){ d = 1; }
		}
	}


	if (d = 1){ cout << "the inter numbers are not small to large  "; }
	else if (d = 0){ cout << "the inter numbers are  small to large"; }
	

	system("pause");
	return 0;
}