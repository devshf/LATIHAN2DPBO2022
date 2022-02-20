<?php
include "product.php";
include "memory.php";
include "hardware.php";

	// product
	$pro = new Product();
	$pro->setPrice("500k");
	$pro->setId_Product("A005");

	echo "Product 1"."<br/>";
	echo "<br/>";
	echo "Harga			: ". $pro->getPrice()."<br/>"; 
	echo "Id Produk		: ". $pro->getId_Product()."<br/>"; 

	// memory
	$me = new Memory();
	$me->setFrequency("915");
	$me->setMemorySize("4 GB");
	$me->setSupportsCuda("yes");
	
	echo "Frekuensi		: ". $me->getFrequency()."<br/>"; 
	echo "Besar Memori 	: ". $me->getMemorySize()."<br/>"; 
	echo "Support Cuda 	: ". $me->getSupportsCuda()."<br/>"; 

	// hardware 
	$ha = new Hardware();
	$ha->setBrand("Lenovo");
	$ha->setModel("S111");
	
	echo "Brand			: ". $ha->getBrand()."<br/>"; 
	echo "Model 	 	: ". $ha->getModel()."<br/>";  	
 
?>