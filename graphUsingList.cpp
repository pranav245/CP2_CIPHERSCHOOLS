#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{

	list<pair<int,int>> *l; 
	int V;
public:
	Graph(int maxSize){
		V = maxSize;
		l = new list<pair<int,int>>[maxSize];
	}

	void addEdge(int u,int v,int wt=1,bool bidir=true){
		l[u].push_back(make_pair(v,wt));
		if(bidir){
			l[v].push_back(make_pair(u,wt));
		}
	}
	void print(){
		
		for(int i=0;i<V;i++){
			int node = i;

			cout<<"Node "<<node<<"->";
			
			auto neigbours = l[node];
			
			for(auto n:neigbours){
				cout<<"["<<n.first<<", wt="<<n.second<<"]";
			}
			cout<<endl;
		}
	}
};


int main(){

	Graph g(5);
	g.addEdge(0,1,12);
	g.addEdge(0,2,19);
	g.addEdge(1,2,3);
	g.addEdge(2,3,false);
	g.addEdge(2,4,6,false);

	g.print();

	return 0;
}
