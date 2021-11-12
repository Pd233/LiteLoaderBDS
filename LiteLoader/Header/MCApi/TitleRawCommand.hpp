// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class TitleRawCommand {
public:
    virtual ~TitleRawCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);

private:
    MCAPI bool _sendTitlePacketTextObject(enum SetTitlePacket::TitleType, class CommandOrigin const&, class CommandOutput&, class CommandSelectorResults<class Player> const&) const;
};