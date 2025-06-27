#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>

using namespace std;

string blank;
string b1;
string blankPrint(string word){
	for (int i = 0; i < word.length(); i++){
		blank += "_ ";
	}
	return blank;
}

string giveb1(string word){
	for (int i = 0; i < word.length(); i++){
		b1+="_";
	}
	return b1;
}

string guessWord(string word, string blank){
	char guess;
	int j;
	cout<<"\nStart guessing(you have 4 turns in total): "<<endl;
	for (int i = 0; i < 4; i++){
		bool found = false;
		while (!(cin>>guess)){
			cout<<"Enter a single character please!\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		for (j = 0; j < word.length(); j++){
			if (guess == word[j]){
				found = true;
				blank[j*2] = word[j];
				b1[j] = word[j];
			}
		}
		if (found){
			cout<<"You Guessed it correctly!\n";
			cout<<blank<<endl;
			i--;
		}
		else{
			cout<<"Incorrect guess!\n";
			cout<<blank<<endl;
		}	
		if (b1 == word) break;
	}
	return b1;
}	

void clearsys(){
	system("clear");
}

void resetblank(){
	blank = "";
}
void resetb1(){
	b1 = "";
}

int main(){
	while (true){
		string word;
		cout<<"Enter a word for the other person to guess: "<<endl;

		while(!(cin>>word)){
			cout<<"Please enter correctly!"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		clearsys();
		cout<<blankPrint(word);
		giveb1(word);
		guessWord(word, blank);

		if (b1 == word){
			cout<<"Damn you win!!"<<endl;
			cout<<" 😁\n<[]👍\n ||\n";
		}
		else{
			cout<<"You lost!"<<endl;
			cout<<" 😵  \n<[]>\n ||\n";
			cout<<"The word was "<<word<<endl;
		}
		cout<<"Wanna play again?(y/n)\n";
		char play_again;
		cin>>play_again;

		if (play_again == 'y'){
			cout<<'\a';
			resetblank();
			resetb1();
		}
		else if (play_again == 'n'){
			cout<<"Aight!! Shutting the game\n";
			break;
		}

	}
	return 0;
}
