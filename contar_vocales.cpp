#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string x;
    map<char,int> mymap;
    cin >> x;

    mymap.insert ( pair<char,int>('a',0) );
    mymap.insert ( pair<char,int>('e',0) );
    mymap.insert ( pair<char,int>('i',0) );
    mymap.insert ( pair<char,int>('o',0) );
    mymap.insert ( pair<char,int>('u',0) );

    for(int i=0; i<x.size(); i++){

        if(mymap.find(x[i]) != mymap.end()){
            mymap.find(x[i])->second+=1;
        }
    }

    for (auto it=mymap.begin(); it!=mymap.end(); ++it)
			std::cout << it->first << " => " << it->second << '\n';


}
