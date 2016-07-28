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


//#define DEBUG
//#define DEBUG_TEXT

//Default part description. It is not changed by us
#define QP_THEME_LIST_TITLE_FONT_NAME			"Tizen:style=Bold"
#define QP_THEME_LIST_TITLE_FONT_COLOR			"ATO005"
#define QP_THEME_LIST_TITLE_FONT_SIZE			27

#define QP_THEME_LIST_OPTION_FONT_COLOR			"ATO006"
#define QP_THEME_LIST_OPTION_PRESS_FONT_COLOR	"ATO006P"
#define QP_THEME_LIST_OPTION_FONT_SIZE			27
#define QP_THEME_LIST_OPTION_ICON_PRESS_COLOR "AO005"

//size of clear all item
#define QP_CLEAR_ALL_ITEM_H 	51
#define QP_CLEAR_ALL_ITEM_W 	480

//Properties of "notifications (x) label in clear all notifications item"
#define QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_NAME 		"Tizen:style=Regular"
//#define QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_COLOR 	"T112"
#define QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_COLOR 	"T1237"
#define QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_COLOR_PRESSED 	"ATO006P"
#define QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_COLOR_DIM			"ATO006D"
#define QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_SIZE 		23
#define QP_CLEAR_ALL_NOTIFICATIONS_STR_X_OFFSET 17 //x offset of "notifications(x)" string
#define QP_CLEAR_ALL_BASE_BG_COLOR			"AO021"

//Properties of clear all button
#define QP_CLEAR_ALL_CLEAR_ALL_BTN_TEXT_FONT_NAME 		"Tizen:style=Regular"
#define QP_CLEAR_ALL_CLEAR_ALL_BTN_FONT_COLOR 			"T112"
#define QP_CLEAR_ALL_CLEAR_ALL_BTN_FONT_COLOR_PRESSED		"ATO006P"
#define QP_CLEAR_ALL_CLEAR_ALL_BTN_FONT_COLOR_DIM		"ATO006D"
#define QP_CLEAR_ALL_CLEAR_ALL_BTN_FONT_SIZE 			23
#define QP_CLEAR_ALL_CLEAR_ALL_BTN_BG_COLOR			"A03O003L1"
#define QP_CLEAR_ALL_CLEAR_ALL_BTN_BG_COLOR_PRESSED		"B0517P"

//Properties of separator betwen notifiactions label and clear all button
#define QP_NOTIFICATIONS_SEP_X_OFFSET -235 //separator between "notification(x) | Clear all" button
#define QP_NOTIFICATIONS_SEP_Y_OFFSET 17
#define QP_NOTIFICATIONS_SEP_COLOR_CLASS "W021L2"

	images {
		image: "icon_arrow_up.png" COMP;
		image: "icon_arrow_down.png" COMP;
		image: "core_icon_badge_container.#.png" COMP;
	}

	group {
		name: "quickpanel/notisection/default";
		parts {
			part {
				name: "base";
				type: RECT;
				repeat_events: 1;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 QP_THEME_LIST_ITEM_NOTI_SECTION_HEIGHT;
					max: 9999 QP_THEME_LIST_ITEM_NOTI_SECTION_HEIGHT;
					rel1 {
						relative: 0.0 0.0;
					}
					rel2 {
						relative: 1.0 1.0;
					}
					align: 0.0 0.0;
					color_class: QP_THEME_BG_COLOR;
					visible: QP_THEME_BG_VISIBILITY;
				}
			}
			QUICKPANEL_FOCUS_OBJECT("focus.label", "base", "base")
			part {
				name: "elm.padding.left";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 17 0;
					fixed: 1 0;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 0.0;
					rel2.relative: 0.0 1.0;
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.padding.right";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 8 0;
					fixed: 1 0;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 1.0 0.0;
					rel2.relative: 1.0 0.0;
					align: 1.0 0.0;
				}
			}
			part {
				name: "elm.padding.top";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 22;
					fixed: 0 1;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 0.0;
					rel2.relative: 1.0 0.0;
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.padding.bottom";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 5;
					fixed: 0 1;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 1.0;
					rel2.relative: 1.0 1.0;
					align: 0.0 1.0;
				}
			}
			part {
				name: "elm.padding.top.button";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 14;
					fixed: 0 1;
					rel1.relative: 0.0 0.0;
					rel2.relative: 1.0 0.0;
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.padding.bottom.button";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 3;
					fixed: 0 1;
					rel1.relative: 0.0 1.0;
					rel2.relative: 1.0 1.0;
					align: 0.0 1.0;
				}
			}
			part {
				name: "elm.rect.text";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 343 32;
					fixed: 1 0;
					rel1 {
						to_x: "elm.padding.left";
						to_y: "elm.padding.bottom";
						relative: 1.0 0.0;
					}
					rel2 {
						to_x: "elm.padding.left";
						to_y: "elm.padding.bottom";
						relative: 1.0 0.0;
					}
					align: 0.0 1.0;
				}
			}
			part {
				name: "elm.text.text";
				type: TEXT;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 343 35;
					rel1 {
						to: "elm.rect.text";
					}
					rel2 {
						to: "elm.rect.text";
					}
					color: 0 0 0 255;
					text {
						font: QP_THEME_LIST_TITLE_FONT_NAME;
						text_class: "tizen";
						size: QP_THEME_LIST_TITLE_FONT_SIZE;
						align: 0.0 0.5;
						min: 1 0;
					}
				}
			}
			part {
				name: "elm.text.text.debug";
				type: RECT;
				description {
					state: "default" 0.0;
					rel1.relative: 0.0 0.0;
					rel2.relative: 1.0 1.0;
					rel1.to: "elm.text.text";
					rel2.to: "elm.text.text";
					color: 255 0 0 150;
				}
		}

			part {
				name: "elm.rect.icon";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 106 36;
					fixed: 1 1;
					rel1 {
						to_x: "elm.padding.right";
						to_y: "base";
						relative: 0.0 0.5;
					}
					rel2 {
						to_x: "elm.padding.right";
						to_y: "base";
						relative: 0.0 0.5;
					}
					align: 1.0 0.0;
				}
			}
			part {
				name: "text.clear.right.padding";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: (18) 0;
					rel1 {
						relative : 1.0 0.0;
						to: "base";
					}
					rel2 {
						relative : 1.0 1.0;
						to: "base";
					}
					align: 1.0 0.0;
				}
			}
			part {
				name: "text.clear";
				type: TEXT;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 30;
					rel1 {
						to_x: "text.clear.right.padding";
						to_y: "elm.text.text";
						relative : 0.0 0.5;
					}
					rel2 {
						to_x: "text.clear.right.padding";
						to_y: "elm.text.text";
						relative: 0.0 0.5;
					}
					color_class: QP_THEME_LIST_OPTION_FONT_COLOR;
					text {
						font: QP_THEME_LIST_TITLE_FONT_NAME;
						text_class: "tizen";
						size: QP_THEME_LIST_OPTION_FONT_SIZE;
						align: 0.0 0.5;
						min: 1 0;
					}
					align: 1.0 0.5;
				}
				description {
					state: "pressed" 0.0;
					inherit: "default" 0.0;
					color_class: QP_THEME_LIST_OPTION_PRESS_FONT_COLOR;
				}
			}
			part {
				name: "divider.right.padding";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: (13) 0;
					rel1 {
						relative : 0.0 0.0;
						to: "text.clear";
					}
					rel2 {
						relative : 0.0 1.0;
						to: "text.clear";
					}
					align: 1.0 0.0;
				}
			}
			part {
				name: "obj.divider";
				type: RECT;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 2 30;
					rel1 {
						relative : 0.0 0.5;
						to_x: "divider.right.padding";
						to_y: "text.clear";
					}
					rel2 {
						relative : 0.0 0.5;
						to_x: "divider.right.padding";
						to_y: "text.clear";
					}
					align: 1.0 0.5;
					color_class: QP_THEME_SECTION_ICON_DIVIDER_COLOR;
					visible: 1;
				}
			}
			part {
				name: "rect.text.touch";
				type: RECT;
				scale: 1;
				mouse_events: 1;
				description {
					state: "default" 0.0;
					fixed: 1 1;
					rel1 {
						to: "text.clear";
						offset: -10 -20;
					}
					rel2 {
						to: "text.clear";
						offset: +10 +20;
					}
					align: 0.0 0.0;
					visible: 1;
					color: 0 0 0 0;
				}
			}
		}

		programs {
			program{
				name: "button.down";
				signal: "mouse,down,1";
				source: "rect.text.touch";
				action: STATE_SET "pressed" 0.0;
				target: "text.clear";
			}
			program{
				name: "button.up";
				signal: "mouse,up,1";
				source: "rect.text.touch";
				action: STATE_SET "default" 0.0;
				target: "text.clear";
			}
			program{
				name: "button.clicked";
				signal: "mouse,clicked,1";
				source: "rect.text.touch";
				action: SIGNAL_EMIT "button.clicked" "prog";
			}
		}
	}

	group {

		/**
		 * GROUP STRUCTURE
		 * base - it is the background rectangle. This part is a relative for all other parts and define background color.
		 * noti.clear.all.separator - is the line between "notification(X)" and clear all button
		 */

		name: "quickpanel/notisection/clear_all";
		parts {
			part {
				name: "base";
				type: RECT;
				scale: 1;
				description
				{
					state: "default" 0.0;
					min: 0 QP_CLEAR_ALL_ITEM_H;
					rel1 {
						relative: 0.0 0.0;
					}
					rel2 {
						relative: 1.0 1.0;
					}
					align: 0.0 0.0;
					color_class: QP_CLEAR_ALL_BASE_BG_COLOR;
					visible: 1;
				}
			}
			part {
				name: "notisection.padding.left";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 17 0;
					fixed: 1 0;
					align: 0.0 0.0;
					rel1 {
						to: "base";
						relative: 0.0 0.0;
					}
					rel2 {
						to: "base";
						relative: 0.0 1.0;
					}
				}
			}
			part {
				name: "notisection.padding.right";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 17 0;
					fixed: 1 0;
					align: 1.0 0.0;
					rel1 {
						to: "base";
						relative: 1.0 0.0;
					}
					rel2 {
						to: "base";
						relative: 1.0 1.0;
					}
				}
			}

			part {
				name: "underline";
				type: RECT;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 1;
					fixed: 0 1;
					rel1 {
						to: "base";
						relative: 0.0 1.0;
					}
					rel2 {
						to: "base";
						relative: 1.0 1.0;
					}
					align: 0.0 1.0;
					color_class: QP_NOTIFICATIONS_SEP_COLOR_CLASS;
				}
			}

			part {
				name: "noti.clear.all.separator";
				type: RECT;
				scale: 1;
				description {
					state: "default";
					min: 1 36;
					max: 1 36;
					fixed: 1 1;
					color_class: QP_NOTIFICATIONS_SEP_COLOR_CLASS;
					rel1 {
						relative: 0.0 0.0;
						to_x: "clear_all.padding.left";
						to_y: "base";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "clear_all.padding.left";
						to_y: "base";
					}

					align: 1.0 0.5;
					visible: 0;
				}
				description
				{
					state: "hide" 0.0;
					inherit: "default";
					visible: 0;
				}

			}
			part {
				name: "separator.padding.left";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 17 0;
					fixed: 1 0;
					align: 1.0 0.0;
					rel1 {
						to: "noti.clear.all.separator";
						relative: 0.0 0.0;
					}
					rel2 {
						to: "noti.clear.all.separator";
						relative: 0.0 1.0;
					}
				}
			}

			part {
				name: "rect.button.notisetting";
				type: IMAGE;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 75 36;
					max: 180 36;
					fixed: 1 1;
					rel1 {
						to_x: "notisection.padding.left";
						relative: 1.0 0.0;
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "separator.padding.left";
						to_y: "base";
					}

					image {
						normal:"core_icon_badge_container.#.png";
					}
					color_class: QP_CLEAR_ALL_CLEAR_ALL_BTN_BG_COLOR;
					align: 0.0 0.5;
				}
				description
				{
					state: "pressed" 0.0;
					inherit: "default" 0.0;
					color_class: QP_CLEAR_ALL_CLEAR_ALL_BTN_BG_COLOR_PRESSED;
				}
			}

			part {
				name: "text.button.notisetting";
				type: TEXT;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 36;
					align: 0.5 0.5;
					rel1 {
						to: "rect.button.notisetting";
						relative: 0.0 0.0;
					}
					rel2
					{
						relative: 1.0 1.0;
						to: "rect.button.notisetting";
					}

					color_class: QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_COLOR;
					text {
						font: QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_NAME;
						size: QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_SIZE;
						text_class: "tizen";
						align: 0.5 0.5;
					}
					visible: 1;
				}
				description
				{
					state: "pressed";
					inherit: "default";
					color_class: QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_COLOR_PRESSED;
				}
				description
				{
					state: "dim";
					inherit: "default";
					color_class: QP_CLEAR_ALL_NOTIFICATIONS_LABEL_FONT_COLOR_DIM;
				}
			}
			part {
				name: "rect.button.clear_all";
				type: IMAGE;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 75 36;
					max: 130 36;
					fixed: 1 1;
					rel1 {
						relative: 0.0 0.0;
					}
					rel2 {
						to_x: "notisection.padding.right";
						to_y: "underline";
						relative: 0.0 0.0;
					}

					image {
						normal:"core_icon_badge_container.#.png";
					}
					color_class: QP_CLEAR_ALL_CLEAR_ALL_BTN_BG_COLOR;
					align: 1.0 0.5;
					visible: 1;
				}
				description
				{
					state: "pressed" 0.0;
					inherit: "default" 0.0;
					color_class: QP_CLEAR_ALL_CLEAR_ALL_BTN_BG_COLOR_PRESSED;
				}

				description
				{
					state: "hide" 0.0;
					inherit: "default";
					visible: 0;
				}
			}

			part {
				name: "text.button.clear_all";
				type: TEXT;
				scale: 1;
				description
				{
					state: "default" 0.0;
					min: 75 36;
					max: 130 36;
					fixed: 0 1;
					align: 0.5 0.0;
					rel1 {
						to: "rect.button.clear_all";
						relative: 0.0 0.0;
					}
					rel2 {
						to: "notisection.padding.right";
						relative: 0.0 1.0;
					}
					color_class: QP_CLEAR_ALL_CLEAR_ALL_BTN_FONT_COLOR;
					text {
						font: QP_CLEAR_ALL_CLEAR_ALL_BTN_TEXT_FONT_NAME;
						size: QP_CLEAR_ALL_CLEAR_ALL_BTN_FONT_SIZE;
						text_class: "tizen";
						align: 0.5 0.5;
						max: 1 0;
					}
					visible: 1;
				}
				description
				{
					state: "pressed";
					inherit: "default";
					color_class: QP_CLEAR_ALL_CLEAR_ALL_BTN_FONT_COLOR_PRESSED;
				}
				description
				{
					state: "dim";
					inherit: "default";
					color_class: QP_CLEAR_ALL_CLEAR_ALL_BTN_FONT_COLOR_DIM;
				}

				description
				{
					state: "hide" 0.0;
					inherit: "default";
					visible: 0;
				}
			}
			part {
				name: "clear_all.padding.left";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 17 0;
					fixed: 1 0;
					align: 1.0 0.0;
					rel1 {
						to_x: "text.button.clear_all";
						to_y: "base";
						relative: 0.0 0.0;
					}
					rel2 {
						to_x: "text.button.clear_all";
						to_y: "base";
						relative: 0.0 1.0;
					}
				}
			}
			QUICKPANEL_FOCUS_OBJECT("focus", "rect.button.clear_all", "rect.button.clear_all")
			QUICKPANEL_FOCUS_OBJECT("focus.setting", "rect.button.notisetting", "rect.button.notisetting")
		}
		programs
		{
			program
			{
				name: "notisetting.button.pressed";
				signal: "mouse,down,1";
				source: "focus.setting";

				action: STATE_SET "pressed" 0.0;
				target: "rect.button.notisetting";
				target: "text.button.notisetting";
			}
			program
			{
				name: "notisetting.button.released";
				signal: "mouse,up,1";
				source: "focus.setting";

				action: STATE_SET "default" 0.0;
				target: "rect.button.notisetting";
				target: "text.button.notisetting";
			}
			program
			{
				name: "clear_all.button.pressed";
				signal: "mouse,down,1";
				source: "focus";

				action: STATE_SET "pressed" 0.0;
				target: "rect.button.clear_all";
				target: "text.button.clear_all";
			}
			program
			{
				name: "clear_all.button.released";
				signal: "mouse,up,1";
				source: "focus";

				action: STATE_SET "default" 0.0;
				target: "rect.button.clear_all";
				target: "text.button.clear_all";
			}
			program
			{
				name: "clear_all,show";
				signal: "notifaction,section,clear_all,show";
				source: "base";

				action: STATE_SET "default" 0.0;
				target: "rect.button.clear_all";
				target: "text.button.clear_all";
				target: "noti.clear.all.separator";
				target: "focus";
			}

			program
			{
				name: "clear_all,hide";
				signal: "notifaction,section,clear_all,hide";
				source: "base";

				action: STATE_SET "hide" 0.0;
				target: "rect.button.clear_all";
				target: "text.button.clear_all";
				target: "noti.clear.all.separator";
				target: "focus";
			}
		}
	}

	group {
		name: "quickpanel/seperator/default";
		parts {
			part { name: "base";
				type: RECT;
				repeat_events: 1;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 1;
					max: 9999 1;
					rel1 {
						relative: 0.0 0.0;
					}
					rel2 {
						relative: 1.0 0.0;
					}
					align: 0.0 0.0;
					color: 255 0 0 100;
					visible: 1;
				}
			}
		}
	}
