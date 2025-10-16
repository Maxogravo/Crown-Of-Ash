#Manually positioning text in raylib sucks so I made this tool to do it for me

print("Raylib Text Positioner")
font_size = int(input("Enter font size: "))
text = input("Enter text: ")
text_length = len(text) * (font_size/2) 
screen_width = int(input("Enter Screen Width: "))
screen_height = int(input("Enter Screen Height: "))
x = (screen_width-text_length)/2
y = (screen_height-font_size)/2
print(f"'{text}', {x}, {y}, {font_size}")

