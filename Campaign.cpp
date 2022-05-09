#include <iostream>
#include <cstring>

using namespace std;

class campaign {
   private:
      char eventNO[10];
      char eventLocation[12];
      char eventDate[10];
   public:
      campaign(){
        strcpy(eventNO, "");
        strcpy(eventLocation, "");
        strcpy(eventDate, "");
      }
      campaign(const char eNO[],const char eLocation[],const char eDate[]){
        strcpy(eventNO,eNO);
        strcpy(eventLocation,eLocation);
        strcpy(eventDate,eDate);
      }
      
      void displayEventDetails(){
        cout<<"EventNo"<< eventNO <<endl;
        cout<<"Event Location"<< eventLocation <<endl;
        cout<<"Event Date"<< eventDate <<endl;
      }
      ~campaign(){}; 
};



