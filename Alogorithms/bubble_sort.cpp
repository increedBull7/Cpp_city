/* BUBBLE SORT
    Sabse pehele, given array ke first two elements ko compare kiye jata hai.
    If first element > second element, then unki value swap yaani aadla-badli kardi jati hai.
    Aur comparison array ke last tak chalta hai,
    isse jo sabse large number hota hai array ka vo sabse last mein aa jata hai.
 */
#include<iostream>

using namespace std;

void bubble_sort(int array[],int size);

int main(){
    //Program me sabse pehele to ek array initialize karlo.
    //Khud karo ya user se input karalo, bas array chiye main() function mein, kahi se bhi laao bas leke aao.
    int array[] ={12,1,45,67,89,34,22};

    int size =7;//array ka size

     bubble_sort(array,size);//bubble_sort ka function call hua hai yaha.

    //*********************************************
    //for printing the sorted array.
    for(int loop = 0 ; loop <= size - 1 ; loop++)
        cout<<array[loop]<<" ";
    //*********************************************
    return 0;
}

void bubble_sort(int array[],int size){

    int round , temp;
    //1 round mein array ka greatest number last place pe pahuch jayega.
    //as the value of round increases vese sorted array banta jayega, from ending.
    //temp variable toh bas value swapping ke liye hai bas. 

    for(round = 1 ; round <= size - 1; round++)
        for(int i = 0 ; i <= size - 1 - round ; i++)
            if(array[i] > array[i + 1])
                {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                }

    /* 
    array = {12,1,45,67,89,34,22}
    index = {0, 1, 2, 3, 4, 5, 6}

    Ab dekh.. pehele for loop se ye pata chala ki abhi round 1 chalra hai, thik ho gaya...
    aur second for loop se, i ki value hai 0...
    phir chalega if statement...
    i = 0
    array[i] = array[0] = 12 

    array[i + 1] = array[0 + 1] = array[1] = 1

    ab if statement check karega ki ...array[0] > array[1]...
    12 > 1 haaaai , Dekho bawa yaha pe bhot 😂 dimaag lagana padega, toh 12 bada hai 1 se...okay

    if statement true hui toh aab uske andar wali statements execute hongi..

    array[0] = array[1]
    matlab array ke pehele element mein dusre element ki value aa jayegi..
    swapping ka process nahi bataraha hu vo toh khud se dekh lene bawa.. okay.

    array = {1,12,45,67,89,34,22}
    index = {0, 1, 2, 3, 4, 5, 6}

    ab if statement terminate hogi aur{i++}

    i = 1, but dhyaan rahe round abhi bhi 1 hi chalra hai haa , cumfuse mat hona okay.

    i = 1 par if statement phirse chalegi

    isbaar i = 1 --->>
    array[i] > array[i + 1]
    array[1] > array[1 + 1]
    array[1] > array[2]
    12 > 45 haaai ya nahi , Nahi hai toh if statement false hogi aur nahi chalegi...

    but i ki value value badhegi bhaishaaab, haaaaaan{i++}

    ab i = 2

    phirse if statement mein chalte hain....
    
    array[i] > array[i + 1]
    array[2] > array[2 + 1]=(3)
        45   > 67...... NO {i++}


    i = 3 

    67 > 89 .....NO {i++}

    i = 4

    89 > 34..............YES 

    ab ye value swap karelenge...
    meaning array[4] ke place mein 34 ayega
            array[5] ke place mein 89 ...okay{i++}

    array = {1,12,45,67,34,89,22}
    index = {0, 1, 2, 3, 4, 5, 6}

    i = 5

    ab array[5] mein hai 89

    phirse compare karenge if ke aandar
    array[5] > array[6].....
    89 > 22........YES....Toh phirse swap hoga...

    array = {1,12,45,67,34,22,89}
    index = {0, 1, 2, 3, 4, 5, 6}

    ################################################
    #         AAP CHRONOLOGY SAMAJ LIJEYE BAS      #
    ################################################

    Abhi yaad hai aapko round abhi bhi 1 hai aur dekho kaise 89 jo sabse bada tha vo last mein
    aa gaya....
    thik issi tarah jo number ab 89 se just chota hoga vo 89 ke just aage aajayega yaani array[5] par

    {i <= size - 1 - round} aur is condition ke wajah se last ke numbers set hote rahenge
    matlab vo check nahi honge
    jaise round badhta rahega vese i ki range kam hoti rahegi.

    ab round ki value 2 hojayegi
    aur above process phirse chalega bas jo 89 wali place
    vo compare nahi hogi cause 89 sabse bada hai aur aapne place me perfectly perfect hai.
    toh thik hai phir...
    aaisa hi hota hai Bubble sort......

     */

}
