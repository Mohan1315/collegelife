import os
dir_path = "C:\programminglab\python"
dir_contents =os.listdir(dir_path)

for item in dir_contents:
    print(item)