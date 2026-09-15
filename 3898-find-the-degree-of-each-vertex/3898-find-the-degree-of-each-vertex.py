class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
        V = len(matrix)
        degree = [0] * V
        for i in range(V):
            for j in range(len(matrix[i])):
                if matrix[i][j] == 1:
                    degree[j] += 1
        return degree