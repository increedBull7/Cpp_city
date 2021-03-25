//Learn C++ 11
#include<iostream>
#include<vector>

int main(){

//1. Initializer List

//C++03 initializer list:
int arr[4] = {1234,4,5,6};

    std::vector<int> v;

    v.push_back(2);
    v.push_back(22);
    v.push_back(333);


//C++ 11 extended the support

    std::vector<int> v0 {3,4,5,5};

    int x{3};
    std::cout<<x;

//2. Uniform Initialization

//C++ 03
    class Dog{
        public:
        int age;
        std::string name;
    };
    Dog d1 = {5, "Tommy"};



//C++ 11

    class Dog2{
        int age;
        std::string name;
        public:
        Dog2(int age, std::string name){
            this->age = age;
            this->name = name;
        }
    };

    Dog2 d2 = {4, "Pussy"};

//Uniform Initialization search Order:
//1 Intializer_list constructor
//2 Normal constructor
//3 Aggregate initialzer


    class Dog3{
        //3rd Priority
        int age;
        public:
        //1st Priority
        Dog3(const std::initializer_list<int>& list){
            age = *(list.begin());
        }

        //2nd Priority
        Dog3(int age){
            this->age = age;
        }
    };

    //Dog3 d3{3}; //call the initializer_list wala constructor

    //Dog3 d3(3); //calls the normal constructor



//3 auto type

    std::vector<int> v1 = {1,2,3,4,5,6};
    std::vector<int> v2, v3;

// C++ 03

    for(std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
        v2.push_back(*it);



//c++ 11
    for(auto it = v2.begin(); it != v2.end(); ++it)
        v3.push_back(*it);



// 4. for each

    std::vector<int> v4;

// C++ 03
    for(std::vector<int>::iterator it = v3.begin(); it != v3.end(); ++it)
        v4.push_back(*it);


// C++ 11
    for(int i: v1)
        std::cout<<i;

    std::cout<<std::endl;

    for(int i: v2)
        std::cout<<i;

    std::cout<<std::endl;

    for(int i: v3)
        std::cout<<i;   

    std::cout<<std::endl;



// 5. nullptr

//to use NULL for pointers abivously

    void foo(int i);
    void foo(char* c);

    
    //foo(NULL); // ambiguity

    foo(nullptr); // goes to foo_char


// 6. enum class

//C ++ 03

//enum were integers

//     enum apple{green_a, red_a};
//     enum orange{green_o, red_o};

//     apple A = green_a;
//     orange O = green_o;
// //shows warning but works fine
//     if(A == O)
//         std::cout<<"Apples are the new Orange!!\n";

//     else    
//         std::cout<<"Apples are not the new Oranges!!!\n";
    


// C++ 11

    enum class apple {green, red};
    enum class orange { big, small};

    apple a = apple::green;
    orange o = orange::big;
//see error
//cannot compare different enum classes
   // if(a == o)
        //std::cout<<"Apple is Orange!!\n";




//C++ 11 allows in class initialization

    class Base{
        int pussy = 9;

    };
    











    return 0;
}

void foo(int i){
         std::cout<<"foo_int\n";}
    void foo(char* c){std::cout<<"foo_char\n";}
