/* generated by rust_qt_binding_generator */
#include "Bindings.h"

namespace {

    typedef void (*qstring_set)(QString* val, const char* utf8, int nbytes);
    void set_qstring(QString* val, const char* utf8, int nbytes) {
        *val = QString::fromUtf8(utf8, nbytes);
    }
    inline void simpleMessageChanged(Simple* o)
    {
        emit o->messageChanged();
    }
}
extern "C" {
    Simple::Private* simple_new(Simple*, void (*)(Simple*));
    void simple_free(Simple::Private*);
    void simple_message_get(const Simple::Private*, QString*, qstring_set);
    void simple_message_set(Simple::Private*, const ushort *str, int len);
};

Simple::Simple(bool /*owned*/, QObject *parent):
    QObject(parent),
    m_d(0),
    m_ownsPrivate(false)
{
}

Simple::Simple(QObject *parent):
    QObject(parent),
    m_d(simple_new(this,
        simpleMessageChanged)),
    m_ownsPrivate(true)
{
}

Simple::~Simple() {
    if (m_ownsPrivate) {
        simple_free(m_d);
    }
}
QString Simple::message() const
{
    QString v;
    simple_message_get(m_d, &v, set_qstring);
    return v;
}
void Simple::setMessage(const QString& v) {
    simple_message_set(m_d, reinterpret_cast<const ushort*>(v.data()), v.size());
}
