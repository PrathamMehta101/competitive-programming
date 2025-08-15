#include<iostream>
using namespace std;

string s;
int nb, ns, nc;
int pb, ps, pc;
int r;
int burgers=0;
int b_req=0, s_req=0, c_req=0;

bool check_can_make_burger(int nb, int ns, int nc) {
    if((nb - b_req >= 0) && (ns - s_req >= 0) && (nc - c_req >= 0)) {
        return true;
    } else {
        return false;
    }
}

void make_burgers(int nb, int ns, int nc, int pb, int ps, int pc, int r) {

    if(r <= 0) return;

    if(check_can_make_burger(nb, ns, nc)) {
        burgers++;
        nb -= b_req;
        ns -= s_req;
        nc -= c_req;
    } else {
        if(nb <= 0) {
            // buy bread
            r -= pb;
            nb++; 
        } else if (ns <= 0) {
            // buy sausage
            r -= ps;
            ns++;
        } else {
            // buy cheese
            r -= pc;
            nc++;
        }
        make_burgers(nb, ns, nc, pb, ps, pc, r);
    }
}


int main() {
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;


    for(int i=0; i<s.size(); i++) {
        if(s[i] == 'B') b_req++;
        else if(s[i] == 'S') s_req++;
        else c_req++;
    }
    
    make_burgers(nb, ns, nc, pb, ps, pc, r);
    cout << burgers;


    return 0;
}