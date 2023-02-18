// a simple algorithm that allows you to guess multiples of 4 //until you find all the multiples that add up to 1000 as the //final sum

#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdlib>

using namespace std;

int s, num, n;
char again;

int main() {
  cout<<"Guess the multiple of 4";
  s=0;
  n=0;
  do {
    do {
    cin>>num;
    if((num%4)==0) {
      s=s+num;
      n=n+1;
    } else {
      cout<<"try again you didn't guess any multiple";
    }
  }while(!(s==1000));
     cout<<"You reached the result of 1000 and you guessed "        <<n;
    
    cout<<"would you like to rerun the program(y/n): ";
    cin>>again;
    if(again=='n') {
      cout<<"happy you tried the program, follow me on Twitter       if you want";
    } else {
      //nothing
    }
  }while(again=='y');
}
