class Memory{
	private:
		string frequency;
		string memorySize;
		string supportsCuda;

	public:
		Memory(){
		}

		// set dan get dari private
		void setFrequency(string frequency){
			this->frequency = frequency;
		}
		string getFrequency(){
			return this->frequency;
		}

		void setMemorySize(string memorySize){
			this->memorySize = memorySize;
		}
		string getMemorySize(){
			return this->memorySize;
		}

		void setSupportsCuda(string supportsCuda){
			this->supportsCuda = supportsCuda;
		}
		string getSupportsCuda(){
			return this->supportsCuda;
		}

		~Memory(){
		}


};