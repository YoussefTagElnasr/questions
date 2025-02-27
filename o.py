from typing import List
import random

def draw(board: list[list[int]]) -> bool:
    for i in range (3):
        for j in range(3):
            if board[i][j] != "X" and board[i][j] != "O":
                return False
    return True


def bestScore(board) -> int:
    
    for i in range(3):
        if board[i][0] == board[i][1] == board[i][2]:
            return 1 if board[i][0] == 'X' else -1
        if board[0][i] == board[1][i] == board[2][i]:
            return 1 if board[0][i] == 'X' else -1

    if board[0][0] == board[1][1] == board[2][2]:
        return 1 if board[0][0] == 'X' else -1
    if board[0][2] == board[1][1] == board[2][0]:
        return 1 if board[0][2] == 'X' else -1
    
    if(draw(board)):
        return 0
    else:
        return -1000


def forcePlayer(player: str) -> str:
    if player.upper() == 'O':
        return 'X'
    else:
        return 'O'

def forcePlayer2(player: str) -> bool:
    if player.upper() == 'O':
        return False
    else:
        return True


def Printboard(board: list[list[int]]):
    for i in board:
         print(i)
    print("_______________________________")
    print("_______________________________")
    print("_______________________________")
                

def get_player1_choice() -> str:
    while True:
        player = input("Do you want to play as X or O? ").upper()
        if player == 'X' or player == 'O':
            return player
        else:
            print("Invalid input! Please choose 'X' or 'O'.")


def aiPlayer( board: list[int] , player: str) -> int:
    score = -1000
    best_move = None
    for i in range(3):
            for j in range(3):
                if board[i][j] != 'X' and board[i][j] != 'O':
                    remainder1 = i
                    remainder2 = j
                    number = board[i][j]
                    board[i][j] = forcePlayer(player)
                    current_score =  minimax(board , forcePlayer2(player))
                    board[remainder1][remainder2] = number

                    if current_score > score:
                        score = current_score
                        best_move =  i * 3 + j + 1
    return best_move


def minimax(board: list[list[int]] , isMax: bool):
    # base case is the end state of the game returning a number according to who wins(done).
    score = bestScore(board)
    if score == 1:
        return 1
    if score == -1:
        return -1
    if score == 0:
        return 0
    # have if else for minimiser and maximiser()
    if(isMax):
        score = -1000
        for i in range(3):
            for j in range(3):
                if board[i][j] != 'X' and board[i][j] != 'O':
                    remainder1 = i
                    remainder2 = j
                    number = board[i][j]
                    board[i][j] = 'X'
                    score = max(minimax(board , not isMax) , score)
                    board[remainder1][remainder2] = number
        return score
    if( not isMax):
        score = 1000
        for i in range(3):
            for j in range(3):
                if board[i][j] != 'X' and board[i][j] != 'O':
                    remainder1 = i
                    remainder2 = j
                    number = board[i][j]
                    board[i][j] = 'O'
                    score = min(minimax(board , not isMax) , score)
                    board[remainder1][remainder2] = number
        return score
    # for both:
    #     for every possible move
    #     do it
    #     call minimax for the other player and store the score
    #     undo the move
    # return the score
    


def changeBoard(board: list[list[int]] , player: str , number: int , choices: list[int]):
    while True:
        if 1 <= number <= 9:
                row, col = divmod(number - 1, 3)  
                if  board[row][col] != 'X' and board[row][col] != 'O':  
                    board[row][col] = player
                    return
            

def check_winner(board) -> bool:
    
    for i in range(3):
        if board[i][0] == board[i][1] == board[i][2] != " ":
            return True
        if board[0][i] == board[1][i] == board[2][i] != " ":
            return True

    if board[0][0] == board[1][1] == board[2][2] != " ":
        return True
    if board[0][2] == board[1][1] == board[2][0] != " ":
        return True

    return False


def chooseNumber(choice: list[int]) -> int:
    while True:
        try:
            number = int(input("Choose where you want to play: "))
            if number in choice:
                choice.remove(number)
                return number
            else:
                print("Invalid choice, pick an available number!")
        except ValueError:
            print("Enter a valid number!")


board = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
choices = [1,2,3,4,5,6,7,8,9]
player = get_player1_choice()
while True:
    Printboard(board)
    number = chooseNumber(choices)
    changeBoard(board , player ,number , choices)
    if check_winner(board) or draw(board):
        break
    Printboard(board)
    ai_move = aiPlayer(board , player)
    changeBoard(board , forcePlayer(player) , ai_move , choices)
    if check_winner(board) or draw(board):
        break