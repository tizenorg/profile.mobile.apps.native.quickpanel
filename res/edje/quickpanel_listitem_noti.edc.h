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


#define QP_NOTI_LISTTYPE_TITLE_COLOR "T023"
#define QP_NOTI_LISTTYPE_TITLE_PRESS_COLOR "T023P"
#define QP_NOTI_LISTTYPE_CONTENTS_COLOR "ATO012"
#define QP_NOTI_LISTTYPE_COUNT_COLOR "T112"
#define QP_NOTI_LISTTYPE_COUNT_BG_COLOR "B0517"
#define QP_NOTI_LISTTYPE_TIME_COLOR "ATO012"

#define QP_NOTI_LISTTYPE_TITLE_FONT_SIZE 30
#define QP_NOTI_LISTTYPE_CONTENTS_FONT_SIZE 24
#define QP_NOTI_LISTTYPE_COUNT_FONT_SIZE 21
#define QP_NOTI_LISTTYPE_TIME_FONT_SIZE 24

	styles {
		style {
			name: "noti_content_text";
			base: "font=Tizen:style=Regular text_class=tizen align=left valign=0.5 font_size="QP_NOTI_LISTTYPE_CONTENTS_FONT_SIZE" ellipsis=1.0 color=#2B2B2BFF color_class="QP_NOTI_LISTTYPE_CONTENTS_COLOR" wrap=none";
		}
	}

	images {
		image: "core_icon_badge_container.#.png" COMP;
		image: "quick_button_icon_bg.png" COMP;
	}

	group {
		name: "quickpanel/listitem/notification";
		data.item: "bgcolor" QP_THEME_BANDED_COLOR;

		parts {
			part {
				name: "base";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 QP_THEME_LIST_ITEM_NOTIFICATION_LISTTYPE_HEIGHT;
					max: -1 QP_THEME_LIST_ITEM_NOTIFICATION_LISTTYPE_HEIGHT;
				}
			}
			part {
				name: "bgcolor";
				type: "RECT";
				mouse_events: 0;
				description {
					state: "default" 0.0;
					rel1.to:"base";
					rel2.to:"base";
					color_class: QP_THEME_BANDED_COLOR;
					visible: 1;
				}
				description {
					state: "effect" 0.0;
					inherit: "default" 0.0;
					color_class: QP_THEME_BG_COLOR;
					color: 255 255 255 128;
				}
			}

			part {
				name: "elm.padding.right";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 15 0;
					fixed: 1 0;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 1.0 0.0;
					rel2.relative: 1.0 1.0;
					align: 1.0 0.0;
				}
			}
			part {
				name: "elm.padding.top.icon";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 BOX_ICON_TOP_PADDING;
					fixed: 0 1;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 0.0;
					rel2.relative: 1.0 0.0;
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.padding.left.icon";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 15 0;
					fixed: 1 0;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 0.0;
					rel2.relative: 0.0 1.0;
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.padding.top.text";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 BOX_TEXT_TOP_PADDING;
					fixed: 0 1;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 0.0;
					rel2.relative: 1.0 0.0;
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.padding.bottom.text";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 BOX_TEXT_TOP_PADDING;
					fixed: 0 1;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 1.0;
					rel2.relative: 1.0 1.0;
					align: 0.0 1.0;
				}
			}
			part {
				name: "elm.padding.left.text";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: (15 + BOX_ICON_SIZE_W + 15) 0;
					fixed: 1 0;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 0.0;
					rel2.relative: 0.0 1.0;
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.rect.thumbnail";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					min: BOX_ICON_SIZE_W BOX_ICON_SIZE_H;
					max: BOX_ICON_SIZE_W BOX_ICON_SIZE_H;
					fixed: 1 1;
					rel1 {
						relative: 1.0 1.0;
						to_x: "elm.padding.left.icon";
						to_y: "elm.padding.top.icon";
					}
					rel2 {
						relative: 1.0 1.0;
						to_x: "elm.padding.left.icon";
						to_y: "elm.padding.top.icon";
					}
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.rect.icon";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 36 36;
					fixed: 1 1;
					rel1 {
						relative: 0.5 0.5;
						to: "elm.rect.thumbnail";
					}
					rel2 {
						relative: 0.5 0.5;
						to: "elm.rect.thumbnail";
					}
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.rect.text";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 38;
					fixed: 0 1;
					rel1 {
						relative: 1.0 1.0;
						to_x: "elm.padding.left.text";
						to_y: "elm.padding.top.text";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.top.text";
					}
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.rect.text.title";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 38;
					fixed: 0 1;
					rel1 {
						relative: 0.0 0.0;
						to: "elm.rect.text";
					}
					rel2 {
						relative: 1.0 1.0;
						to: "elm.rect.text";
					}
					align: 0.0 0.0;
				}
				description {
					state: "move.center" 0.0;
					inherit: "default" 0.0;
					rel1 {
						relative: 0.0 0.0;
						to_x: "elm.rect.text";
						to_y: "base";
					}
					rel2 {
						relative: 1.0 1.0;
						to_x: "elm.rect.text";
						to_y: "base";
					}
					align: 0.0 0.5;
				}
			}
			part {
				name: "elm.rect.text.content";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 32;
					fixed: 0 1;
					rel1 {
						relative: 0.0 1.0;
						to: "elm.rect.text";
					}
					rel2 {
						relative: 1.0 0.0;
						to_x: "elm.rect.text";
						to_y: "elm.padding.bottom.text";
					}
					align: 0.0 0.0;
				}
			}
			part {
				name: "masking";
				type: IMAGE;
				scale: 1;
				precise_is_inside: 1;
				description {
					state: "default" 0.0;
					min: BOX_ICON_SIZE_W BOX_ICON_SIZE_W;
					max: BOX_ICON_BG_SIZE_W BOX_ICON_BG_SIZE_H;
					fixed : 1 1;
					rel1 {
						to: "elm.rect.thumbnail";
					}
					rel2 {
						to: "elm.rect.thumbnail";
					}
					image.normal: "quick_button_icon_bg.png";
				}
				description {
					state: "show" 0.0;
					inherit: "default" 0.0;
					visible:1;
				}
				description {
					state: "hide" 0.0;
					inherit: "default" 0.0;
					visible:0;
				}
			}
			part {
				name: "elm.swallow.thumbnail";
				type: SWALLOW;
				mouse_events: 0;
				scale: 1;
				clip_to: "masking";
				description {
					state: "default" 0.0;
					min: BOX_ICON_SIZE_W BOX_ICON_SIZE_W;
					max: BOX_ICON_BG_SIZE_W BOX_ICON_BG_SIZE_H;
					fixed: 1 1;
					rel1 {
						to: "elm.rect.thumbnail";
					}
					rel2 {
						to: "elm.rect.thumbnail";
					}
					align: 0.5 0.5;
				}
			}
			part {
				name: "elm.swallow.mainicon";
				type: SWALLOW;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					min: BOX_ICON_SIZE_W BOX_ICON_SIZE_H;
					max: BOX_ICON_BG_SIZE_W BOX_ICON_BG_SIZE_H;
					fixed: 1 1;
					rel1 {
						to: "elm.rect.thumbnail";
					}
					rel2 {
						to: "elm.rect.thumbnail";
					}
					align: 0.5 0.5;
				}
				description {
					state: "show" 0.0;
					inherit: "default" 0.0;
					visible:1;
				}
				description {
					state: "hide" 0.0;
					inherit: "default" 0.0;
					visible:0;
				}
			}
			part {
				name: "elm.swallow.subicon";
				type: SWALLOW;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 30 30;
					fixed: 1 1;
					rel1 {
						relative: 0.5 0.5;
						to: "elm.rect.icon";
					}
					rel2 {
						relative: 0.5 0.5;
						to: "elm.rect.icon";
					}
					align: 0.5 0.5;
				}
			}
			part {
				name: "elm.text.title";
				type: TEXT;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					align: 0.0 0.0;
					//fixed: 0 1;
					rel1 {
						relative: 0.0 0.0;
						to:"elm.rect.text.title";
					}
					rel2 {
						relative: 1.0 1.0;
						to:"elm.rect.text.title";
					}
					color_class: QP_NOTI_LISTTYPE_TITLE_COLOR;
					text {
						font: "Tizen:style=Regular";
						text_class: "tizen";
						size: QP_NOTI_LISTTYPE_TITLE_FONT_SIZE;
						ellipsis: 0.0;
						align: 0.0 0.5;
					}
				}
				description {
					state: "short" 0.0;
					inherit: "default" 0.0;
					rel1 {
						relative: 0.0 0.0;
						to: "elm.rect.text.title";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.padding.left.time";
						to_y: "elm.rect.text.title";
						offset: -15 0;
					}
				}
				description {
					state: "short.center" 0.0;
					inherit: "default" 0.0;
					rel1 {
						relative: 0.0 0.0;
						to: "elm.rect.text.title";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.padding.left.time";
						to_y: "elm.rect.text.title";
						offset: -15 0;
					}
				}
			}

			part {
				name: "elm.padding.left.time";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					fixed: 1 0;
					min: 10 0;
					rel1 {
						relative: 0.0 1.0;
						to_x: "elm.text.time";
						to_y: "elm.padding.top.text";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.text.time";
						to_y: "elm.padding.top.text";
					}
					align: 1.0 0.0;
				}
			}
			part {
				name: "elm.padding.right.time";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					fixed: 1 0;
					min: 10 0;
					rel1 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.top.text";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.top.text";
					}
					align: 1.0 0.0;
				}
			}
			part {
				name: "elm.text.time";
				type: TEXT;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					align: 1.0 0.5;
					fixed: 1 1;
					min: 0 38;
					rel1 {
						relative: 0.0 0.5;
						to_x: "elm.padding.right";
						to_y: "elm.rect.text";
					}
					rel2 {
						relative: 0.0 0.5;
						to_x: "elm.padding.right";
						to_y: "elm.rect.text";
					}
					color_class: QP_NOTI_LISTTYPE_TIME_COLOR;
					text {
						font: "Tizen:style=Regular";
						text_class: "tizen";
						size: QP_NOTI_LISTTYPE_TIME_FONT_SIZE;
						ellipsis: 0.0;
						align: 0.0 0.5;
						min: 1 0;
					}

				}
				description {
					state: "center" 0.0;
					inherit: "default" 0.0;
					rel1 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right";
						to_y: "elm.rect.text";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right";
						to_y: "elm.rect.text";
					}
				}
			}
			part {
				name: "elm.text.content";
				type: TEXT;
				mouse_events: 0;
				multiline: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					align: 0.0 0.0;
					fixed: 1 1;
					min: 0 34;
					max: -1 30;
					rel1 {
						to: "elm.rect.text.content";
					}
					rel2 {
						to: "elm.rect.text.content";
					}
					color_class: QP_NOTI_LISTTYPE_CONTENTS_COLOR;
					text {
						//style: "noti_content_text";
						font: "Tizen:style=Regular";
						text_class: "tizen";
						size: QP_NOTI_LISTTYPE_CONTENTS_FONT_SIZE;
						ellipsis: 0.0;
						align: 0.0 0.5;
						min: 0 1;
					}
				}
				description {
					state: "short" 0.0;
					inherit: "default" 0.0;
					rel1 {
						relative: 0.0 0.0;
						to: "elm.rect.text.content";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.image.count.bg";
						to_y: "elm.rect.text.content";
						offset: -15 0;
					}
				}
			}
			part{
				name: "elm.image.count.bg";
				type:IMAGE;
				scale: 1;
				description {
					state: "default" 0.0;
					align: 1.0 0.0;
					fixed: 1 1;
					min: 32 32;
					max: 68 32;
					rel1 {
						relative: 0.0 1.0;
						to_x: "elm.padding.left.count";
						to_y: "elm.rect.text";
					}
					rel2 {
						relative: 1.0 0.0;
						to_x: "elm.padding.right.count";
						to_y: "elm.padding.bottom.text";
					}
					image {
						normal:"core_icon_badge_container.#.png";
					}
					color_class: QP_NOTI_LISTTYPE_COUNT_BG_COLOR;
					visible:0;
				}
				description {
					state: "show" 0.0;
					inherit: "default" 0.0;
					visible:1;
				}
				description {
					state: "hide" 0.0;
					inherit: "default" 0.0;
					visible:0;
				}
			}
			part {
				name: "elm.padding.left.count";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					fixed: 1 0;
					min: 10 0;
					rel1 {
						relative: 0.0 1.0;
						to_x: "elm.text.count";
						to_y: "elm.padding.bottom.text";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.text.count";
						to_y: "elm.padding.bottom.text";
					}
					align: 1.0 0.0;
				}
			}
			part {
				name: "elm.padding.right.count";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					fixed: 1 0;
					min: 10 0;
					rel1 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.bottom.text";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.bottom.text";
					}
					align: 1.0 0.0;
				}
			}
			part {
				name: "elm.text.count";
				type: TEXT;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					align: 1.0 0.0;
					fixed: 1 1;
					min: 0 32;
					rel1 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right.count";
						to_y: "elm.rect.text";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right.count";
						to_y: "elm.rect.text";
					}
					color_class: QP_NOTI_LISTTYPE_COUNT_COLOR;
					text {
						font: "Tizen:style=Regular";
						text_class: "tizen";
						size: QP_NOTI_LISTTYPE_COUNT_FONT_SIZE;
						ellipsis: 0.0;
						align: 0.0 0.5;
						min: 1 0;
					}
				}
			}
			part {
				name: "object.layer.touch.background";
				mouse_events: 1;
				repeat_events: 1;
				scale: 1;
				type: RECT;
				description {
					state: "default" 0.0;
					rel1 {to: "base";}
					rel2 {to: "base";}
					color: 0 0 0 0;
				}
			}
			QUICKPANEL_FOCUS_OBJECT("focus", "base", "base")
		}

		programs {
			program{
				name: "listbox.touch.down";
				signal: "mouse,clicked,1";
				source: "object.layer.touch.background";
				action: SIGNAL_EMIT "selected" "edje";
			}
			program{
				name: "effect,mouse,down";
				signal: "mouse,down,1";
				source: "object.layer.touch.background";
				script {
					set_state(PART:"bgcolor", "effect", 0.0);
				}
			}
			program{
				name: "effect,mouse,up";
				signal: "mouse,up,1";
				source: "object.layer.touch.background";
				action: STATE_SET "default" 0.0;
				transition: ACCELERATE 0.20;
				target: "bgcolor";
			}
			program{
				name: "title.long";
				signal: "title.long";
				source: "prog";
				action: STATE_SET "default" 0.0;
				target: "elm.text.title";
			}
			program{
				name: "title.short";
				signal: "title.short";
				source: "prog";
				action: STATE_SET "short" 0.0;
				target: "elm.text.title";
			}
			program{
				name: "title.short.center";
				signal: "title.short.center";
				source: "prog";
				action: STATE_SET "short.center" 0.0;
				target: "elm.text.title";
			}
			program{
				name: "title.text.default";
				signal: "title.text.default";
				source: "prog";
				action: STATE_SET "default" 0.0;
				target: "elm.text.title";
			}
			program{
				name: "content.long";
				signal: "content.long";
				source: "prog";
				action: STATE_SET "default" 0.0;
				target: "elm.text.content";
			}
			program{
				name: "content.short";
				signal: "content.short";
				source: "prog";
				action: STATE_SET "short" 0.0;
				target: "elm.text.content";
			}
			program{
				name: "count.show";
				signal: "count.show";
				source: "prog";
				action: STATE_SET "show" 0.0;
				target: "elm.image.count.bg";
			}
			program{
				name: "count.hide";
				signal: "count.hide";
				source: "prog";
				action: STATE_SET "hide" 0.0;
				target: "elm.image.count.bg";
			}
			program {
				name: "title.move.center";
				signal: "title.move.center";
				source: "prog";
				action: STATE_SET "move.center" 0.0;
				target: "elm.rect.text.title";
			}
			program {
				name: "title.move.default";
				signal: "title.move.default";
				source: "prog";
				action: STATE_SET "default" 0.0;
				target: "elm.rect.text.title";
			}
			program {
				name: "time.move.center";
				signal: "time.move.center";
				source: "prog";
				action: STATE_SET "center" 0.0;
				target: "elm.text.time";
			}
			program {
				name: "time.move.default";
				signal: "time.move.default";
				source: "prog";
				action: STATE_SET "default" 0.0;
				target: "elm.text.time";
			}
			program{
				name: "masking.show";
				signal: "masking.show";
				source: "prog";
				action: STATE_SET "show" 0.0;
				target: "masking";
			}
			program{
				name: "masking.hide";
				signal: "masking.hide";
				source: "prog";
				action: STATE_SET "hide" 0.0;
				target: "masking";
			}
			program{
				name: "mainicon.show";
				signal: "mainicon.show";
				source: "prog";
				action: STATE_SET "show" 0.0;
				target: "elm.swallow.mainicon";
			}
			program{
				name: "mainicon.hide";
				signal: "mainicon.hide";
				source: "prog";
				action: STATE_SET "hide" 0.0;
				target: "elm.swallow.mainicon";
			}
		}
	}
