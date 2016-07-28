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


#include "../../inc/quickpanel_def.h"
#include "color_classes.edc"

#define SETTING_ALL_BG_COLOR "AO001"
#define SETTING_ALL_SECTION_TEXT_COLOR "ATO006"

	group {
		name: "quickpanel/page_setting_all_base";
		parts {
			part {
				name: "background";
				type: SPACER;
				scale: 1;
				mouse_events: 1;
				description {
					state: "default" 0.0;
					min: QP_WIN_W (QP_WIN_H - QP_DATE_H - QP_HANDLE_H);
				}
				description {
					state: "portrait" 0.0;
					inherit: "default" 0.0;
				}
				description {
					state: "landscape" 0.0;
					inherit: "default" 0.0;
					min: QP_WIN_H (QP_WIN_W - QP_DATE_H - QP_HANDLE_H);
				}
			}
			part{
				name: "object.layout";
				type:SWALLOW;
				scale: 1;
				description {
					state: "default" 0.0;
					fixed: 0 0;
					rel1 {to: "background";}
					rel2 {to: "background";}
					align: 0.0 0.0;
					visible:1;
				}
			}
		}
		programs {
			program{
				name: "portrait";
				signal: "portrait";
				source: "prog";
				action: STATE_SET "portrait" 0.0;
				target: "background";
			}
			program{
				name: "landscape";
				signal: "landscape";
				source: "prog";
				action: STATE_SET "landscape" 0.0;
				target: "background";
			}
		}
	}
	group {
		name: "quickpanel/page_setting_all";
		parts {
			part {
				name: "background";
				type: RECT;
				scale: 1;
				mouse_events: 1;
				description {
					state: "default" 0.0;
					min: QP_WIN_W (QP_WIN_H - QP_DATE_H - QP_HANDLE_H);
					visible: 1;
					color_class: SETTING_ALL_BG_COLOR;
				}
				description {
					state: "portrait" 0.0;
					inherit: "default" 0.0;
				}
				description {
					state: "landscape" 0.0;
					inherit: "default" 0.0;
					min: QP_WIN_H (QP_WIN_W - QP_DATE_H - QP_HANDLE_H);
				}
			}
			part {
				name: "rect.active.buttons";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 356;
					rel1 {
						relative: 0.0 0.0;
						to_x: "background";
						to_y: "background";
					}
					rel2 {
						relative: 1.0 0.0;
						to_x: "background";
						to_y: "background";
					}
					align: 0.0 0.0;
				}
				description {
					state: "portrait" 0.0;
					inherit: "default" 0.0;
				}
				description {
					state: "landscape" 0.0;
					inherit: "default" 0.0;
					min: 0 183;
				}
			}
			part{
				name: "object.active.buttons";
				type:SWALLOW;
				scale: 1;
				description {
					state: "default" 0.0;
					fixed: 0 0;
					rel1 {to: "rect.active.buttons";}
					rel2 {to: "rect.active.buttons";}
					visible:1;
				}
			}
		}

		programs {
			program{
				name: "portrait";
				signal: "portrait";
				source: "prog";
				action: STATE_SET "portrait" 0.0;
				target: "background";
				target: "rect.active.buttons";
			}
			program{
				name: "landscape";
				signal: "landscape";
				source: "prog";
				action: STATE_SET "landscape" 0.0;
				target: "background";
				target: "rect.active.buttons";
			}
		}
	}
