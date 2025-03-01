#include <iostream>
using namespace std;
int main(){
	cout <<"podaj liczbe: "<<endl;
    int a;
    cin >> a;
    
if(a%2==0){
    cout<<"liczba jest parzysta"<<endl; 
}
else{
    cout<<"liczba nie jest parzysta"<<endl;
}

if(a%3==0){
    cout<<"liczba jest podzielna przez 3"; 
}
else{
    cout<<"liczba nie jest podzielna przez 3";
}
    return 0;
}