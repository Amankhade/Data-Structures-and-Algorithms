// selection sort
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {89, 20, 74, 11, 87, 46, 98, 23, 66, 27};
    int i, j, temp;

    cout << "Entered elements:\n";
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j]) // for ascending (arr[i]>arr[j])
            {                    // for descending (arr[i]<arr[j])
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout << "After sorting the elements:\n";
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
