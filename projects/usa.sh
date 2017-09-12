#!/usr/env/bin bash

function loop {
    if [[ $# -eq 0 ]]; then
            printf '%s %s\n        %s\n' "Usage: ${FUNCNAME[0]}" '[-e] times command1 command2 ...commandN' '-e | --endless: loop indefinitely, disregards the times argument'

    elif [[ ${1} -ge 0 ]]; then
        declare -i times
        times=$1
        shift
        for ((i=0; i<$times; ++i)); do
            for arg in "${@}"; do
                eval ${arg}
            done
        done
    elif [[ ${1} == '-e' || ${1} == '--endless' ]]; then
        [[ ${1} -ge 0 ]] && shift
        for arg in "${@}"; do
            eval ${arg}
        done
    else 
        printf 'Something umexpected happened, quitting.\n' && return 1
    fi
}
function usa {
echo "What's the password?" && [[ $(~/read2) != "drumpf" ]] && loop 3 'toilet --gay homo -f mono9' 'toilet --metal -f mono9 alert' || loop 3 'toilet -f mono9 america' 'toilet -f mono9 rules'
}

usa
