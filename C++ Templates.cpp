//---->> C++ templates and syntax
template <class T>
class vector {
    T *arr;  // T can be float, char, double, int 
    int size;
    public :
    vector(T* arr){
        //code
    }
};

int main() {
    vector<int> myVec1();
    vector<float> myvec2();
    return 0;
}
