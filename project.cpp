#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
	int i,j;
	int rabbitNum, bornedRabbitNum, capturedRabbitNum;
	int tigerNum, bornedTigerNum, starvedTigerNum, capturedTigerNum;
	int hunterNum, bornedHunterNum, starvedHunterNum;
	cout << "Enter initial number of rabbits: ";
	cin >> rabbitNum;
	cout << "Enter initial number of tigers: ";
	cin >> tigerNum;
	cout << "Enter initial number of hunters: ";
	cin >> hunterNum;
	cout << endl;
	getchar();

	int timestep = 0;
	char field[20][20];
	for(i=0; i<20; i++)
		for(j=0; j<20; j++)
			field[i][j] = '-';

	Rabbit* rPtr = new Rabbit[rabbitNum];
	Tiger* tPtr = new Tiger[tigerNum];
	Hunter* hPtr = new Hunter[hunterNum];

	rabbitToTheField();
	hunterTotheField();
	
	while(1)
	{

	}	
	return 0;
}

void showStatus(void)
{
		cout << "Time_step: " << timestep <<endl;
		cout << endl;
		for(i=0; i<20; i++)
		{
			for(j=0; j<20; j++)
				cout << field[i][j];
			cout<<endl;
		}
		cout << endl;

		cout << "number of rabbits: " << rabbitNum << "(born:" << bornedRabbitNum << ", captured:" << capturedRabbitNum << ")" <<endl;
		cout << "number of tigers: " << tigerNum << "(born:" <<bornedTigerNum << ", starve:" <<starvedTigerNum << ", capturedTigerNum:" << capturedTigerNum << ")" <<endl;
		cout << "numbers of hunters: " << hunterNum << "(born:" <<bornedHunterNum << ", starve:" << starvedHunterNum << ")" <<endl;

		cout << "Press Enter to proceed.";
		while(getchar() != '\n'){}
		timestep++;
}

void dododo(void)
{
	
