// LAB: Song data
/*=====================================================================================
File descrition: This is a program that inputs the song data and output that data. It 
                 uses a structure named SongData to store the following information 
                 about a song.
=====================================================================================*/

#include <iostream>

using namespace std;

//constant
const int MAX_CHAR = 25;

//struct that holds songs data
struct SongData {
    char title[MAX_CHAR];
    char artist[MAX_CHAR];
    int yearReleased;
};
 
//function prototypes
void getSongData(SongData &data);
void printSongData(SongData data);

int main() {
    SongData data;
    //call functions
    getSongData(data);
    printSongData(data);

    return 0; 
}

//function that inputs the song data
 void getSongData(SongData &data) {
    cin.get(data.title, MAX_CHAR, '\n');
    cin.ignore(1000, '\n');
    cin.get(data.artist, MAX_CHAR, '\n');
    cin.ignore(1000, '\n');
    cin >> data.yearReleased;
    cin.ignore(1000, '\n');
 }
 
//function that prints the song data
 void printSongData(SongData data) {
    cout << "Title: " << data.title << endl;
    cout << "Artist: " << data.artist << endl;
    cout << "Year: " << data.yearReleased << endl;
 }
