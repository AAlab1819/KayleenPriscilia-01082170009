
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

[SUBMISSION](http://codeforces.com/contest/601/submission/45769295)
The solution is by using shortest path algorithm, which is BFS, meaning that it is about finding a path between 2 vertices in a graph such that the total sum of the edges eights is minimum. 

	for(int i=0; i<m; i++)
	{
        cin>>u>>v;
        r[u][v]=r[v][u]=true; 
    	}
	
	while(nr<nm)
	{
        for (int i=1; i<=n; i++)
        {
        	if((r[a[nr]][i]==!r[1][n])&&(l[i]==0))
			{
				l[i]=l[a[nr]]+1,a[nm++]=i;
			}
		}
        nr++;
    }
    cout<<l[n]-1;
	

# [Dijkstra? - 20C](http://codeforces.com/problemset/problem/20/C)

INFORMATIONS THAT ARE NEEDED IN THIS PROBLEM : 
- The vertices are enumerated from 1 to n. 
- Shortest path between the vertex 1 and the vertex n. 

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
