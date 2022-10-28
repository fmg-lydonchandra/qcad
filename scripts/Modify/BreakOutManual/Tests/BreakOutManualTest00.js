// Auto generated by Testing Dashboard
// File        : scripts/Modify/BreakOutManual/Tests/BreakOutManualTest00.js
// Timestamp   : 2015-04-23 16:29:01
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function BreakOutManualTest00() {
    TdbTest.call(this, 'scripts/Modify/BreakOutManual/Tests/BreakOutManualTest00.js');
}

BreakOutManualTest00.prototype = new TdbTest();

BreakOutManualTest00.prototype.test00 = function() {
    qDebug('running BreakOutManualTest00.test00()...');
    this.setUp();
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::LineToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::LineToolsPanel::Line2PButton');
    this.setZoom(12, new RVector(2.20833, 8.20833, 0, true));
    var p = new RVector(0.208333, 20.041667);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(12, new RVector(2.20833, 8.20833, 0, true));
    var p = new RVector(39.791667, 20.041667);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(17.708333, 11.958333);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.setZoom(12, new RVector(2.20833, 8.20833, 0, true));
    var p = new RVector(10.041667, 9.958333);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(12, new RVector(2.20833, 8.20833, 0, true));
    var p = new RVector(9.958333, -0.125);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(27.458333, 3.875);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.setZoom(12, new RVector(2.20833, 8.20833, 0, true));
    var p = new RVector(30.125, 9.625);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(12, new RVector(2.20833, 8.20833, 0, true));
    var p = new RVector(29.875, 0.041667);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(33.791667, 4.375);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(34.625, 8.458333);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    TdbTest.clickOnWidget('MainWindow::CadToolBar::LineToolsPanel::BackButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::ModifyToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::ModifyToolsPanel::BreakOutManualButton');
    this.setToolOption('BreakOutManual/RemoveSegment', 'true');
    this.updateToolOptions();
    this.setZoom(12, new RVector(2.20833, 8.20833, 0, true));
    var p = new RVector(17.458333, 19.875);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(12, new RVector(2.20833, 8.20833, 0, true));
    var p = new RVector(10.208333, 9.625);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(12, new RVector(2.20833, 8.20833, 0, true));
    var p = new RVector(29.958333, 10.291667);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(17.291667, 15.958333);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('BreakOutManualTest00_000.dxf');
    this.tearDown();
    qDebug('finished BreakOutManualTest00.test00()');
};

