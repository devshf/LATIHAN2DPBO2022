class Memory:

# kelas yang digunakan untuk mengimplementasikan kelas memory

	def __init__(self):
	# konstruktor
		self.frequency = ""
		self.memorySize = ""
		self.supportsCuda = ""

	def setFrequency(self, frequency):
	# set nilai atribut frequency
		self.frequency = frequency;

	def getFrequency(self):
	# mengembalikan nilai atribut frequency
		return self.frequency

	def setMemorySize(self, memorySize):
	# set nilai atribut memorySize
		self.memorySize = memorySize
	def getMemorySize(self):
	# mengembalikan nilai atribut memorySize
		return self.memorySize

	def setSupportsCuda(self, supportsCuda):
	# set nilai atribut supportsCuda
		self.supportsCuda = supportsCuda
	def getSupportsCuda(self):
	# mengembalikan nilai atribut supportsCuda
		return self.supportsCuda