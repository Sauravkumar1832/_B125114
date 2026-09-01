#include <iostream>
using namespace std;

void update(int *p, int n)
{

    for (int i = 0; i < n; i++)
    {
        *(p + i) = *(p + i) + 5;
    }
}

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    int marks[n];
    cout << "enter marks of each student:";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    cout << "before modification" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " " << endl;
    }

    update(marks, n);
    cout << "after modification" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " " << endl;
    }
    return 0;
}