
#ifndef QPD_SOCKWIDGPLUGIN_H
#define QPD_SOCKWIDGPLUGIN_H

#include <QDesignerCustomWidgetInterface>

class qpd_SockWidgPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    qpd_SockWidgPlugin( QObject *parent = 0 );

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString codeTemplate() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget *createWidget( QWidget *parent );
    void initialize( QDesignerFormEditorInterface *core );

private:
    bool m_initialized;
};
#endif /* QPD_SOCKWIDGPLUGIN_H */
