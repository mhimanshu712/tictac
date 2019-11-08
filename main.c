#include <stdio.h>

void printmat(char arr[][3]);
void display(char * s);

int main()
{
	char a[3][3] = {
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};
	
	char b[3][3] = {
		{' ','X',' '},
		{'0',' ',' '},
		{' ',' ','X'}
	};
	
	
	
	
}

void printmat(char arr[][3]){
	for(int i=0;i<3;i++){
		int j=0;
		printf("\t\t %c | %c | %c \n",arr[i][j++],arr[i][j++],arr[i][j]);
		if(i<2) printf("\t\t-----------");
		printf("\n");
	}
}

void display(char * s){
	FILE * fptr = fopen(s,"r");
	char buff[100];
	
	while(fgets(buff,100,fptr)){
		printf("%s",buff);
	}
}

