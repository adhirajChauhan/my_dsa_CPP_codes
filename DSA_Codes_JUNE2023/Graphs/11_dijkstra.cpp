// #include <bits/stdc++.h> 
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
//     //adj list
//     unordered_map<int, list<pair<int,int>>> adj;
//     for(int i = 0; i < edges; i++){
//         int u = vec[i][0];
//         int v = vec[i][1];
//         int w = vec[i][2];

//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));

//     }

//     //creation of distance array with infinite value initially
//     vector<int> dist(vertices);
//     for(int i = 0; i < vertices; i++){
//         dist[i] = INT_MAX;
//     }

//     //creation of set on basis (distance,node)
//     set<pair<int,int>> st;

//     //initialise distance and set with source node
//     dist[source] = 0;
//     //adding element in set as distance, sourceNode
//     st.insert(make_pair(0,source));

//     while(!st.empty()){
//         //fetch top record
//         auto top = *(st.begin());

//         int nodeDistance = top.first;
//         int topNode = top.second;

//         //remove top record
//         st.erase(st.begin());

//         //traverse neighbours
//         for(auto neighbour : adj[topNode]){
//             if(nodeDistance + neighbour.second < dist[neighbour.first]){
//                 //if same record is found in set, del it
//                 //finding that distance jisme distance purane wala ho
//                 auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));

//                 //if record found, erase it
//                 if(record != st.end()){
//                     st.erase(record);
//                 }

//                 //distance update
//                 dist[neighbour.first] = nodeDistance + neighbour.second;
//                 //push record in set
//                 st.insert(make_pair(dist[neighbour.first], neighbour.first));
//             }
//         }
//     }
//     return dist;
// }
