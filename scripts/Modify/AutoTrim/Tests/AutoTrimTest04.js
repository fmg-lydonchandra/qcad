// Auto generated by Testing Dashboard
// File        : scripts/Modify/AutoTrim/Tests/AutoTrimTest04.js
// Timestamp   : 2015-11-09 15:29:12
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function AutoTrimTest04() {
    TdbTest.call(this, 'scripts/Modify/AutoTrim/Tests/AutoTrimTest04.js');
}

AutoTrimTest04.prototype = new TdbTest();

AutoTrimTest04.prototype.test00 = function() {
    qDebug('running AutoTrimTest04.test00()...');
    this.setUp();
    this.importFile('scripts/Modify/AutoTrim/Tests/data/polylines.dxf');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::ModifyToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::ModifyToolsPanel::AutoTrimButton');
    this.setZoom(3.910224438902743, new RVector(48.176, 36.5185, 0, true));
    var p = new RVector(35.195153, 63.475765);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(3.910224438902743, new RVector(48.176, 36.5185, 0, true));
    var p = new RVector(34.683673, 57.08227);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(3.910224438902743, new RVector(48.176, 36.5185, 0, true));
    var p = new RVector(33.660714, 50.177296);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(3.910224438902743, new RVector(48.176, 36.5185, 0, true));
    var p = new RVector(33.916454, 42.505102);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(3.910224438902743, new RVector(48.176, 36.5185, 0, true));
    var p = new RVector(29.824617, 37.390306);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(3.910224438902743, new RVector(48.176, 36.5185, 0, true));
    var p = new RVector(29.824617, 24.859056);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(3.910224438902743, new RVector(48.176, 36.5185, 0, true));
    var p = new RVector(34.172194, 14.373724);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(3.910224438902743, new RVector(48.176, 36.5185, 0, true));
    var p = new RVector(30.080357, -3.016582);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(3.910224438902743, new RVector(48.176, 36.5185, 0, true));
    var p = new RVector(31.103316, -22.452806);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(57.955995, 3.888393);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(57.700255, 5.422832);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('AutoTrimTest04_000.dxf');
    this.tearDown();
    qDebug('finished AutoTrimTest04.test00()');
};

