#include <bits/stdc++.h> 

using namespace std;
 

//main code

vector<int> output(int **edges,int V,bool *visited,int si)
{
    vector<int>cena;
     queue<int>abc;
    abc.push(si);
    visited[si]=true;
    while(abc.size()!=0)
    {     
        int temp=abc.front();
         cena.push_back(temp);
        abc.pop();
       // cout<<temp<<" ";
       // visited[temp]=true;
        for(int i=0;i<V;i++)
        {
            if(i==temp)
                continue;
            
            if(edges[temp][i]==1)
            {
                if(visited[i]==false)
                {visited[i]=true;
                    abc.push(i);
                     
                }
                else
                    continue;
            }
        }
    }
    
    return cena;
}

int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
int **edges=new int*[V];
    for(int i=0;i<V;i++)
    { edges[i]=new int[V];
     for(int j=0;j<V;j++)
         edges[i][j]=0;
    }
    
    for(int i=0;i<E;i++)
    {   int b,c;
        cin>>b>>c;
         edges[b][c]=1;   
     edges[c][b]=1;
     
    }
   bool *visited=new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
   // int si=0;
//visited[0]=true;
   

vector<int>temp=output(edges,V,visited,0);
           
sort(temp.begin(),temp.end());
    
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
 cout<<endl;
    
   for(int i=0;i<V;i++)
   {
       if(visited[i]==false)
       {   // visited[i]=true;
           vector<int>temp=output(edges,V,visited,i);
           
sort(temp.begin(),temp.end());
    
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp.at(i)<<" ";
    }
 cout<<endl;
       }
   }

  return 0;
}
