/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.4.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/exbot/UI/AbbRosI-Intg-Asst/shell_script/pkg_download_abb.sh
  0x0,0x0,0x0,0x6c,
  0x23,
  0x21,0x2f,0x62,0x69,0x6e,0x2f,0x62,0x61,0x73,0x68,0xa,0x63,0x64,0x20,0x7e,0xa,
  0x73,0x6f,0x75,0x72,0x63,0x65,0x20,0x63,0x61,0x74,0x6b,0x69,0x6e,0x5f,0x77,0x73,
  0x2f,0x64,0x65,0x76,0x65,0x6c,0x2f,0x73,0x65,0x74,0x75,0x70,0x2e,0x62,0x61,0x73,
  0x68,0x20,0xa,0x72,0x6f,0x73,0x6c,0x61,0x75,0x6e,0x63,0x68,0x20,0x6d,0x6f,0x76,
  0x65,0x69,0x74,0x5f,0x73,0x65,0x74,0x75,0x70,0x5f,0x61,0x73,0x73,0x69,0x73,0x74,
  0x61,0x6e,0x74,0x20,0x73,0x65,0x74,0x75,0x70,0x5f,0x61,0x73,0x73,0x69,0x73,0x74,
  0x61,0x6e,0x74,0x2e,0x6c,0x61,0x75,0x6e,0x63,0x68,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // shell_script
  0x0,0xc,
  0x9,0xa7,0x16,0x34,
  0x0,0x73,
  0x0,0x68,0x0,0x65,0x0,0x6c,0x0,0x6c,0x0,0x5f,0x0,0x73,0x0,0x63,0x0,0x72,0x0,0x69,0x0,0x70,0x0,0x74,
    // pkg_download_abb.sh
  0x0,0x13,
  0xd,0xab,0x94,0xd8,
  0x0,0x70,
  0x0,0x6b,0x0,0x67,0x0,0x5f,0x0,0x64,0x0,0x6f,0x0,0x77,0x0,0x6e,0x0,0x6c,0x0,0x6f,0x0,0x61,0x0,0x64,0x0,0x5f,0x0,0x61,0x0,0x62,0x0,0x62,0x0,0x2e,
  0x0,0x73,0x0,0x68,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/shell_script
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
  // :/shell_script/pkg_download_abb.sh
  0x0,0x0,0x0,0x1e,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_script)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_script)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_script)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_script)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_script)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_script)(); }
   } dummy;
}
