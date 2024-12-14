//*****************************************************************************************************
//      Chocolate Chip Cookies Recipe - Scaling Ingredients
//
//      This program is a simple recipe for making Chocolate Chip Cookies that can be scaled to any
//      number of dozens.
//
//*****************************************************************************************************

#include <bits/stdc++.h>

using namespace std;



int main() {
    
    const int BUTTER=1,
    VANILLA=2,
    FLOUR=2, 
    CHOCO_CHIP=2;

    const double BAKING_SODA=0.25,
    SUGAR=1.25,
    SALT=0.75;

    int dozen,
    quantity;

    cout<<"Choco chip cookies recipe for 4 dozen cookies\n";

    cout<<"\n\tButter "<<BUTTER<<" Cups"<<endl
        <<"\tWhite Sugar "<<SUGAR<<" Cups"<<endl
        <<"\tFlour "<<FLOUR<<" Cups"<<endl
        <<"\tChoco Chip "<<CHOCO_CHIP<<" tbsp"<<endl
        <<"\tVanilla "<<VANILLA<<" tbsp"<<endl
        <<"\tSalt "<<SALT<<" tbsp"<<endl
        <<"\tBaking Soda"<<FLOUR<<" tsp\n"<<endl;

    cout << "\nPreheat oven to 350 F. In a large bowl, mix butter, sugar, and vanilla\n"
         << "until light and fluffy. In a separate bowl, combine flour, baking soda, and\n"
         << "salt; stir into the butter mixture until well-blended stir in chocolate chips.\n"
         << "Drop by rounded teaspoons onto ungreased cookie sheets. Bake 8-10 minutes until\n"
         << "just set. Cool slightly on cookie sheets before transferring to cooling racks\n"
         << "to cool completely." << endl;

    cout<<"\nHow many dozens would you like to make : ";
    cin>>dozen;

    quantity=dozen/4;

    cout<<"\n\n\tButter "<<quantity* BUTTER<<" Cups"<<endl
    <<"\tWhite Sugar "<<quantity*SUGAR<<" Cups"<<endl
    <<"\tFlour "<<quantity*FLOUR<<" Cups"<<endl
    <<"\tChoco Chip "<<quantity*CHOCO_CHIP<<" tbsp"<<endl
    <<"\tVanilla "<<quantity*VANILLA<<" tbsp"<<endl
    <<"\tSalt "<<quantity*SALT<<" tbsp"<<endl
    <<"\tBaking Soda"<<quantity*FLOUR<<" tsp\n"<<endl;
    return 0;
}

