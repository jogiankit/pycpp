#ifndef __DATA_CLASSES_H__
#define __DATA_CLASSES_H__

/*
 * Result code for Camera APIs
 */
typedef enum camera_res_code {
	CAMERA_RES_SUCCESS = 0,
	CAMERA_RES_FAIL
} CameraResultCode;

/*
 * Request/Response structure for
 * get/set exposure request
 */
class CameraExposureInfo {
public:
	CameraResultCode result;
	unsigned int exposure_time;
};

/*
 * Response structure for
 * get image request
 */
class CameraImageInfo {
public:
	CameraResultCode result;
	unsigned int raw_max;
	unsigned int column_max;
	unsigned char image_data[10][10];

	CameraImageInfo(){}
	CameraImageInfo(const CameraImageInfo& inst) {
		raw_max = inst.raw_max;
		column_max = inst.column_max;

		for (int ind=0; ind<raw_max; ind++) {
			for (int ind2=0; ind2<column_max; ind2++) {
				image_data[ind][ind2] = inst.image_data[ind][ind2];
			}
		}
	}

	~CameraImageInfo() {}
};

#endif	/* __DATA_CLASSES_H__ */
