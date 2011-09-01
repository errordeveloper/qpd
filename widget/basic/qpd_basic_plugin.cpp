
#include <QtPlugin>

#include "qpd_basic.h"
#include "qpd_basic_plugin.h"

qpd_basic_plugin::qpd_basic_plugin( QObject *parent )
		   :QObject(parent)
{
    m_initialized = false;
}

bool qpd_basic_plugin::isContainer() const
{
    return false;
}

bool qpd_basic_plugin::isInitialized() const
{
    return m_initialized;
}

QIcon qpd_basic_plugin::icon() const
{
    return QIcon();
}

QString qpd_basic_plugin::codeTemplate() const
{

// the documentation says that this isn't implemented yet ;(

    return "";
}

QString qpd_basic_plugin::domXml() const
{
    return "<widget class=\"qpd_basic\" name=\"qpd_basic\">\n"
           "</widget>\n";
}

QString qpd_basic_plugin::group() const
{
    return "Custom and Local widgets";
}

QString qpd_basic_plugin::includeFile() const
{
    return "qpd_basic.h";
}

QString qpd_basic_plugin::name() const
{
    return "qpd_basic";
}

QString qpd_basic_plugin::toolTip() const
{
    return "";
}

QString qpd_basic_plugin::whatsThis() const
{
    return "";
}

QWidget *qpd_basic_plugin::createWidget( QWidget *parent )
{
    return new qpd_basic( parent );
}

void qpd_basic_plugin::initialize( QDesignerFormEditorInterface *core )
{
    if( m_initialized )
        return;

    m_initialized = true;
}

Q_EXPORT_PLUGIN2(_qpd_basic_plugin, qpd_basic_plugin);
