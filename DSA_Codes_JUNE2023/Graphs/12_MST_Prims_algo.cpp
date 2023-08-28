/*
when you convert a graph into a tree such that it contain n nodes and n-1 edges (no cycye)
and each node is reachable by any node
*/

// #include <bits/stdc++.h> 
// vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
// {
//     // adj list
//     unordered_map<int, list<pair<int, int>>> adj;

//     for(int i = 0; i < g.size(); i++){
//         int u = g[i].first.first;
//         int v = g[i].first.second;
//         int w = g[i].second;
//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));

//     }

//     //taking(n+1 bcz i am displaying node with index value)
//     vector<int> key(n+1);
//     vector<bool> mst(n+1);
//     vector<int> parent(n+1);

//     for(int i = 0; i <= n; i++){
//         key[i] = INT_MAX;
//         parent[i] = -1;
//         mst[i] = false;
//     }

//     //algo
//     key[1] = 0;
//     parent[1] = -1;

//     for(int i = 1; i < n; i++){
//         //first track the mini
//         int mini = INT_MAX;
//         int u;

//         //find min node
//         for(int v = 1; v <= n; v++){
//             if(mst[v] == false && key[v] < mini){
//                 u = v;
//                 mini = key[v];
//             }
//         }

//         //mark min node as true
//         mst[u] = true;

//         //check adject nodes
//         for(auto it:adj[u]){
//             int v = it.first;
//             int w = it.second;

//             //if mst ke andar node include nahi hai && wight chota hai key value se
//             if(mst[v] == false && w < key[v]){
//                 parent[v] = u;
//                 key[v] = w;
//             }
//         }
//     }

//     vector<pair<pair<int, int>, int>> result;

//     //loop will start from2, bcz parent of 1 is -1
//     for(int i = 2; i <= n; i++){
//       result.push_back({{parent[i], i}, key[i]});
//     }

//     return result;
// }
