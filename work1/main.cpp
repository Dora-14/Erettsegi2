#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100][100];
    int n, m;
    ifstream in("input.txt");
    in >> m;
    in >> n;
    bool isTrue=false;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            in >> v[i][j];
        }
    }
    int x;
    cin >> x;
    for(int i=0; i<n; i++){
        if(v[i][m-1]==x){
            isTrue=false;
            break;
        }
    }
    for(int i=0; i<m; i++){
        if(v[n-1][i]==x){
            isTrue=true;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(v[1][i]==x){
            isTrue=true;
            break;
        }
    }
    for(int i=0; i<m; i++){
        if(v[1][i]==x){
            isTrue=true;
            break;
        }
    }
    if(isTrue){
        cout << "Da";
    }else{
      cout << "Nu";
    }
    return 0;
}
