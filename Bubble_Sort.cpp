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

    cout << "\nThe Array Is: {";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size-1)
        {
            cout << ",";
        }
    }
    cout << "}";

    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nAfter Bubble Sort Now The Array Is: {";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size-1)
        {
            cout << ",";
        }
    }
    cout << "}" << "\n\n";

    delete[] arr;

    return 0;
}
