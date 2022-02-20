class Product{
	private:
		string price;
		string id_product;

	public:
		Product(){
		}

		// set dan get dari private
		void setPrice(string price){
			this->price = price;
		}
		string getPrice(){
			return this->price;
		}

		void setId_Product(string id_product){
			this->id_product = id_product;
		}
		string getId_Product(){
			return this->id_product;
		}

		~Product(){
		}

};