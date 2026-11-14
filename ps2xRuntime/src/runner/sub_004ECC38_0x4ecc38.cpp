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

// Function: sub_004ECC38
// Address: 0x4ecc38 - 0x4ecc48
void sub_004ECC38_0x4ecc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC38_0x4ecc38");
#endif

    ctx->pc = 0x4ecc38u;

    // 0x4ecc38: 0x676e6970  daddiu      $t6, $k1, 0x6970
    ctx->pc = 0x4ecc38u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26992);
    // 0x4ecc3c: 0x676e6f70  daddiu      $t6, $k1, 0x6F70
    ctx->pc = 0x4ecc3cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28528);
    // 0x4ecc40: 0x73253d  .word       0x0073253D                   # INVALID     $v1, $s3, 0x253D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecc40u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x4ECC40 raw=0x0073253D");
    // 0x4ecc44: 0x0  nop
    ctx->pc = 0x4ecc44u;
    // NOP
    ctx->pc = 0x4ecc48u;
}
