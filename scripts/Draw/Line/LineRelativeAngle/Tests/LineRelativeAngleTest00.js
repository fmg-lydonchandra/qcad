// Auto generated by Testing Dashboard
// File        : scripts/Draw/Line/LineRelativeAngle/Tests/LineRelativeAngleTest00.js
// Timestamp   : 2015-03-05 14:06:40
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function LineRelativeAngleTest00() {
    TdbTest.call(this, 'scripts/Draw/Line/LineRelativeAngle/Tests/LineRelativeAngleTest00.js');
}

LineRelativeAngleTest00.prototype = new TdbTest();

LineRelativeAngleTest00.prototype.test00 = function() {
    qDebug('running LineRelativeAngleTest00.test00()...');
    this.setUp();
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::LineToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::LineToolsPanel::Line2PButton');
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(-0.1, 9.8);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(40.1, 20.1);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(21.1, 8.2);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(14.5, 6.2);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(14.2, 6.1);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::LineToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::LineToolsPanel::LineRelativeAngleButton');
    this.setToolOption('Line/Type', 'TypeSegment');
    this.setToolOption('LineRelativeAngle/Angle', '30');
    this.setToolOption('LineRelativeAngle/Length', '10');
    this.setToolOption('LineRelativeAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(7.1, 11.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(0.1, 10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('Line/Type', 'TypeSegment');
    this.setToolOption('LineRelativeAngle/Angle', '30');
    this.setToolOption('LineRelativeAngle/Length', '10');
    this.setToolOption('LineRelativeAngle/ReferencePoint', 'Middle');
    this.updateToolOptions();
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(20.1, 15.3);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('Line/Type', 'TypeSegment');
    this.setToolOption('LineRelativeAngle/Angle', '30');
    this.setToolOption('LineRelativeAngle/Length', '10');
    this.setToolOption('LineRelativeAngle/ReferencePoint', 'End');
    this.updateToolOptions();
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(39.5, 19.6);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('Line/Type', 'TypeSegment');
    this.setToolOption('LineRelativeAngle/Angle', '90');
    this.setToolOption('LineRelativeAngle/Length', '5');
    this.setToolOption('LineRelativeAngle/ReferencePoint', 'Middle');
    this.updateToolOptions();
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(7.2, 16.7);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(16.4, 11.5);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(23.2, 18.8);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(33, 13);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(25.2, 6.7);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(24.6, 6.4);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(24.5, 6.3);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.tearDown();
    qDebug('finished LineRelativeAngleTest00.test00()');
};

