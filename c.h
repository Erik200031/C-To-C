#ifndef C_H
#define C_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <utility>


class C{
    public:
    C();
    ~C();
    private:
    void start();
    bool check();
    void add_dis();
    void add_virtuals();
    void bind_virtuals();
    void delete_empty();
    void delete_prefix();
    void find_objects(int i);
    bool is_ref(std::string);
    bool check_member(int i);
    bool derivedacces(int i,int j);
    bool func_access(int i, int j); 
    bool func_access_not_derived(int i,int j);
    bool is_derived(std::string);
    void inherit(int i,int j);
    void read_text(std::string path);
    void generate();
    void sort_members(int i, int j);
    std::vector<std::string> make_vector(int i, int j);
    std::string check_add(int i,int j);
    std::string find_type(std::string str);
    std::string ref_to(std::string str);
    inline void error() { std::cout<<"ERROR" ; exit(0) ; }

    private:
    std::vector<std::vector<std::string>> text;
    std::map<std::string,std::vector<std::string>> mp;
    std::map<std::string,std::string> objects;
    std::map<std::pair<std::string,std::string>,std::string > vtable ;
    std::ifstream fin;
    std::ofstream fout;
    char flag = 'p';
    int countscop{};    

};




#endif //C_H