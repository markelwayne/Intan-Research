//  ------------------------------------------------------------------------
//
//  This file is part of the Intan Technologies RHD2000 Interface
//  Version 2.043
//  Copyright (C) 2013-2017 Intan Technologies
//
//  ------------------------------------------------------------------------
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published
//  by the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <QApplication>
#include <QMessageBox>
#include <QSplashScreen>
#include <QStyleFactory>

#include "mainwindow.h"
#include "guicon.h"

// Starts application main window.

int main(int argc, char *argv[]){
    //RedirectIOToConsole();

#ifdef __APPLE__
    setenv("QT_SCALE_FACTOR", "0.8", 1);
#endif

    QApplication app(argc, argv);

#ifdef __APPLE__
    app.setStyle(QStyleFactory::create("Fusion"));
#endif

    QSplashScreen *splash = new QSplashScreen();
    splash->setPixmap(QPixmap(":/images/splash.png"));
    splash->show();

    splash->showMessage(QObject::tr("Starting Intan Technologies Recording Controller v2.04..."), Qt::AlignCenter | Qt::AlignBottom, Qt::black);

    MainWindow mainWin;
    mainWin.show();

    splash->finish(&mainWin);
    delete splash;

    return app.exec();
}
