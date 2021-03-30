goods={
    "sua" : 8,
    "bim bim" : 5,
    "nuoc mam" : 15,
    "giay an" : 20
}
for ten in goods:
    print(ten)
for ten,gia in goods.items():
    print(gia)
for ten,gia in goods.items():
    print('Mot san pham {} co gia la {} nghin dong'.format(ten,gia))