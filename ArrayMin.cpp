//To find minimum no from Array using linear search;
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[] = {12,20,30,40,1};
    int size = 5;

    int mini = INT_MAX;

    for(int i=0; i<size; i++)
    if(arr[i] < mini)
    {
        mini = arr[i];
    }
    cout<<"Minimum no is " << mini <<endl;
    return 0;
}