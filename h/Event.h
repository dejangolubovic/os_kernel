#ifndef _event_h_ 
#define _event_h_ 
 
typedef unsigned char IVTNo; 
class KernelEv; 

#include "makro.h"
 
class Event { 
public: 
 Event (IVTNo ivtNo); 
 ~Event (); 
 
 void wait (); 
 
protected: 
 friend class KernelEv;
 friend class IVTEntry;
 void signal(); // can call KernelEv 
 
private: 
 KernelEv* myImpl; 
}; 
#endif 
