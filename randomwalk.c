#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<time.h>
int main()	{
	int choice=1;
	while(1)	{
	printf("\nLab 9\n\n");
	printf("1: Expression interpreter\n");
	printf("2: Square root approximation\n");
	printf("3: Repeated digits\n");
	printf("4: Random walk\n");
	printf("5: Reversed sentence\n");
	printf("6: Digit occurrences\n");
	printf("7: Character count\n");
	printf("8: Matrix multiplication\n");
	printf("9: Exit the program..\n\n");
	printf("Please select an option: ");
	scanf("%d", &choice);

	switch (choice){
	case 1:{
			
			float i;
			char c;
			float sum=1;
			getchar();
			printf("Enter an expression: ");
			scanf("%f", &i);
			sum+=i-1;
			while (1)	
			{
			scanf("%c", &c);
			if(c=='+')	{scanf("%f", &i);
			sum += i;}
			else if(c=='-')	{scanf("%f", &i);
			sum -= i;}
			else if(c=='*')	{scanf("%f", &i);
			sum *= i;}
			else if(c=='/')	{scanf("%f", &i);
			sum /= i;}	
			else if(c=='\n')
				break;
			}//while
			printf("Value of expression: %.1f%c", sum, c); continue	;
		   }
	case 2:	{
		        double x;
			double y = 1.0;
			double v;
			double w = 1.0;
		    	printf("Enter a positive number: ");
			scanf("%lf", &x);
				
			do {y = w;
			v = x/y;
			w = (v+y)/2;
			}	while(fabs(w-y)>=0.00001);
			printf("Square root: %.5f\n", w); continue;	
		   }
	case 3:	{	
			int digit_seen[10] = {0};
			int digit;
			unsigned long long n;
			int i = 0, j=0;
			printf("Enter a number: ");
			scanf("%ld", &n);
			printf("Repeated digit(s): ");

			while(n)
			{
			digit = n % 10;
			if (digit_seen[digit] == 1)
			{
				printf("%d ", digit);
			}
			digit_seen[digit]++;
			i++;
			n/=10;
			}

			for(digit = 0; digit<10; digit++)
			{
			if(digit_seen[digit] == 1)
				j++;
			}
			if (i==j)
			{
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			printf("No Repeated Digits");	
			}
			printf("\n");
			
			   
		   	continue;}
	case 4: {
		char data[10][10];
		char c='A'; int x=0,y=0;
		int mode=0; int seed; int block[4]={0};
		int i,j;
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				data[i][j]='.';
			}
		}
		printf("Enter a seed value: "); scanf("%d",&seed);
		srand(seed);
		while(1){
			data[y][x]=c;
			mode=rand()%4;
			if(c=='Z'){
				break;
			}
			for(i=0;i<4;i++){
				if(block[i]==0){
					goto here;
				}
			}
			break;
			here:
			if(mode==0){
				if(block[0]==1){
					continue;
				}
				if(y==0 || data[y-1][x]!='.'){
					block[0]=1;
					continue;
				}
				y--;
				c++;
			}
			if(mode==1){
				if(block[1]==1){
					continue;
				}
				if(x==9 || data[y][x+1]!='.'){
					block[1]=1;
					continue;
				}
				x++;
				c++;
			}
			if(mode==2){
				if(block[2]==1){
					continue;
				}
				if(y==9 || data[y+1][x]!='.'){
					block[2]=1;
					continue;
				}
				y++;
				c++;
			}
			if(mode==3){
				if(block[3]==1){
					continue;
				}
				if(x==0 || data[y][x-1]!='.'){
					block[3]=1;
					continue;		
				}
				x--;
				c++;
	
			}
			for(i=0;i<4;i++){
				block[i]=0;
			}
		}
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				printf("%c",data[i][j]);
			}
			printf("\n");
		}


continue;}
		case 5:{
		
		char a[500] = {0};
		int i,j,k=0;	
		int top=0;
		int top2=0;
		char c;
		printf("Enter a sentence: ");
		scanf(" ");
		while(1){
			scanf("%c",&c); a[top]=c;
			top++;
			if(c=='\n'){
				break;
			}
		}
		printf("Reversal of sentence: ");
		for(i=top-2;i>-1;i--){
			if(a[i]==' '){
				for(j=i+1,k=0;k<top2-1;k++,j++){
					printf("%c",a[j]);
				}
				printf(" ");
				top2=0;
			}
			top2++;
		}
		for(j=0;j<top2-1;j++){
			printf("%c",a[j]);
		}
		printf("%c",a[top-2]);
		printf("\n");
			
continue;}
	case 6: {int n1,n2;
		int digit_seen_1[10] = {0}, digit_seen_2[10] = {0};
		int digit;
		int i;
		int j = 0;
		int sw = 0;
		
		printf("Please enter two integer numbers: ");
		scanf("%d %d", &n1, &n2);

		while(n1>0)	
		{	digit = n1 % 10;
			digit_seen_1[digit]++;
			n1 /=10;
		}

		while(n2>0)
		{
			digit = n2 % 10;
			digit_seen_2[digit]++;
			n2 /=10;
		}

		for(i = 0; i<10; i++)
		{
		 if (digit_seen_1[i] != digit_seen_2[i])
			{
			printf("Digit %d: %.0f occurrence(s) difference.\n", i, fabs(digit_seen_1[i] - digit_seen_2[i]));
			sw += digit_seen_1[i] != digit_seen_2[i];
			}//if
		 }//for
		
		if (!sw)
			printf("Input accepted.");
		continue;
}
	case 7:
	{	int alph[26] = {0};
		char a;
		int i;
		getchar();
		printf("Please input a line in lower-case: ");
		while(1)
		{	a = getchar();
			if(a>='a' && 'z'<=122)
				alph[a-'a']++;
			else if (a == '\n')
				break;
			else continue;
		}
		for (i = 0; i<26; i++)
		{	if(alph[i])
			printf("The letter '%c' appears %d time(s).\n", i+'a', alph[i]);	
		}
		continue;
	}
	case 8:
	{		int m1[3][3], m2[3][3], m3[3][3] = {0};
			int a,b;
			int i;
			int max = 0;
			float fw;

			printf("Enter matrix A:\n");

			for(a = 0; a<3; a++)	{
				for(b = 0; b<3; b++)	{
					scanf("%d", &m1[a][b]);}}
			
			printf("\n");
			printf("Product matrix B:\n");

			for(a = 0; a<3; a++)	{
				for(b = 0; b<3; b++)	{
					scanf("%d", &m2[a][b]);}}
			printf("\n");
			
			for(a=0; a<3; a++)	{
				for(b=0; b<3; b++)	{
					for(i=0; i<3; i++)	{
						m3[a][b] += m1[a][i]*m2[i][b];}}}
						
			for(a=0; a<3; a++)	{
				for(b=0; b<3; b++)	{
					if (max<m3[a][b])
						max = m3[a][b];	}}
					
			
	
			printf("Product matrix C:");
			for(a = 0; a<3; a++)	{
				printf("\n");
				for(b = 0; b<3; b++)	{
					printf("%*d ",fw, m3[a][b]);}}
			printf("\n");
			continue;
	}
	case 0: return 0;
}}//while
}//main
