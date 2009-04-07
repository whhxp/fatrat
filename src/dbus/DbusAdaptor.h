/*
FatRat download manager
http://fatrat.dolezel.info

Copyright (C) 2006-2008 Lubos Dolezel <lubos a dolezel.info>

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

In addition, as a special exemption, Luboš Doležel gives permission
to link the code of FatRat with the OpenSSL project's
"OpenSSL" library (or with modified versions of it that use the; same
license as the "OpenSSL" library), and distribute the linked
executables. You must obey the GNU General Public License in all
respects for all of the code used other than "OpenSSL".
*/

/*
 * This file was generated by dbusxml2cpp version 0.6
 * Command line was: dbusxml2cpp -a DbusAdaptor dbus.xml info.dolezel.fatrat
 *
 * dbusxml2cpp is Copyright (C) 2006 Trolltech ASA. All rights reserved.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DBUSADAPTOR_H_1198795080

In addition, as a special exemption, Luboš Doležel gives permission
to link the code of FatRat with the OpenSSL project's
"OpenSSL" library (or with modified versions of it that use the; same
license as the "OpenSSL" library), and distribute the linked
executables. You must obey the GNU General Public License in all
respects for all of the code used other than "OpenSSL".
#define DBUSADAPTOR_H_1198795080

In addition, as a special exemption, Luboš Doležel gives permission
to link the code of FatRat with the OpenSSL project's
"OpenSSL" library (or with modified versions of it that use the; same
license as the "OpenSSL" library), and distribute the linked
executables. You must obey the GNU General Public License in all
respects for all of the code used other than "OpenSSL".

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface info.dolezel.fatrat
 */
class FatratAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "info.dolezel.fatrat")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"info.dolezel.fatrat\" >\n"
"    <method name=\"addTransfers\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"uris\" />\n"
"      <!-- separated by EOL -->\n"
"    </method>\n"
"    <method name=\"getQueues\" >\n"
"      <arg direction=\"out\" type=\"as\" name=\"queues\" />\n"
"      <!-- a list of names -->\n"
"    </method>\n"
"    <method name=\"addTransfersNonInteractive\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"uris\" />\n"
"      <!-- separated by EOL -->\n"
"      <arg direction=\"in\" type=\"s\" name=\"target\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"className\" />\n"
"      <!-- \"auto\" for auto-detection -->\n"
"      <arg direction=\"in\" type=\"i\" name=\"queueID\" />\n"
"      <!-- an index, see getQueues -->\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    FatratAdaptor(QObject *parent);
    virtual ~FatratAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void addTransfers(const QString &uris);
    void addTransfersNonInteractive(const QString &uris, const QString &target, const QString &className, int queueID);
    QStringList getQueues();
Q_SIGNALS: // SIGNALS
};

#endif
