#ifndef DLG_ABOUT_H
#define DLG_ABOUT_H

#include <QMessageBox>

class MainWindow;

/// About Engauge dialog. This provides a hidden shortcut for triggering ENGAUGE_ASSERT
class DlgAbout : public QMessageBox
{
 public:
  /// Single constructor
  DlgAbout(MainWindow  &mainWindow);

  /// Handle the hidden keyboard shortcut
  virtual void keyPressEvent (QKeyEvent *event);

 private:
  DlgAbout();
  
  MainWindow &m_mainWindow;
};

#endif // DLG_ABOUT_H
