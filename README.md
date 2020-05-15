# pycpp

- Compile with CPP only:
	> Uncomment main.cpp in CMakelist.txt
	
	> Comment PyCppCamera.cpp in CMakelist.txt
	
	> Run command : cmake -H. -Bbuild
	
	> Go to build folder and run : make
	
	> Run camera_interface executable to see the output
	

- Compile with CPP + Pybind11:
	> Comment main.cpp in CMakelist.txt
	
	> Uncomment PyCappCamera.cpp in CMakelist.txt
	
	> Run command : cmake -H. -Bbuild
	
