#include <iostream>
#include <cmath>
#include <string>
//no validation ~,~

using namespace std;

struct allIn {
string divisionName;
double sales1, sales2, sales3, sales4, totalAnnualSales, totalAverageQuarter;
};

int main()
{
    allIn East;
    East.divisionName = "East";
    East.sales1;
    East.sales2;
    East.sales3;
    East.sales4;

    allIn West;
    West.divisionName = "West";
    West.sales1;
    West.sales2;
    West.sales3;
    West.sales4;

    allIn North;
    North.divisionName = "North";
    North.sales1;
    North.sales2;
    North.sales3;
    North.sales4;

    allIn South;
    South.divisionName = "South";
    South.sales1;
    South.sales2;
    South.sales3;
    South.sales4;

    cout << East.divisionName << " department." << endl;
    cout << "First Quarter Sales: "<< endl; cin >> East.sales1;
    cout << "Second Quarter Sales: "<< endl; cin >> East.sales2;
    cout << "Third Quarter Sales: "<< endl; cin >> East.sales3;
    cout << "Fourth Quarter Sales: "<< endl; cin >> East.sales4;

    cout << West.divisionName << " department." << endl;
    cout << "First Quarter Sales: "<< endl; cin >> West.sales1;
    cout << "Second Quarter Sales: "<< endl; cin >> West.sales2;
    cout << "Third Quarter Sales: "<< endl; cin >> West.sales3;
    cout << "Fourth Quarter Sales: "<< endl; cin >> West.sales4;

    cout << North.divisionName << " department." << endl;
    cout << "First Quarter Sales: "<< endl; cin >> North.sales1;
    cout << "Second Quarter Sales: "<< endl; cin >> North.sales2;
    cout << "Third Quarter Sales: "<< endl; cin >> North.sales3;
    cout << "Fourth Quarter Sales: "<< endl; cin >> North.sales4;

    cout << South.divisionName << " department." << endl;
    cout << "First Quarter Sales: "<< endl; cin >> South.sales1;
    cout << "Second Quarter Sales: "<< endl; cin >> South.sales2;
    cout << "Third Quarter Sales: "<< endl; cin >> South.sales3;
    cout << "Fourth Quarter Sales: "<< endl; cin >> South.sales4;

    allIn totalA;
    totalA.totalAnnualSales = East.sales1 +East.sales2+East.sales3+East.sales4+
                                West.sales1+West.sales2+West.sales3+West.sales4+
                                North.sales1+North.sales2+North.sales3+North.sales4+
                                South.sales1+South.sales2+South.sales3+South.sales4;

    allIn totalQ;
    totalQ.totalAverageQuarter = ((East.sales1 +East.sales2+East.sales3+East.sales4)/4)+
                                ((West.sales1+West.sales2+West.sales3+West.sales4)/4)+
                                ((North.sales1+North.sales2+North.sales3+North.sales4)/4)+
                                ((South.sales1+South.sales2+South.sales3+South.sales4)/4);

    cout << "Total Annual Sales: $" << totalA.totalAnnualSales <<endl;
    cout << "Average Quarterly Sales: $" << totalQ.totalAverageQuarter <<endl;


    return 0;
}
