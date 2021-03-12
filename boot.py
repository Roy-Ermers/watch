import micropython
from machine import reset

import drivers.display as display
import settings
from drivers.battery import battery
from drivers.watch import watch

micropython.alloc_emergency_exception_buf(100)
