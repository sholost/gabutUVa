""" view the problem here https://www.hackerrank.com/challenges/the-minion-game/problem
"""

def minion_game(string):
    # your code goes here
    kevin=0
    stuart=0

    vowels=['A', 'I', 'E', 'O', 'U']
    li=[char for char in string]
    pan=len(li)
    #print(li)
    for i in li:
        if(i in vowels):
            kevin+=pan
        else:
            stuart+=pan
        pan=pan-1
    if (stuart>kevin):
        print('Stuart', stuart)
    elif (stuart==kevin):
        print('Draw')
    else:
        print('Kevin', kevin)

if __name__ == '__main__':
    s = input()
    minion_game(s)