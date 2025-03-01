#include <iostream>
using namespace std;
int main(){
	cout <<"podaj pierwsza liczbe: "<<endl;
    int a;
    cin >> a;
    cout <<"podaj druga liczbe: "<<endl;
	int b;
    cin >> b;
    cout << "suma: "<<a+b<<endl;
    int c = a+b;
    
if(c%2==0){
    cout<<"suma jest liczba parzysta"; 
}
else{
    cout<<"suma jest liczba nieparzysta";
}
    return 0;
}