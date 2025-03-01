#include <iostream>
using namespace std;
int main(){
	cout <<"podaj wynik z egzaminu w punktach: "<<endl;
    short a;
    cin >> a;
	if(a<=49) cout << "niedostateczna";
	if((a >= 50) && (a <= 69)) cout << "ocena: dostateczna";
	if((a >= 70) && (a <= 84)) cout << "ocena: dobra";
	if((a >= 85) && (a <= 99)) cout << "ocena: bardzo dobra";
	if(a==100) cout << "ocena: celujaca";
    return 0;
}