#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Size Of The Array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter Elements Of The Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout << "The Array Is: {";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<",";
    }
    cout << "}";

    int temp;
    int temp_size = size;
    for (int i = 0; i < temp_size; i++)
    {
        if(arr[i]==0)
        {
            temp_size = temp_size - 1;
            temp = arr[temp_size];  
            arr[temp_size] = arr[i];
            arr[i] = temp;
        }       
    }
    cout << "\nNow The Array Is: {";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<",";
    }
    cout << "}";

    delete[] arr;
    
    return 0;
}
