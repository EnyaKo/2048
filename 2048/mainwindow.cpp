#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    ui->title->setPixmap(QPixmap(":/pic/title.png"));
    ui->background->setPixmap(QPixmap(":/pic/background.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start()
{
    initialize();
    setRandom();
    setRandom();
}

void MainWindow::initialize()
{
    for(int i = 1; i < 17; i++){
        b[i].num = 0;
        b[i].position = i;
        setMap(b[i]);
    }// end for
    initialize_A();
    initialize_M();
    trigger = true;
    score_int = 0;
    ui->gameover->setPixmap(QPixmap(""));
    setScore();
}

void MainWindow::initialize_A()
{
    for(int i = 1; i < 17; i++){
        b[i].isAdded = false;
    }// end for
}

void MainWindow::initialize_M()
{
    for(int i = 1; i < 17; i++){
        b[i].isMoved = false;
    }// end for
}

void MainWindow::setMap(blank &b)
{
    switch(b.position){
    case 1:
        switch(b.num){
        case 0:
            ui->B1->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B1->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B1->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B1->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B1->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B1->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B1->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B1->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B1->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B1->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B1->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B1->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 2:
        switch(b.num){
        case 0:
            ui->B2->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B2->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B2->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B2->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B2->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B2->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B2->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B2->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B2->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B2->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B2->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B2->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 3:
        switch(b.num){
        case 0:
            ui->B3->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B3->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B3->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B3->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B3->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B3->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B3->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B3->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B3->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B3->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B3->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B3->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 4:
        switch(b.num){
        case 0:
            ui->B4->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B4->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B4->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B4->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B4->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B4->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B4->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B4->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B4->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B4->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B4->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B4->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 5:
        switch(b.num){
        case 0:
            ui->B5->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B5->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B5->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B5->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B5->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B5->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B5->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B5->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B5->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B5->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B5->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B5->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 6:
        switch(b.num){
        case 0:
            ui->B6->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B6->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B6->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B6->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B6->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B6->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B6->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B6->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B6->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B6->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B6->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B6->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 7:
        switch(b.num){
        case 0:
            ui->B7->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B7->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B7->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B7->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B7->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B7->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B7->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B7->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B7->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B7->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B7->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B7->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 8:
        switch(b.num){
        case 0:
            ui->B8->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B8->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B8->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B8->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B8->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B8->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B8->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B8->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B8->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B8->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B8->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B8->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 9:
        switch(b.num){
        case 0:
            ui->B9->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B9->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B9->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B9->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B9->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B9->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B9->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B9->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B9->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B9->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B9->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B9->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 10:
        switch(b.num){
        case 0:
            ui->B10->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B10->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B10->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B10->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B10->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B10->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B10->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B10->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B10->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B10->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B10->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B10->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 11:
        switch(b.num){
        case 0:
            ui->B11->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B11->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B11->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B11->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B11->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B11->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B11->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B11->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B11->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B11->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B11->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B11->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 12:
        switch(b.num){
        case 0:
            ui->B12->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B12->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B12->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B12->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B12->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B12->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B12->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B12->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B12->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B12->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B12->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B12->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 13:
        switch(b.num){
        case 0:
            ui->B13->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B13->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B13->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B13->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B13->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B13->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B13->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B13->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B13->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B13->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B13->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B13->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 14:
        switch(b.num){
        case 0:
            ui->B14->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B14->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B14->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B14->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B14->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B14->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B14->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B14->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B14->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B14->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B14->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B14->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 15:
        switch(b.num){
        case 0:
            ui->B15->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B15->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B15->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B15->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B15->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B15->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B15->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B15->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B15->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B15->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B15->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B15->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    case 16:
        switch(b.num){
        case 0:
            ui->B16->setPixmap(QPixmap(":/pic/0.png"));
            break;
        case 2:
            ui->B16->setPixmap(QPixmap(":/pic/2.png"));
            break;
        case 4:
            ui->B16->setPixmap(QPixmap(":/pic/4.png"));
            break;
        case 8:
            ui->B16->setPixmap(QPixmap(":/pic/8.png"));
            break;
        case 16:
            ui->B16->setPixmap(QPixmap(":/pic/16.png"));
            break;
        case 32:
            ui->B16->setPixmap(QPixmap(":/pic/32.png"));
            break;
        case 64:
            ui->B16->setPixmap(QPixmap(":/pic/64.png"));
            break;
        case 128:
            ui->B16->setPixmap(QPixmap(":/pic/128.png"));
            break;
        case 256:
            ui->B16->setPixmap(QPixmap(":/pic/256.png"));
            break;
        case 512:
            ui->B16->setPixmap(QPixmap(":/pic/512.png"));
            break;
        case 1024:
            ui->B16->setPixmap(QPixmap(":/pic/1024.png"));
            break;
        case 2048:
            ui->B16->setPixmap(QPixmap(":/pic/2048.png"));
            break;
        }// end inner case
        break;
    }// end outer case

}

void MainWindow::setRandom()
{
    while(1){
        int index = rand()%16+1;
        if(b[index].num == 0){
            b[index].num = 2;
            setMap(b[index]);
            //qDebug() << "rand";
            return;
        }// end if
    }// end while
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(trigger){
    if(event->key() == Qt::Key_Left){
        // row
        for(int i = 0; i < 4; i++){
            // column
            for(int j = 2+i*4; j <= 4+i*4; j++){
                for(int n = j; n > 1+i*4; n--){
                    if(b[n].num != 0 && b[n-1].num == 0){
                        b[n-1].num = b[n].num;
                        b[n].num = 0;
                        b[n-1].isMoved = true;
                        b[n].isMoved = false;
                        setMap(b[n-1]);
                        setMap(b[n]);
                    }else if(b[n].num != 0 && b[n-1].num == b[n].num && b[n-1].isAdded == false && b[n].isAdded == false){
                        b[n-1].num *= 2;
                        score_int += b[n-1].num;
                        setScore();
                        b[n].num = 0;
                        b[n-1].isAdded = true;
                        b[n].isAdded = false;
                        b[n-1].isMoved = true;
                        b[n].isMoved = false;
                        setMap(b[n]);
                        setMap(b[n-1]);
                    }
                }// end for(n)
            }// end for(j)
         }// end for(i)
    }// end key_left
    else if(event->key() == Qt::Key_Right){
        for(int i = 0; i < 4; i++){
            for(int j = 3+i*4; j >= 1+i*4; j--){
                for(int n = j ; n < 4+i*4; n++){
                    if(b[n].num != 0 && b[n+1].num == 0){
                        b[n+1].num = b[n].num;
                        b[n].num = 0;
                        b[n+1].isMoved = true;
                        b[n].isMoved = false;
                        setMap(b[n+1]);
                        setMap(b[n]);
                    }else if(b[n].num != 0 && b[n+1].num == b[n].num && b[n+1].isAdded == false && b[n].isAdded == false){
                        b[n+1].num *= 2;
                        score_int += b[n-1].num;
                        setScore();
                        b[n].num = 0;
                        b[n+1].isAdded = true;
                        b[n].isAdded = false;
                        b[n+1].isMoved = true;
                        b[n].isMoved = false;
                        setMap(b[n]);
                        setMap(b[n+1]);
                    }
                }// end for(n)
            }// end for(j)
        }// end for(i)
    }// end key_right
    else if(event->key() == Qt::Key_Up){
        for(int i = 0; i < 4; i++){
            for(int j = 5+i; j <= 13+i; j+=4){
                for(int n = j; n > 1+i; n-=4){
                    if(b[n].num != 0 && b[n-4].num == 0){
                        b[n-4].num = b[n].num;
                        b[n].num = 0;
                        b[n-4].isMoved = true;
                        b[n].isMoved = false;
                        setMap(b[n-4]);
                        setMap(b[n]);
                    }else if(b[n].num != 0 && b[n-4].num == b[n].num && b[n-4].isAdded == false && b[n].isAdded == false){
                        b[n-4].num *= 2;
                        score_int += b[n-1].num;
                        setScore();
                        b[n].num = 0;
                        b[n-4].isAdded = true;
                        b[n].isAdded = false;
                        b[n-4].isMoved = true;
                        b[n].isMoved = false;
                        setMap(b[n]);
                        setMap(b[n-4]);
                    }
                }// end for(n)
            }// end for(j)
        }// end for(i)
    }// end key_up
    else if(event->key() == Qt::Key_Down){
        for(int i = 0; i < 4; i++){
            for(int j = 9+i; j >= 1+i; j-=4){
                for(int n = j; n < 13+i; n+=4){
                    if(b[n].num != 0 && b[n+4].num == 0){
                        b[n+4].num = b[n].num;
                        b[n].num = 0;
                        b[n+4].isMoved = true;
                        b[n].isMoved = false;
                        setMap(b[n+4]);
                        setMap(b[n]);
                    }else if(b[n].num != 0 && b[n+4].num == b[n].num && b[n+4].isAdded == false && b[n].isAdded == false){
                        b[n+4].num *= 2;
                        score_int += b[n-1].num;
                        setScore();
                        b[n].num = 0;
                        b[n+4].isAdded = true;
                        b[n].isAdded = false;
                        b[n+4].isMoved = true;
                        b[n].isMoved = false;
                        setMap(b[n]);
                        setMap(b[n+4]);
                    }
                }// end for(n)
            }// end for(j)
        }// end for(i)
    }// end key_down


    if(anyMoved()){
        setRandom();
        initialize_A();
        initialize_M();
        if(isWin()){
            trigger = false;
            ui->gameover->setPixmap(QPixmap(":/pic/win.png"));
        }else if(isLose()){
            trigger = false;
            ui->gameover->setPixmap(QPixmap(":/pic/gameover.png"));
        }
    }// end if

    }// end if_trigger
}

bool MainWindow::anyMoved()
{
    for(int i = 1; i < 17; i++){
        if(b[i].isMoved == true){
            return true;
        }// end if
    }// end for
    return false;
}

bool MainWindow::isWin()
{
    for(int i = 1; i<17; i++){
        if(b[i].num == 2048){
            return true;
        }// end if
    }// end for
    return false;
}

bool MainWindow::isLose()
{
    // any zero
    for(int i = 1; i < 17; i++){
        if(b[i].num == 0){
            return false;
        }// end if
    }// end for

    // any addable
    // left
    for(int i = 0; i < 4; i++){
        for(int j = 2+i*4; j <= 4+i*4; j++){
            if(b[j].num == b[j-1].num){
                return false;
            }// end if
        }// end for(j)
    }// end for(i)
    // up
    for(int i = 0; i < 4; i++){
        for(int j = 5+i; j <= 13+i; j+=4){
            if(b[j].num == b[j-4].num){
                return false;
            }// end if
        }// end for
    }// end for(i)
    return true;
}

void MainWindow::setScore()
{
    score_str = QString::number(score_int,10);
    ui->score->setText(QString(score_str));
}// end func


void MainWindow::on_restart_clicked()
{
    start();
}
