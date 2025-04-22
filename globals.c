#include <cc.h>
#include <build_info.h>

#pragma RETAIN(BLDR_Version)
#pragma DATA_SECTION(BLDR_Version, ".BLDR_VERSION")
const uint8_t BLDR_Version[] = BUILD_SHORT_TS;

#pragma RETAIN(CRC_App)
#pragma DATA_SECTION(CRC_App, ".CRC_APP")
const uint32_t CRC_App;

uint32_t gCalc_crc;
uint16_t crc_ok;

const uint8_t git_hash[] = GIT_HASH;
const uint8_t git_branch[] = GIT_BRANCH;
const uint8_t git_tag[] = GIT_TAG;
const uint8_t build_ts[] = BUILD_TIMESTAMP;
const uint8_t build_short_ts[] = BUILD_SHORT_TS;

void print_build_info(void) {

	printf("\n");
	printf("Build Timestamp: %s\n", BUILD_TIMESTAMP);
	printf("Build short Timestamp: %s\n", BUILD_SHORT_TS);
	printf("Git Hash: %s\n", GIT_HASH);
    printf("Git Commit Hash: %s\n", GIT_COMMIT_HASH);
    printf("Git Branch: %s\n", GIT_BRANCH);
    printf("Git Tag: %s\n", GIT_TAG);
    printf("Repository Dirty: %d\n", GIT_DIRTY);
    printf("Git Repository URL: %s\n", GIT_REPO_URL);
    printf("Build Host: %s\n", BUILD_HOST);
    printf("Build User: %s\n", BUILD_USER);
    printf("Build OS: %s\n", BUILD_OS);
    printf("\n");

}
