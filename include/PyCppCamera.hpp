#ifndef __PY_CPP_CAMERA_H__
#define __PY_CPP_CAMERA_H__

#include <pybind11/pybind11.h>

#include "CameraInterface.hpp"
#include "CameraMain.hpp"
#include "CameraBasic.hpp"
#include "CameraAdvanced.hpp"
#include "DataClasses.hpp"

class PyCamera : public CameraInterface {
public:
	/* Inherit the constructors */
	using CameraInterface::CameraInterface;

	CameraExposureInfo& camera_api_get_exposure(void) override {
		PYBIND11_OVERLOAD_PURE(
			CameraExposureInfo&,
			CameraInterface,
			camera_api_get_exposure);
	}

	CameraResultCode camera_api_set_exposure(CameraExposureInfo& exp_info) override {
		PYBIND11_OVERLOAD_PURE(
			CameraResultCode,
			CameraInterface,
			camera_api_set_exposure,
			CameraExposureInfo&);
	}

	CameraImageInfo& camera_api_get_image(void) override {
		PYBIND11_OVERLOAD_PURE(
			CameraImageInfo&,
			CameraInterface,
			camera_api_get_image);
	}

	CameraResultCode camera_api_common_api(int data) override {
		PYBIND11_OVERLOAD_PURE(
			CameraResultCode,
			CameraInterface,
			camera_api_common_api,
			int);
	}

	CameraResultCode camera_api_other_common_api(void) override {
		PYBIND11_OVERLOAD_PURE(
			CameraResultCode,
			CameraInterface,
			camera_api_other_common_api);
	}
};

#endif	/* __PY_CPP_CAMERA_H__ */
