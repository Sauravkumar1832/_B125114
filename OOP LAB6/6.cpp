#include <iostream>
using namespace std;

int longestEpisode(int *ptr, int n){
    int longest = *ptr;

        for (int i = 1; i < n; i++){
        ptr++;

        if (*ptr > longest){
            longest = *ptr;
        }
    }

    return longest;
}

int main()
{
    int duration[6] = {35, 42, 28, 55, 40, 50};

    int result = longestEpisode(duration, 6);

    cout << "Longest episode duration: "
         << result << " minutes";

    return 0;
}