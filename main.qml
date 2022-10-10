import QtQuick 2.4
import QtQuick.Controls 1.1

import "videoitem"

ApplicationWindow {
    visible: true

    minimumWidth: 500
    minimumHeight: 500
    maximumWidth: minimumWidth
    maximumHeight: minimumHeight

    Rectangle {
        id: videowall
        anchors.fill: parent
        border.color: "darkgray"
        radius: 3
        Label {
            anchors.centerIn: parent
            text: "No signal"
        }
        VideoItem {
            id: player
            anchors.fill: parent
            anchors.margins: 1
            source: playing.checked ? "smpte" : ""
        }
        Row {
            anchors.margins: 1
            id: controls
            height: 32
            spacing: 10
            Button {
                id: quit
                width: height
                height: controls.height
                text: "quit"
                onClicked: Qt.quit()
            }
            Button {
                id: startstop
                width: height
                height: controls.height
                text: player.hasVideo ? "stop" : "play"
                onClicked: {
                    if(player.hasVideo)
                    {
                        player.stop()
                    }
                    else
                    {
                        player.play()
                    }
                }
            }
            Button {
                id: playing
                checkable: true
                checked: true
                width: height
                height: controls.height
                text: player.hasVideo ? "unset" : "set"
            }
            Label {
                verticalAlignment: Qt.AlignVCenter
                height: controls.height
                text: "smpte"
            }
        }
    }
}
