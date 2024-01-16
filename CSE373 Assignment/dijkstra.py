def min_distance(distances, visited):
    # Initialize minimum distance for next node
    min_val = float('inf')
    min_index = -1

    # Visiting through all nodes to find minimum distance
    for i in range(len(distances)):
        if distances[i] < min_val and i not in visited:
            min_val = distances[i]
            min_index = i

    return min_index

def dijkstra_algorithm(graph, start_node):

    # Getting total number of nodes in the graph
    num_nodes = len(graph)

    # Initializing distance and visited arrays
    distances = [float('inf')] * num_nodes
    visited = []

    # Setting distance at starting node to 0 and add to visited list 
    distances[start_node] = 0

    # Visiting through all nodes to find shortest path to each node
    for i in range(num_nodes):

        # Finding minimum distance node that has not been visited yet
        current_node = min_distance(distances, visited)

        # Adding current_node to list of visited nodes
        visited.append(current_node)

        # Looping through all neighboring nodes of current_node 
        for j in range(num_nodes):

            # Checking if there is an edge from current_node to neighbor
            if graph[current_node][j] != 0:

                # Calculating the distance from start_node to neighbor, 
                # passing through current_node
                new_distance = distances[current_node] + graph[current_node][j]

                # Updating the distance if it is less than previous recorded value 
                if new_distance < distances[j]:
                    distances[j] = new_distance

    # Returning the list of the shortest distances to all nodes from root node
    return distances

# defining the graph
graph = [[0, 7, 9, 0, 0, 14],
         [7, 0, 10, 15, 0, 0],
         [9, 10, 0, 11, 0, 2],
         [0, 15, 11, 0, 6, 0],
         [0, 0, 0, 6, 0 ,9],
         [14 ,2 ,0 ,9 ,8 ,10]]

shortest_distances = dijkstra_algorithm(graph, 0)
print(shortest_distances)