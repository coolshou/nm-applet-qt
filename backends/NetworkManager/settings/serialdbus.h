// This file is generated by kconfig_compiler from serial.kcfg.
// All changes you do to this file will be lost.
#ifndef SERIALDBUS_H
#define SERIALDBUS_H

#include <nm-setting-serial.h>

#include "settingdbus.h"
#include "nm09dbus_export.h"
namespace Knm
{
    class SerialSetting;
}

class NM09DBUS_EXPORT SerialDbus : public SettingDbus
{
    public:
        SerialDbus(Knm::SerialSetting *setting);
        ~SerialDbus();
        void fromMap(const QVariantMap &);
        QVariantMap toMap();
        QVariantMap toSecretsMap();
    private:
};
#endif

