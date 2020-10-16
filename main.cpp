#include <iostream>
#include "mstack.hpp"

using namespace std;

unsigned long f(unsigned long x) {
    return x;
}

int main() {
    mstack<unsigned long> st(f, 10);
    st.push(1);
    st.push(2);
    st.push(30);
    st.push(60);

    cout << st.dump() << endl;
    cout << st.hashChanged() << endl;
    cout << st.hashChanged() << endl;
    return 0;
}
