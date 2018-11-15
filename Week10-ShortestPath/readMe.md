
# [THE TWO ROUTES - 601A](http://codeforces.com/problemset/problem/601/A)

INFORMATIONS THAT ARE NEEDED IN THIS PROBLEM : 
- n towns (numbered 1 through n) 
- m bidirectional railways 
- x, y (pair of different town)
- u, v (point u connected to v, which makes a railway)

OTHER IMPORTANT INFORMATIONS:
- There is bidirectional road between towns x a  nd y if and only if there is no railway between them 
- Travelling to a different town using one railway or one rod always takes exactly one hour.
- A train and a bus leave town 1 at the same time, both have same destination. 
- Plan out routes for the vehicles which took the minimum number of hours. 
- Output one integer which is the smallest possible time of the later vehicle's arrival in town n
- if it is impossible, output -1. 

[SUBMISSION](http://codeforces.com/contest/601/submission/45770925)
The solution is by using shortest path algorithm, which is BFS, meaning that it is about finding a path between 2 vertices in a graph such that the total sum of the edges eights is minimum. 

	int bfs(int x) {
	queue < int > q;
	memset (a, -1, sizeof a);
	q.push(1); a[1] = 0;
	while (q.size()) { // a.k.a while queue is not empty
		int u = q.front();
		q.pop(); // dequeue a vertex from queue
		// enqueue all adjacent of u and v and mark them visited
		for (int v = 1; v <= n; v++)
			if (d[u][v] == x && a[v] == -1) {
				a[v] = a[u] + 1;
				if (v == n)	return a[v];
				q.push(v); 
			}
	}
	return -1;
	}

	int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		d[u][v] = d[v][u] = 1;
	}

	cout << bfs(1 - d[1][n]);

	return 0;		
	

# [Dijkstra? - 20C](http://codeforces.com/problemset/problem/20/C)

INFORMATIONS THAT ARE NEEDED IN THIS PROBLEM : 
- The vertices are enumerated from 1 to n. 
- Shortest path between the vertex 1 and the vertex n. 

[Submission](http://codeforces.com/contest/20/submission/45775158)
The solution is to use Dijkstra's Algorithm, which has these steps below:
- Set all vertices distances = infinity except for the source vertex, set the source distance = .
- Push the source vertex in a min-priority queue in the form (distance , vertex), as the comparison in the min-priority queue will be according to vertices distances.
- Pop the vertex with the minimum distance from the priority queue (at first the popped vertex = source).
- Update the distances of the connected vertices to the popped vertex in case of "current vertex distance + edge weight < next vertex distance", then push the vertex with the new distance to the priority queue.
- If the popped vertex is visited before, just continue without using it.
- Apply the same algorithm again until the priority queue is empty.

The first line contains two integers n and m (2 ≤ n ≤ 105, 0 ≤ m ≤ 105), where n is the number of vertices and m is the number of edges. Following m lines contain one edge each in form ai, bi and wi (1 ≤ ai, bi ≤ n, 1 ≤ wi ≤ 106), where ai, bi are edge endpoints and wi is the length of the edge.
It is possible that the graph has loops and multiple edges between pair of vertices.
Write the only integer -1 in case of no path. Write the shortest path in opposite case. If there are many solutions, print any of them.
	
	while (m--)
	{
	cin>>a>>b>>w;
	v[a].push_back(b);
	v[b].push_back(a);
	mp[{a,b}]=w;
	mp[{b,a}]=w;
	}

	for (i=2; i<=n; i++)
	d[i]=1e18;
	q.push(1);

	while (q.size())
	{
	k=q.top();
	q.pop();
   	 for (i=0; i<v[k].size(); i++)
	{
		z=v[k][i];
		w=mp[{k,z}];
		if (d[k]+w<d[z]) d[z]=d[k]+w,p[z]=k,q.push(z);
	}
	}

	if (d[n]==1e18) return cout<<-1,0;
	f(n);
	return 0;
	}
	
