/*
 * Copyright (c) 2009-2015 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */


#ifndef _QP_NOTI_UTIL_DEF_
#define _QP_NOTI_UTIL_DEF_

typedef enum _qp_noti_image_type {
	QP_NOTI_IMAGE_TYPE_THUMBNAIL,
	QP_NOTI_IMAGE_TYPE_DEFAULT_ICON,
	QP_NOTI_IMAGE_TYPE_SHARED_ICON,
} qp_noti_image_type;

#define QP_SHARED_ICON_FOLDER_NAME "noti_icons"
#define QP_DEFAULT_ICON_NAME	"quickpanel_icon_default.png"

extern int quickpanel_noti_util_get_event_count_from_noti(notification_h noti);
extern int quickpanel_noti_util_get_event_count_by_pkgname(const char *pkgname);
extern char *quickpanel_noti_util_get_time(time_t t, char *buf, int buf_len);

#endif
