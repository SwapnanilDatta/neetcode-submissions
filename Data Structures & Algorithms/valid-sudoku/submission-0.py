class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        #validate row
        for i in range (9):
            s=set()
            for j in range(9):
                item=board[i][j]
                if item in s:
                    return False
                elif item != '.':
                    s.add(item)

        #validate column
        for i in range (9):
            s=set()
            for j in range(9):
                item=board[j][i]
                if item in s:
                    return False
                elif item != '.':
                    s.add(item)


        #validate each 3x3 grid
        grid=[(0,3),(3,0),(0,6),(6,0),(3,3),(6,3),(3,6),(6,6),(0,0)]
        for i,j in grid:
            s=set()
            for row in range (i,i+3):
                for col in range (j,j+3):
                    item=board[row][col]
                    if item in s:
                        return False
                    elif item != '.':
                        s.add(item)
        return True

        