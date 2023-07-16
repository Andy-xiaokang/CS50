def main():
    s = input('What is the answer to the Great Question of Life, the Universe and Everything')
    if s == '42':
        print('Yes')
    elif s.lower() == 'forty-two' or s.lower() == 'forty two':
        print('Yes')
    else:
        print('No')

main()