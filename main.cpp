#include <iostream>
#include "mstack.hpp"

using namespace std;

int main() {
    mstack<int> st;
    st.push(1);
    st.push(2);
    st.push(30);
    st.push(60);

    cout << st.dump() << endl;
    return 0;
}
