project(
    'illusion',
    'cpp',
    version:'0.0.0',
    license: 'MIT',
    meson_version: '>=1.3.0',
    default_options: ['cpp_std=c++23']
)

illusion_include = [
    'illusion/main.hpp'
]

illusion_src = [
    'illusion/main.cpp'
]

cxx = meson.get_compiler('cpp')

add_project_arguments(
    '-Winvalid-pch',
    cxx.get_supported_arguments(
      '-fno-elide-constructors', '-fvisibility-inlines-hidden',
      '-Wzero-as-null-pointer-constant', '-fstrict-aliasing',
      '-fno-stack-protector', '-fstrict-overflow', '-fmerge-all-constants',
      '-frounding-math', '-fno-math-errno', '-fno-ident', '-fno-trapping-math',
      '-fno-devirtualize-speculatively', '-fno-semantic-interposition',
      '-Werror=conversion', '-Werror=sign-compare', '-Werror=sign-conversion',
      '-Werror=write-strings', '-Werror=return-type', '-Werror=double-promotion',
      '-Werror=non-virtual-dtor',
      '-Wmissing-declarations', '-Wmissing-field-initializers', '-Wshadow',
      '-Wsuggest-attribute=noreturn', '-Wswitch-enum', '-Wunused-function',
      '-Wunused-label', '-Wunused-local-typedefs', '-Wunused-but-set-variable',
      '-Wunused-but-set-parameter', '-Wno-array-bounds', '-Wno-stringop-overflow',
      '-Wno-redundant-move', '-Wno-unqualified-std-cast-call', '-Wno-string-plus-int',
      '-Wno-bitwise-instead-of-logical', '-Wno-missing-braces'),
    language: 'cpp')


ver = configuration_data()
ver.set('abi_major', meson.project_version().split('.')[0])
ver.set('abi_minor', meson.project_version().split('.')[1])


install_headers(illusion_include, preserve_path: true)

lib_illusion = executable('illusion',
      cpp_pch: 'illusion/xprecompiled.hpp',
      sources: [ illusion_src ],
      dependencies: [],
      install: true)

# if get_option('enable-repl')
#   executable('illusion',
#       cpp_pch: 'illusion/xprecompiled.hpp',
#       sources: [ repl_src ],
#       dependencies: [ dep_editline ],
#       link_with: lib_illusion,
#       install: true)
# endif

