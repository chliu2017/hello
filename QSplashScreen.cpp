//Qt QSplashScreen 程序启动画面设置
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap(":/images/yafeilinux.gif");
    QSplashScreen splash(pixmap);//程序启动画面
    for(qint64 i=5555555*6;i>0;i--)
        splash.show();  //简单延长启动时间
	TextEdit w;
    w.show();
    splash.finish(&w);
    return a.exec();
}

//QPixmap里存放的图片要加进到资源文件(.qrc文件)中