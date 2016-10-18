#include <iostream>

using namespace std;



struct movieData {
string title, director, yearReleased, runningTime;
double cost, revenue;
};

void printMovieData(movieData);

int main()
{
    movieData devilWearsPrada;
    devilWearsPrada.title = "Devil's Wear Prada";
    devilWearsPrada.director = "David Frankel";
    devilWearsPrada.yearReleased = "2006";
    devilWearsPrada.runningTime = "110 minutes";
    devilWearsPrada.cost = 42;
    devilWearsPrada.revenue = 326.5;

    movieData theBeautyInside;
    theBeautyInside.title = "The Beauty Inside";
    theBeautyInside.director = "Jong-Yeol Baek";
    theBeautyInside.yearReleased = "2015";
    theBeautyInside.runningTime = "127 minutes";
    theBeautyInside.cost = 4;
    theBeautyInside.revenue = 4.2;

    printMovieData(devilWearsPrada);
    printMovieData(theBeautyInside);
}

void printMovieData(movieData deeper){
 cout << "Title: "<< deeper.title << endl;
 cout <<"Director: "<<deeper.director <<endl;
 cout <<"Year Released: "<<deeper.yearReleased<<endl;
 cout <<"Running time: "<<deeper.runningTime<<endl;
 cout <<"Profit or loss: $"<<deeper.revenue - deeper.cost << " million" << endl;

}
