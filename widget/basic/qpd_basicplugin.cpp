
#include <QtPlugin>

#include "qpd_sockwidg.h"
#include "qpd_sockwidgplugin.h"

qpd_SockWidgPlugin::qpd_SockWidgPlugin( QObject *parent )
		   :QObject(parent)
{
    m_initialized = false;
}

bool qpd_SockWidgPlugin::isContainer() const
{
    return false;
}

bool qpd_SockWidgPlugin::isInitialized() const
{
    return m_initialized;
}

QIcon qpd_SockWidgPlugin::icon() const
{
    return QIcon();
}

QString qpd_SockWidgPlugin::codeTemplate() const
{

// the documentation says that this isn't implemented yet ;(

    return "";
}

QString qpd_SockWidgPlugin::domXml() const
{
    return "<widget class=\"qpd_SockWidg\" name=\"qpd_SockWidg\">\n"
           "</widget>\n";
}

QString qpd_SockWidgPlugin::group() const
{
    return "Custom and Local widgets";
}

QString qpd_SockWidgPlugin::includeFile() const
{
    return "qpd_sockwidg.h";
}

QString qpd_SockWidgPlugin::name() const
{
    return "qpd_SockWidg";
}

QString qpd_SockWidgPlugin::toolTip() const
{
    return "";
}

QString qpd_SockWidgPlugin::whatsThis() const
{
    return "";
}

QWidget *qpd_SockWidgPlugin::createWidget( QWidget *parent )
{
    return new qpd_SockWidg( parent );
}

void qpd_SockWidgPlugin::initialize( QDesignerFormEditorInterface *core )
{
    if( m_initialized )
        return;

    m_initialized = true;
}

Q_EXPORT_PLUGIN2(qpd_sockwidgplugin, qpd_SockWidgPlugin);
