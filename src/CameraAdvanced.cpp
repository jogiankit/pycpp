#include <iostream>
#include "CameraAdvanced.hpp"

using namespace std;

CameraExposureInfo& CameraAdvanced::camera_api_get_exposure()
{
	cout << "CameraAdvanced::camera_api_get_exposure()" << endl;

	return _exposure_info_adv;
}

CameraResultCode CameraAdvanced::camera_api_set_exposure(CameraExposureInfo& ei)
{
	cout << "CameraAdvanced::camera_api_set_exposure()" << endl;

	_exposure_info_adv = ei;

	return CAMERA_RES_SUCCESS;
}

CameraImageInfo& CameraAdvanced::camera_api_get_image(void)
{
	cout << "CameraAdvanced::camera_api_get_image()" << endl;

	return _image_info_adv;
}

CameraResultCode CameraAdvanced::camera_api_common_api(int data)
{
	cout << "CameraAdvanced::camera_api_common_api()" << endl;

	return CameraMain::camera_api_common_api(data);
}

CameraResultCode CameraAdvanced::camera_api_other_common_api(void)
{
	cout << "CameraAdvanced::camera_api_other_common_api()" << endl;

	return CameraMain::camera_api_other_common_api();
}
