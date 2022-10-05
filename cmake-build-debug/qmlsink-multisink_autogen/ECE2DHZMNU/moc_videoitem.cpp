/****************************************************************************
** Meta object code from reading C++ file 'videoitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../videoitem/videoitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoItem_t {
    QByteArrayData data[23];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoItem_t qt_meta_stringdata_VideoItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "VideoItem"
QT_MOC_LITERAL(1, 10, 15), // "hasVideoChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "hasVideo"
QT_MOC_LITERAL(4, 36, 12), // "stateChanged"
QT_MOC_LITERAL(5, 49, 16), // "VideoItem::State"
QT_MOC_LITERAL(6, 66, 5), // "state"
QT_MOC_LITERAL(7, 72, 13), // "sourceChanged"
QT_MOC_LITERAL(8, 86, 6), // "source"
QT_MOC_LITERAL(9, 93, 11), // "rectChanged"
QT_MOC_LITERAL(10, 105, 4), // "rect"
QT_MOC_LITERAL(11, 110, 17), // "resolutionChanged"
QT_MOC_LITERAL(12, 128, 10), // "resolution"
QT_MOC_LITERAL(13, 139, 13), // "errorOccurred"
QT_MOC_LITERAL(14, 153, 5), // "error"
QT_MOC_LITERAL(15, 159, 4), // "play"
QT_MOC_LITERAL(16, 164, 4), // "stop"
QT_MOC_LITERAL(17, 169, 5), // "State"
QT_MOC_LITERAL(18, 175, 18), // "STATE_VOID_PENDING"
QT_MOC_LITERAL(19, 194, 10), // "STATE_NULL"
QT_MOC_LITERAL(20, 205, 11), // "STATE_READY"
QT_MOC_LITERAL(21, 217, 12), // "STATE_PAUSED"
QT_MOC_LITERAL(22, 230, 13) // "STATE_PLAYING"

    },
    "VideoItem\0hasVideoChanged\0\0hasVideo\0"
    "stateChanged\0VideoItem::State\0state\0"
    "sourceChanged\0source\0rectChanged\0rect\0"
    "resolutionChanged\0resolution\0errorOccurred\0"
    "error\0play\0stop\0State\0STATE_VOID_PENDING\0"
    "STATE_NULL\0STATE_READY\0STATE_PAUSED\0"
    "STATE_PLAYING"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   74, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,
      11,    1,   66,    2, 0x06 /* Public */,
      13,    1,   69,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   72,    2, 0x02 /* Public */,
      16,    0,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QRect,   10,
    QMetaType::Void, QMetaType::QSize,   12,
    QMetaType::Void, QMetaType::QString,   14,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495001,
       6, 0x80000000 | 17, 0x00495009,
       8, QMetaType::QString, 0x00495103,
      10, QMetaType::QRect, 0x00495001,
      12, QMetaType::QSize, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, alias, flags, count, data
      17,   17, 0x0,    5,   99,

 // enum data: key, value
      18, uint(VideoItem::STATE_VOID_PENDING),
      19, uint(VideoItem::STATE_NULL),
      20, uint(VideoItem::STATE_READY),
      21, uint(VideoItem::STATE_PAUSED),
      22, uint(VideoItem::STATE_PLAYING),

       0        // eod
};

void VideoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hasVideoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< VideoItem::State(*)>(_a[1]))); break;
        case 2: _t->sourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->rectChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 4: _t->resolutionChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 5: _t->errorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->play(); break;
        case 7: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoItem::hasVideoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoItem::*)(VideoItem::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoItem::stateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VideoItem::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoItem::sourceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VideoItem::*)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoItem::rectChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VideoItem::*)(const QSize & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoItem::resolutionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VideoItem::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoItem::errorOccurred)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VideoItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasVideo(); break;
        case 1: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->source(); break;
        case 3: *reinterpret_cast< QRect*>(_v) = _t->rect(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->resolution(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VideoItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSource(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VideoItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_VideoItem.data,
    qt_meta_data_VideoItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int VideoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VideoItem::hasVideoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VideoItem::stateChanged(VideoItem::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VideoItem::sourceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VideoItem::rectChanged(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VideoItem::resolutionChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VideoItem::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
