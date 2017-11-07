#include <pybind11/pybind11.h>

namespace py = pybind11;

class Bar {
    public:
        Bar() {};
        unsigned int foo(unsigned int xy_addr) const {return xy_addr; }
        unsigned int foo(unsigned int x, unsigned int y) const {return y*4+x; }
};

PYBIND11_MODULE(example, m) {
    py::class_<Bar>(m, "Bar")
        .def(py::init<>())
        .def("foo", (unsigned int (Bar::*)(unsigned int, unsigned int) const) &Bar::foo, "foo fun")
        .def("foo", (unsigned int (Bar::*)(unsigned int) const) &Bar::foo, "foo fun");
}
