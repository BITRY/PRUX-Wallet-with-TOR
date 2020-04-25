<<<<<<< HEAD
/* Copyright (c) 2014, bitcoinplus Developers */
=======
/* Copyright (c) 2014, BritCoin Developers */
>>>>>>> 495d5abab018098c4ff0e0be9794856e0dcb1c19
/* See LICENSE for licensing information */

/**
 * \file anonymize.h
 * \brief Headers for anonymize.cpp
 **/

#ifndef TOR_ANONYMIZE_H
#define TOR_ANONYMIZE_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* anonymize_tor_data_directory(
    );

    char const* anonymize_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

