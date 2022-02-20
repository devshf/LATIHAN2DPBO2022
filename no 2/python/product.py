class Product:

# kelas yang digunakan untuk mengimplementasikan kelas product

	def __init__(self):
	# konstruktor
		self.price = ""
		self.id_product = ""

	def setPrice(self, price):
	# set nilai atribut price
		self.price = price;

	def getPrice(self):
	# mengembalikan nilai atribut price
		return self.price

	def setId_Product(self, id_product):
	# set nilai atribut id_product
		self.id_product = id_product
	def getId_Product(self):
	# mengembalikan nilai atribut id_product
		return self.id_product