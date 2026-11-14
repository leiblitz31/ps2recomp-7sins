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

// Function: sub_005DEE50
// Address: 0x5dee50 - 0x5dee60
void sub_005DEE50_0x5dee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEE50_0x5dee50");
#endif

    ctx->pc = 0x5dee50u;

    // 0x5dee50: 0x72694470  .word       0x72694470                   # INVALID     $s3, $t1, 0x4470 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5dee50u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x11 at 0x5DEE50 raw=0x72694470");
    // 0x5dee54: 0x657a6953  daddiu      $k0, $t3, 0x6953
    ctx->pc = 0x5dee54u;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26963);
    // 0x5dee58: 0x0  nop
    ctx->pc = 0x5dee58u;
    // NOP
    // 0x5dee5c: 0x0  nop
    ctx->pc = 0x5dee5cu;
    // NOP
    ctx->pc = 0x5dee60u;
}
