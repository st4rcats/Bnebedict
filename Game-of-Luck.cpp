#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <ctime>

using namespace std;

int main(){

	string Player1, Player2;
	string reward;
	char choice;

	int RPS1, RPS2;
	int c1, c2;

	int cg1, cg2;
	string colors[] = {"Red", "Yellow", "Green", "Blue", "Gray", "Purple"};
    srand(time(0));
    int randomcolor = rand() % 5 + 1;
    string randomColor = colors[randomcolor];

    srand(time(0));
	int number = rand() % 30 ;

	system("Color");

	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-|";
	cout<<"\n|         WELCOME          |";
	cout<<"\n|         TO THE           |";
	cout<<"\n|         ULTIMATE         |";
	cout<<"\n|         GAME OF          |";
	cout<<"\n|         LUCK!            |";
	cout<<"\n|=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";

	cout<<"\nEnter Player 1 name: ";
	cin>>Player1;

	cout<<"\nEnter Player 2 name: ";
	cin>>Player2;
	cout<<"\n\n\n";

	system ("cls");

	cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
	cout<<"Player 1's name is \033[1;93m"<<Player1<<"\033[0m!\n";
	cout<<"----------------------------------------------\n";
	cout<<"Player 2's name is \033[1;96m"<<Player2<<"\033[0m!\n";
	cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n\n";
	system ("pause");
	system ("cls");


	games:
	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-|";
	cout<<"\n|        SELECT            |";
	cout<<"\n|          A               |";
	cout<<"\n|        GAME              |";
	cout<<"\n|--------------------------|";
	cout<<"\n|[A]-Rock, Paper, Scissors |";
	cout<<"\n|[B]-Color Game            |";
	cout<<"\n|[C]-Guess The Number      |";
	cout<<"\n|=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";
	cout<<"Choice: ";
	cin>>choice;

	system ("cls");


	switch(choice){
	case 'A':
	case 'a':


	rockpaperscissors:
	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|";
	cout<<"\n|	         ROCK                  |";
	cout<<"\n|	         PAPER     	       |";
	cout<<"\n|	         SCISSORS  	       |";
	cout<<"\n|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";
	cout<<" \033[1;93m"<<Player1<<"\033[0m, it's your turn.\n";
	cout<<"---------------------------------------\n";
	cout<<" \033[1;96m"<<Player2<<"\033[0m, close your eyes.\n";
	cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n";

	system ("pause");
	system ("cls");

	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|";
	cout<<"\n|[1]ROCK                               |";
	cout<<"\n|[2]PAPER     	                       |";
	cout<<"\n|[3]SCISSORS  	                       |";
	cout<<"\n|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";

	cout<<" \033[1;93m"<<Player1<<"\033[0m's choice: ";
	cin>>RPS1;



	system ("cls");

	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|";
	cout<<"\n|	         ROCK                  |";
	cout<<"\n|	         PAPER     	       |";
	cout<<"\n|	         SCISSORS  	       |";
	cout<<"\n|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";
	cout<<" \033[1;96m"<<Player2<<"\033[0m, it's your turn.\n";
	cout<<"---------------------------------------\n";
	cout<<" \033[1;93m"<<Player1<<"\033[0m, close your eyes.\n";
	cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n";

	system ("pause");
	system ("cls");

	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|";
	cout<<"\n|[1]ROCK                               |";
	cout<<"\n|[2]PAPER     	                       |";
	cout<<"\n|[3]SCISSORS  	                       |";
	cout<<"\n|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";

	cout<<"\033[1;96m"<<Player2<<"'s\033[0m choice: ";
	cin>>RPS2;

	system ("cls");

	if (RPS1== 1){
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
		cout<<"|\033[1;93m"<<Player1<<"'s\033[0m choice: Rock                      \n";
	}
	else if (RPS1== 2){
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
		cout<<"|\033[1;93m"<<Player1<<"'s\033[0m choice: Paper                      \n";
	}

	else if (RPS1== 3){
	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
	cout<<"|\033[1;93m"<<Player1<<"'s\033[0m choice: Scissors                      \n";
	}


	if (RPS2== 1){
		cout<<"|---------------------------------------|\n";
		cout<<"|\033[1;96m"<<Player2<<"'s\033[0m choice: Rock                      \n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";

	}
	else if (RPS2== 2){
		cout<<"|---------------------------------------|\n";
		cout<<"|\033[1;96m"<<Player2<<"'s\033[0m choice: Paper                      \n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";

	}

	else if (RPS2== 3){
		cout<<"|---------------------------------------|\n";
		cout<<"|\033[1;96m"<<Player2<<"'s\033[0m choice: Scissors                      \n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";

	}


	if (RPS1 == 1 & RPS2 == 3 || RPS1 == 2 & RPS2 == 1 || RPS1 == 3 & RPS2 == 2){

		cout<<" \033[1;32mCongratulations, "<<Player1<<"! You won the game.\033[0m\n\n";

		system("pause");
		system("cls");

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-|";
		cout<<"\n|               Select your reward.                   |";
		cout<<"\n|-----------------------------------------------------|";
		cout<<"\n|[A] - Chips                                          |";
		cout<<"\n|[B] - Candy                                          |";
		cout<<"\n|[C] - Yosi                                           |";
		cout<<"\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n\n";
		cout<<"Reward: ";
		cin>>reward;
		cout<<"\nProceed to the counter to claim your reward.\n\n\n";

	}



	else if (RPS2 == 1 & RPS1 == 3 || RPS2 == 2 & RPS1 == 1 || RPS2 == 3 & RPS1 == 2){

		cout<<" \033[1;32mCongratulations, "<<Player2<< "! You won the game.\033[0m\n\n";

		system("pause");
		system("cls");

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-|";
		cout<<"\n|               Select your reward.                   |";
		cout<<"\n|-----------------------------------------------------|";
		cout<<"\n|[A] - Chips                                          |";
		cout<<"\n|[B] - Candy                                          |";
		cout<<"\n|[C] - Yosi                                           |";
		cout<<"\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n\n";
		cout<<"Reward: ";
		cin>>reward;
		cout<<"\nProceed to the counter to claim your reward.\n\n\n";

	}


	else
	{
	cout<<" \033[1;33mIt's a draw! Let's try again.\033[0m\n\n";

	system("pause");
	system ("cls");
	goto rockpaperscissors;
	break;
	}

	system("pause");
	system ("cls");

	break;

	case 'B':
	case 'b':

	cout<<"=-=-=-=-=-=-=-=-=-=-=-";
	cout<<"\n|                    |";
    cout<<"\n|   Select a Color   |";
    cout<<"\n|____________________|";
	cout<<"\n|         |          |";
	cout<<"\n|[1]Red   |[2]Yellow |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[3]Green |[4]Blue   |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[5]Gray  |[6]Purple |";
	cout<<"\n=-=-=-=-=-=-=-=-=-=-=-";

	cout<<"\n\n"<<"\033[1;93m"<<Player1<<"\033[0m, select a color: ";
	cin>>cg1;
	cout<<"------------------------";
	cout<<"\n"<<"\033[1;96m"<<Player2<<"\033[0m, select a color: ";
	cin>>cg2;

	system("cls");

	if (cg1== 1){

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
		cout<<" \033[1;93m"<<Player1<<"'s\033[0m choice: \033[1;41mRed\033[0m		\n";
	}
	else if (cg1== 2){

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
		cout<<" \033[1;93m"<<Player1<<"'s\033[0m choice: \033[1;43mYellow\033[0m\n";
	}

	else if (cg1== 3){

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
		cout<<" \033[1;93m"<<Player1<<"'s\033[0m choice: \033[1;42mGreen\033[0m\n";
	}

	else if (cg1== 4){

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
		cout<<" \033[1;93m"<<Player1<<"'s\033[0m choice: \033[1;44mBlue\033[0m\n";
	}
	else if (cg1== 5){

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
		cout<<" \033[1;93m"<<Player1<<"'s\033[0m choice: \033[1;100mGray\033[0m\n";
	}

	else if (cg1== 6){

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
		cout<<" \033[1;93m"<<Player1<<"'s\033[0m choice: \033[1;45mPurple\033[0m\n";
	}

	if (cg2== 1){

		cout<<"|---------------------------------------|\n";
		cout<<" \033[1;96m"<<Player2<<"'s\033[0m choice: \033[1;41mRed\033[0m\n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";

	}
	else if (cg2== 2){

		cout<<"|---------------------------------------|\n";
		cout<<" \033[1;96m"<<Player2<<"'s\033[0m choice: \033[1;43mYellow\033[0m\n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";

	}

	else if (cg2== 3){

		cout<<"|---------------------------------------|\n";
		cout<<" \033[1;96m"<<Player2<<"'s\033[0m choice: \033[1;42mGreen\033[0m\n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
}

	else if (cg2== 4){

		cout<<"|---------------------------------------|\n";
		cout<<" \033[1;96m"<<Player2<<"'s\033[0m choice: \033[1;44mBlue\033[0m\n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
	}
	else if (cg2== 5){

		cout<<"|---------------------------------------|\n";
		cout<<" \033[1;96m"<<Player2<<"'s\033[0m choice: \033[1;100mGray\033[0m\n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
	}

	else if (cg2== 6){

		cout<<"|---------------------------------------|\n";
		cout<<" \033[1;96m"<<Player2<<"'s\033[0m choice: \033[1;45mPurple\033[0m\n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
	}

	system ("pause");
	system ("cls");

	if (randomcolor == 0+ 1){
	cout<<"=-=-=-=-=-=-=-=-=-=-=-";
	cout<<"\n|                    |";
    cout<<"\n|   Select a Color   |";
    cout<<"\n|____________________|";
	cout<<"\n|         |          |";
	cout<<"\n|\033[1;41m[1]Red\033[0m   |[2]Yellow |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[3]Green |[4]Blue   |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[5]Gray  |[6]Purple |";
	cout<<"\n=-=-=-=-=-=-=-=-=-=-=-\n\n";
	}

	else if (randomcolor == 1 + 1 ){
	cout<<"=-=-=-=-=-=-=-=-=-=-=-";
	cout<<"\n|                    |";
    cout<<"\n|   Select a Color   |";
    cout<<"\n|____________________|";
	cout<<"\n|         |          |";
	cout<<"\n|[1]Red   |\033[1;43m[2]Yellow\033[0m |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[3]Green |[4]Blue   |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[5]Gray  |[6]Purple |";
	cout<<"\n=-=-=-=-=-=-=-=-=-=-=-\n\n";
	}

	else if (randomcolor == 2 + 1){
	cout<<"=-=-=-=-=-=-=-=-=-=-=-";
	cout<<"\n|                    |";
    cout<<"\n|   Select a Color   |";
    cout<<"\n|____________________|";
	cout<<"\n|         |          |";
	cout<<"\n|[1]Red   |[2]Yellow |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|\033[1;42m[3]Green\033[0m |[4]Blue   |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[5]Gray  |[6]Purple |";
	cout<<"\n=-=-=-=-=-=-=-=-=-=-=-\n\n";
	}

	else if (randomcolor == 3 + 1){
	cout<<"=-=-=-=-=-=-=-=-=-=-=-";
	cout<<"\n|                    |";
    cout<<"\n|   Select a Color   |";
    cout<<"\n|____________________|";
	cout<<"\n|         |          |";
	cout<<"\n|[1]Red   |[2]Yellow |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[3]Green |\033[1;44m[4]Blue\033[0m   |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[5]Gray  |[6]Purple |";
	cout<<"\n=-=-=-=-=-=-=-=-=-=-=-\n\n";}

	else if (randomcolor == 4 + 1){
	cout<<"=-=-=-=-=-=-=-=-=-=-=-";
	cout<<"\n|                    |";
    cout<<"\n|   Select a Color   |";
    cout<<"\n|____________________|";
	cout<<"\n|         |          |";
	cout<<"\n|[1]Red   |[2]Yellow |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[3]Green |[4]Blue   |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|\033[1;100m[5]Gray\033[0m  |[6]Purple |";
	cout<<"\n=-=-=-=-=-=-=-=-=-=-=-\n\n";}

	else if (randomcolor == 5 + 1){
	cout<<"=-=-=-=-=-=-=-=-=-=-=-";
	cout<<"\n|                    |";
    cout<<"\n|   Select a Color   |";
    cout<<"\n|____________________|";
	cout<<"\n|         |          |";
	cout<<"\n|[1]Red   |[2]Yellow |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[3]Green |[4]Blue   |";
	cout<<"\n|---------|----------|";
	cout<<"\n|         |          |";
	cout<<"\n|[5]Gray  |\033[1;45m[6]Purple\033[0m |";
	cout<<"\n=-=-=-=-=-=-=-=-=-=-=-\n\n";}

	if (cg1==randomcolor and cg2 != randomcolor){
		cout<<"\033[1;32mCongratulations, "<<Player1<<"!\033[0m\n";
		system ("pause");
		system ("cls");
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-|";
		cout<<"\n|               Select your reward.                   |";
		cout<<"\n|-----------------------------------------------------|";
		cout<<"\n|[A] - Chips                                          |";
		cout<<"\n|[B] - Candy                                          |";
		cout<<"\n|[C] - Yosi                                           |";
		cout<<"\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n\n";
		cout<<"Reward: ";
		cin>>reward;
		cout<<"\nProceed to the counter to claim your reward.\n\n\n";

	}
	else if (cg2==randomcolor and cg1 != randomcolor){
		cout<<"\033[1;32mCongratulations, "<<Player2<<"!\033[0m\n";
		system ("pause");
		system ("cls");
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-|";
		cout<<"\n|               Select your reward.                   |";
		cout<<"\n|-----------------------------------------------------|";
		cout<<"\n|[A] - Chips                                          |";
		cout<<"\n|[B] - Candy                                          |";
		cout<<"\n|[C] - Yosi                                           |";
		cout<<"\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n\n";
		cout<<"Reward: ";
		cin>>reward;
		cout<<"\nProceed to the counter to claim your reward.\n\n\n";

	}
	else{

		cout<<"\033[1;33mNo one got it right. Better luck next time!\033[0m\n\n\n ";

		}


	break;

	case 'C':
	case 'c':


	guess:

	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";
	cout<< "|Guess the random number between 0 and 30.   |\n";
	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";

	cout<<" "<<"\033[1;93m"<<Player1<<"\033[0m, it's your turn.\n";

	cout<<" Enter your guess: ";

	cin>>c1;

	if (c1 == number){

		cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
		cout<<"\033[1;32mCongratulations, "<<Player1<<"! You won the game.\033[0m\n\n";

		system("pause");
		system("cls");

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-|";
		cout<<"\n|               Select your reward.                   |";
		cout<<"\n|-----------------------------------------------------|";
		cout<<"\n|[A] - Chips                                          |";
		cout<<"\n|[B] - Candy                                          |";
		cout<<"\n|[C] - Yosi                                           |";
		cout<<"\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n\n";
		cout<<"Reward: ";
		cin>>reward;
		cout<<"\nProceed to the counter to claim your reward.\n\n\n";


	}
	else if (c1 != number){

		cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
		cout<<" \033[1;31mYou're wrong!\033[0m\n\n";

		system("pause");
		system("cls");
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";
		cout<< "|Guess the random number between 0 and 30.   |\n";
		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n";
		cout<<" "<<"\033[1;96m"<<Player2<<"\033[0m, it's your turn.\n";

		cout<<" Enter your guess: ";

		cin>>c2;

		if (c2 == number){

		cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
		cout<<" \033[1;32mCongratulations, "<<Player2<< "! You won the game.\033[0m\n\n";


		system("pause");
		system("cls");

		cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-|";
		cout<<"\n|               Select your reward.                   |";
		cout<<"\n|-----------------------------------------------------|";
		cout<<"\n|[A] - Chips                                          |";
		cout<<"\n|[B] - Candy                                          |";
		cout<<"\n|[C] - Yosi                                           |";
		cout<<"\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n\n";
		cout<<"Reward: ";
		cin>>reward;
		cout<<"\nProceed to the counter to claim your reward.\n\n\n";


	}
	else if (c2 != number){

		cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
		cout<<" \033[1;31mYou're wrong!\033[0m\n\n";

		system("pause");
		system("cls");


	goto guess;


	}


	}
	break;

	default:
	goto games;
	system ("cls");
	break;

	}

	system ("pause");
	system ("cls");
	cout<<"|=-=-=-=-=-=-=-=-=-=-=-=-=-|";
	cout<<"\n|                          |";
	cout<<"\n|   Thanks for playing!    |";
	cout<<"\n|                          |";
	cout<<"\n|=-=-=-=-=-=-=-=-=-=-=-=-=-|";


	return 0;


}
