n=int(input('Nhap so luong nguoi: \n'))
name=[]
for i in range(n):
    x=input(f'Nhap ten nguoi thu {i+1}: ')
for i in range(n):
    print('Ban thu {i+1} ten la', name[i])