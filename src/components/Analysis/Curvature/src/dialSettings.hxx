#ifndef HEADER_MEPP_COMPONENT_CURVATURE_PLUGIN_SETTINGS_H
#define HEADER_MEPP_COMPONENT_CURVATURE_PLUGIN_SETTINGS_H

#include <mepp_config.h>
#ifdef BUILD_component_Curvature

#ifndef _MSC_VER
#pragma GCC diagnostic ignored "-Wuninitialized"
#endif
#include <QtGui/QDialog>
#ifndef _MSC_VER
#pragma GCC diagnostic warning "-Wuninitialized"
#endif

#include "ui_dialSettings.h"

class SettingsDialog : public QDialog, public Ui_Settings
{
    Q_OBJECT

public:
    SettingsDialog(QWidget *parent = 0);
    void accept();

private slots:
    void loadDefaults();
    void loadFromSettings();
    void saveToSettings();

private:
};

#endif

#endif // HEADER_MEPP_COMPONENT_CURVATURE_PLUGIN_SETTINGS_H