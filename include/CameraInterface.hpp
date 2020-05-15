#ifndef __CAMERA_INTERFACE_H__
#define __CAMERA_INTERFACE_H__

#include <exception>
#include "DataClasses.hpp"

using namespace std;

/* Interface class for Camera */
class CameraInterface {
public:
	/* Destructor for Camera Interface */
	virtual ~CameraInterface() {};

	/* Virtual methods for Camera Interface */
	virtual CameraExposureInfo& camera_api_get_exposure(void) = 0;
	virtual CameraResultCode camera_api_set_exposure(CameraExposureInfo& exp_info) = 0;
	virtual CameraImageInfo& camera_api_get_image(void) = 0;

	virtual CameraResultCode camera_api_common_api(int some_data) = 0;
	virtual CameraResultCode camera_api_other_common_api(void) = 0;
};

#endif	/* __CAMERA_INTERFACE_H__ */
