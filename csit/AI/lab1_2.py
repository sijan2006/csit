tree={
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F', 'G'],
    'D':[],
    'E':[],
    'F':[],
    'G':[]
}
def dfs(tree,initial_node):
    visited=[]
    stack=[]
    visited.append(initial_node)
    stack.append(initial_node)
    while stack:
        m=stack.pop()
        print(m,end=" ")
        for neighbour in tree[m]:
            if neighbour not in visited:
                visited.append(neighbour)
                stack.append(neighbour)
print("Depth First Search:")
dfs(tree,'A')