#include "/usr/include/python3.10/Python.h"

// Function to add two numbers
static PyObject* add(PyObject* self, PyObject* args) {
    double a, b, result;

    // Parse the Python arguments (expects two floats or integers)
    if (!PyArg_ParseTuple(args, "dd", &a, &b)) {
        return NULL;
    }

    result = a + b;

    // Return the result as a Python float object
    return Py_BuildValue("d", result);
}

// Method table
static PyMethodDef MyMethods[] = {
    {"add", add, METH_VARARGS, "Add two numbers"},
    {NULL, NULL, 0, NULL}
};

// Module definition
static struct PyModuleDef mymodule = {
    PyModuleDef_HEAD_INIT,
    "mymodule",  // Module name
    "A simple example module",  // Module documentation
    -1,
    MyMethods
};

// Module initialization function
PyMODINIT_FUNC PyInit_mymodule(void) {
    return PyModule_Create(&mymodule);
}