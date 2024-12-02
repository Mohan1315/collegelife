#include<iostream>
using namespace std;

int main(){
    int w;
    cin >> w;

    if ((w&1)==0 && w>2)
    {
        cout<< "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;

}

#include <iostream> 
int main(){int x;
std::cin>>x;
std::cout<<std::string((x%2==0&&x>2)?"YES":"NO");}