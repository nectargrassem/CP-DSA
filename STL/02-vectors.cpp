#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int> v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i];
    }
    cout << endl;
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    printVec(v);

    vector<int> v4(5); 

    vector<int> v1(3,5); 
    v1.push_back(7);
    v1.pop_back(); 

    vector<int> &v2 = v1;

    printVec(v1);

}


