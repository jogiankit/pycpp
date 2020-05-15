#include <iostream>
#include <cstring>
#include <stdlib.h>

#include "CameraInterface.hpp"
#include "CameraBasic.hpp"
#include "CameraAdvanced.hpp"

static void _test_basic_camera()
{
	CameraExposureInfo exp_info;
	CameraImageInfo img_info;
	unsigned char img1[3][3] = {{'0','0','1'}, {'1','0','1'}, {'1','1','0'}};
	CameraInterface *basic_camera = NULL;

	exp_info.exposure_time = 5;
	img_info.raw_max = 3;
	img_info.column_max = 3;
	for (int ind=0; ind<img_info.raw_max; ind++) {
		for (int ind2=0; ind2<img_info.column_max; ind2++) {
			img_info.image_data[ind][ind2] = img1[ind][ind2];
		}
	}

	basic_camera = new CameraBasic(exp_info, img_info);

	/* Verify Get APIs */
	{
		/* Get exposure time */
		{
			CameraExposureInfo exp_info_get = basic_camera->camera_api_get_exposure();
			cout << "exposure_time: " << exp_info_get.exposure_time << endl;
		}

		/* Get image data */
		{
			CameraImageInfo img_info_get = basic_camera->camera_api_get_image();

			cout << "image_data: " << endl;
			for (int ind=0; ind<img_info_get.raw_max; ind++) {
				for (int ind2=0; ind2<img_info_get.column_max; ind2++) {
					cout << img_info_get.image_data[ind][ind2] << " ";
				}
				cout << endl;
			}
		}
	}

	/* Verify Set APIs */
	{
		CameraExposureInfo exp_info_set;
		CameraExposureInfo exp_info_get;

		exp_info_set.exposure_time = 10;
		basic_camera->camera_api_set_exposure(exp_info_set);

		exp_info_get = basic_camera->camera_api_get_exposure();

		cout << "set exposure_time: " << exp_info_get.exposure_time << endl;
	}
}

static void _test_adv_camera()
{
	CameraExposureInfo exp_info;
	CameraImageInfo img_info;
	unsigned char img1[5][5] = {{'0','0','1','1','0'}, {'1','0','1','1','0'}, {'1','1','0','0','1'}, {'0','1','0','1','1'}, {'1','0','1','1','0'}};
	CameraInterface *adv_camera = NULL;

	exp_info.exposure_time = 15;
	img_info.raw_max = 5;
	img_info.column_max = 5;
	for (int ind=0; ind<img_info.raw_max; ind++) {
		for (int ind2=0; ind2<img_info.column_max; ind2++) {
			img_info.image_data[ind][ind2] = img1[ind][ind2];
		}
	}

	adv_camera = new CameraAdvanced(exp_info, img_info);

	/* Verify Get APIs */
	{
		/* Get exposure time */
		{
			CameraExposureInfo exp_info_get = adv_camera->camera_api_get_exposure();
			cout << "exposure_time: " << exp_info_get.exposure_time << endl;
		}

		/* Get image data */
		{
			CameraImageInfo img_info_get = adv_camera->camera_api_get_image();

			cout << "image_data: " << endl;
			for (int ind=0; ind<img_info_get.raw_max; ind++) {
				for (int ind2=0; ind2<img_info_get.column_max; ind2++) {
					cout << img_info_get.image_data[ind][ind2] << " ";
				}
				cout << endl;
			}
		}
	}

	/* Verify Set APIs */
	{
		CameraExposureInfo exp_info_set;
		CameraExposureInfo exp_info_get;

		exp_info_set.exposure_time = 10;
		adv_camera->camera_api_set_exposure(exp_info_set);

		exp_info_get = adv_camera->camera_api_get_exposure();

		cout << "exposure_time: " << exp_info_get.exposure_time << endl;
	}
}

int main(void)
{
	/* Test Basic Camera class methods */
	cout << "-------------------------------------------" << endl;
	_test_basic_camera();
	cout << "-------------------------------------------" << endl;

	/* Test Advanced Camera class methods */
	_test_adv_camera();
	cout << "-------------------------------------------" << endl;

	return 0;
}
