#ifndef __CAMERA_BASIC_H__
#define __CAMERA_BASIC_H__

#include "CameraInterface.hpp"
#include "CameraMain.hpp"
#include "DataClasses.hpp"

/* class for Basic Camera type */
class CameraBasic : public CameraMain, virtual CameraInterface {
private:
	CameraExposureInfo &_exposure_info_basic;
	CameraImageInfo &_image_info_basic;

public:
	/* Constructor for Basic Camera */
	CameraBasic(CameraExposureInfo& cei, CameraImageInfo& cii) : _exposure_info_basic(cei), _image_info_basic(cii) {}

	/* Destructor for Advance Camera */
	~CameraBasic(void){}

	/* Methods for Basic Camera class */
	CameraExposureInfo& camera_api_get_exposure(void);
	CameraResultCode camera_api_set_exposure(CameraExposureInfo& exp_info);
	CameraImageInfo& camera_api_get_image(void);
	CameraResultCode camera_api_common_api(int data);
	CameraResultCode camera_api_other_common_api();
};

#endif	/* __CAMERA_BASIC_H__ */
