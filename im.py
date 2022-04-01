string = "Omkar'f"
print(type(string))
new_str = ""
print("Old String =" , string )
for i in string:
    if i=="'":
        continue
    else:
        new_str = new_str + f"{i}"
        # continue

print("New String = " , new_str)

