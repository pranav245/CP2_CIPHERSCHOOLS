#include<iostream>
#include<map>
#include<list>
using namespace std;

class Graph{
	map<string, list<pair<int,string> > > adjList; 

public:
	Graph(){
	}

	void addEdge(string u,string v,int w=1,bool bidir=true){
		adjList[u].push_back(make_pair(w,u));
		if(bidir){
			adjList[v].push_back(make_pair(w,u));
		}
	}
	void print(){

		for(auto p:adjList){
			string keyCity = p.first;
			auto neigbours = p.second; //list of neigbours

			cout<<keyCity<<"->";
			for(auto city:neigbours){
				cout<<"["<<city.second<<","<<city.first<<"]";
			}
			cout<<endl;
		}
	}
};


int main(){
	Graph g;
	g.addEdge("Delhi","Chandigarh",10);
	g.addEdge("Mumbai","Chennai",5,false);
	g.addEdge("Kolkata","Mumbai",3);
	g.addEdge("Delhi","Kolkata");
	g.addEdge("Mumbai","Delhi",6);
	
	g.print();
	return 0;
}
