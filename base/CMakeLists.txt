#/trunk/base

Find_Package (SDL REQUIRED)

set (
  BASE_LIBRARIES

  ${SDL_LIBRARY}
  ${SDLMAIN_LIBRARY} 
)

set (HEADERS event.h fileparser.h)
set (SOURCES event.cpp fileparser.cpp)

set (TESTS ${SOURCES} test.cpp)

if ( NOT SDL_FOUND )
  message ( FATAL_ERROR "SDL not found!" )
endif ( NOT SDL_FOUND )

link_libraries ( ${BASE_LIBRARIES} )

add_library (base_lib ${HEADERS} ${SOURCES})

add_executable (base_test ${TESTS})

target_link_libraries(base_test base_lib graphics_lib)
