catch2_proj = subproject('catch2')
catch2_dep = catch2_proj.get_variable('catch2_with_main_dep')

test(
  'func_test',
  executable('func_test', 
    'func_test.cpp',
    dependencies: [catch2_dep],
    include_directories: [
      src_inc
    ],
    link_with: exe_lib
  )
)
