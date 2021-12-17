#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    ifstream number("score.txt");
    string textline;
    float sum = 0;
    float sumpow_2 = 0;
    int N = 0;

    while (getline(number,textline))
    {
        sum+= atof(textline.c_str());
        N++;
    }

    number.close();
    number.open("score.txt");

    while (getline(number,textline))
    {
        sumpow_2 += pow(atof(textline.c_str()),2);
    }

    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/N << endl;
    cout << "Standard deviation = " << sqrt((sumpow_2/N)-pow(sum/N,2));
}

