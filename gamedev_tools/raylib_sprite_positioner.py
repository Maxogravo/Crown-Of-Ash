#Manually positioning text in raylib sucks so I made this tool to do it for me

print("Raylib Sprite Positioner")
sprite_width = int(input("Enter Width Of Sprite: "))
sprite_height = int(input("Enter Sprite Height: "))
screen_width = int(input("Enter Screen Width: "))
screen_height = int(input("Enter Screen Height: "))
x = (screen_width-sprite_width)/2
y = (screen_height-sprite_height)/2
print(str(x) + " " + str(y))

