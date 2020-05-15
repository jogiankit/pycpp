#ifndef __CAMERA_ADVANCED_H__
#define __CAMERA_ADVANCED_H__

#include "CameraInterface.hpp"
#include "CameraMain.hpp"
#include "DataClasses.hpp"

/* Class for Advance Camera type */
class CameraAdvanced : public CameraMain, virtual CameraInterface {
private:
	CameraExposureInfo &_exposure_info_adv;
	CameraImageInfo &_image_info_adv;

public:
	/* Constructor for Advance Camera */
	CameraAdvanced(CameraExposureInfo& cei, CameraImageInfo& cii) : _exposure_info_adv(cei), _image_info_adv(cii) {}

	/* Destructor for Advance Camera */
	~CameraAdvanced(void) {}

	/* Methods for Advance Camera class */
	CameraExposureInfo& camera_api_get_exposure(void);
	CameraResultCode camera_api_set_exposure(CameraExposureInfo& exp_info);
	CameraImageInfo& camera_api_get_image(void);
	CameraResultCode camera_api_common_api(int data);
	CameraResultCode camera_api_other_common_api();
};

#endif	/* __CAMERA_ADVANCED_H__ */