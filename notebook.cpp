#ifndef NOTEBOOK
#define NOTEBOOK
#include "product.cpp"

using namespace std;
class NoteBook : public Product {
    public:
    string getProductType() override {
        return "NoteBook";

    }
};

#endif
