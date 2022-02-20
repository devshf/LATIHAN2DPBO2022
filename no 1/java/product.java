
// Latihan 1

// base class: Product
class Product{
	private String price;
	private String id_product;

	// constructor
	Product(){
	}

	public void setPrice(String price){
		this.price = price;
	}
	public String getPrice(){
		return this.price;
	}
	
	public void setId_Product(String id_product){
		this.id_product = id_product;
	}
	public String getId_Product(){
		return this.id_product;
	}

}