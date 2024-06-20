#include <iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
struct recipe
{
    string unam, ures, uing, uquan;
};
void bir();  //signatures
void chicken();
void kof();
void okra();
void veg();

char man;
int a, B, count = -1, ing = -1, qty = -1, res = -1, wh = 0, cho2, cho4;
int j = 0, k = 0, s = 0, jj = 1, i = 0; //Used in case 3;
char cho, cho3, cho5, cho6;

int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	
    recipe arr[1000];
Malik:
    SetConsoleTextAttribute(h,3);
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout<<"\n\t\t\t\t**************\tWelcome to Malik's Recipe Portal   **************\n\n";
    cout << "\n\n\t\t\t\t\t\tEnter 1 to See Our Recipes Book: \n";
    cout << "\t\t\t\t\t\tEnter 2 to Add Your Recipes: \n";
    cout << "\t\t\t\t\t\tEnter 3 to See All Your Recipes: \n";
    cout << "\t\t\t\t\t\tEnter 4 to Search Recipes: \n";
    cout << "\t\t\t\t\t\tEnter 5 to Edit Recipes: \n";
    cout << "\t\t\t\t\t\tEnter 6 to EXIT Recipes: \n";
	cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cin >> a;
   
    switch (a)  //Main Switch
    {
    case 1:
        system("cls");
        cout << "\nWelcome to Our Recipe Book\n\n";
        do //1st Do wHILE
        {
            cout << "We have Following Menu: \n\n1.Biryani\n2.Chicken Quorma\n3.Kofta\n4.Bhindi Goshat\n5.Mix Sabzi\n6.Exit\n";
            cin >> B;
            switch (B)  //Sub Switch,
            {
            case 1:
                system("cls");
             SetConsoleTextAttribute(h,14);

                bir();
                break;
            case 2:
             system("cls");
             SetConsoleTextAttribute(h,2);
                chicken();
                break;
            case 3:
             system("cls");
             SetConsoleTextAttribute(h,1);
                kof();
                break;
            case 4:
             system("cls");
             SetConsoleTextAttribute(h,5);
                okra();
                break;
            case 5:
             system("cls");
             SetConsoleTextAttribute(h,8);
                veg();
                break;
            default:
                if (B > 6)
                {
                    cout << "\nInvalid Input\n\n";
                    break;
                }
            }

        } while (B != 6);
        goto Malik;
        break;
  
   case 2:
   system("cls");
   	do{
	HERE:
   	count++; res++;
   	cout << "\n\n*******************************************************\tWelcome Add Recipes *********************************************************\n\n";
   	cout<<"This is the Recipe No."<<count+1<<"  ";
   	cin.ignore();
   	getline(cin, arr[count].unam);
   	cout << "\n\n*********************************************************\n\n";
   	cout << "\n\nEnter Your Ingredients and Quantity.\n";
    cout << "\n\n********************************************************\n\n";
   	for(int i=0;i<5;i++)
   	{
   		qty++; ing++;
   		cout<<"Ingrediant No. "<<i+1<<":  ";
   		cin>>arr[ing].uing;
   		cout<<"Quantity: ";
   		cin>>arr[qty].uquan;
    	cout << "\n\n********************************************************\n\n";
	}
  
    cout << "\n\nEnter the Procedure\n\n";
    cin.ignore();
    getline(cin, arr[res].ures);
    cout << "\n\n********************************************************\n\n";
    cout<<"\n\nPress Y to Add More Recipes: ";
 	cin>>cho;
      }while(cho=='y'||cho=='Y');
     goto Malik;
    
    case 3:
    	while(wh<=count)
    	{
    		cout<<"\n\n*******************************************************  "<<arr[j].unam<<"  *************************************************************\n\n";
    		cout << "\n\n\t\t\t\t\t\t\tIngredients and Quantity.\n\n";
    		cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    		for(i;i<jj*5;i++)   
    		{
    			cout<<"\t\t\t\t\t"<<arr[k].uing<<"\n\t\t\t\t\t\t\t\t\t"<<arr[k].uquan<<endl;
    			k++;
			}
			cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
			cout << "\n\n\t\t\t\t\t\t\t\tProcedure.\n\n";
            cout<<"\t"<<arr[s].ures;
            cout<<"\n\n\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  THE END  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
			j++;wh++;jj++;s++;
		}
		goto Malik;
	
    case 4:
		cout<<"\n\n************************************************************  Welcome To Search Menu  *************************************************************\n\n";
        cout<<"Enter the Recipe Number ";
        cin>>cho2;
        cho2--;
        cout<<"\n\n************************************************************  "<<arr[cho2].unam<<"  *************************************************************\n\n";
    	cout << "\n\n\t\t\t\t\t\t\tIngredients and Quantity.\n\n";
    	cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    	for(int x=cho2*5;x<cho2*5+5;x++)
    	{
    		cout<<"\t\t\t\t\t"<<arr[x].uing<<"\n\t\t\t\t\t\t\t\t\t"<<arr[x].uquan<<endl;
    			
		}
		cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
		cout << "\n\n\t\t\t\t\t\t\t\tProcedure.\n\n\n";
        cout<<"\t"<<arr[cho2].ures;
        cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  THE END  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
	    goto Malik;
	    break;
   
    case 5:
    cout<<"\n\n************************************************************  Welcome To EDIT Menu  *************************************************************\n\n";
    cout<<"Enter Recipe Number that you want to change: ";
    cin>>cho4;
    cho4--;
    cout<<"Enter the New Recipe Name: ";
    cin>>arr[cho4].unam;
    cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    cout << "\n\n\t\t\t\t\t\t\tIngredients and Quantity.\n\n";
    cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";	
    for(int i=cho4*5;i<cho4*5+5;i++)	
    {
        cout<<"Ingrediant "<<i+1<<"  ";
        cin>>arr[i].uing;
        cout<<"Quantity: ";
        cin>>arr[i].uquan;
    }
    cout << "\n\n\t\t\t\t\t\t\t\tProcedure.\n\n\n";
    cin>>arr[cho4].ures;
    cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  THE END  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    goto Malik;
    break;
    case 6:
    break;
    default:
		cout<<"Wrong Input Press C to Continue:  ";
	    cin>>cho3;                                 
		if(cho3=='C'||cho3=='c')    
			goto Malik;
	
		else
		    break;
    }
   
 return 0;
}
// Biryani Function.
		
	void bir(){
	 
    cout<<"\n*************************************************************** Biryani ******************************************************\n\n";
	cout<<"Ingredients:\n\n";
	cout<<"Chicken:\t\t\t500 grams\nOnions:\t\t\t\t2 large\nYogurt:\t\t\t\t1/2 cup\nCooking oil or ghee:\t\t1/4 cup";
    cout<<"\nGinger-garlic paste:\t\t2 tablespoons\n\nBiryani Masala Powder (or a mix of ground spices):\n\nRed Chili Powder:\t\t1 Teaspoon\nTurmeric powder:\t\t1/2 teaspoon\nCoriander powder:\t\t1 teaspoon\nCumin powder:\t\t\t1/2 tespoon\n";
    cout<<"\n\nProcedure:\n\n";
    cout<<"Heat 1/4 cup of cooking oil or ghee in a pan. Add thinly sliced onions and cook until they turn golden brown. \nIncorporate 2 tablespoons of ginger-garlic paste into the onions and sauté until the raw aroma disappears. \nIntroduce 500 grams of chicken pieces into the pan, cooking until they acquire a brown color. Sprinkle Chicken \nQorma masala powder (or a mix of 1 teaspoon red chili powder, 1/2 teaspoon turmeric powder, 1 teaspoon coriander \npowder, and 1/2 teaspoon cumin powder) along with salt. Cook for a few minutes to blend the spices well. Pour \nin 1/2 cup of beaten yogurt, stirring continuously until the oil starts to separate from the masala. Adjust \nthe consistency by adding water, cover the pan, and simmer on low heat until the chicken becomes tender. Garnish \nwith chopped coriander leaves if desired. Serve hot with rice or naan.\n\n";
    cout<<"************************************************************************************************************************************\n\n";
}
// Chicken Quorma Function
void chicken(){
	cout<<"\n*************************************************************** Chicken Quorma ******************************************************\n\n";
	cout<<"Ingredients:\n\n";
	cout<<"Chicken:\t\t\t500 grams\nOnions:\t\t\t\t2 large\nYogurt:\t\t\t\t1/2 cup\nCooking oil or ghee:\t\t1/4 cup";
    cout<<"\nGinger-garlic paste:\t\t2 tablespoons\n\nChicken Qorma Masala Powder (or a mix of ground spices):\n\nRed Chili Powder:\t\t1 Teaspoon\nTurmeric powder:\t\t1/2 teaspoon\nCoriander powder:\t\t1 teaspoon\nCumin powder:\t\t\t1/2 tespoon\n";
    cout<<"\n\nProcedure:\n\n";
    cout<<"Heat 1/4 cup of cooking oil or ghee in a pan. Add thinly sliced onions and cook until they turn golden brown. \nIncorporate 2 tablespoons of ginger-garlic paste into the onions and sauté until the raw aroma disappears. \nIntroduce 500 grams of chicken pieces into the pan, cooking until they acquire a brown color. Sprinkle Chicken \nQorma masala powder (or a mix of 1 teaspoon red chili powder, 1/2 teaspoon turmeric powder, 1 teaspoon coriander \npowder, and 1/2 teaspoon cumin powder) along with salt. Cook for a few minutes to blend the spices well. Pour \nin 1/2 cup of beaten yogurt, stirring continuously until the oil starts to separate from the masala. Adjust \nthe consistency by adding water, cover the pan, and simmer on low heat until the chicken becomes tender. Garnish \nwith chopped coriander leaves if desired. Serve hot with rice or naan.\n\n";
    cout<<"************************************************************************************************************************************\n\n";
}
// Kofta
void kof(){
	cout<<"\n************************************************************* Kofta Mix *************************************************************\n\n";
    cout<<"Ingredients:\n\n";
	cout<<"Beef Meat:\t\t\t500 grams\nOnion:\t\t\t\t1 large\nGarlic:\t\t\t\t2 cloves\nGinger:\t\t\t\t1 teaspoon\nGreen chili:\t\t\t1 Piece\nCoriander powder:\t\t1 teaspoon\nCumin powder:\t\t\t1 teaspoon\nGaram masala:\t\t\t1/2 teaspoon\nRed chili powder:\t\t1/2 teaspoon\nSalt:\t\t\t\t1 teaspoon\nBesan:\t\t\t\t2 tablespoons\nFresh coriander leaves: \t2 tablespoons\nCooking oil:\t\t\tFor frying\n";
	cout<<"\n\nProcedure: \n\n";
	cout<<"In a large bowl, combine 500 grams of ground meat with finely chopped onions, minced garlic, grated ginger, \nchopped green chili, coriander powder, cumin powder, garam masala, red chili powder, salt, besan, and chopped \ncoriander leaves. Mix the ingredients thoroughly to form a smooth and well-combined mixture. Shape the mixture \ninto small, round kofta balls.Heat cooking oil in a pan over medium heat. Fry the koftas until they are golden \nbrown and cooked through. Make sure to turn them to ensure even cooking.\n\nOnce the koftas are cooked, remove them from the pan and place them on paper towels to absorb excess oil.Serve \nthe koftas hot with your favorite sauce or curry, or use them to make kofta curry. Enjoy the delicious and \nflavorful kofta dish!\n\n";
	cout<<"************************************************************************************************************************************\n\n";
}
// OKRA Meat 
void okra(){
	cout<<"\n************************************************************ Bhindi Goshat **********************************************************\n\n";
    cout<<"Ingredients:\n\n";
	cout<<"Bhindi (Okra):\t\t\t\t250 grams\nGosht (Meat, mutton or beef):\t\t500 grams\nOnion:\t\t\t\t\t1 large\nTomato:\t\t\t\t\t2 medium-sized\nGinger-garlic paste:\t\t\t1 tablespoon\nCooking oil:\t\t\t\t3 tablespoons\n";
	cout<<"\n\nProcedure:\n\n";
	cout<<"In a pan, sauté finely chopped onions until golden brown, then add ginger-garlic paste and \nchopped tomatoes. Cook until the mixture is well combined. Brown meat cubes in a separate \npan and combine with the onion-tomato mixture. Season with turmeric powder, red chili powder,\ncoriander powder, cumin powder, garam masala, and salt. Introduce sliced bhindi and slit \ngreen chilies, cooking until bhindi is tender. Garnish with chopped coriander leaves. Serve \nthe flavorful Bhindi Gosht hot with naan or rice for a delightful meal.\n\n";	
    cout<<"************************************************************************************************************************************\n\n";
}
// Mix_Veg.
void veg(){
	cout<<"\n************************************************************* Mix Sabzi *************************************************************\n\n";
    cout<<"Ingredients:\n\n";
	cout<<"Potato (peeled and diced):\t\t\t1 cup\nCauliflower (florets):\t\t\t\t1 cup\nCarrot (peeled and sliced):\t\t\t1/2 cup\nGreen Beans (cut into pieces):\t\t\t1/2 cup\nGreen Peas:\t\t\t\t\t1/2 cup\nCapsicum (bell pepper, diced):\t\t\t1/2 cup\nTomato (chopped):\t\t\t\t1 Cup\nOnion (finely chopped):\t\t\t\t1 medium-sized\nGarlic (minced):\t\t\t\t2 cloves\nGinger (grated):\t\t\t\t1 teaspoon\n";
    cout<<"\n\nProcedure\n\n";
	cout<<"In a pan, heat 2 tablespoons of cooking oil. Sauté finely chopped onions until golden brown. Add minced garlic, grated ginger,\nand finely chopped green chili, cooking until the raw aroma disappears. Add chopped tomatoes and cook until softened. Introduce\ndiced potatoes, cauliflower florets, sliced carrots, green beans, green peas, and diced capsicum. Season with turmeric powder, \nred chili powder, coriander powder, cumin powder, garam masala, and salt. Mix well. Cover and simmer until vegetables are tender\nyet crisp. Garnish with chopped fresh coriander leaves. Serve hot with roti or rice for a delightful Mix Sabzee.\n\n";	
	cout<<"************************************************************************************************************************************\n\n";	
}