from typing import List
import random

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


def aiPlayer(numbers: list[int]) -> int:
    random_number = random.choice(numbers)
    numbers.remove(random_number)
    return random_number


def changeBoard(board: list[list[int]] , player: str , number: int):
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


def draw(board: list[list[int]]) -> bool:
    for i in range (3):
        for j in range(3):
            if board[i][j] != "X" or board[i][j] != "O":
                return False
    return True


def forcePlayer(player: str) -> str:
    if player.upper() == 'X':
        return 'O'
    else:
        return 'X'


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

choices = list(range(1, 10))
player = get_player1_choice()
while True:
    Printboard(board)
    playerNubmer = chooseNumber(choices)
    changeBoard(board , player , playerNubmer)
    if check_winner(board):
        Printboard(board)
        print("we have a winner")
        break    
    if draw(board):
        Printboard(board)
        print("we have a draw")
        break
    Printboard(board)
    botNubmer = aiPlayer(choices)
    changeBoard(board , forcePlayer(player) , botNubmer)
    if check_winner(board):
        Printboard(board)
        print("we have a winner")
        break    
    if draw(board):
        Printboard(board)
        print("we have a draw")
        break
    
Printboard(board)

