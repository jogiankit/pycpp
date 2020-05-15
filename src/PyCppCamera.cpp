#include <iostream>
#include "PyCppCamera.hpp"

using namespace std;

namespace py = pybind11;

PYBIND11_MODULE(CameraInterface, m)
{
	/* Bindings to CameraInterface class */
	py::class_<CameraInterface, PyCamera>(m, "PyCamera")
	    .def(py::init<>())
	    .def("camera_api_get_exposure", &CameraInterface::camera_api_get_exposure);

	py::class_<CameraInterface, PyCamera>(m, "PyCamera")
	    .def(py::init<>())
	    .def("camera_api_set_exposure", &CameraInterface::camera_api_set_exposure);

	py::class_<CameraInterface, PyCamera>(m, "PyCamera")	/* This needs a wrapper function to return image data as NumPy array */
	    .def(py::init<>())
	    .def("camera_api_get_image", &CameraInterface::camera_api_get_image(void));

	py::class_<CameraInterface, PyCamera>(m, "PyCamera")
	    .def(py::init<>())
	    .def("camera_api_common_api", &CameraInterface::camera_api_common_api);

	py::class_<CameraInterface, PyCamera>(m, "PyCamera")
	    .def(py::init<>())
	    .def("camera_api_other_common_api", &CameraInterface::camera_api_other_common_api);
}
