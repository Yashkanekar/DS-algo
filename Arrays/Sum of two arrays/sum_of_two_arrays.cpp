/*
	problem link: https://classroom.codingninjas.com/app/classroom/me/13935/content/253793/offering/3452457/problem/22

*/
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int k = max(size1, size2);

    int i = size1 - 1;
    int j = size2 - 1; 
    int carry = 0;

    while(i >= 0 && j >= 0){
        int sum = (input1[i] + input2[j] + carry);
            output[k]= sum % 10;
            carry = sum / 10;

            i--;
            j--;
            k--;
    }

    while(i >= 0){
        int sum = input1[i] + carry;
            output[k] = sum % 10;
            carry = sum / 10;
            i--;
            k--;
    }

    while(j >= 0){
        int sum = input2[j] + carry;
            output[k] = sum % 10;
            carry = sum / 10;
            j--;
            k--;
    }
    output[0] = carry;
}