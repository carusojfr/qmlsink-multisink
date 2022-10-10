#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <iostream>

#include <gst/gst.h>

int
main (int argc, char *argv[])
{
  setenv("GST_TRACERS", "leaks", false);
  setenv("GST_DEBUG", "*:2,GST_TRACER:7,videoitem:5", false);

  gst_init (&argc, &argv);
  gchar* version = gst_version_string();
  std::cerr << version << std::endl;
  g_free(version);

  int exit_status;
  {
  QGuiApplication app (argc, argv);
  QQmlApplicationEngine engine;

  /* make sure that plugin was loaded */
  GstElement *qmlglsink = gst_element_factory_make ("qmlglsink", NULL);
  g_assert (qmlglsink);
  gst_object_unref (qmlglsink);

  /* anything supported by videotestsrc */
  QStringList patterns (
      {"smpte"});

  engine.rootContext ()->setContextProperty ("patterns", QVariant::fromValue (patterns));

  QObject::connect (&engine, &QQmlEngine::quit, [&] {

        qApp->quit ();
      });

  engine.load (QUrl (QStringLiteral ("qrc:///main.qml")));

  exit_status = app.exec ();
  }


  gst_deinit();

  return exit_status;
}
