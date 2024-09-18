//
//  main.cpp
//  ca14
//
//  Created by Andrea d Cazares on 9/17/24.
//

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    float count;
    bool correct = false;
    cout<<"lets get a random number "<<endl;
    //rand number generator
int maxValue = 1000000;
 int minValue = 0;
 srand(time(0));
float firstVal = rand()%(maxValue - minValue+1) + minValue;
cout << firstVal << endl;

    cout<<" Now guess the secret number: "<<endl;

    while (!correct){
        cout << "Enter another number: ";
        cin >> count;
    
   if (count == firstVal) {
            cout << "congrats you guessed the right number!" << endl;
            correct = true;
        }
}
}
