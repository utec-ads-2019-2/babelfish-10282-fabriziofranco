#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main(){

    string line, english,strange;
    map<string,string> dictionary;

    while(getline(cin,line)){
        if(line.empty())
            break;

        stringstream ss(line);

        ss >> english >> strange;

        dictionary[strange] = english;
    }

    while(cin>>strange){
        if(dictionary.find(strange)==dictionary.end())
            cout<<"eh";
        else
            cout<<dictionary[strange];
        cout<<endl;
    }

    return 0;
}