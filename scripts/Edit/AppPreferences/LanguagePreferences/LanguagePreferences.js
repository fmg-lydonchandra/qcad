/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

include("scripts/EAction.js");
include("scripts/WidgetFactory.js");

function LanguagePreferences(guiAction) {
    //EAction.call(this, guiAction);
}

LanguagePreferences.prototype = {}; //new EAction();

LanguagePreferences.localLanguageName = [];
LanguagePreferences.localLanguageName["cs"] = "Čeština";
LanguagePreferences.localLanguageName["da"] = "Dansk";
LanguagePreferences.localLanguageName["de"] = "Deutsch";
LanguagePreferences.localLanguageName["de_DE"] = "Deutsch";
LanguagePreferences.localLanguageName["en"] = "English";
LanguagePreferences.localLanguageName["en_US"] = "English";
LanguagePreferences.localLanguageName["es"] = "Español";
LanguagePreferences.localLanguageName["fi"] = "Suomi";
LanguagePreferences.localLanguageName["fr"] = "Français";
LanguagePreferences.localLanguageName["hu"] = "Magyar";
LanguagePreferences.localLanguageName["hr"] = "Hrvatski";
LanguagePreferences.localLanguageName["it"] = "Italiano";
LanguagePreferences.localLanguageName["ja"] = "日本語";
LanguagePreferences.localLanguageName["lt"] = "Lietuvių kalba";
LanguagePreferences.localLanguageName["nl"] = "Nederlands";
LanguagePreferences.localLanguageName["pl"] = "Polski";
LanguagePreferences.localLanguageName["pt"] = "Português";
LanguagePreferences.localLanguageName["pt_BR"] = "Português Brasileiro";
LanguagePreferences.localLanguageName["ru"] = "ру́сский язы́к";
LanguagePreferences.localLanguageName["sk"] = "Slovenčina";
LanguagePreferences.localLanguageName["sl"] = "Slovenščina";
LanguagePreferences.localLanguageName["sv"] = "Svenska";
LanguagePreferences.localLanguageName["tr"] = "Türkçe";
LanguagePreferences.localLanguageName["zh_TW"] = "繁體中文";
LanguagePreferences.localLanguageName["zh"] = "简体中文";
LanguagePreferences.localLanguageName["zh_ZN"] = "简体中文";

LanguagePreferences.getPreferencesCategory = function() {
    return [qsTr("Language Settings"), qsTr("Language")];
};

LanguagePreferences.initPreferences = function(pageWidget, calledByPrefDialog, document) {
//    var loc = new QLocale(QLocale.German);
    var language = pageWidget.findChild("UiLanguage");

    language.addItem("English", "en");
    var codes = LanguagePreferences.getLanguages();
    for (var i = 0; i < codes.length; ++i) {
        var code = codes[i];
        language.addItem(LanguagePreferences.codeToString(code), code);
    }
    language.model().sort(0);
    
//    if (RSettings.getQtVersion() >= 0x060000) {
//        language.currentTextChanged.connect(this, function(text) {
//            RSettings.setValue("LibraryBrowser/RebuildDatabase", true);
//        });
//    }
//    else {
//        language["currentIndexChanged(QString)"].connect(this, function(text) {
//            RSettings.setValue("LibraryBrowser/RebuildDatabase", true);
//        });
//    }

    
//  var contents = pageWidget.findChild("LanguagePage");
//  WidgetFactory.restoreState(pageWidget);

//  var code = RSettings.getLocale();
//  var i = cbLanguage.findText(this.codeToString(code));
//  if (i == -1) {
//      var locale = new QLocale(code);
//      var lang = QLocale.languageToString(locale.language());
//      i = cbLanguage.findText(lang);
//  }
//  if (i > -1) {
//      cbLanguage.setCurrentIndex(i);
//  }
};

LanguagePreferences.codeToString = function(code) {
    var locale = new QLocale(code);
    var lang = locale.language();
    var langStrEn = QLocale.languageToString(lang);
    var langStrNational = LanguagePreferences.localLanguageName[code];
    var country = QLocale.countryToString(locale.country());

    var ret = "";
    if (!isNull(langStrNational)) {
        ret += langStrNational + " / ";
    }
    ret += langStrEn;

    if (code.indexOf("_")!==-1) {
        ret += " (" + country + ")";
    }

    return ret;
};

LanguagePreferences.getLanguages = function(dirName) {
    if (isNull(dirName)) {
        dirName = "ts";
    }

    var codes = [];
    
    var dir = new QDir(dirName);
    var sortFlags = makeQDirSortFlags(QDir.NoSort);
    /*
    var dirFilter = new QDir.Filters(QDir.NoDotAndDotDot, QDir.Readable,
            QDir.Dirs);
    var dirs = dir.entryInfoList(dirFilter, sortFlags);
    
    for (var i = 0; i < dirs.length; ++i) {
        codes = codes.concat(LanguagePreferences.getLanguages(dirs[i].absoluteFilePath()));
    }
    */
    
    var fileFilter = makeQDirFilters(QDir.Readable, QDir.Files);
    var files = dir.entryInfoList(["*.qm"], fileFilter, sortFlags);
    for (var j = 0; j < files.length; ++j) {
        var fileName = files[j].baseName();
        var code = fileName.match(/(?:(?:_(..))(?:_(..)))$|(?:_(..)$)/, "g");
        if (code===null || code.length!==4) {
            continue;
        }
        if (!isNull(code[3])) {
            code = code[3];
        }
        else {
            code = code[1] + "_" + code[2];
        }
        //qDebug("code: ", code);

        codes.push(code);
    }

    return codes.unique();
};
