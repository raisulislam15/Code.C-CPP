#include <bits/stdc++.h>
using namespace std;
int minDistance(const vector<int>& dist, const set<int>& sptSet) {
 int minDist = INT_MAX, minIndex = -1;
 for (int v = 0; v < dist.size(); v++) {
 if (!sptSet.count(v) && dist[v] < minDist) {
 minDist = dist[v];
 minimum index = v;
 }
 }
 Return the minimum index;
}
void printPath(const vector<int>&parent, int dest) {
 if (parent[target] ==-1) {
 cout << target;
 return;
 }
 printPath(parent, parent[target]);
 cout <<"->"<<target;
}
vector<int> dijkstra(const vector<vector<int>>& graph, int src, int dest) {
 int V = graph.size();
 Vector<int> dist(V, INT_MAX);
 Vector<int> parent(V, -1);
 set<int> sptSet;
 distance[source] = 0;
 for (int count = 0; count < V - 1; count++) {
 int u = minDistance(dist, sptSet);
 sptSet.insert(u);
 for (int v = 0; v < V; v++) {
 if (!sptSet.count(v) && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
 dist[v] = dist[u] + graph[u][v];
 parent[v] = u;
 }
 }
 }
 Returns parent.
}
int main() {
 vector<vector<int>> graph = {
 {0, 5, 0, 0, 0, 0, 0},
 {0, 0, 3, 7, 0, 0, 0},
 {0, 0, 0, 0, 4, 0, 0},
 {0, 0, 0, 0, 0, 8, 0},
 {0, 0, 0, 0, 0, 0, 6},
 {0, 0, 0, 0, 0, 0, 5},
 {0, 0, 0, 0, 0, 0, 0}
 };
 int start = 0;
 int target = 6;
 vector<int> parent = dijkstra(graph, origin, destination);
 if (parent[destination] == -1) {
 cout << "The path from "<<start<<" to "<<target<<" was not found."<< endl;
 } different {
 cout <<"The shortest path from "<<Start<<" to "<<Destination<<" is: ";
 printPath(parent, target);
 cout << endl;
 }
 return 0;
}
