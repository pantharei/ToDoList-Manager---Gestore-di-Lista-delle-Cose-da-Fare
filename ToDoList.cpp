#include "ToDoList.h"
#include <algorithm>
#include <iostream>
#include <sstream>

std::string lower(const std::string& src){
    std::string buffer{src};
    for(auto& c:buffer){
        c = tolower(c);
    }
    return buffer;
}

size_t search_unsensitive(const std::string& src,
        const std::string& search_string){

    size_t index{std::string::npos};
    std::stringstream ss;
    ss << src;
    bool found = false;

    std::string buf;
    while(ss >> buf && !found){

        if(lower(buf) == lower(search_string)){
            found = true;
            index = src.find(buf);
        }
    }
    return index;
}

void ToDoList::add(std::string name_task, std::string p){
    priority pr;
    if(search_unsensitive(p,"red") != std::string::npos)
        pr = RED;
    else if(search_unsensitive(p,"green") != std::string::npos)
        pr = GREEN;
    else
        pr = YELLOW;

    bool found = false;
    //searching the task
    for(int i=0;i < list.size() && !found; ++i){
        if(list[i].name == name_task)
            found = true;
    }

    if(!found){
        task t(name_task,pr);
        list.push_back(t);
    }
}

void ToDoList::print_list(){
    std::cout << "To Do List\n";
    order_priority();
    for(int i = 0;i < list.size(); ++i){
        std::cout << list[i].name;
        std::string out;
        switch (list[i].pr)
        {
        case RED:
            out = "red";
            break;
        
        case GREEN:
            out = "green";
            break;

        case YELLOW:
            out = "yellow";
            break;
        
        default:
            break;
        }
        std::cout << " - " << out << std::endl;
    }
}

void ToDoList::remove(const std::string target){
    //search
    bool found = false;
    int index = -1;
    for(int i = 0;i<list.size() && index == -1;++i){
        if(list[i].name == target)
            index = i;
    }

    if(index != -1){
        list.erase(list.begin() + index);
    }
}

bool compare(task t1,task t2){
    if(t1.pr > t2.pr) return true;
    else if(t1.pr < t2.pr)return false;
    else if(lower(t1.name) < lower(t2.name))return true;
    else return false;
}

void ToDoList::order_priority(){
    sort(list.begin(),list.end(),compare);
}