// +------------------------------------------------------------+
// |                      University Racer                      |
// |         Projekt do PGR a GMU, FIT VUT v Brne, 2011         |
// +------------------------------------------------------------+
// |  Autori:  Tom� Kimer,  xkimer00@stud.fit.vutbr.cz         |
// |           Tom� Sychra, xsychr03@stud.fit.vutbr.cz         |
// |           David �abata, xsabat01@stud.fit.vutbr.cz         |
// +------------------------------------------------------------+

#ifndef DEBUG_H
#define DEBUG_H

// definice pro detekovani leaku

#ifdef _DEBUG
    #define MYDEBUG_NEW   new( _NORMAL_BLOCK, __FILE__, __LINE__)    
#else
    #define MYDEBUG_NEW
#endif // _DEBUG


#endif