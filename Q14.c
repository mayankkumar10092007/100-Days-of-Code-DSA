# Read size of matrix
n = int(input())

# Read matrix
matrix = []
for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

# Assume it is identity matrix
is_identity = True

# Check condition
for i in range(n):
    for j in range(n):
        if i == j:
            if matrix[i][j] != 1:
                is_identity = False
        else:
            if matrix[i][j] != 0:
                is_identity = False

# Print result
if is_identity:
    print("Identity Matrix")
else:
    print("Not an Identity Matrix")
