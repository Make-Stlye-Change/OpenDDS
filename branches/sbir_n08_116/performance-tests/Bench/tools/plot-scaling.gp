
set loadpath "`echo $DDS_ROOT/performance-tests/Bench/bin`"
show loadpath

print 'Plotting scaling charts'
call 'plot-transports-scaling.gp' 'data/latency.csv'  'images/scaling-latency'

