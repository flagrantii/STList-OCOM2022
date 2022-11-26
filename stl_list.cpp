#include <bits/stdc++.h>
using namespace std;

void show(list<int> l) {
    list<int> :: iterator t;
    for (t=l.begin();t!=l.end();t++) {
        cout<<*t<<" ";
    }
}

int main() {
    int n,m,x;
    char cmd;
    cin>>n;
    while(n--){
        list<int> l;
        cin>>m;
        while(m--) {
            cin>>cmd;
            if(cmd=='1'){
                cin>>x;
                l.push_back(x);
                show(l);
            }
            if(cmd=='2'){
                l.sort();
                show(l);
            }
            if(cmd=='3'){
                l.reverse();
                show(l);
            }
            if(cmd=='4'){
                cout<<l.size()<<" ";
            }
            if(cmd=='5'){
                show(l);
            }
            if(cmd=='6'){
                l.pop_back();
                show(l);
            }
            if(cmd=='7'){
                l.pop_front();
                show(l);
            }
            if(cmd=='8'){
                cin >> x;
                l.push_front(x);
                show(l);
            }
        }
    }
}
