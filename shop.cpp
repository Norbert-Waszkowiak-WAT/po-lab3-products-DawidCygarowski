#ifndef SHOP
#define SHOP
#include "product.cpp"
#include <vector>

using namespace std;
class Shop {
    private:
    vector<Product*> products;

    public:
    void sellProduct(string name) {
        for(auto it = products.begin(); it != products.end(); it++) {
            if((*it) -> getName() == name) {
              products.erase(it);
              break;
            }

        }

    };
    void addToStore(Product* product){
        products.push_back(product);
    };
    string printProductList(){
        string output;
        for(auto it = products.begin(); it != products.end(); it++) {
            output += (*it)-> getName() + "\n";
        }
        return output;
    };
    string printProductListByType(string type){
        string output;
        for(auto it = products.begin(); it != products.end(); it++) {
            if((*it) -> getProductType() == type) {
            output += (*it)-> getName() + "\n";
    }}
    return output;

        };

        bool checkAvailability(string name){
            for(auto it = products.begin(); it != products.end(); it++) {
                if((*it) -> getName() == name) {
                    return true;
                }
            }
            return false;
        };

};
#endif