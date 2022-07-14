/*
	problem link: https://classroom.codingninjas.com/app/classroom/me/13935/content/253795/offering/3452479/problem/1106
	Insertion sort similar approach, place all the empty spaces to the end;
*/

void trimSpaces(char input[]) {
    int k = 0;
    for(int i = 0; input[i] != '\0' ; i++){
        if(input[i] != ' '){
            input[k] = input[i];
            k++;
        }
    }    
    input[k] = '\0';
}