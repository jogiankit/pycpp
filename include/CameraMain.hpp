#ifndef __CAMERA_MAIN_H__
#define __CAMERA_MAIN_H__

#include "CameraInterface.hpp"
#include "DataClasses.hpp"

class CameraMain : public virtual CameraInterface
{
private:
	int _some_data;

public:
	CameraMain() {}
	CameraMain(int data) : _some_data(data) {}

	virtual ~CameraMain(void);

	/* Virtual methods for Camera Interface */
	virtual CameraResultCode camera_api_common_api(int data);
	virtual CameraResultCode camera_api_other_common_api(void);
};

#endif	/* __CAMERA_MAIN_H__ */
