#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Car {
	std::string company; 
	std::string model;

	public: 
	Car(const std::string&, const std::string&);
	friend bool operator < (const Car& , const Car&);
	friend std::ostream& operator << (std::ostream& , const Car&) ;
};

Car::Car(const std::string &company, const std::string &model):company(company),model(model){}

bool operator < (const Car&c1, const Car&c2) {
	if(c1.company == c2.company) return c1.model < c2.model; 
	
	return c1.company < c2.company;
}

std::ostream& operator << (std::ostream &out, const Car& c){
	out << "( " + c.company + ", " + c.model << " )"; 
}

int main(){
	Car c1("Honda" , "City"); 
	Car c2("Maruti", "Swift");
	Car c3("Honda" , "Civic");

	std::vector<Car> v; 

	v.push_back(c1);
	v.push_back(c2);
	v.push_back(c3);
	std::sort(v.begin(), v.end());

	for(const auto& elem : v) {
		std::cout << elem << std::endl;
	}
	 
	return 0;
}
