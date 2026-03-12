import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Генератор фраз")

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
                backend.getRandomPhrase();
            }
        }
        Connections {
            target: backend
            onPhraseChanged: function(newPhrase) {
                phraseText.text = newPhrase;
                console.log("Новая фраза: ", newPhrase)
            }
        }
    }
}


