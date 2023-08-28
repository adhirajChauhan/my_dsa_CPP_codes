/*
    we need to track that for which element, dfs recursive call has been visited [dfsVisited], which will keep a track about which element has been called and call has came back from that node or not

    if isvisited is true and also in the dfsVisited, then cycle exist
*/

//DFS, we are creatning a new map dfsvisited to check if the call is still present in recursive tree

// #include<unordered_map>
// #include<list>
// bool checkCycleDFS(int node,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsvisited,unordered_map<int,list<int>> &adj){
//     visited[node]=true;
//     dfsvisited[node]=true;
    
//     for(auto neighbour: adj[node]){
//         if(!visited[neighbour]){
//             bool cycledetected =checkCycleDFS(neighbour,visited,dfsvisited,adj);
//             if(cycledetected)
//                 return true;
//         }
//         else if(dfsvisited[neighbour]){
//             return true;
//         }
//     }
//     dfsvisited[node]=false;
//     return false;
// }

// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
//   // create adjacency list
//    unordered_map<int,list<int>>adj;
//     for(int i=0;i<edges.size();i++){
//         int u=edges[i].first;
//          int v=edges[i].second;
        
//         adj[u].push_back(v);
//     }
//     //call dfs for all components
//     unordered_map<int,bool> visited;
//     unordered_map<int,bool> dfsvisited;
//     for(int i=1;i<=n;i++){
//         if(!visited[i]){
//             bool cyclefound =checkCycleDFS(i,visited,dfsvisited,adj);
//             if(cyclefound)
//                 return true;
//         }
//     }
//     return false;
// }