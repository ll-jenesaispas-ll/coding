t=int(input())
while t>0:
    t-=1
    s=input().lower()
    if s=='b':
        print("BattleShip")
    elif s=='c':
        print("Cruiser")
    elif s=='d':
        print("Destroyer")
    elif s=='f':
        print("Frigate")