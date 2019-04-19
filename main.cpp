#include <QCoreApplication>
#include <rfb/rfb.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[])
{
    rfbScreenInfoPtr server=rfbGetScreen(&argc,argv,400,300,8,3,4);
    server->frameBuffer=static_cast<char*>(malloc(400*300*4));
    rfbInitServer(server);
    rfbRunEventLoop(server,-1,FALSE);
    return(0);
}
