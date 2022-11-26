#include "settingstabwidget.h"

#include <QSpacerItem>

SettingsTabWidget::SettingsTabWidget(QWidget* parent)
    : QWidget(parent)
{
    m_layout = new QHBoxLayout;
    m_buttonLayout = new QVBoxLayout;

    m_layout->addLayout(m_buttonLayout);

    m_usbCamSettings = new QPushButton;
    m_buttonLayout->addWidget(m_usbCamSettings);
    m_usbCamSettings->setText("USB camera setup");

    m_customVideoSettings = new QPushButton;
    m_buttonLayout->addWidget(m_customVideoSettings);
    m_customVideoSettings->setText("Video stream settings");

    m_slideShow = new QPushButton;
    m_buttonLayout->addWidget(m_slideShow);
    m_slideShow->setText("Create slide show");

    m_buttonLayout->addStretch(1);

    m_layout->addSpacerItem(new QSpacerItem(1,100));

    m_settingsStack = new QStackedWidget;
    m_layout->addWidget(m_settingsStack);

    setLayout(m_layout);
}
