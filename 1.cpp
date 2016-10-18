#include <iostream>

using namespace std;



struct movieData {
string title, director, yearReleased, runningTime;
};

void printMovieData(movieData);

int main()
{
    movieData devilWearsPrada;
    devilWearsPrada.title = "Devil's Wear Prada";
    devilWearsPrada.director = "David Frankel";
    devilWearsPrada.yearReleased = "2006";
    devilWearsPrada.runningTime = "110 minutes";

    movieData theBeautyInside;
    theBeautyInside.title = "The Beauty Inside";
    theBeautyInside.director = "Jong-Yeol Baek";
    theBeautyInside.yearReleased = "2015";
    theBeautyInside.runningTime = "127 minutes";

    printMovieData(devilWearsPrada);
    printMovieData(theBeautyInside);
}

void printMovieData(movieData deeper){
 cout << "Title: "<< deeper.title << endl;
 cout <<"Director: "<<deeper.director <<endl;
 cout <<"Year Released: "<<deeper.yearReleased<<endl;
 cout <<"Running time: "<<deeper.runningTime<<endl;

}
