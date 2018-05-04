
#include<iostream>
#include<queue>
#include<fstream>
using namespace std;

string itos(int n) {
    string numChange="";   //create empty string
    bool negative = false;    
    if( n == 0 || n == -0){
         return "0";
    }
    //check for negative
    else if(n < 0){
    negative = true;
    n = n * -1; //changes back to positive
    }
    while(n)
    {
        int x=n%10;
        n/=10;
        char i='0';
        i=i+x;
        numChange=i+numChange;      //append new character at the front of the string
    }
    if(negative){
        return "-" + numChange;
    }
    return numChange;
}


int main(int argc, char* argv[]){
	int n = atoi(argv[1]);
	cout << "file"+ itos(n)+".txt" << endl;
	return 0;
}

