#include "mainwindow.h"

#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_mainScene = new QWidget();

    m_layout = new QVBoxLayout(m_mainScene);

    m_buttonLayout = new QHBoxLayout();
    m_trainingMode = new QPushButton();
    m_trainingMode->setText("Training mode");
    m_userSelection = new QPushButton();
    m_userSelection->setText("User selection");
    m_settings = new QPushButton();
    m_settings->setText("Settings");
    m_buttonLayout->addWidget(m_trainingMode);
    m_buttonLayout->addWidget(m_userSelection);
    m_buttonLayout->addStretch(1);
    m_buttonLayout->addWidget(m_settings);

    m_layout->addLayout(m_buttonLayout);

    m_centralTab = new QStackedWidget();
    m_layout->addWidget(m_centralTab);


    m_mainScene->setLayout(m_layout);
    setCentralWidget(m_mainScene);

    m_settingsTab = new SettingsTabWidget();
    m_settingsTab->setObjectName("SettingsTab");
    m_centralTab->insertWidget(MM_SETTINGS, m_settingsTab);

    m_userSettingsTab = new UserSettingsTabWidget();
    m_userSettingsTab->setObjectName("UserSettingsTab");
    m_centralTab->insertWidget(MM_USER_SELECTION, m_userSettingsTab);
    m_trainingsModeTab = new TrainingsModeWidget();
    m_trainingsModeTab->setObjectName("TrainingsModeTab");
    m_centralTab->insertWidget(MM_TRAINING, m_trainingsModeTab);
    m_centralTab->setCurrentIndex(MM_TRAINING);

    connect( m_settings, &QPushButton::clicked, this, &MainWindow::switchSettingsTab );
    connect( m_userSelection, &QPushButton::clicked, this, &MainWindow::switchUserSettingsTab );
    connect( m_trainingMode, &QPushButton::clicked, this, &MainWindow::switchTrainingModeTab );
}

MainWindow::~MainWindow()
{
}

void MainWindow::switchSettingsTab() {
    m_centralTab->setCurrentIndex(MM_SETTINGS);
}

void MainWindow::switchUserSettingsTab() {
    m_centralTab->setCurrentIndex(MM_USER_SELECTION);
}

void MainWindow::switchTrainingModeTab() {
    m_centralTab->setCurrentIndex(MM_TRAINING);
}

