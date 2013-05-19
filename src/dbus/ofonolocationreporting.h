/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c OfonoLocationReporting -p ofonolocationreporting ofono_location_reporting.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OFONOLOCATIONREPORTING_H_1368991655
#define OFONOLOCATIONREPORTING_H_1368991655

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.ofono.LocationReporting
 */
class OfonoLocationReporting: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.LocationReporting"; }

public:
    OfonoLocationReporting(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OfonoLocationReporting();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetProperties"), argumentList);
    }

    inline QDBusPendingReply<> Release()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Release"), argumentList);
    }

    inline QDBusPendingReply<QDBusUnixFileDescriptor> Request()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Request"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace ofono {
    typedef ::OfonoLocationReporting LocationReporting;
  }
}
#endif
