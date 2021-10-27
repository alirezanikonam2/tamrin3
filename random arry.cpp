#include<iostream>
#include<random>
#include<time.h>

using namespace std;


int main(){

	int *a;
	int b, c, d, f = 0;

	cout << "hellow wellcom to this program this program is Give random numbers" << endl <<
		" please enter how meny do you want random number=";
	cin >> c;

	a = new int[c];
	srand(time(0));
	a[0] = rand();
	for (int i = 1; i < c; i++){
		f =0;
		while (f<i){
			f = 0;
		

			d = rand();
		
			for (int x=0; x < i; x++){
				if (a[x] != d){ f++; }
			}
			if (f == i){
				a[i] = d;

			}
		}
	}
	for (int j = 0; j < c; j++){
		cout << a[j] << '\t';
	}

	system("pause");
	return 0;
}