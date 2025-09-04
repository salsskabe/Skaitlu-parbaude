#include <iostream>
#include <string>
using namespace std;
int main() {

float skaitlis;
cout << "Ievadi skaitli: "<< endl;
cin >> skaitlis;

if (skaitlis == 0){
    cout << "Skaitlis ir 0";
}
else if (skaitlis > 0){
    cout << "Skaitlis ir pozitīvs";
}

else{
    cout << "Skaitlis ir negatīvs";
}

}