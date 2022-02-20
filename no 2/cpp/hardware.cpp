
class Hardware: public Memory, public Product{

	private:
		string brand;
		string model;

	public:
		Hardware(){
		}

		// set dan get dari private
		void setBrand(string brand){
			this->brand = brand;
		}
		string getBrand(){
			return this->brand;
		}

		void setModel(string model){
			this->model = model;
		}
		string getModel(){
			return this->model;
		}


		~Hardware(){
		}

};