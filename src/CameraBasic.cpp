#include <iostream>
#include "CameraBasic.hpp"

CameraExposureInfo& CameraBasic::camera_api_get_exposure(void)
{
	cout << "CameraBasic::camera_api_get_exposure()" << endl;

	return _exposure_info_basic;
}

CameraResultCode CameraBasic::camera_api_set_exposure(CameraExposureInfo& ei)
{
	cout << "CameraBasic::camera_api_set_exposure()" << endl;

	_exposure_info_basic = ei;

	return CAMERA_RES_SUCCESS;
}

CameraImageInfo& CameraBasic::camera_api_get_image(void)
{
	cout << "CameraBasic::camera_api_get_image()" << endl;

	return _image_info_basic;
}
