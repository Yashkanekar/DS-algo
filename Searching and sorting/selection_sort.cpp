#include <iostream>
using namespace std;

void selectionSort( int input[], int n ){

	for( int i = 0; i < n-1 ; i++ ){

	int min = input[i];
	int minIndex = i;
	for( int j = i+1 ; j < n; j++ ){

	    if (input[j] < min){
			min = input[j];
			minIndex = j;
	    }
    }

	int temp = input[i];
	input[i] = min;
	input[minIndex] = temp;		

	}
}

int main( ){

	int input[] = {6 ,8 , 4, 2, 10, 1};
	selectionSort( input, 6 );

	for( int i = 0; i < 6; i++ ){
		cout << input[i] << " " ;
	}
}