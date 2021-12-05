#include <iostream>
using namespace std;
void LinearSearch(int arr[], int size, int element)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element found at index " << i << endl;
            break;
        }
        count++;
    }
    if (count == size)
    {
        cout << "Element not found in the given array." << endl;
    }
}
int main()
{
    int arr[10] = {5, 3, 9, 19, 1, 21, 43, 37, 20, 10};
    int size = 10, Search_element = 21;
    LinearSearch(arr, size, Search_element);
    return 0;
}