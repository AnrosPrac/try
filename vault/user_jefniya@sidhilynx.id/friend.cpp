 #include <iostream>                    
 using namespace std;                    
 class item {                    
     int code;                    
     double price;                    
 public:                    
     void get_data() {                    
         cout << "enter code ";                    
        cin >> code;                    
         cout << "enter price ";                    
         cin >> price;                    
     }                    
     void display_data() {                    
         cout << "code: " << code << endl;                    
         cout << "price: " << price << endl;                    
     }                    
     friend void discount_price(item it);                     
 };                    
 void discount_price(item it) {                    
     cout << "price after 10% discount: " << it.price * 0.9 << endl;                    
 }                    
 int main() {                    
     item i1;                    
     i1.get_data();                    
     i1.display_data();                    
    discount_price(i1);                    
     return 0;                    
