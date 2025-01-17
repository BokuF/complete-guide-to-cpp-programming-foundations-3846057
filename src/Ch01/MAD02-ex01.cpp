#include <iostream>
#include <string>

int main(){
std::string p_name;
char ans_cln;
char ans_cav;
char ans_xray;    
    
    std::cout << "           Melanie Dental Clinic" << std::endl;
    std::cout << "Enter patient's name: " << std::flush;
    std::cin >> p_name;
    std::cout << "was cleaning prefomed? (y/n) " <<std::flush;
    std::cin >> ans_cln;
    std::cout << "was cavity-filling performed? (y/n); " <<std::flush;
    std::cin >> ans_cav;
    std::cout << "Was X-Ray Performed? (y/n): " << std::flush;
    std::cin >> ans_xray;
    std::cout<<"--------------------------------------" <<std::endl;

   std::cout << "                    Melanie Dental Clinic" <<std::endl;
   std::cout << "                    *---------------------*" <<std::endl;
   std::cout << "        Receipt for patient name: " <<p_name <<std::endl;   
   std::cout << "                    ________________________" << std::endl;
   std::cout << "                    Subtotal: "  << std::endl; 
   std::cout << "                        Tax: " << std::endl;
   std::cout << "                     _______________" << std::endl;
   std::cout << "                       Total: " << std::endl;    



    return 0;
}