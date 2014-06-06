
/**
 * \file SWViewerInterface.h
 * \brief Defines SWViewerInterface
 * \author Florian Lance
 * \date 02/06/14
 */

#ifndef _SWVIEWERINTERFACE_
#define _SWVIEWERINTERFACE_

#include <QMainWindow>
#include <QThread>

//#include "SWViewerWorker.h"

#include "SWUI_Viewer.h"

#include "interface/QtWidgets/SWGLMultiObjectWidget.h"



namespace Ui {
    class SWUI_Viewer;
}

/**
 * \class SWViewerInterface
 * \brief ...
 * \author Florian Lance
 * \date 02/06/14
 */
class SWViewerInterface : public QMainWindow
{
    Q_OBJECT

    public :


        // ############################################# CONSTRUCTORS / DESTRUCTORS

        /**
         * \brief Constructor of SWViewerInterface
         */
        SWViewerInterface();

        /**
         * \brief Destructor of SWViewerInterface
         */
        ~SWViewerInterface();


        // ############################################# METHODS

    public slots:

        void loadCloud();

        void loadMesh();

        void deleteCloud();

        void deleteMesh();

        void updateParameters();

        void updateCloudInterfaceParameters(QListWidgetItem *);

        void updateMeshInterfaceParameters(QListWidgetItem *);

        void updateInterfaceParameters();


        /**
         * \brief Timer event
         * \param [in] e : qt timer event
         */
//        virtual void timerEvent(QTimerEvent *e);

    signals:


    private :


        bool m_bIsCloudLastSelection;


        // widgets & ui
        Ui::SWUI_Viewer* m_uiViewer;   /**< qt main window */

        SWGLMultiObjectWidget *m_pGLMultiObject; /**< ... */

        // threads & workers
//        SWViewerWorker  *m_pWViewer;    /**< viewer worker */
        QThread            m_TViwer;    /**< viwer thread */



};


#endif // SWVIEWERINTERFACE_H