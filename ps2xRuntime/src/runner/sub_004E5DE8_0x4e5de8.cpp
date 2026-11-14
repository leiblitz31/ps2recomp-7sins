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

// Function: sub_004E5DE8
// Address: 0x4e5de8 - 0x4e5df8
void sub_004E5DE8_0x4e5de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5DE8_0x4e5de8");
#endif

    ctx->pc = 0x4e5de8u;

    // 0x4e5de8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5DE8u;
    {
        const bool branch_taken_0x4e5de8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5de8) {
            ctx->pc = 0x4E5DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5DE8u;
            // 0x4e5dec: 0x756f7267  .word       0x756F7267                   # INVALID     $t3, $t7, 0x7267 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5DEC raw=0x756F7267");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501390u;
            return;
        }
    }
    ctx->pc = 0x4E5DF0u;
    // 0x4e5df0: 0x646e  .word       0x0000646E                   # dsub        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5df0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x4e5df4: 0x0  nop
    ctx->pc = 0x4e5df4u;
    // NOP
    ctx->pc = 0x4e5df8u;
}
