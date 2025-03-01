#include <iostream>
using namespace std;
int main(){
	cout <<"podaj swoj wzrost w metrach: "<<endl;
    float h;
    cin >> h;
    cout <<"podaj swoja mase ciala w kilogramach: "<<endl;
    float m;
    cin >> m;
    float b = m/(h * h);
    
    cout <<"twoje bmi to: "<<b<<endl;
    
	if(b<18.5) cout << "twoj stan wagowy: niedowaga";
	if((b >= 18.5) && (b <= 25)) cout << "twoj stan wagowy: w normie";
	if((b > 25) && (b <= 29.9)) cout << "twoj stan wagowy: nadwaga";
	if(b>30) cout << "twoj stan wagowy: otylosc";
	
    return 0;
}