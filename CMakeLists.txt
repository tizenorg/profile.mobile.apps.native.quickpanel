CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(quickpanel C)

#AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR}/test TEST_SRCS)


SET(PACKAGE ${PROJECT_NAME})
SET(PREFIX "${CMAKE_INSTALL_PREFIX}/apps/${PKGNAME}")
SET(BINDIR "${PREFIX}/bin")
SET(RES_DIR "${PREFIX}/res")
SET(LOCALEDIR "${RES_DIR}/locale")
SET(ICONDIR "${RES_DIR}/icons")
SET(EDJ_DIR "${RES_DIR}/edje")
SET(DESKTOPDIR "/usr/share/applications")
SET(MANIFESTXMLDIR "/usr/share/packages")
SET(SHARED_DIR "${PREFIX}/shared/res")

IF("${CMAKE_BUILD_TYPE}" STREQUAL "")
	SET(CMAKE_BUILD_TYPE "Release")
ENDIF("${CMAKE_BUILD_TYPE}" STREQUAL "")
MESSAGE("Build type: ${CMAKE_BUILD_TYPE}")

SET(SRCS
	src/modules.c
	src/accessibility.c
	src/voice_control.c
	src/media.c
	src/datetime/util-time.c
	src/datetime/datetime.c
	src/sim_controller.c
	src/minictrl/minictrl.c
	src/preference.c
	src/notifications/noti_list_item.c
	src/notifications/animated_image.c
	src/notifications/activenoti.c
	src/notifications/noti_view_listype.c
	src/notifications/noti_view_ongoing.c
	src/notifications/noti_node.c
	src/notifications/noti_section.c
	src/notifications/noti_win.c
	src/notifications/noti_listbox.c
	src/notifications/noti_util.c
	src/notifications/noti_view.c
	src/notifications/noti.c
	src/device/brightness.c
	src/settings/modules/rotate-lock.c
	src/settings/modules/bluetooth.c
	src/settings/modules/gps.c
	src/settings/modules/wifi.c
	src/settings/modules/sound-profile.c
	src/settings/settings_view_all.c
	src/settings/settings_icon_common.c
	src/settings/settings_gridbox.c
	src/settings/settings_view_featured.c
	src/settings/setting_module_api.c
	src/settings/settings.c
	src/settings/setting_utils.c
	src/vi/vi_manager.c
	src/common_uic.c
	src/handler_controller.c
	src/service/animated_icon.c
	src/service/emergency_mode.c
	src/service/uninstall.c
	src/service/reminder.c
	src/service/keyboard.c
	src/service/noti_led.c
	src/page/pager.c
	src/page/page_base.c
	src/page/pager_common.c
	src/page/page_setting_all.c
	src/quickpanel-ui.c
	src/common.c
	src/list_util.c
	src/quickpanel_debug_util.c
)


INCLUDE_DIRECTORIES(
		${CMAKE_CURRENT_SOURCE_DIR}/inc
		${CMAKE_CURRENT_SOURCE_DIR}/src
		${CMAKE_CURRENT_SOURCE_DIR}/res
		${CMAKE_CURRENT_SOURCE_DIR}/src/minictrl
		${CMAKE_CURRENT_SOURCE_DIR}/src/notifications
		${CMAKE_CURRENT_SOURCE_DIR}/src/service
		${CMAKE_CURRENT_SOURCE_DIR}/src/settings
		${CMAKE_CURRENT_SOURCE_DIR}/src/settings/modules
		${CMAKE_CURRENT_SOURCE_DIR}/src/vi
		${CMAKE_CURRENT_SOURCE_DIR}/src/page
		${CMAKE_CURRENT_SOURCE_DIR}/src/datetime
#		${CMAKE_CURRENT_SOURCE_DIR}/data
		)

INCLUDE(FindPkgConfig)
pkg_check_modules(pkgs REQUIRED
	capi-appfw-application
	capi-appfw-app-manager
	capi-system-runtime-info
	capi-system-info
	capi-system-device
	capi-location-manager
	capi-network-tethering
	capi-network-bluetooth
	capi-network-connection
	capi-network-wifi
	capi-media-player
	capi-media-sound-manager
	capi-media-metadata-extractor
	capi-system-system-settings
	capi-base-utils-i18n
	capi-ui-efl-util
	tapi
	feedback
	notification
	badge
	vconf
	edbus
	evas
	ecore
	edje
	ecore-input
	icu-i18n
	elementary
	dlog
	syspopup-caller
	minicontrol-viewer
	minicontrol-monitor
	capi-appfw-package-manager
	iniparser
	alarm-service
	voice-control-setting
	tzsh-quickpanel-service	
	dpm
)

FOREACH(flag ${pkgs_CFLAGS} ${x11_pkgs_CFLAGS})
	SET(EXTRA_CFLAGS "${EXTRA_CFLAGS} ${flag}")
ENDFOREACH(flag)

SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${EXTRA_CFLAGS} -Wall -g -O2 -fpie -Werror")
SET(CMAKE_C_FLAGS_DEBUG "-O0 -g")
SET(CMAKE_C_FLAGS_RELEASE "-O2")

FIND_PROGRAM(UNAME NAMES uname)
EXEC_PROGRAM("${UNAME}" ARGS "-m" OUTPUT_VARIABLE "ARCH")
IF("${ARCH}" STREQUAL "arm")
	ADD_DEFINITIONS("-DTARGET")
	MESSAGE("add -DTARGET")
ENDIF("${ARCH}" STREQUAL "arm")

ADD_DEFINITIONS("-DQP_SETTING_ENABLE")
ADD_DEFINITIONS("-DQP_BRIGHTNESS_ENABLE")
ADD_DEFINITIONS("-DQP_MINICTRL_ENABLE")
ADD_DEFINITIONS("-DQP_SCREENREADER_ENABLE")
#ADD_DEFINITIONS("-DQP_SERVICE_NOTI_LED_ENABLE")
ADD_DEFINITIONS("-DQP_ANIMATED_IMAGE_ENABLE")
ADD_DEFINITIONS("-DQP_REMINDER_ENABLE")
#ADD_DEFINITIONS("-DQP_EMERGENCY_MODE_ENABLE")
#ADD_DEFINITIONS("-DQP_VOICE_CONTROL_ENABLE")
ADD_DEFINITIONS("-DPRIVATE_ROOT_STRAP")
ADD_DEFINITIONS("-D__PROGRESSBAR_ENABLED__")

ADD_DEFINITIONS("-DPACKAGE=\"${PACKAGE}\"")
ADD_DEFINITIONS("-DPACKAGE_NAME=\"${PKGNAME}\"")
ADD_DEFINITIONS("-DPREFIX=\"${PREFIX}\"")
ADD_DEFINITIONS("-DRES_DIR=\"${RES_DIR}\"")
ADD_DEFINITIONS("-DLOCALEDIR=\"${LOCALEDIR}\"")
ADD_DEFINITIONS("-DICONDIR=\"${ICONDIR}\"")
ADD_DEFINITIONS("-DEDJ_DIR=\"${EDJ_DIR}\"")
ADD_DEFINITIONS("-DDATADIR=\"${DATADIR}\"")
ADD_DEFINITIONS("-DSHARED_DIR=\"${SHARED_DIR}\"")

#ADD_DEFINITIONS("-DFILE_DEBUG")
ADD_DEFINITIONS("-D_DLOG_USED")
#ADD_DEFINITIONS("-DHAVE_X")

SET(CMAKE_EXE_LINKER_FLAGS "-Wl,--as-needed")

ADD_EXECUTABLE(${PROJECT_NAME} ${SRCS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${pkgs_LDFLAGS} ${x11_pkgs_LDFLAGS} "-pie")


MESSAGE("START EDJ BUILD")

MESSAGE("EDJE_CC CUSTOM FLAG : ${EDJEFLAGS}")

ADD_CUSTOM_TARGET(quickpanel.edj
		COMMAND edje_cc -id ${CMAKE_CURRENT_SOURCE_DIR}/res/images_icon  -id ${CMAKE_CURRENT_SOURCE_DIR}/res/images "${EDJEFLAGS}"
		${CMAKE_CURRENT_SOURCE_DIR}/res/edje/quickpanel.edc
		${CMAKE_CURRENT_BINARY_DIR}/quickpanel.edj
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/res/edje/quickpanel.edc
)
ADD_DEPENDENCIES(${PROJECT_NAME} quickpanel.edj)

ADD_CUSTOM_TARGET(quickpanel_activenoti.edj
                COMMAND edje_cc -id ${CMAKE_CURRENT_SOURCE_DIR}/res/images_icon  -id ${CMAKE_CURRENT_SOURCE_DIR}/res/images "${EDJEFLAGS}"
                ${CMAKE_CURRENT_SOURCE_DIR}/res/edje/quickpanel_activenoti.edc
                ${CMAKE_CURRENT_BINARY_DIR}/quickpanel_activenoti.edj
                DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/res/edje/quickpanel_activenoti.edc
)
ADD_DEPENDENCIES(${PROJECT_NAME} quickpanel_activenoti.edj)

ADD_CUSTOM_TARGET(quickpanel_voice_control.edj
                COMMAND edje_cc -id ${CMAKE_CURRENT_SOURCE_DIR}/res/images_icon  -id ${CMAKE_CURRENT_SOURCE_DIR}/res/images "${EDJEFLAGS}"
                ${CMAKE_CURRENT_SOURCE_DIR}/res/edje/quickpanel_voice_control.edc
                ${CMAKE_CURRENT_BINARY_DIR}/quickpanel_voice_control.edj
                DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/res/edje/quickpanel_voice_control.edc
)
ADD_DEPENDENCIES(${PROJECT_NAME} quickpanel_voice_control.edj)



ADD_CUSTOM_TARGET(quickpanel_theme.edj
		COMMAND edje_cc -id ${CMAKE_CURRENT_SOURCE_DIR}/res/images_icon -id ${CMAKE_CURRENT_SOURCE_DIR}/res/images "${EDJEFLAGS}"
		${CMAKE_CURRENT_SOURCE_DIR}/res/edje/quickpanel_theme.edc
		${CMAKE_CURRENT_BINARY_DIR}/quickpanel_theme.edj
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/res/edje/quickpanel_theme.edc
)
ADD_DEPENDENCIES(${PROJECT_NAME} quickpanel_theme.edj)

INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/quickpanel.edj DESTINATION ${EDJ_DIR})
INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/quickpanel_activenoti.edj DESTINATION ${EDJ_DIR})
INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/quickpanel_voice_control.edj DESTINATION ${EDJ_DIR})
INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/quickpanel_theme.edj DESTINATION ${EDJ_DIR})
INSTALL(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/icons DESTINATION ${RES_DIR} FILES_MATCHING PATTERN "*.png")


CONFIGURE_FILE(${PROJECT_NAME}.xml ${CMAKE_CURRENT_BINARY_DIR}/org.tizen.${PROJECT_NAME}.xml)
INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/org.tizen.${PROJECT_NAME}.xml DESTINATION ${MANIFESTXMLDIR})
#CONFIGURE_FILE(tizen-manifest.xml ${CMAKE_CURRENT_BINARY_DIR}/org.tizen.${PROJECT_NAME}.xml)
#INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/org.tizen.${PROJECT_NAME}.xml DESTINATION ${MANIFESTXMLDIR})

INSTALL(TARGETS ${PROJECT_NAME} DESTINATION ${BINDIR})

# icons for notification
INSTALL(DIRECTORY ${CMAKE_SOURCE_DIR}/shared/res/images_noti_icons/ DESTINATION ${SHARED_DIR}/noti_icons FILES_MATCHING PATTERN "*.png")

# License
INSTALL(FILES ${CMAKE_SOURCE_DIR}/LICENSE DESTINATION /usr/share/license RENAME ${PKGNAME})

# Language
MESSAGE("ADD_SUBDIRECTORY PO")
ADD_SUBDIRECTORY(res/po)

