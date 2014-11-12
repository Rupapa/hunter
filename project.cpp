#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
	int i,j;
	int rabbitNum, bornedRabbitNum, capturedRabbitNum;
	int tigerNum, bornedTigerNum, starvedTigerNum, capturedTigerNum;
	int hunterNum, bornedHunterNum, starvedHunterNum;
	
	Rabbit* rabbit[200];
	Tiger* tiger[200];
	Hunter* hunter[200];
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

	for(i=0; i<rabbitNum; i++)
		rabbit[i] = new Rabbit();
	for(i=0; i<tigerNum; i++)
		tiger[i] = new Tiger();
	for(i=0; i<hunterNum; i++)
		hunter[i] = new Hunter();

	rabbitToTheField();
	hunterTotheField();
	
	while(1)
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
	return 0;
}




int breedRabbit(Rabbit* rabbit[], int allRabbit, int bornedRabbitNum)
{
  int newRabbit;
  for(int i=0; i<allRabbit; i++)
  {
    if(rabbit[i]!=NULL)
    {
      rabbit[allRabbit+i] = rabbit[i]->breed();
}
