#include<iostream>
using namespace std;

int main(){
int quant;// quantity
int choice;// choice

// quantity 
int qrooms = 0 , qpasta = 0, qburger = 0, qnoodles = 0,qshake = 0, qchiken =0;

// food items sold 
int sroom = 0, spasta = 0, sburger = 0, snoodles =0, sshake = 0, schiken = 0;

// Total proces of product 
int Total_rooms =0,Total_shakes = 0, Total_pasta = 0, Total_burger = 0, 
Total_noodles = 0, Total_chiken = 0;

cout << "\n\t Quantity of items we have ";
cout << "\nRooms available : ";
cin >> qrooms;

cout << "\nQuantitiy of pasta :" ;
cin>> qpasta;

cout << "\nQuantity of burger :";
cin >> qburger;

cout << "\nQuantity of noodles :";
cin >> qnoodles;

cout << "\nQuantity of shakes :";
cin >> qshake;

cout << "\nQuantity of chiken rools : ";
cin >> qchiken;

m:// this all items are menu so we can define this as a m then 
//we can create a jump statement for this it is easy because then if 
//we want burger and noodles we can order them separately
cout << "\n\t\t\t Please select from the menu options ";
cout<< "\n\n1) Rooms";
cout<< "\n\n2) Pasta";
cout<< "\n\n3) Burger";
cout<< "\n\n4) Noodles";
cout<< "\n\n5) Shake";
cout<< "\n\n6) Chiken-Roll";
cout << "\n\n7) Information regarding sales and collection ";
cout << "\n\n8) Exit";

cout << "\n\n Please enter your choice : ";
cin >> choice;


switch (choice)
{
case 1:
cout << "\n\n Enter the number of rooms you want : ";
cin >> quant;
if(qrooms-sroom>=quant){
    sroom = sroom + quant;
    Total_rooms = Total_rooms + quant*1200;
    cout << "\n\n\t\t"<<quant<< "room/rooms have been alloted to you :";
}
else{
    cout << "\n\t Only "<< qrooms-sroom << "Rooms remaininh in hotel :";


}
break;


case 2:
cout << "\n\n Enter the number of Pasta you want : ";
cin >> quant;
if(qpasta-spasta>=quant){
    spasta = spasta + quant;
    Total_pasta = Total_pasta + quant*250;
    cout << "\n\n\t\t"<<quant<< "pasta is order !";
}
else{
    cout << "\n\t Only "<< qpasta-spasta << "Pasta remaining in hotel";


}
break;


case 3:
cout << "\n\n Enter the number of Burger you want : ";
cin >> quant;
if(qburger-sburger>=quant){
    sburger = sburger + quant;
    Total_burger = Total_burger + quant*120;
    cout << "\n\n\t\t"<<quant<< "Burger is order !";
}
else{
    cout << "\n\t Only "<< qburger-sburger << "Buger remaining in hotel";


}
break;


case 4:
cout << "\n\n Enter the number of Noodle you want : ";
cin >> quant;
if(qnoodles-snoodles>=quant){
    snoodles = snoodles + quant;
    Total_noodles = Total_noodles + quant*250;
    cout << "\n\n\t\t"<<quant<< "Noodles is order !";
}
else{
    cout << "\n\t Only "<< qnoodles-snoodles << "Noodles remaining in hotel";


}
break;


case 5:
cout << "\n\n Enter the number of Shakes you want : ";
cin >> quant;
if(qshake-sshake>=quant){
    sshake = sshake + quant;
    Total_shakes = Total_shakes + quant*250;
    cout << "\n\n\t\t"<<quant<< "Shake is order !";
}
else{
    cout << "\n\t Only "<< qshake-sshake<< "Shakes remaining in hotel";


}
break;

case 6:
cout << "\n\n Enter the number of Chiken-Roll you want : ";
cin >> quant;
if(qchiken-schiken>=quant){
    schiken = schiken + quant;
    Total_chiken = Total_chiken + quant*250;
    cout << "\n\n\t\t"<<quant<< "Chiken-Roll is order !";
}
else{
    cout << "\n\t Only "<< qburger-sburger << "Chiken-Roll remaining in hotel";


}
break;

case 7:

cout<< "\n\t\tDetails of sales and collection ";
cout << "\n\n Number of rooms we had : "<< qrooms;
cout << "\n\n Number of rooms we gave for rent "<< sroom;
cout<< "\n\n Remaining rooms : "<< qrooms-sroom;
cout << "\n\n Total rooms collection for the day " << Total_rooms;

cout << "\n\n Number of pasta we had : "<< qpasta;
cout << "\n\n Number of pasta we gave for rent "<< spasta;
cout<< "\n\n Remaining pasta : "<< qpasta-spasta;
cout << "\n\n Total pasta collection for the day " << Total_pasta;

cout << "\n\n Number of Burger we had : "<< qburger;
cout << "\n\n Number of Burger  we gave for rent "<< sburger;
cout<< "\n\n Remaining Burger : "<< qburger-sburger;
cout << "\n\n Total  collection for the day " << Total_burger;

cout << "\n\n Number of Noodles we had : "<< qnoodles;
cout << "\n\n Number of Noodles we gave for rent "<< snoodles;
cout<< "\n\n Remaining Noodles : "<< qnoodles-snoodles;
cout << "\n\n Total Noodles collection for the day " << Total_noodles;

cout << "\n\n Number of Shakes we had : "<< qshake;
cout << "\n\n Number of Shakes we gave for rent "<< sshake;
cout<< "\n\n Remaining Shakes : "<< qshake-sshake;
cout << "\n\n Total Shakes collection for the day " << Total_shakes;


cout << "\n\n Number of Chiken-Roll we had : "<< qchiken;
cout << "\n\n Number of Chiken-Roll we gave for rent "<< schiken;
cout<< "\n\n Remaining Chiken-Roll : "<< qchiken-schiken;
cout << "\n\n Total Chiken-Roll collection for the day " << Total_chiken;
cout << "\n\n\n Total Collection for the day : "<< Total_burger+Total_chiken+Total_noodles+Total_pasta+Total_rooms+Total_shakes;
break;

case 8:
exit(0);
    default:
    cout<< "\n Please select the numbers mentioned above !";




















}
goto m;// jump statement 
























return 0;
}