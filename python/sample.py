from collections import deque
def bfs(graph, start):
  visited = []
queue = deque([start])
while queue:
  node = queue.popleft()
if node not in visited:
  print(node, end=" ")
  visited.append(node)
queue.extend(graph[node])
graph = {
  'A': ['B', 'C'],
  'B': ['D'],
  'C': ['E'],
  'D': [],
 'E': []
}
print("BFS Traversal:")
bfs(graph, 'A')