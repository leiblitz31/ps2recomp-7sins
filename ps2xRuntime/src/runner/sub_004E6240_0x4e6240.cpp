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

// Function: sub_004E6240
// Address: 0x4e6240 - 0x4e6250
void sub_004E6240_0x4e6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6240_0x4e6240");
#endif

    ctx->pc = 0x4e6240u;

    // 0x4e6240: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6240u;
    {
        const bool branch_taken_0x4e6240 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6240) {
            ctx->pc = 0x4E6244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6240u;
            // 0x4e6244: 0x4e495244  .word       0x4E495244                   # INVALID     $s2, $t1, 0x5244 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6244 raw=0x4E495244");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5017E8u;
            return;
        }
    }
    ctx->pc = 0x4E6248u;
    // 0x4e6248: 0x41425f4b  .word       0x41425F4B                   # INVALID     $t2, $v0, 0x5F4B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6248u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E6248 raw=0x41425F4B");
    // 0x4e624c: 0x455547  .word       0x00455547                   # srav        $t2, $a1, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e624cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    ctx->pc = 0x4e6250u;
}
