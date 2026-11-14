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

// Function: sub_004E4700
// Address: 0x4e4700 - 0x4e4710
void sub_004E4700_0x4e4700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4700_0x4e4700");
#endif

    ctx->pc = 0x4e4700u;

    // 0x4e4700: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4700u;
    {
        const bool branch_taken_0x4e4700 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4700) {
            ctx->pc = 0x4E4704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4700u;
            // 0x4e4704: 0x72637364  .word       0x72637364                   # INVALID     $s3, $v1, 0x7364 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4E4704 raw=0x72637364");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5028D4u;
            return;
        }
    }
    ctx->pc = 0x4E4708u;
    // 0x4e4708: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x4e4708u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
    // 0x4e470c: 0x0  nop
    ctx->pc = 0x4e470cu;
    // NOP
    ctx->pc = 0x4e4710u;
}
