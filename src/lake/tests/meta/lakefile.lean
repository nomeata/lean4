import Lake
open Lake DSL

package test_meta

def test_run_io : Unit :=
  run_io IO.println "impure"

meta if get_config? baz |>.isSome then #print "baz"

meta if get_config? env = some "foo" then do
  #print "foo"
  #print "1"
else meta if get_config? env = some "bar" then do
  #print "bar"
  #print "2"
