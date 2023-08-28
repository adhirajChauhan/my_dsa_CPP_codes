/*
    same as BFS, do solution in same problem
    - adj list, visited DS, Queue(BFS), parent DS

    - if already true and also parent of node, then dont push in queue
    - if visited is true && node != parent then cycle is detected
*/


// #include <unordered_map>
// #include <queue>
// #include <list>

// bool isCyclicBFS(int src, unordered_map<int,bool> &visited, unordered_map<int, list<int>>& adj)
// {
//     unordered_map<int,int> parent;
//     parent[src] = -1;
//     visited[src] = true;
//     queue<int> q;
//     q.push(src);

//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         for(auto neighbour : adj[front])
//         {
//             if(visited[neighbour] && neighbour != parent[front])
//             {
//                 return true;
//             } else if (!visited[neighbour])
//             {
//                 q.push(neighbour);
//                 visited[neighbour] = true;
//                 parent[neighbour] = front;
//             }
//         }
//     }

//     return false;
// }

/*
bool iscyclicDFS(int node, int parent, unordered_map<int,bool> &visited, unordered_map<int, list<int>> &adj){
    visited[node] = true;

    for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
            bool cycleDetected = isCyclicDFS(neighbour, node, visited, adj)
            if(cycleDetected) return true;
        }
        else if(neighbour != parent){
            //cycle present
            return true;
        }
    }
    return false;
} 

*/

// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     // Create adj list
//     unordered_map<int, list<int>> adj;
//     for(int i = 0; i < m; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     // Handle disconnected components
//     unordered_map<int,bool> visited;
//     for(int i = 0; i < n; i++){
//         if(!visited[i]){
//             bool ans = isCyclicDFS(i,-1, visited, adj);
//             if(ans) return "Yes";
//         }
//     }
//     return "No";
// }
