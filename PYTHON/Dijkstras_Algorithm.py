import heapq

# Define directions (up, down, left, right)
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def is_valid(x, y, rows, cols):
    return 0 <= x < rows and 0 <= y < cols

def dijkstra_shortest_path(grid, start, end):
    rows = len(grid)
    cols = len(grid[0])
    visited = [[False] * cols for _ in range(rows)]
    distance = [[float('inf')] * cols for _ in range(rows)]

    pq = [(0, start)]
    distance[start[0]][start[1]] = 0

    while pq:
        dist, node = heapq.heappop(pq)
        x, y = node

        if visited[x][y]:
            continue

        visited[x][y] = True

        for i in range(4):
            new_x, new_y = x + dx[i], y + dy[i]

            if is_valid(new_x, new_y, rows, cols):
                new_dist = dist + grid[new_x][new_y]

                if new_dist < distance[new_x][new_y]:
                    distance[new_x][new_y] = new_dist
                    heapq.heappush(pq, (new_dist, (new_x, new_y)))

    return distance[end[0]][end[1]]


if __name__ == "__main__":
    # Take user input for grid size and elements
    rows = int(input("Enter the number of rows: "))
    cols = int(input("Enter the number of columns: "))

    grid = []
    print(f"Enter {rows} rows with {cols} elements each:")

    for _ in range(rows):
        row = list(map(int, input().split()))
        grid.append(row)

    start_x = int(input("Enter the x-coordinate of the start point: "))
    start_y = int(input("Enter the y-coordinate of the start point: "))

    end_x = int(input("Enter the x-coordinate of the end point: "))
    end_y = int(input("Enter the y-coordinate of the end point: "))

    start = (start_x, start_y)
    end = (end_x, end_y)

    shortest_path = dijkstra_shortest_path(grid, start, end)

    print(f"The shortest path from {start} to {end} is: {shortest_path}")
