# C. Dijkstra?


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

# [THE TWO ROUTES - 601A](http://codeforces.com/problemset/problem/601/A)

INFORMATIONS THAT ARE NEEDED IN THIS PROBLEM : 
- n towns (numbered 1 through n) 
- m bidirectional railways 
- x, y (pair of different town)
- u, v (point u connected to v, which makes a railway)

OTHER IMPORTANT INFORMATIONS:
- There is bidirectional road between towns x and y if and only if there is no railway between them 
- Travelling to a different town using one railway or one rod always takes exactly one hour.
- A train and a bus leave town 1 at the same time, both have same destination. 
- Plan out routes for the vehicles which took the minimum number of hours. 
- Output one integer which is the smallest possible time of the later vehicle's arrival in town n
- if it is impossible, output -1. 

SOLUTION :

