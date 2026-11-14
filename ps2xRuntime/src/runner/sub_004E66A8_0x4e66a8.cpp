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

// Function: sub_004E66A8
// Address: 0x4e66a8 - 0x4e66b8
void sub_004E66A8_0x4e66a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E66A8_0x4e66a8");
#endif

    ctx->pc = 0x4e66a8u;

    // 0x4e66a8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E66A8u;
    {
        const bool branch_taken_0x4e66a8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e66a8) {
            ctx->pc = 0x4E66ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E66A8u;
            // 0x4e66ac: 0x41545441  .word       0x41545441                   # INVALID     $t2, $s4, 0x5441 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E66AC raw=0x41545441");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501C50u;
            return;
        }
    }
    ctx->pc = 0x4E66B0u;
    // 0x4e66b0: 0x4843  sra         $t1, $zero, 1
    ctx->pc = 0x4e66b0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), 1));
    // 0x4e66b4: 0x0  nop
    ctx->pc = 0x4e66b4u;
    // NOP
    ctx->pc = 0x4e66b8u;
}
