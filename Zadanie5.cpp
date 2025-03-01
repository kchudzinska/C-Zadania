#include <iostream>
using namespace std;
int main(){
	cout <<"podaj pierwsza liczbe: "<<endl;
    int a;
    cin >> a;
    cout <<"podaj druga liczbe: "<<endl;
	int b;
    cin >> b;
    cout << "suma: "<<a+b<<endl<<"różnica: "<<a-b<<endl<<"iloczyn: "<<a*b<<endl<<"iloraz: "<<a/b<<endl<<"reszta z dzielenia: "<<a%b;
    return 0;
}