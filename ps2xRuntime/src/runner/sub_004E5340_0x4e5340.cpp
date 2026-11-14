#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E5340
// Address: 0x4e5340 - 0x4e5350
void sub_004E5340_0x4e5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5340_0x4e5340");
#endif

    switch (ctx->pc) {
        case 0x4e5348u: goto label_4e5348;
        default: break;
    }

    ctx->pc = 0x4e5340u;

    // 0x4e5340: 0x67756167  daddiu      $s5, $k1, 0x6167
    ctx->pc = 0x4e5340u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
    // 0x4e5344: 0x78665f65  lq          $a2, 0x5F65($v1)
    ctx->pc = 0x4e5344u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 24421)));
label_4e5348:
    // 0x4e5348: 0x6769625f  daddiu      $t1, $k1, 0x625F
    ctx->pc = 0x4e5348u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25183);
    // 0x4e534c: 0x0  nop
    ctx->pc = 0x4e534cu;
    // NOP
    ctx->pc = 0x4e5350u;
}
