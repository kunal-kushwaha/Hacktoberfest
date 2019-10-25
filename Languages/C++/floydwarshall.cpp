#include<bits/stdc++.h>
#define inf 100000
using namespace std;
int adjMat[10][10]={
        {0,3,inf,7},
        {8,0,2,inf},
        {5,inf,0,1},
        {2,inf,inf,0}
    };
void FloydWarshall(int V){
    int temp[V][V];
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                temp[i][j]=min(adjMat[i][j],adjMat[i][k]+adjMat[k][j]);
            }
        }

        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                adjMat[i][j]=temp[i][j];
            }
        }
    }

    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            cout<<setw(3)<<adjMat[i][j];
        }
        cout<<"\n";
    }
}
int main(){
    int V=4;
    FloydWarshall(V);
}