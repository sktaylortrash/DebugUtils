// Debug utilities

#if DEBUGLEVEL >= 0
#define DEBUGPRINT0(x) Serial.print(x)
#define DEBUGPRINTLN0(x) Serial.println(x)
#define DEBUGWRITE0(x) Serial.write(x)
#define DEBUGSERIALBEGIN(x) Serial.begin(x)
#define DEBUGPRINTDEC0(x) Serial.print (x, DEC)
#define DEBUGPRINTHEX0(x) Serial.print (x, HEX)
#else
#define DEBUGPRINT0(x)
#define DEBUGPRINTLN0(x)
#define DEBUGWRITE0(x)
#define DEBUGSERIALBEGIN(x)
#define DEBUGPRINTDEC0(x)
#define DEBUGPRINTHEX0(x)
#endif

#if DEBUGLEVEL >= 1
#define DEBUGPRINT1(x) Serial.print(x)
#define DEBUGPRINTLN1(x) Serial.println(x)
#define DEBUGWRITE1(x) Serial.write(x)
#define DEBUGPRINTDEC1(x) Serial.print (x, DEC)
#define DEBUGPRINTHEX1(x) Serial.print (x, HEX)
#else
#define DEBUGPRINT1(x)
#define DEBUGPRINTLN1(x)
#define DEBUGWRITE1(x)
#define DEBUGPRINTDEC1(x)
#define DEBUGPRINTHEX1(x)
#endif

#if DEBUGLEVEL >= 2
#define DEBUGPRINT2(x) Serial.print(x)
#define DEBUGPRINTLN2(x) Serial.println(x)
#define DEBUGWRITE2(x) Serial.write(x)
#define DEBUGPRINTDEC2(x) Serial.print (x, DEC)
#define DEBUGPRINTHEX2(x) Serial.print (x, HEX)
#else
#define DEBUGPRINT2(x)
#define DEBUGPRINTLN2(x)
#define DEBUGWRITE2(x)
#define DEBUGPRINTDEC2(x)
#define DEBUGPRINTHEX2(x)
#endif

#if DEBUGLEVEL >= 3
#define DEBUGPRINT3(x) Serial.print(x)
#define DEBUGPRINTLN3(x) Serial.println(x)
#define DEBUGWRITE3(x) Serial.write(x)
#define DEBUGPRINTDEC3(x) Serial.print (x, DEC)
#define DEBUGPRINTHEX3(x) Serial.print (x, HEX)
#else
#define DEBUGPRINT3(x)
#define DEBUGPRINTLN3(x)
#define DEBUGWRITE3(x)
#define DEBUGPRINTDEC3(x)
#define DEBUGPRINTHEX3(x)
#endif