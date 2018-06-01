#include <Servo.h>

Servo Bas;
Servo Izq;
Servo Der;
Servo Gar;

#define pinBas 12
#define pinIzq 11
#define pinDer 10
#define pinGar 9

#define De 70 /*115*/
#define Ga 110 /*115*/
#define Iz 120 /*160*/
#define Ba 90 /*90*/

float mov[4][102]={
  
/* COLUMNAS       1     2     3     4     5     6     7      8     9    10    11    12    13    14    15    16    17    18    19    21    22    23    24    25    26    27      28    29     30     31     32     33     34     35     36      37   38    39     40   41    42    43    44    45    46    47    48    49    50     51    52    53    54   55    56    57    58    59    60    61    62    63    64    65    66    67    68    69    70    71    72    73     74    75   76    77    78    79    80    81    82    83    84    85    86    87     88    89    90    91    92    93   94    95    96    97     98    99    100   101   102
/* F   1   DE */{70,   72,   74,   76,    78,   80,   82,   84,   86,   88,   90,   92,   94,   96,   98,   100,  102,  104,  106,  108,  110,  112,  114,  115,  115,  115,   115,   115,   115,   115,   115,   115,   115,   115,   115,   115,  115,  113,  111,  109,  107,  105,  103,  100,  98,   96,   94,   92,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,},
/* I   2   GA */{110,  110,  110,  110,   110,  110,  110,  110,  110,  110,  110,  110,  110,  110,  110,  110,  110,  110,  110,  110,  110,  114,  118,  122,  126,  130,   131,   132,   133,   134,   135,   136,   137,   138,   139,   140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  140,  138,  136,  134,  132,  130,  128,  126,  124,  122,  120,  118,  116,},
/* L   3   IZ */{120,  122,  124,  126,   128,  130,  132,  134,  136,  138,  140,  142,  144,  146,  148,  150,  152,  154,  156,  158,  160,  160,  160,  160,  160,  160,   160,   160,   160,   160,   160,   160,   160,   160,   160,   160,  160,  162,  164,  166,  168,  170,  172,  174,  176,  178,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,  180,},
/* A   4   BA */{90,   90,   90,   90,    90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,    90,    90,    90,    90,    90,    90,    90,    90,    90,    90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,   88,   86,   84,   82,   80,   78,   76,   74,   72,   70,   68,   66,   64,   62,   60,   58,   56,   54,   52,   50,   48,   46,   44,   42,   40,   38,   36,   34,   32,   30,   28,   26,   24,   22,   20,   18,   16,   15,   14,   13,   12,   11,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,},};

void setup() {
  
  Serial.begin(9600);   
  Bas.attach(pinBas);
  Izq.attach(pinIzq);
  Der.attach(pinDer);
  Gar.attach(pinGar);
 
  Bas.write(Ba);
  Gar.write(Ga);
  Izq.write(Iz);
  Der.write(De);
  delay(100);

}

void loop() {

     for(int i=0; i<103;i++){
     
     Der.write(mov[0][i]);
     Gar.write(mov[1][i]);
     Izq.write(mov[2][i]);
     Bas.write(mov[3][i]); 
     delay(100);  
     }
     
     Bas.write(90);
     Izq.write(120);
     Der.write(80);
     Gar.write(90); 
     delay(100);
}
