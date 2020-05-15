# pycpp - PythonCpp Camera Interface

## Compile with CPP only:
	> Uncomment main.cpp in CMakelist.txt
	
	> Comment PyCppCamera.cpp in CMakelist.txt
	
	> Run command : 
		"cmake -H. -Bbuild"
	
	> Go to build folder and run : 
		"make"
	
	> Run camera_interface executable to see the output
	

## Compile with CPP + Pybind11:
	> Comment main.cpp in CMakelist.txt
	
	> Uncomment PyCappCamera.cpp in CMakelist.txt
	
	> Run command :
		"cmake -H. -Bbuild"
	

## Output of CPP code with main.cpp testcases :

build/~ ./camera_interface 
-------------------------------------------
CameraBasic::camera_api_get_exposure()

exposure_time: 5

CameraBasic::camera_api_get_image()

image_data: 

0 0 1 

1 0 1 

1 1 0 

CameraBasic::camera_api_set_exposure()

CameraBasic::camera_api_get_exposure()

set exposure_time: 10


CameraAdvanced::camera_api_get_exposure()

exposure_time: 15

CameraAdvanced::camera_api_get_image()

image_data: 

0 0 1 1 0 

1 0 1 1 0 

1 1 0 0 1 

0 1 0 1 1 

1 0 1 1 0 

CameraAdvanced::camera_api_set_exposure()

CameraAdvanced::camera_api_get_exposure()

exposure_time: 10
