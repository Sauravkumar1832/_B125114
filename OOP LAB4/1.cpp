#include <iostream>
using namespace std;

class Diary
{
private:
    string ownerName;
    int numberOfEntries;
    string lastEntry;

public:
//constructor
    Diary(string name, int entries, string entry)
    {
        ownerName = name;
        numberOfEntries = entries;
        lastEntry = entry;
    }

    friend void displayDiary(Diary d);
};

void displayDiary(Diary d)
{
    cout << "Owner Name: " << d.ownerName << endl;
    cout << "Number of Entries: " << d.numberOfEntries << endl;
    cout << "Last Entry: " << d.lastEntry << endl;
}

int main()
{
    Diary d("Saurav", 25, "Today I studied C++.");

    displayDiary(d);

    return 0;
}