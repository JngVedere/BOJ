//BOJ 12790 - BRONZE 3
//https://www.acmicpc.net/problem/12790
#include <iostream>
using namespace std;
int t, hp, mp, att, def, add_hp, add_mp, add_att, add_def, res_hp, res_mp, res_att, res;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--){
        cin >> hp >> mp >> att >> def >> add_hp >> add_mp >> add_att >> add_def;
        res_hp = (hp + add_hp < 1 ? 1 : hp + add_hp);
        res_mp = (mp + add_mp < 1 ? 1 : mp + add_mp);
        res_att = (att + add_att < 0 ? 0 : att + add_att);

        res = res_hp + 5 * res_mp + 2 * res_att + 2 * (def + add_def);
        cout << res <<"\n";
    }
}