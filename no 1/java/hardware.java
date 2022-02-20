
// Latihan 1

class Hardware extends Product{
	private String brand;
	private String model;

	// constructor
	Hardware(){
	}

	public void setBrand(String brand){
		this.brand = brand;
	}
	public String getBrand(){
		return this.brand;
	}
	
	public void setModel(String model){
		this.model = model;
	}
	public String getModel(){
		return this.model;
	}
}