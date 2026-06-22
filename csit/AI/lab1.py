
tree={
    'A':['B','C'],
    'B':['D','E','A'],
    'C':['F','A'],
    'D':[],
    'E':[],
    'F':[],
    'G':[]
}

def bfs(tree,initial_node):
    queue=[]
    visited=[]
    visited.append(initial_node)
    queue.append(initial_node)
    while queue:
        t=queue.pop(0)
        print(t,end=" ")
        for tre in tree[t]:
            if tre not in visited:
                visited.append(tre)
                queue.append(tre)
bfs(tree,"A")