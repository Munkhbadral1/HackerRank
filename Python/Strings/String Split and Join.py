

def split_and_join(line):
    # write your code here
    result = line.split("-")
    
    result = "-".join(line)
    
if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
