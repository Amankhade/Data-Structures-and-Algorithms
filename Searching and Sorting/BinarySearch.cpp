#include <iostream>
using namespace std;
void BinarySearch(int *arr, int size, int element)
{
    int low = 0, high = size - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            cout << "Element found in the array at index " << mid << endl;
            break;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        cout << "Element not found in the given array." << endl;
    }
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22};
    int size = sizeof(arr) / sizeof(int), search_element = 20;
    BinarySearch(arr, size, search_element);
    return 0;
}