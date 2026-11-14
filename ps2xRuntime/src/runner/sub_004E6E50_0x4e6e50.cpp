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

// Function: sub_004E6E50
// Address: 0x4e6e50 - 0x4e6e60
void sub_004E6E50_0x4e6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6E50_0x4e6e50");
#endif

    switch (ctx->pc) {
        case 0x4e6e5cu: goto label_4e6e5c;
        default: break;
    }

    ctx->pc = 0x4e6e50u;

    // 0x4e6e50: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6E50u;
    {
        const bool branch_taken_0x4e6e50 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6e50) {
            ctx->pc = 0x4E6E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E50u;
            // 0x4e6e54: 0x465f454c  .word       0x465F454C                   # INVALID     $s2, $ra, 0x454C # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xC at 0x4E6E54 raw=0x465F454C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5023F8u;
            return;
        }
    }
    ctx->pc = 0x4E6E58u;
    // 0x4e6e58: 0x424d414c  .word       0x424D414C                   # INVALID     $s2, $t5, 0x414C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6e58u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E6E58 raw=0x424D414C");
label_4e6e5c:
    // 0x4e6e5c: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6e5cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    ctx->pc = 0x4e6e60u;
}
