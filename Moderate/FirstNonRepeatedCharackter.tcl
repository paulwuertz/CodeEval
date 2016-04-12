set file [open [lindex $argv 0] r]
set input [read $file]
set lines [split $input "\n"]
foreach line $lines {
    set bo "1"
    for {set i 0} {$i < [string length $line]} {incr i} {
        set bo "1"
        for {set j 0} {$j < [string length $line]} {incr j} {
            if {$i!=$j} {
                if {[string index $line $i]==[string index $line $j]} {    
                    set bo "0"
                    break
                }
            }  
        }
        if {$bo=="1"} {
                puts [string index $line $i]
                break
        }
    }
}
close $file