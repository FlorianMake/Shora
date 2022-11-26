#ifndef SETTINGSTAB_H
#define SETTINGSTAB_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class SettingsTabWidget : public QWidget
{
public:
    SettingsTabWidget(QWidget* parent = nullptr);

private:
    QHBoxLayout* m_layout;
    QVBoxLayout* m_buttonLayout;

    QPushButton* m_usbCamSettings;
    QPushButton* m_customVideoSettings;
    QPushButton* m_slideShow;

    QStackedWidget* m_settingsStack;
};

#endif // SETTINGSTAB_H
