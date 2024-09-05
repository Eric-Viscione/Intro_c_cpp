#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
class visit_information{
	
private:    //private class stores all the pricing information so it cant be changed
    mutable int price_so_far;       // Total price calculated so far
public:
	std::string park_name;  // Name of the park
    int num_days;           // Number of days for the visit
	visit_information(const std::string& name, int days);//constructor defintion
	~visit_information();//destructor definition
	int daily_cost() const;
    

};
visit_information::visit_information(const std::string& name, int days) : park_name(name), num_days(days), price_so_far(0) {}
visit_information::~visit_information() {}

int visit_information::daily_cost() const{
	const int ak = 100;
    const int ep = 150;
    const int hs = 100;
    const int mk = 200;
	if (park_name == "animal_kingdom") {
        price_so_far = ak * num_days;
    } else if (park_name == "epcot") {
        price_so_far = ep * num_days;
    } else if (park_name == "hollywood_studios") {
        price_so_far = hs * num_days;
    } else if (park_name == "magic_kingdom") {
        price_so_far = mk * num_days;
    } else {
        price_so_far = -1;  // Invalid park name
    }

    return price_so_far;
}

class visitor{
    private:
        mutable int total;
	public: 
		std::string visitor_name;
		int visitor_age;
		std::vector<visit_information> planned_visits;
		visitor(const std::string& name, int age, const std::vector<visit_information>& visits);
        int total_cost() const;


};
visitor::visitor(const std::string& name, int age, const std::vector<visit_information>& visits): visitor_name(name), visitor_age(age), planned_visits(visits), total(0){}
int visitor::total_cost() const{
    total = 0;

    for(const auto& visit : planned_visits){
        total += visit.daily_cost();
    }
    return total;
}
int main() {
    visit_information visit0("magic_kingdom", 3);
    visit_information visit1("animal_kingdom", 2);
    visit_information visit2("epcot", 1);
    std::vector<visit_information> visits = {visit0, visit1, visit2};
    visitor eric("Eric", 24, visits);
    // std::cout << visit.num_days << " days at " << visit.park_name << " cost: $" << visit.total_cost() << std::endl;
    int i = 1;
    for(const auto& visit : eric.planned_visits){
	    std::cout<<"Visitor: "<< eric.visitor_name << " is " << eric.visitor_age << " years old " << "and will spend $" << visit.daily_cost() << " on day " << i << std::endl;
        i++;
    }
    std::cout << "Visitor: " << eric.visitor_name << " will spend a total of $" << eric.total_cost() << std::endl;

	// std::cout<< "test"<< std::endl;
    return 0;
}