player1 = input('Player 1: ')
player2 = input('Player 2: ')

if player1 == 'rock' and player2 == 'scissors':
    print('Player 1 is the winner')
elif player2 == 'rock' and player1 == 'scissors':
    print('Player 2 is the winner')

if player1 == 'paper' and player2 == 'rock':
    print('Player 1 is the winner')
elif player2 == 'paper' and player1 == 'rock':
    print('Player 2 is the winner')

if player1 == 'scissors' and player2 == 'paper':
    print('Player 1 is the winner')
elif player2 == 'scissors' and player1 == 'paper':
    print('Player 2 is the winner')
