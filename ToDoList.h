#include <vector>
#include <string>
enum priority{RED = 3,GREEN = 1,YELLOW = 2};
struct task{
        std::string name;
        priority pr;
        task(std::string s_in, priority p_in): name(s_in),pr(p_in){}
    };

class ToDoList{
    std::vector<task> list;

    void order_priority();

    public:
    void add(std::string,std::string);
    void remove(const std::string);
    void print_list();
};