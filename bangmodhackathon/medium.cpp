#include <bits/stdc++.h>
using namespace std;

struct box
{
    int idx ;
    int max_value ;
    double value ; 
};

bool sort_idx (box a , box b) {return a.idx < b.idx ;}
bool sort_value (box a , box b) {return a.max_value > b.max_value ;}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n ; cin >> n ;
    double p ; cin >> p ;
    vector<box> world ; for (int i = 0; i < n ; i++) {int tmp ; cin >> tmp ; world.push_back({i , tmp , 0});}
    vector<box> answer ;

    sort(world.begin(), world.end(),sort_value);

    while (!world.empty()) {

        box this_box = world[world.size()-1];

        if (this_box.max_value * world.size() <= p ){
            p -= this_box.max_value; 
            this_box.value = this_box.max_value ;
            answer.push_back(this_box) ;
            world.pop_back();
        }
        else {
            for (auto a : world) {a.value = p / world.size() ; answer.push_back(a) ; }
            break;
        }
    }
    sort(answer.begin(), answer.end(),sort_idx);
    for (auto a : answer) {
        if (a.value == int(a.value)) cout << fixed << setprecision(0) <<  a.value ;
        else cout << fixed << setprecision(2) <<  a.value ;
        cout << "\n" ;
    }
}