<?php

class Product{
	private $price;
	private $id_product;

	// set dan get 

	function __construct(){
	}

	function setPrice($price){
		$this->price = $price;
	}
	function getPrice(){
		return $this->price;
	}

	function setId_Product($id_product){
		$this->id_product = $id_product;
	}
	function getId_Product(){
		return $this->id_product;
	}

	function __destruct(){

	}

}

?>