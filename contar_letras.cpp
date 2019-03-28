#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string x;
    map<char,int> mymap;
    cin >> x;
    
    for(int i=0; i<x.size(); i++){

        if(mymap.find(x[i]) == mymap.end()){ //primera vez encontrado
            mymap.insert ( pair<char,int>(x[i],1) );
        }
        else{
            mymap.find(x[i])->second+=1;
        }
    }

    for (auto it=mymap.begin(); it!=mymap.end(); ++it)
			std::cout << it->first << " => " << it->second << '\n';


}
