#include <string>
#include <iostream>
using namespace std;
#include "product.cpp"
#include "memory.cpp"
#include "hardware.cpp"

int main(){
	Product pro;
	Memory me;
	Hardware ha;
 

 	// product 1
	pro.setPrice("1000k");
	pro.setId_Product("A002");

	cout << "\nProduk 1\n" << endl;
	cout << "Harga        : " << pro.getPrice() << endl;
	cout << "Id Produk    :" << pro.getId_Product() << endl;

	// memory
	me.setFrequency("933");
	me.setMemorySize("4 GB");
	me.setSupportsCuda("yes");

	cout << "Frekuensi    : " << me.getFrequency() << endl;
	cout << "Besar Memori: " << me.getMemorySize() << endl;
	cout << "Support Cuda : " << me.getSupportsCuda() << endl;

	// hardware
	ha.setBrand("Iris");
	ha.setModel("II011");

	cout << "Brand        : " << ha.getBrand() << endl;
	cout << "Model        : " << ha.getModel() << endl;

	// product 2
	cout << "\nProduk 2\n" << endl;
	pro.setPrice("600k");
	pro.setId_Product("A003");

	cout << "Harga        : " << pro.getPrice() << endl;
	cout << "Id Produk    :" << pro.getId_Product() << endl;

	// memory
	me.setFrequency("900");
	me.setMemorySize("2 GB");
	me.setSupportsCuda("no");

	cout << "Frekuensi    : " << me.getFrequency() << endl;
	cout << "Besar Memori: " << me.getMemorySize() << endl;
	cout << "Support Cuda : " << me.getSupportsCuda() << endl;

	// hardware
	ha.setBrand("Samsung");
	ha.setModel("J9");

	cout << "Brand        : " << ha.getBrand() << endl;
	cout << "Model        : " << ha.getModel() << endl;

	return 0;

}