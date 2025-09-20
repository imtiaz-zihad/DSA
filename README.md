# 📘 Data Structure 

--- Uploading Soon ---
# 📘 Algorithms  

This folder contains important graph algorithms with explanations and code implementations.  

---

## 🔹 Breadth-First Search (BFS)  
**Type:** Graph Traversal  
- **Approach:** Level-order traversal using a queue  
- **Time Complexity:** `O(V + E)`  
- **Space Complexity:** `O(V)`  

**Applications:**  
- Shortest path in unweighted graphs  
- Finding connected components  
- Solving puzzles (like maze shortest path)  

👉 [View Code](./Alogorithm/Graph/BFS/bfs.cpp)  

---

## 🔹 Depth-First Search (DFS)  
**Type:** Graph Traversal  
- **Approach:** Recursive or stack-based traversal  
- **Time Complexity:** `O(V + E)`  
- **Space Complexity:** `O(V)`  

**Applications:**  
- Detecting cycles in graphs  
- Topological sorting  
- Solving mazes / connectivity check  

👉 [View Code](./Alogorithm//Graph/DFS/dfs.cpp)  

---

## 🔹 Floyd-Warshall Algorithm  
**Type:** All-Pairs Shortest Path  
- **Approach:** Dynamic Programming  
- **Time Complexity:** `O(V³)`  
- **Space Complexity:** `O(V²)`  
- **Works With:** Positive/negative weights (no negative cycles)  

**Applications:**  
- Routing protocols  
- Network analysis  
- Finding transitive closure  

👉 [View Code](./Alogorithm/Floyd-Warshall/floydWarshall.cpp)  

---

## 🔹 Dijkstra’s Algorithm  
**Type:** Single Source Shortest Path  
- **Approach:** Greedy + Priority Queue  
- **Time Complexity:**  
  - `O((V + E) log V)` (Adjacency List + Min Heap)  
  - `O(V²)` (Adjacency Matrix)  
- **Works With:** Graphs with non-negative weights  

**Applications:**  
- GPS navigation systems  
- Network routing  
- Game AI pathfinding  

👉 [View Code](./Dijkstra/dijkstra.cpp)  

---

## 🔹 Bellman-Ford Algorithm  
**Type:** Single Source Shortest Path  
- **Approach:** Dynamic Programming (edge relaxation)  
- **Time Complexity:** `O(V * E)`  
- **Space Complexity:** `O(V)`  
- **Works With:** Positive/negative weights, detects negative cycles  

**Applications:**  
- Currency arbitrage detection  
- Graphs with negative edges  
- Reliability analysis  

👉 [View Code](./Alogorithm/Bellman-Ford%20Algorithm/bellmanFord.cpp)  

---

## 🔹 Disjoint Set Union (Union-Find)  
**Type:** Data Structure (for Dynamic Connectivity)  
- **Approach:** Uses **parent[]** and **rank[]/size[]** arrays with **path compression**  
- **Time Complexity:**  
  - `O(α(N))` per operation (almost constant)  
  - where `α(N)` = Inverse Ackermann function (very slow-growing)  
- **Space Complexity:** `O(N)`  

**Operations:**  
- **Find(u):** Finds the representative (root) of element `u`.  
- **Union(u, v):** Merges the sets of elements `u` and `v`.  

**Applications:**  
- Cycle detection in graphs  
- Kruskal’s Minimum Spanning Tree (MST)  
- Network connectivity problems  
- Clustering  

👉 [View Code](./DSU/disjointSetUnion.cpp)  

---