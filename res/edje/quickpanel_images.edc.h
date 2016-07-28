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


#define RESOURCE_IMAGE( FILE_NAME ) \
   group { \
      name: FILE_NAME; \
      images.image: FILE_NAME COMP; \
      parts { \
         part { name: "image"; \
            description { \
               state: "default" 0.0; \
               image.normal: FILE_NAME; \
               aspect: 1 1; \
               aspect_preference: BOTH; \
            } \
         } \
      } \
   }

#define RESOURCE_IMAGE_LOSSY( FILE_NAME ) \
   group { \
      name: FILE_NAME; \
      images.image: FILE_NAME LOSSY 85; \
      parts { \
         part { name: "image"; \
            description { \
               state: "default" 0.0; \
               image.normal: FILE_NAME; \
               aspect: 1 1; \
               aspect_preference: BOTH; \
            } \
         } \
      } \
   }

	RESOURCE_IMAGE("quick_icon_bluetooth.png");
	RESOURCE_IMAGE("quick_icon_location.png");
	RESOURCE_IMAGE("quick_icon_auto_rotate.png");
	RESOURCE_IMAGE("quick_icon_sf_vf.png");
	RESOURCE_IMAGE("quick_icon_sn_vf.png");
	RESOURCE_IMAGE("quick_icon_sf_vn.png");
	RESOURCE_IMAGE("quick_icon_wifi.png");
