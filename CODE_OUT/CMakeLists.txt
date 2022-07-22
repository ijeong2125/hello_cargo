CMAKE_MINIMUM_REQUIRED( VERSION 2.9 )
PROJECT("CDCU_Transceiver")
SET ( PROJECT_VERSION_MAJOR 0 )
SET ( PROJECT_VERSION_MINOR 1 )
SET ( CMAKE_BUILD_TYPE Debug )
SET ( CMAKE_VERBOSE_MAKEFILE true )
# 빌드 대상 바이너리 파일명 및 소스 파일 목록
SET ( OUTPUT_ELF
        "${CMAKE_PROJECT_NAME}-${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.out"
        )
SET ( SRC_FILES
	main_CAN_Transceiver.c
        Transceiver_func_Test.c
	CAN_Transceiver_func.c
        )
 
# 공통 컴파일러
SET ( CMAKE_C_COMPILER gcc )
 
# 공통 헤더 파일 Include 디렉토리 (-I)
SET ( include header/include )
INCLUDE_DIRECTORIES ( ${include} )

# 빌드 대상 바이너리 추가
ADD_EXECUTABLE( ${OUTPUT_ELF} ${SRC_FILES} )