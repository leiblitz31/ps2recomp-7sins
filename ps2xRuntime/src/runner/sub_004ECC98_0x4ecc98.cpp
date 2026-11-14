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

// Function: sub_004ECC98
// Address: 0x4ecc98 - 0x4ecca8
void sub_004ECC98_0x4ecc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC98_0x4ecc98");
#endif

    ctx->pc = 0x4ecc98u;

    // 0x4ecc98: 0x74736f70  .word       0x74736F70                   # INVALID     $v1, $s3, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecc98u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECC98 raw=0x74736F70");
    // 0x4ecc9c: 0x5f657275  .word       0x5F657275                   # bgtzl       $k1, . + 4 + (0x7275 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ECC9Cu;
    {
        const bool branch_taken_0x4ecc9c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ecc9c) {
            ctx->pc = 0x4ECCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECC9Cu;
            // 0x4ecca0: 0x3d747865  .word       0x3D747865                   # lui         $s4, 0x7865 # 01600000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)30821 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509674u;
            return;
        }
    }
    ctx->pc = 0x4ECCA4u;
    // 0x4ecca4: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecca4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4ecca8u;
}
