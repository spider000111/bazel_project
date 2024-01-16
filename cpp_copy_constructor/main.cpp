// Your First C++ Program


#include <iostream>
#include <string>
#include <cstring>

class my_string{
private:
    char * m_buffer;
    unsigned int m_size;
public:
    my_string(const char * ptr){
        m_size = strlen(ptr);
        m_buffer = new char[m_size+1];
        memcpy(m_buffer,ptr,m_size);
        m_buffer[m_size]=0;
    }
    ~my_string(){
        delete[] m_buffer;
    }

    my_string(const my_string & other):m_size(other.m_size){
        m_buffer = new char[m_size+1];
        memcpy(m_buffer,other.m_buffer,m_size+1);
    }

    char& operator[](unsigned int index){
        return m_buffer[index];
    }

    

    friend std::ostream& operator <<(std::ostream& stream, const my_string& str);
};

std::ostream& operator <<(std::ostream& stream, const my_string& str){
    stream<<str.m_buffer;
    return stream;

}

int main() {
    my_string string = "cherno";
    my_string second = string;

    second[2] = 'z';
    
    std::cout << "Hello World!"<<std::endl;
    std::cout<<string<<std::endl;
    std::cout<<second<<std::endl;
    return 0;
}
