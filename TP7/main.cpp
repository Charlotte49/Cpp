#include <iostream>
#include "Point.h"
#include <vector>
#include <ctype.h>
#include <string>

#define boolToString(b) (b ? "true" : "false")

using namespace std;

void pointTest()
{
    pointTest<int>();
    pointTest<float>();
}

template<typename T> void printVector(vector<T> v)
{
    cout << "[";
    int current=0;
    for(T i : v)
    {
        current++;
        cout<<i;
        if(current!=3)
        {
            cout<<",";
        }
    }
    cout << "]"<< endl;
}

void printLetters(){
    vector<char> letters = {'A', 'B', 'C'};
    printVector(letters);
}

void printNumbers(){
    vector<int> numbers = {1,2,3};
    printVector(numbers);
}

void printVectorTests(){
    printNumbers();
    printLetters();
}

bool isNumber(string s)
{
    int size=s.size();
    for(int i=0; i<size;i++)
    {
        if(!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

void isNumberTests(){
    cout << boolToString( isNumber("1") )<< endl;
    cout << boolToString( isNumber("42") ) << endl;
    cout << boolToString( isNumber("6PO") ) << endl;
    cout << boolToString( isNumber("R2D2") ) << endl;
}

void keepNumbersOnly(vector<string>& v)
{
    for(auto it = v.begin(); it!=v.end(); it++)
    {
        if(!isNumber(*it))
        {
            v.erase(it);
            it--;
        }
    }
}

void filterVectorTest(){
    vector<string> values = {"Z", "1", "A", "42", "E", "G", "0"};
    keepNumbersOnly(values);
    printVector(values);
}

void splitString(vector<string>& v)
{
    
}


void splitTests(){

    vector<string> operators = splitString("+ - / =");
    printVector(operators);

    vector<string> numbers = splitString("1,2,3,4,5", ",");
    printVector(numbers);

    vector<string> letters = splitString("A-B-C-D", "-");
    printVector(letters);
}


int main()
{
   // pointTest();
   // printVectorTests();
   //isNumberTests();
   filterVectorTest();

    return 0;
}