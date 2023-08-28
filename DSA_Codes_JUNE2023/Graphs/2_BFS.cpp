// https://www.codingninjas.com/studio/problems/bfs-in-graph_973002

// #include<unordered_map>
// #include<queue>
// #include<list>
// #include<set>
// void  preparedAdjList ( unordered_map<int,set<int>> &adjList, vector<pair<int, int>> &edges){
//     for(int i=0; i<edges.size();i++){
//         int u= edges[i].first;
//         int v= edges[i].second;
        
//         adjList[u].insert(v);
//         adjList[v].insert(u);
//     }
// }

// void bfs(unordered_map<int,set<int>> &adjList,unordered_map<int,bool> &visited,    vector<int>&ans,int node){

    /*
    int node is starting node
   steps - 
    1. save whatever is in the queue (first node) in frontNode and remove from queue
    2. mark the removed element as true in visited array
    3. store the elemet in ans vector
    4. push all the adjecent/neighbour elements of fontnode in queue
    
    */
//    queue<int>q;
//    q.push(node);
//     visited[node]=1;
    
//     while(!q.empty()){
//         int frontnode=q.front();
//         q.pop();
//         //storefrontnode to ans
//         ans.push_back(frontnode);
//         //traverse all neighbours of frontnode
//         for(auto i:adjList[frontnode]){
//             if(!visited[i]){
//                 q.push(i);
//                 visited[i]=1;
//             }
//         }
//     }
// }

// vector<int> BFS(int vertex, vector<pair<int, int>> edges)
// {
//     unordered_map<int,set<int>> adjList;
//     vector<int> ans;
//      unordered_map<int,bool> visited;
    
//     preparedAdjList(adjList,edges);
//     // traverse all components
//     for(int i =0;i<vertex;i++){
//         if(!visited[i]){
//             bfs(adjList,visited,ans,i); 
//         }
//     }
//    return ans; 
// }