#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int ta; double da; string sa;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    string tmp;

    getline(cin, tmp);
    ta = stoi(tmp);

    getline(cin, tmp);
    da = stod(tmp);

    getline(cin, sa);
    // Print the sum of both integer variables on a new line.
    cout<<ta+i<<endl;
    // Print the sum of the double variables on a new line.
    double test =da+d;
    cout<<fixed<<setprecision(1)<<test<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s<<sa<<endl;
    return 0;