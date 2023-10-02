class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, node, neighbors):
        self.graph[node] = neighbors


def dfs_util(graph, node, visited):
    visited[node] = True
    print(node, end=' ')

    for neighbor in graph[node]:
        if not visited[neighbor]:
            dfs_util(graph, neighbor, visited)


def dfs(graph, start_vertex):
    num_nodes = len(graph.graph)
    visited = [False] * num_nodes

    dfs_util(graph.graph, start_vertex, visited)


if __name__ == "__main__":
    g = Graph()

    # Take user input to define the graph
    while True:
        try:
            node = int(input("Enter node (or -1 to stop): "))
            if node == -1:
                break
            neighbors = list(map(int, input(f"Enter neighbors for node {node}: ").split()))
            g.add_edge(node, neighbors)
        except ValueError:
            print("Invalid input. Please enter integers.")

    start_vertex = int(input("Enter the starting vertex for DFS: "))

    print("DFS starting from vertex", start_vertex, ":")
    dfs(g, start_vertex)
