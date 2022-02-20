# import
from product import Product
from memory import Memory
from hardware import Hardware

# instansiasi
pro = Product()
me = Memory()
ha = Hardware()

# set isi atribut product pro
pro.setPrice("500k");
pro.setId_Product("A001");

# mencetak atribut product pro
print("Harga		: " + str(pro.getPrice()))
print("Id Produk	: " + str(pro.getId_Product()))

# set isi atribut memory me
me.setFrequency("915");
me.setMemorySize("4 GB");
me.setSupportsCuda("yes");

# mencetak atribut memory me
print("Frekuensi    	: " + str(me.getFrequency()))
print("Besar Memori 	: " + str(me.getMemorySize()))
print("Support Cuda 	: " + str(me.getSupportsCuda()))

# set isi atribut hardware ha
ha.setBrand("Lenovo");
ha.setModel("S111");

# mencetak atribut memory ha
print("Brand 	    	: " + str(ha.getBrand()))
print("Model 			: " + str(ha.getModel()))

