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

#define QP_ONGOING_PROGRESS_TITLE_COLOR "T023"
#define QP_ONGOING_PROGRESS_TITLE_PRESS_COLOR "T023P"
#define QP_ONGOING_PROGRESS_CONTENTS_COLOR "ATO012"
#define QP_ONGOING_PROGRESS_RATE_COLOR "ATO012"

#define QP_ONGOING_PROGRESS_TITLE_FONT_SIZE 30
#define QP_ONGOING_PROGRESS_CONTENTS_FONT_SIZE 24
#define QP_ONGOING_PROGRESS_RATE_FONT_SIZE 24

	group {
		name: "quickpanel/listitem/progress";
		data.item: "bgcolor" QP_THEME_BANDED_COLOR;

		parts {
			part {
				name: "background";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 (QP_THEME_LIST_ITEM_ONGOING_PROGRESS_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
					max: -1 (QP_THEME_LIST_ITEM_ONGOING_PROGRESS_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
				}
			}
			part {
				name: "seperator.top";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT;
					fixed: 0 1;
					rel1 {
						to: "background";
						relative: 0.0 0.0;
					}
					rel2 {
						to: "background";
						relative: 1.0 0.0;
					}
					align: 0.0 0.0;
				}
			}
			part {
				name: "seperator.left";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 0;
					fixed: 1 0;
					rel1 {
						to: "background";
						relative: 0.0 0.0;
					}
					rel2 {
						to: "background";
						relative: 0.0 1.0;
					}
					align: 0.0 0.0;
				}
			}
			part {
				name: "seperator.right";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 0;
					fixed: 1 0;
					rel1 {
						to: "background";
						relative: 1.0 0.0;
					}
					rel2 {
						to: "background";
						relative: 1.0 1.0;
					}
					align: 1.0 0.0;
				}
			}
			part {
				name: "base";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					fixed: 0 1;
					min: 0 QP_THEME_LIST_ITEM_ONGOING_PROGRESS_HEIGHT;
					max: 9999 QP_THEME_LIST_ITEM_ONGOING_PROGRESS_HEIGHT;
					rel1 {
						relative: 1.0 1.0;
						to_x: "seperator.left";
						to_y: "seperator.top";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "seperator.right";
						to_y: "seperator.top";
					}
					align: 0.0 0.0;
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
					visible:1;
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
				name: "elm.padding.right.content";
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
					min: 0 9;
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
					min: 0 9;
					fixed: 0 1;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 1.0;
					rel2.relative: 1.0 1.0;
					align: 0.0 1.0;
				}
			}
			part {
				name: "elm.padding.left.title";
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
				name: "elm.padding.left.progress.text";
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
				name: "elm.padding.left.progress";
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
				name: "elm.padding.top.progress";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 (9 + 33 + 3);
					fixed: 0 1;
					rel1.to:"base";
					rel2.to:"base";
					rel1.relative: 0.0 0.0;
					rel2.relative: 1.0 0.0;
					align: 0.0 0.0;
				}
			}
			part {
				name: "elm.rect.thumbnail";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description { state: "default" 0.0;
					min: BOX_ICON_SIZE_W BOX_ICON_SIZE_W;
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
					min: 29 29;
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
				name: "elm.rect.text.title";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description { state: "default" 0.0;
					min: 0 33;
					fixed: 0 1;
					rel1 {
						relative: 1.0 1.0;
						to_x: "elm.padding.left.title";
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
				name: "elm.rect.text.progress";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 99 33;
					fixed: 1 1;
					rel1 {
						relative: 0.0 0.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.bottom.text";
					}
					rel2 {
						relative: 0.0 0.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.bottom.text";
					}
					align: 1.0 1.0;
				}
			}
			part {
				name: "elm.rect.text.content";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 33;
					fixed: 0 1;
					rel1 {
						relative: 1.0 0.0;
						to_x: "elm.padding.left.title";
						to_y: "elm.padding.bottom.text";
					}
					rel2 {
						relative: 0.0 0.0;
						to_x: "elm.rect.text.progress";
						to_y: "elm.padding.bottom.text";
					}
					align: 0.0 1.0;
				}
			}
			part {
				name: "elm.rect.progress";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					align: 0.0 0.0;
					min: 0 6;
					max: 9999 6;
					fixed: 0 1;
					rel1 {
						relative: 1.0 1.0;
						to_x: "elm.padding.left.progress";
						to_y: "elm.padding.top.progress";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.top.progress";
					}
				}
			}

			part {
				name: "masking";
				type: IMAGE;
				precise_is_inside: 1;
				description {
					state: "default" 0.0;
					min: BOX_ICON_BG_SIZE_W BOX_ICON_BG_SIZE_W;
					fixed : 1 1;
					rel1 {
						relative: 0.5 0.5;
						to: "elm.rect.thumbnail";
					}
					rel2 {
						relative: 0.5 0.5;
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
					fixed: 1 1;
					min: BOX_ICON_SIZE_W BOX_ICON_SIZE_H;
					max: BOX_ICON_BG_SIZE_W BOX_ICON_BG_SIZE_H;
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
					min: 45 45;
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
					align: 0.0 0.5;
					fixed: 0 1;
					rel1 {
						to:"elm.rect.text.title";
					}
					rel2 {
						to:"elm.rect.text.title";
					}
					color_class: QP_ONGOING_PROGRESS_TITLE_COLOR;
					text {
						font: "Tizen:style=Regular";
						text_class: "tizen";
						size: QP_ONGOING_PROGRESS_TITLE_FONT_SIZE;
						ellipsis: 0.0;
						align: 0.0 0.5;
					}
				}
				description {
					state: "short" 0.0;
					inherit: "default" 0.0;
					rel1 {
						to: "elm.rect.text.content";
						to_y: "elm.rect.text.title";
					}
					rel2 {
						to: "elm.rect.text.content";
						to_y: "elm.rect.text.title";
					}
				}
				description {
					state: "selected" 0.0;
					inherit: "default" 0.0;
				}
			}

			part {
				name: "elm.text.count";
				type: TEXT;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					align: 1.0 0.5;
					fixed: 0 1;
					min: 0 38;
					rel1 {
						to:"elm.rect.text.title";
					}
					rel2 {
						to:"elm.rect.text.title";

					}
					color_class: QP_ONGOING_PROGRESS_RATE_COLOR;
					text {
						font: "Tizen:style=Regular";
						text_class: "tizen";
						size: QP_ONGOING_PROGRESS_RATE_FONT_SIZE;
						ellipsis: 0.0;
						align: 1.0 0.5;
					}
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
				description {
					state: "selected" 0.0;
					inherit: "default" 0.0;
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
					rel1 {
						to:"elm.rect.text.title";
					}
					rel2 {
						to:"elm.rect.text.title";
					}
					color_class: QP_ONGOING_PROGRESS_RATE_COLOR;
					text {
						font: "Tizen:style=Regular";
						text_class: "tizen";
						size: QP_ONGOING_PROGRESS_RATE_FONT_SIZE;
						align: 1.0 0.5;
					}
				}
				description {
					state: "selected" 0.0;
					inherit: "default" 0.0;
				}
			}
			part {
				name: "elm.text.content";
				type: TEXT;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					align: 0.0 0.5;
					fixed: 0 1;
					rel1 {
						to: "elm.rect.text.content";
					}
					rel2 {
						to: "elm.rect.text.content";
					}
					color_class: QP_ONGOING_PROGRESS_CONTENTS_COLOR;
					text {
						font: "Tizen:style=Regular";
						text_class: "tizen";
						size: QP_ONGOING_PROGRESS_CONTENTS_FONT_SIZE;
						align: 0.0 0.5;
					}
					visible: 1;
				}
			}
			part {
				name: "elm.swallow.progress";
				type: SWALLOW;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					rel1 {
						to: "elm.rect.progress";
					}
					rel2 {
						to: "elm.rect.progress";
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
#ifdef TBD
			program{
				name: "listbox.touch.down";
				signal: "mouse,clicked,1";
				source: "object.layer.touch.background";
				action: SIGNAL_EMIT "selected" "edje";
			}
#endif

			program{
				name: "content.long";
				signal: "content.long";
				source: "prog";
				action: STATE_SET "default" 0.0;
				target: "elm.text.title";
			}
			program{
				name: "content.short";
				signal: "content.short";
				source: "prog";
				action: STATE_SET "short" 0.0;
				target: "elm.text.title";
			}
			program{
				name: "count.show";
				signal: "count.show";
				source: "prog";
				action: STATE_SET "show" 0.0;
				target: "elm.text.count";
			}
			program{
				name: "count.hide";
				signal: "count.hide";
				source: "prog";
				action: STATE_SET "hide" 0.0;
				target: "elm.text.count";
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

#define QP_ONGOING_EVENT_TITLE_COLOR "T023"
#define QP_ONGOING_EVENT_CONTENTS_COLOR "T024"

#define QP_ONGOING_EVENT_TITLE_FONT_SIZE 30
#define QP_ONGOING_EVENT_CONTENTS_FONT_SIZE 24

	group {
		name: "quickpanel/listitem/event";
		data.item: "bgcolor" QP_THEME_BANDED_COLOR;

		styles {
			style {
				name: "ongoing_event_content_text";
				base: "font=Tizen:style=Regular text_class=tizen align=left valign=0.5 font_size="QP_ONGOING_EVENT_CONTENTS_FONT_SIZE" ellipsis=1.0 color=#2B2B2BFF color_class="QP_ONGOING_EVENT_CONTENTS_COLOR" wrap=none";
			}
		}
		parts {
			part {
				name: "background";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 (QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
					max: -1 (QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
				}
				description {
					state: "line1" 0.0;
					inherit: "default" 0.0;
					min: 0 (QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
					max: -1 (QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
				}
				description {
					state: "line2" 0.0;
					inherit: "default" 0.0;
					min: 0 (QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
					max: -1 (QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
				}
				description {
					state: "line3" 0.0;
					inherit: "default" 0.0;
					min: 0 (QP_THEME_LIST_ITEM_ONGOING_EVENT_LINE3_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
					max: -1 (QP_THEME_LIST_ITEM_ONGOING_EVENT_LINE3_HEIGHT + QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT);
				}
			}

			part {
				name: "seperator.top";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 QP_THEME_LIST_ITEM_SEPERATOR_HEIGHT;
					fixed: 0 1;
					rel1 {
						to: "background";
						relative: 0.0 0.0;
					}
					rel2 {
						to: "background";
						relative: 1.0 0.0;
					}
					align: 0.0 0.0;
				}
			}
			part {
				name: "seperator.left";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 0;
					fixed: 1 0;
					rel1 {
						to: "background";
						relative: 0.0 0.0;
					}
					rel2 {
						to: "background";
						relative: 0.0 1.0;
					}
					align: 0.0 0.0;
				}
			}
			part {
				name: "seperator.right";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 0;
					fixed: 1 0;
					rel1 {
						to: "background";
						relative: 1.0 0.0;
					}
					rel2 {
						to: "background";
						relative: 1.0 1.0;
					}
					align: 1.0 0.0;
				}
			}
			part {
				name: "base";
				type: SPACER;
				scale: 1;
				description {
					state: "default" 0.0;
					fixed: 0 1;
					min: 0 QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT;
					max: -1 QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT;
					rel1 {
						relative: 1.0 1.0;
						to_x: "seperator.left";
						to_y: "seperator.top";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "seperator.right";
						to_y: "seperator.top";
					}
					align: 0.0 0.0;
				}
				description {
					state: "line1" 0.0;
					inherit: "default" 0.0;
					min: 0 QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT;
					max: -1 QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT;
				}
				description {
					state: "line2" 0.0;
					inherit: "default" 0.0;
					min: 0 QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT;
					max: -1 QP_THEME_LIST_ITEM_ONGOING_EVENT_HEIGHT;
				}
				description {
					state: "line3" 0.0;
					inherit: "default" 0.0;
					min: 0 QP_THEME_LIST_ITEM_ONGOING_EVENT_LINE3_HEIGHT;
					max: -1 QP_THEME_LIST_ITEM_ONGOING_EVENT_LINE3_HEIGHT;
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
					min: 8 0;
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
				description {
					state: "line1" 0.0;
					inherit: "default" 0.0;
				}
				description {
					state: "line2" 0.0;
					inherit: "default" 0.0;
					min: 0 2BOX_ICON_PADDING_H5;
				}
				description {
					state: "line3" 0.0;
					inherit: "default" 0.0;
					min: 0 35;
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
				description {
					state: "line1" 0.0;
					inherit: "default" 0.0;
					min: 0 BOX_TEXT_TOP_PADDING;
				}
				description {
					state: "line2" 0.0;
					inherit: "default" 0.0;
					min: 0 9;
				}
				description {
					state: "line3" 0.0;
					inherit: "default" 0.0;
					min: 0 12;
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
				description {
					state: "line1" 0.0;
					inherit: "default" 0.0;
					min: 0 BOX_TEXT_TOP_PADDING;
				}
				description {
					state: "line2" 0.0;
					inherit: "default" 0.0;
					min: 0 0; //13.5
				}
				description {
					state: "line3" 0.0;
					inherit: "default" 0.0;
					min: 0 0; //19
				}
			}
			part {
				name: "elm.padding.left.title";
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
			part { name: "elm.padding.left.contents";
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
					min: BOX_ICON_SIZE_W BOX_ICON_SIZE_W;
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
				description { state: "default" 0.0;
					min: 35 35;
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
				name: "elm.rect.text.title";
				type: SPACER;
				mouse_events: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					min: 0 38;
					fixed: 0 1;
					rel1 {
						relative: 1.0 1.0;
						to_x: "elm.padding.left.title";
						to_y: "elm.padding.top.text";
					}
					rel2 {
						relative: 0.0 1.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.top.text";
					}
					align: 0.0 0.0;
				}
				description {
					state: "move.center" 0.0;
					inherit: "default" 0.0;
					rel1 {
						relative: 1.0 0.0;
						to_x: "elm.padding.left.title";
						to_y: "base";
					}
					rel2 {
						relative: 1.0 1.0;
						to_x: "elm.padding.right";
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
					min: 35 35;
					fixed: 0 1;
					rel1 {
						relative: 1.0 1.0;
						to_x: "elm.padding.left.contents";
						to_y: "elm.rect.text.title";
					}
					rel2 {
						relative: 0.0 0.0;
						to_x: "elm.padding.right";
						to_y: "elm.padding.bottom.text";
					}
					align: 0.0 0.0;
				}
			}
			part {
				name: "masking";
				type: IMAGE;
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
					fixed: 0 1;
					rel1 {
						to:"elm.rect.text.title";
					}
					rel2 {
						to:"elm.rect.text.title";
					}
					color_class: QP_ONGOING_EVENT_TITLE_COLOR;
					text {
						font: "Tizen:style=Regular";
						text_class: "tizen";
						size: QP_ONGOING_EVENT_TITLE_FONT_SIZE;
						ellipsis: 0.0;
						align: 0.0 0.5;
					}
				}
				description {
					state: "selected" 0.0;
					inherit: "default" 0.0;
				}
			}
			part {
				name: "elm.text.content";
				type: TEXTBLOCK;
				mouse_events: 0;
				multiline: 0;
				scale: 1;
				description {
					state: "default" 0.0;
					align: 0.0 0.0;
					fixed: 1 1;
					min: 34 34;
					max: -1 30;
					rel1 {
						to: "elm.rect.text.content";
					}
					rel2 {
						to: "elm.rect.text.content";
					}
					text {
						style: "ongoing_event_content_text";
						align: 0.0 0.0;
					}
				}
				description {
					state: "line1" 0.0;
					inherit: "default" 0.0;
					min: 0 34;
					max: -1 34;
				}
				description {
					state: "line2" 0.0;
					inherit: "default" 0.0;
					min: 0 68; //68
					max: -1 68;
				}
				description {
					state: "line3" 0.0;
					inherit: "default" 0.0;
					min: 0 102; //102
					max: -1 102;
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
				name: "line1.set";
				signal: "line1.set";
				source: "prog";
				action: STATE_SET "line1" 0.0;
				target: "background";
				target: "base";
				target: "elm.padding.top.icon";
				target: "elm.padding.top.text";
				target: "elm.padding.bottom.text";
				target: "elm.text.content";
			}
			program{
				name: "line2.set";
				signal: "line2.set";
				source: "prog";
				action: STATE_SET "line2" 0.0;
				target: "background";
				target: "base";
				target: "elm.padding.top.icon";
				target: "elm.padding.top.text";
				target: "elm.padding.bottom.text";
				target: "elm.text.content";
			}
			program{
				name: "line3.set";
				signal: "line3.set";
				source: "prog";
				action: STATE_SET "line3" 0.0;
				target: "background";
				target: "base";
				target: "elm.padding.top.icon";
				target: "elm.padding.top.text";
				target: "elm.padding.bottom.text";
				target: "elm.text.content";
			}
			program {
				name: "title.move.center";
				signal: "title.move.center";
				source: "prog";
				action: STATE_SET "move.center" 0.0;
				target: "elm.rect.text.title";
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
