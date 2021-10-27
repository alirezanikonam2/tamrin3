#include<iostream>
#include<string>
#include<random>
#include<time.h>
using namespace std;

int main(){

	string word[7] = { "umbrella", "airplane", "library", "chiken", "book", "iran", "city" };
	char letterenter;
	string worduser;
	int a = 0, d = 0, q = 1;
	string buf[8] = { "" };
	int lengh;
	int random = 0;


	srand(time(0));
	random = rand() % 7;
	lengh = word[random].size();
	worduser = word[random];

	for (int r = 0; r < lengh; r++){
		buf[r] = "_";
	}




	cout << "hellow wellcome to this program this program is game hangman" << endl << "enter your letter " << endl;



	while (a != lengh){

		for (int c = 0; c < lengh; c++){
			cout << buf[c] << "    ";
		}

		if (q == 0){
			cout << "you winner";
			a = lengh;
		}
		else {


			cin >> letterenter;
			letterenter=tolower(letterenter);

			for (int k = 0; k < lengh; k++){
				if (letterenter == worduser[k]){
					buf[k] = worduser[k];
					d = 1;
				}
			}


			if (d == 1){
				cout << "its true you can enter " << lengh - a << "other" << endl;
				q = 0;
				for (int e = 0; e < lengh; e++){
					if (buf[e] == "_"){ q++; }
				}
			}


			if (d == 0){
				a++;
				if (a == lengh){ cout << "you failed"; }
				else{

					cout << "its falls" << endl << "you can enter " << lengh - a << "other" << endl;
				}
			}

			d = 0;

		}
	}










	system("pause");
	return 0;
}
