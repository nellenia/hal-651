#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct allIn {
int totalRainfall;
double highTemp, lowTemp, averageTemp;
};

//void getTotalRainfall(double);
//oid getHighTemp(double);
//void getLowTemp(double);
//void averageTemp(double);
enum months {January, February,March,April,
            May, June, July, August,
            September,October,November,December};

int main()
{
    const int SIZE = 2;
    allIn months[SIZE];

    double total;
    double total2 = 0;
    double total3 = 0;
    // for inches each month

    for (int i = 0; i < SIZE; i++){
        cout << "Enter the rainfall inches in month #"
        << (i+1)<<": ";
        cin >> months[i].totalRainfall;
        total += months[i].totalRainfall;

        cout << "Enter the highest temperature (Fahrenheit) in month #"
        << (i+1)<<": ";
        cin >> months[i].highTemp;
        total2 += months[i].highTemp;

        cout << "Enter the lowest temperature (Fahrenheit) in month #"
        << (i+1)<<": ";
        cin >> months[i].lowTemp;
        total3 += months[i].lowTemp;

    }

    //for total inches each months
    cout << "The average monthly rainfall : " << total / SIZE << " inches."<<endl;
    cout <<"The total rainfall each month : " << total <<" inches."<<endl;

    int highest = 0;
    int lowest = 999;
    for (int i = 0; i < SIZE; i++){
        if (months[i].highTemp > highest){
            highest = months[i].highTemp;
        }
        if (months[i].lowTemp < lowest){
            lowest = months[i].lowTemp;
        }
    }

    cout << "The highest temperature in a year: " << highest << " Fahrenheit"<<endl;
    cout << "The lowest temperature in a year: " << lowest << " Fahrenheit"<< endl;
    cout << "The Monthly Average Temperature: " << (total2 + total3) / SIZE << " Fahrenheit" <<endl;


    return 0;
}
