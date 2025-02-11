#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> cards;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        cards.push_back(num);
    }
    int s=0,d=0,turn=0, number=0;
    for(int i=0;i<n-1;i++){
        if(cards[0]>cards[cards.size()-1]){
            number = cards[0];
            cout<<"cards[0] = "<<cards[0]<<"when i = "<<i<<endl;
            
        }else if(cards[0]<cards[cards.size()-1]){
            number = cards[cards.size()-1];
            cout<<"cards[-1] = "<<cards[cards.size()-1]<<"when i = "<<i<<endl;
            
    }
    cards.erase(remove(cards.begin(), cards.end(), number), cards.end());
    cout<<"number is equal "<<number<<endl;
        if(turn == 0){
            s = s + number;
            turn = 1;
        }else if(turn == 1){
            d = d + number;
            turn = 0;
        }
       
    }
    if(turn == 0){
            s = s + cards[0];
        }else if(turn == 1){
            d = d + cards[0];
        }    
    
    cout <<s<<" "<<d;

    return 0;
}

//https://codeforces.com/contest/381  conest link