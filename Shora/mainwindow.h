#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QTabWidget>

#include <settingstabwidget.h>
#include <usersettingstabwidget.h>
#include <trainingsmodewidget.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void switchSettingsTab();
    void switchUserSettingsTab();
    void switchTrainingModeTab();


private:
    enum MainMode {
        MM_SETTINGS = 0,
        MM_USER_SELECTION = 1,
        MM_TRAINING = 2,
    };

    QWidget* m_mainScene;
    QPushButton* m_settings;
    QPushButton* m_userSelection;
    QPushButton* m_trainingMode;

    QHBoxLayout* m_buttonLayout;
    QVBoxLayout* m_layout;

    QTabWidget* m_centralTab;

    SettingsTabWidget* m_settingsTab;
    UserSettingsTabWidget* m_userSettingsTab;
    TrainingsModeWidget* m_trainingsModeTab;
};
#endif // MAINWINDOW_H
