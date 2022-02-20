class Hardware:

# kelas yang digunakan untuk mengimplementasikan kelas product

	def __init__(self):
	# konstruktor
		self.brand = ""
		self.model = ""

	def setBrand(self, brand):
	# set nilai atribut brand
		self.brand = brand;

	def getBrand(self):
	# mengembalikan nilai atribut brand
		return self.brand

	def setModel(self, model):
	# set nilai atribut model
		self.model = model
	def getModel(self):
	# mengembalikan nilai atribut model
		return self.model