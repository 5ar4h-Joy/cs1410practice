#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "Enter day";
    string day;
    cin >> day;
    if(day == "sun" || "sat"){
        cout << "Weekend!" << endl;
    } else {
        cout << "Weekday!" << endl;
    }
    return 0;
}