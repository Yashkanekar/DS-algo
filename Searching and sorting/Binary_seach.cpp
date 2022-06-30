#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val){
    int start = 0;
    int end = n-1;
    int mid = start;


    while ( start <= end ){

        mid = (start + end)/2;

        if( val < input[mid] ){
            end = mid - 1;
        }

        else if( val > input[mid] ){
            start = mid + 1;
        }
        else{
            return mid;
        }

    }
    return -1;
}

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int x;
	cin >> x;

	cout << binarySearch( input, size, x )<< endl;
}