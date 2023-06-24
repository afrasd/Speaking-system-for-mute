int wait1 = 7500;
int wait2 = 1500;
int high1 = 0;
int high2 = 0;
int high3 = 0;
int high4 = 0;
int data1=0;
int data2=0;
int data3=0;
int data4=0;
int tx=1;
int rx=0;
int c=0;
char str1[]=" Greetings All";
char str2[]="my name is Manas";
char str3[]="I am a mute person";
char str4[]=" I would like to speak ";
char str5[]="This is our Arduino project";
char str6[]="Project in C language";
char str7[]="I like U A E culture";
char str8[]="I like U A E values ";
char str9[]="This project is designed to help mute people in communicating with the world";
char str10[]="It is an innovative project";
char str11[]="How are you ";
char str12[]="Would you help me";
char str13[]="Welcome to our STEAM Project";
char str14[]="Please  give me some water";
char str15[]="Now I am happy";
char str16[]="Thank you all";

void setup() {
    pinMode(A4,INPUT);
    pinMode(A1,INPUT);
    pinMode(A2,INPUT);
    pinMode(A3,INPUT);
    pinMode(tx, OUTPUT);
    pinMode(rx, INPUT);
    Serial.begin(9600);
}

void loop() {
 // Serial.print("C=");
  //Serial.println(c);
  if((c%2)==0)
   {
  high1=analogRead(A1);
  high2=analogRead(A2);
  high3=analogRead(A3);
  high4=analogRead(A4);
   delay(wait1);
  
   }
else{
  data1=analogRead(A1);
  data2=analogRead(A2);
  data3=analogRead(A3);
  data4=analogRead(A4);
  /*Serial.print("data1=");
  Serial.println(data1);
  Serial.print("data2=");
  Serial.println(data2);
  Serial.print("data3=");
  Serial.println(data3);
  Serial.print("data4=");
  Serial.println(data4);
  Serial.print("high1=");
  Serial.println(high1);
  Serial.print("high2=");
  Serial.println(high2);
  Serial.print("high3=");
  Serial.println(high3);
  Serial.print("high4=");
  Serial.println(high4);*/


        if (data1>high1&&data2>high2&&data3>high3&&data4>high4)//0000
          Serial.println(str1);
          else
        if (data1<high1&&data2>high2&&data3>high3&&data4>high4) //0001
         Serial.println(str2);
          else
        if (data1>high1&&data2<high2&&data3>high3&&data4>high4)//0010
         Serial.println(str3);
         else
        if (data1<high1&&data2<high2&&data3>high3&&data4>high4)//0011
         Serial.println(str4);
         else
        if (data1>high1&&data2>high2&&data3<high3&&data4>high4)//0100
         Serial.println(str5);
         else
        if (data1<high1&&data2>high2&&data3<high3&&data4>high4)//0101
         Serial.println(str6);
         else
        if (data1>high1&&data2<high2&&data3<high3&&data4>high4)//0110
         Serial.println(str7);
         else
        if (data1<high1&&data2<high2&&data3<high3&&data4>high4)//0111
         Serial.println(str8);
          else
        if (data1>high1&&data2>high2&&data3>high3&&data4<high4)//1000
         Serial.println(str9);
         else
        if (data1<high1&&data2>high2&&data3>high3&&data4<high4)//1001
         Serial.println(str10);
         else
        if (data1>high1&&data2<high2&&data3>high3&&data4<high4)//1010
         Serial.println(str11);
         else
        if (data1<high1&&data2<high2&&data3>high3&&data4<high4)//1011
         Serial.println(str12);
         else
        if (data1>high1&&data2>high2&&data3<high3&&data4<high4)//1100
         Serial.println(str13);
         else
        if (data1<high1&&data2>high2&&data3<high3&&data4<high4)//1101
         Serial.println(str14);
         else
        if (data1>high1&&data2<high2&&data3<high3&&data4<high4)//1110
         Serial.println(str15);
         else
        if (data1<high1&&data2<high2&&data3<high3&&data4<high4)//1111
         Serial.println(str16);
         else
         Serial.println("...");
          delay(wait2);
  
}
   
 
c++;

 
  

}
