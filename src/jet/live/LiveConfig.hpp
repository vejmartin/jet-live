
#pragma once

#include <string>
#include <vector>

namespace jet
{
    /**
     * Configuration parameters.
     */
    struct LiveConfig
    {
        /**
         * The maximum amount of possible worker threads used by the library.
         * Usually all these threads are busy compiling new code.
         */
        size_t workerThreadsCount = 4;

        /**
         * If `true`, also reload code when app receives `SIGUSR1`.
         */
        bool reloadOnSignal = true;

        /**
         * The full path pointing to the `compile_commands.json`
         * that is to be used instead of the default parent directory search
         * behaviour.
         */
         std::string compileCommandsPath;
    };
}
