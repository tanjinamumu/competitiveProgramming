#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


int main() {
	  /*
	  *
	  * Adjacency Matrix
	  * uweighted
	  *
	  * 4
		0 1 1 1
		1 0 0 1
		1 0 0 1
		1 0 1 0
	  *
	  * */
	//freopen("inpUnWtGraphsVid.txt", "r", stdin);

	int n;
	cin >> n; // number of nodes;

	 bool adjMat[n+2][n+2];
	 memset(adjMat, 0, sizeof adjMat);

	 for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			int v;
			cin >> v;
			adjMat[i][j] = v;

		}
	 }


	 cout << "Adjacency Matrix unweighted: " << endl;
	 for(int i=0; i<=n; i++) {
		for(int j=0; j<=n; j++) {
			cout << adjMat[i][j] << " ";
		}
		cout << endl;
	 }


	 /*
	  *
	  * Adjacency List
	  * Unweighted
	  *
	  *
	  * 4 5
		1 2
		1 3
		1 4
		2 4
		3 4
	  *
	  * */



	 int m;
	 cin >> n >> m;  // number of edges
	 vector<int> adjList[n+2];
	 for(int i=0; i<m; i++) {
		 int u, v;
		cin >> u >> v;
		adjList[u].push_back(v);
        //adjList[v].push_back(u);   //if bidirectional/ undirected

	 }

	  cout << "Adjacency List unweighted : " << endl;

	 for(int i=0; i<=n; i++) {
		 cout << i << " --> ";  //current position prints.
		for(int j=0; j< (int) adjList[i].size(); j++) {
			cout << adjList[i][j] << " ";
		}
		cout << endl;
	 }
}
