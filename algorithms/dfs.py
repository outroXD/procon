N = 2
K = 4

graph = [[1, 3, 5, 7],
         [2, 4, 2, 3],
         [1, 3, 2, 9]]


def dfs(depth):
    if depth == len(graph):
        return
    for width in range(K):
        print(graph[depth][width])
        dfs(depth+1)


dfs(0)
