#pragma once

#if !defined(PLUGIN_VENDOR_NAME) || !defined(PLUGIN_NAME) || !defined(PLUGIN_VERSION)
#error The macro definitions PLUGIN_VENDOR_NAME, PLUGIN_NAME, PLUGIN_VERSION are not known. You must define it (you can change it in Ocean for Techlog project settings)
#endif

#include <QtCore>
#include <QAction>
#if QT_VERSION < QT_VERSION_CHECK(5,0,0)
#include <QtGui>
#else
#include <QtWidgets>
#endif

#include "tsdkabstractactivity.h"
#include "tsdktypes.h"
#include "tsdklock.h"