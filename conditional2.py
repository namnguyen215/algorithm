n=int(input('Nhap so luong nguoi: \n'))
name=[]
for i in range(n):
    x=input(f'Nhap ten nguoi thu {i+1}: ')
    name.append(x)
for i in range(n):
    name[i]=name[i].strip()
    if name[i].lower()=='duc' or name[i].lower()=='minh':
        print('Hoc gioi')
    elif name[i].lower() =='nam':
        print(name[i].lower(), 'hoc ngu')
    else:
        print(f'Ko biet thang {name[i]} nay la ai')
