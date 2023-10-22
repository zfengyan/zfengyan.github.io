#include <iostream>
#include <vector>
#include <queue>
using std::vector;
using std::queue;

// Graph class - store the input graph

class Graph{
public:
	Graph(int NumberOfNodes) : m_numberofNodes(NumberOfNodes){
	    m_adjacencyList.resize(NumberOfNodes);
	    m_inDegree.resize(NumberOfNodes, 0);
	}
	
	void add_directed_edges(int src, int dest){
	    m_adjacencyList[src].emplace_back(dest);
	    ++m_inDegree[dest]; // increment indegree of destination node by 1
	}
	
	// main function: topological sort
	bool topological_sort(vector<int>& sorted)
	{
	    auto indegree_copy = m_inDegree; // save a copy of the indegree vector
	    
	    // store all the nodes with no incoming edges
	    queue<int> nodes_with_zero_indegree;
	    for(int i = 0; i < m_numberofNodes; ++i)
	    {
	        if(m_inDegree[i] == 0)nodes_with_zero_indegree.push(i);
	    }
	    
	    // process - while the queue is not empty
	    while(!nodes_with_zero_indegree.empty())
	    {
	        auto current_zero_node = nodes_with_zero_indegree.front();
	        nodes_with_zero_indegree.pop(); // delete the node with zero indegree
	        sorted.emplace_back(current_zero_node); // add it to the sorted list
	        
	        // alter the graph: delete the incident edges and update the indegree
	        // of the incident nodes connected to current_zero_node
	        for(auto const& dest_node : m_adjacencyList[current_zero_node])
	        {
	            // delete the directed edge: current_zero_node -> dest_node
	            // meaning the indegree of the dest node decrements by 1
	            --m_inDegree[dest_node];
	            
	            // if the updated indegree of dest node is now zero
	            // add it to the nodes_with_zero_indegree queue
	            if(m_inDegree[dest_node] == 0) nodes_with_zero_indegree.push(dest_node);
	        } // end for
	        
	    } // end while: while the queue is not empty
	    
	    // a cycle was encountered - if the sorting is done but not all input nodes have been sorted
	    if((int)sorted.size() != m_numberofNodes)return false;
	    
	    // successfully sorted
	    return true; 
	    
	}
	
	void print_graph() {
	    for(int i = 0; i < m_adjacencyList.size(); ++i){
	         if(m_adjacencyList[i].size() != 0)
	         {   
	             std::cout << "Node " << i << " -> ";
	             for(const auto& node : m_adjacencyList[i])
	             {
	                std::cout << node << " ";
	             }
	             std::cout << std::endl;
	         }
	    }
    }   
protected:
    int m_numberofNodes;
	vector<vector<int>> m_adjacencyList;
    vector<int> m_inDegree;   
};


int main() {
    int n = 6;
    
    Graph graph(n);
    graph.add_directed_edges(0, 1);
    graph.add_directed_edges(0, 2);
    graph.add_directed_edges(1, 2);
    graph.add_directed_edges(2, 3);
    graph.add_directed_edges(1, 4);
    graph.add_directed_edges(5, 3);
    graph.add_directed_edges(4, 5);
    
    graph.print_graph();
    
    vector<int> sorted;
    sorted.reserve(n);
    
    if(graph.topological_sort(sorted)){
        std::cout << "sorted done, the topological ordering is: " << std::endl;
        for(auto const& node : sorted)std::cout << node << " ";
        std::cout << std::endl;
    }else{
        std::cout << "topological sorting is not possible as the graph is not acyclic" << std::endl;
    }

	return 0;
	
}