from collections import deque
import sys
input = sys.stdin.readline


def bfs(g, start):
    queue = deque()

    visited[start] = True
    color[start] = 0
    queue.append(start)

    while queue:
        cur = queue.popleft()
        for node in graph[cur]:
            if not visited[node]:
                visited[node] = True
                if color[cur] == 0:
                    color[node] = 1
                else:
                    color[node] = 0
                queue.append(node)
            elif color[cur] == color[node]:
                return -1


t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    graph = {i + 1: [] for i in range(n)}
    visited = [False for _ in range(n+1)]
    color = [-1 for _ in range(n+1)]
    for _ in range(m):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)

    answer = 1
    for i in range(1, n+1):
        if visited.count(True) == n:
            break
        else:
            answer = bfs(graph, i)

    if answer == -1:
        print("impossible")
    else:
        print("possible")
