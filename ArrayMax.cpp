#include<iostream>
using namespace std;

int main()
{
    int arr[] = {11,12,21,42,55,67,9,65,49,54,67};
    int size = 11;

    int maxi = INT8_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    cout<< "Maximum no is " << maxi  <<endl;
    return 0;
}