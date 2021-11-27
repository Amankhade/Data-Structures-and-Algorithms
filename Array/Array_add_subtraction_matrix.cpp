//WAP to perform addition,subtraction,multiplication and division on two matrices

#include <iostream>
using namespace std;
int main()
{
    int i, j, r, c;
    char operator_, check;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of coloumns: ";
    cin >> c;
    float arr1[r][c], arr2[r][c];

    // taking input from the user for 1st matrix..

    cout << "Enter the elements of 1st matrix..." << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter the element a" << i + 1 << j + 1 << ":";
            cin >> arr1[i][j];
        }
    }

    // taking input from the user for 2nd matrix..

    cout << "Enter the elements of 2nd matrix..." << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter the element a" << i + 1 << j + 1 << ":";
            cin >> arr2[i][j];
        }
    }

    //Taking input for operation
    do
    {
        cout << "Enter the operation that will be perform on the two matrices(+ or -):";
        cin >> operator_;
        switch (operator_)
        {
        case '+':

            cout << "Sum of the matrices :" << endl;

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    cout << arr1[i][j] + arr2[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case '-':

            cout << "Subtraction of the matrices :" << endl;

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    cout << arr1[i][j] - arr2[i][j] << " ";
                }
                cout << endl;
            }
            break;
            cout << "Not valid operation...!";
            break;
        }
            cout << "Do you want to perform any other operation(+ or -) on these matrices..?" << endl<<"If yes then press Y or y." << endl;
            cin >> check;
        
    } while (check == 'Y' || check == 'y');

    return 0;
}
