#include <iostream>
#include "CameraInterface.hpp"
#include "CameraMain.hpp"

using namespace std;

CameraMain::~CameraMain(void)
{
}

CameraResultCode CameraMain::camera_api_common_api(int data)
{
	cout << "CameraMain::camera_api_common_api()" << endl;

	_some_data = data;

	return CAMERA_RES_SUCCESS;
}

CameraResultCode CameraMain::camera_api_other_common_api(void)
{
	cout << "CameraMain::camera_api_other_common_api()" << endl;

	return CAMERA_RES_SUCCESS;
}
