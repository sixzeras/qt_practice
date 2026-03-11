import QtQuick
import QtQuick.Controls

import task_one

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Генератор фраз")

    Backend {
        id: backend
    }

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            id: phraseText
            text: "Здесь будет фраза"
            font.pixelSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Button {
            text: "Нажми на кнопку!"
            anchors.horizontalCenter: parent.horizontalCenter

            onClicked: {
                phraseText.text = backend.GetRandomPhrase();
            }
        }
    }
}


