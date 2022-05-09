#include <iostream>
#include <cstring>
using namespace std;

class Healthreport {
   private:
      char hrepNO[10];
      
   public:
      Healthreport(){
        strcpy(hrepNO, "");
      }
      Healthreport(const char hrNO[]){
        strcpy(hrepNO,hrNO);
      }
      void getReportDetails(){
        cout<<"Helth report no"<< hrepNO <<endl;
        }
      ~Healthreport(){}; 
};
