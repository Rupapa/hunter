#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>

using namespace std;
char field[20][20];

#include "rabbit.h"
#include "tiger.h"
#include "hunter.h"

int main(void)
{
	int i,j,temp=0;
	int num_r, num_t, num_h;
	cout << "Enter initial number of rabbits: ";
	cin >> num_r;
	cout << "Enter initial number of tigers: ";
	cin >> num_t;
	cout << "Enter initial number of hunters: ";
	cin >> num_h;
	cout << endl;
	getchar();

	int timestep = 0;
	
	for(i=0; i<20; i++)
		for(j=0; j<20; j++)
			field[i][j] = '-';

	Rabbit* R = new Rabbit[num_r];
	Tiger* T = new Tiger[num_t];
	Hunter* H = new Hunter[num_h];

	
	
	while(1)
	{	
		temp=r_all
		for(i=
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
	
