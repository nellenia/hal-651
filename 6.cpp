#include <iostream>
#include <iomanip>

using namespace std;

//const int SIZE = 50;

struct playerData {
//char name[SIZE];
string name;
int number, score;
};

int main()
{
    double totalScore = 0;
    const int NUM_PLAYERS = 2;
    playerData data[NUM_PLAYERS];


    for(int i = 0; i < NUM_PLAYERS; i++){

    cout << "Enter player("<<(i+1)<<")'s name: "; cin >>data[i].name;
    //cout << "Enter player("<<(i+1)<<")'s name: "; cin.getline(data[i].name, SIZE);

    cout << "Enter player("<<(i+1)<<")'s number: "; cin >> data[i].number;
    while(data[i].number < 0){
        cout << "Please enter positive number~" << endl;
        cin >> data[i].number;
    }

    cout << "Enter player("<<(i+1)<<")'s score: "; cin >> data[i].score;
    while(data[i].score < 0){
        cout << "Please enter positive number~" << endl;
        cin >> data[i].score;
    }

    totalScore += data[i].score;

    }

    for(int i = 0; i < NUM_PLAYERS; i++){

    cout << "Player("<<(i+1)<<")'s name: "; cout << data[i].name << endl;
    cout << "Player("<<(i+1)<<")'s number: "; cout << data[i].number <<endl;
    cout << "Player("<<(i+1)<<")'s score: "; cout << data[i].score<<endl;
    }
    cout << "Total scores earned: " << totalScore << endl;

    int highestPoints = 0;
    int number;
    string name;

    for (int i = 0; i < NUM_PLAYERS; i++){

        if(data[i].score > highestPoints){

            highestPoints = data[i].score;
            number = data[i].number;
            name = data[i].name;
        }
    }


cout <<"Highest scores: "<< highestPoints <<endl;
cout <<"The highest scores accomplished by player no: "<<number<<endl;
cout <<"The highest scores accomplished by player name: "<<name<<endl;

    return 0;
}
//cin.getline
//table
