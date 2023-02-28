#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    int mx=0,mn=0;
    int input;
    vector<int> band;
    multiset<int> area;
    int cnt;

    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> input;
        band.push_back(input);
    }

    cnt=0;
    for(int i=0;i<band.size();i++){
        if(band[i]) cnt++;
        else if(!band[i]&&cnt>0){
            area.insert(cnt);
            cnt=0;
        }
    }
    if(cnt) area.insert(cnt);
    mx+=*area.rbegin();
    mn+=*area.begin();

    for(int j=0;j<k;j++){
        cin >> input;
        int aff=1;
        band[input-1]=1;
        if(input-1<n-1){
            if(band[input]){
                int f=0;
                for(int i=input;band[i]&&i<n;i++) f++;
                aff+=f;
                area.erase(area.find(f));
            }
        }
        if(input-1>0){
            if(band[input-2]){
                int b=0;
                for(int i=input-2;i>=0&&band[i];i--) b++;
                aff+=b;
                area.erase(area.find(b));
            }
        }
        area.insert(aff);
        mx+=*area.rbegin();
        mn+=*area.begin();
    }
    cout << mx << "\n" << mn << "\n";
}
