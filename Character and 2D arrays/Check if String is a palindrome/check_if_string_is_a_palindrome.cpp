/*
	problem link: https://classroom.codingninjas.com/app/classroom/me/13935/content/253795/offering/3452471/problem/983
	
*/

int length(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

bool checkPalindrome(char str[]) {

    int i = 0;
    int j = length(str) - 1;

    while( i < j ){
        if(str[i] != str[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

