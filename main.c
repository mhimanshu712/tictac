#include <stdio.h>

void printmat(char arr[][3]);
void display(char * s);
int cheak(char arr[][3]);

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
	

	display("./logo.map");
	
	
	
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

int check(char arr[][3]){
	//check horizontal
	for(int i=0;i<3;i++){
		char a = arr[i][0];
		if(a == arr[i][1] && a == arr[i][2]){
			if(a=='X') return 1;
			else if(a=='0') return 0;
		}
	}

	//check vertical
	for(int j=0;j<3;j++){
		char a = arr[0][j];
		if(a == arr[1][j] && a == arr[2][j]){
			if(a=='X') return 1;
			else if(a=='0') return 0;
		}
	}

	//check diagonal
	int b = arr[1][1];
	if((b==arr[0][0] && b== arr[2][2]) || (b==arr[0][2] && b==arr[2][0])){
		if(b=='X') return 1;
		else if(b=='0') return 0;
	}


	return -1;
}

