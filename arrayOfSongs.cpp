// LAB: Array of songs
/*=====================================================================================
File descrition: This is a program that inputs the song data and output that data. It 
                 creates an array to hold a structure named SongData. 
=====================================================================================*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAX_CHAR = 101;

struct SongData {
    char title[MAX_CHAR];
    char artist[MAX_CHAR];
    int yearReleased;
};

void loadSongs(ifstream &inFS, SongData dataArr[], int &num);
void printSongData(SongData dataArr[], int num);

int main() {
    SongData dataArr[50];
    ifstream inFS;
    int num = 0;
    
    inFS.open("songs.txt");
    if(!inFS){
       cout << "File failed to open" << endl;
       return 1;
    }

   loadSongs(inFS, dataArr, num);
   printSongData(dataArr, num);

    return 0; 
}

 void loadSongs(ifstream &inFS, SongData dataArr[], int &num) {
    inFS.get(dataArr[num].title, MAX_CHAR, ';');
    while(inFS) {
       inFS.ignore(1,';');
       inFS.get(dataArr[num].artist, MAX_CHAR, ';');
       inFS.ignore(1,';');
       inFS >> dataArr[num].yearReleased;
       inFS.ignore(100,'\n');
       num++;
       inFS.get(dataArr[num].title, MAX_CHAR, ';');
    }
    inFS.close();
 }
 
 void printSongData(SongData dataArr[], int num) {
    for (int i = 0; i < num; i++) {
       cout << left
            << setw(25) << dataArr[i].title 
            << setw(20) << dataArr[i].artist 
            << dataArr[i].yearReleased << endl;
    }
 }
