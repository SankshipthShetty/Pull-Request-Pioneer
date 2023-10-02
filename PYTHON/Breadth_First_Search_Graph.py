from collections import deque

class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, node, neighbors):
        self.graph[node] = neighbors


def bfs(graph, start_vertex):
    visited = [False] * len(graph.graph)
    queue = deque()

    visited[start_vertex] = True
    queue.append(start_vertex)

    while queue:
        node = queue.popleft()
        print(node, end=' ')

        for neighbor in graph.graph[node]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)


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

    start_vertex = int(input("Enter the starting vertex for BFS: "))

    print("BFS starting from vertex", start_vertex, ":")
    bfs(g, start_vertex)
