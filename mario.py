from cs50 import get_int

# Get height 1-8 from user
while True:
    h = get_int("Height: ")
    if h > 0 and h < 9:
        break
    
# Print Block
for i in range(1, h + 1):
    print(" " * (h - i), end="")
    print("#" * i)