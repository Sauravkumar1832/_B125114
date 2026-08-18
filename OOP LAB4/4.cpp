#include<iostream>
#include<string>
using namespace std;

class Song{
    private:
    string songName;
    string artistName;
    float duration;
    public:
    Song(string sN,string aN,float d){
        songName=sN;
        artistName=aN;
        duration=d;
    }
    friend void compareSongs(Song s1,Song s2);
};
void compareSongs(Song s1,Song s2){
    cout<<"song1:"<<s1.songName<<endl;
    cout<<"artist:"<<s1.artistName<<endl;

    cout<<"song2:"<<s2.songName<<endl;
    cout<<"artist2:"<<s2.artistName<<endl;

    if(s1.duration==s2.duration){
        cout<<"same duration";
    }else if(s1.duration>s2.duration){
        cout<<"song1 is longer";
    }
     else cout<<"song 2 is longer";
}
int main(){
    string song1;
    string artist1;
    float duration1;

    cout<<"song1:";
    cin.ignore();
    getline(cin,song1);
    cout<<"artist1:";
    cin.ignore();
    getline(cin,artist1);
    cout<<"duration1:";
    cin>>duration1;

    string song2;
    string artist2;
    float duration2;

    cout<<"song2:";
    cin.ignore();
    getline(cin,song2);
    cout<<"artist2:";
    cin.ignore();
    getline(cin,artist2);
    cout<<"duration2:";
    cin>>duration2;

    Song s1(song1,artist1,duration1);
    Song s2(song2,artist2,duration2);

    compareSongs(s1,s2);
    
    return 0;

}