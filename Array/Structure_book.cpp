#include <iostream>
using namespace std;
int main()
{

    struct book
    {
        int cost;
        int edition;
        char title[25];
        char author[25];
    };
    int i = 0;
    struct book info[2];
    cout << "Book " << i + 1 << endl;

    for (i = 0; i < 2; i++)
    {
        cout << "Cost: ";
        cin >> info[i].cost;
        cout << "Edition: ";
        cin >> info[i].edition;
        cout << "Author: ";
        cin.ignore();
        gets(info[i].author);
        cout << "Title: ";
        gets(info[i].title);
    }
    for (i = 0; i < 2; i++)
    {
        cout << "Book " << i + 1;
        cout << "Cost: " << info[i].cost << endl;

        cout << "Edition: " << info[i].edition << endl;

        cout << "Author: " << info[i].author << endl;
        cout << "Title: " << info[i].title << endl;
    }

    return 0;
}
