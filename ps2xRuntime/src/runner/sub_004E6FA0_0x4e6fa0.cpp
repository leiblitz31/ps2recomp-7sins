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

// Function: sub_004E6FA0
// Address: 0x4e6fa0 - 0x4e6fc0
void sub_004E6FA0_0x4e6fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6FA0_0x4e6fa0");
#endif

    ctx->pc = 0x4e6fa0u;

    // 0x4e6fa0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6FA0u;
    {
        const bool branch_taken_0x4e6fa0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6fa0) {
            ctx->pc = 0x4E6FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6FA0u;
            // 0x4e6fa4: 0x54524150  bnel        $v0, $s2, . + 4 + (0x4150 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6FA4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x502548u;
            return;
        }
    }
    ctx->pc = 0x4E6FA8u;
    // 0x4e6fa8: 0x454c4349  .word       0x454C4349                   # INVALID     $t2, $t4, 0x4349 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6fa8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x4E6FA8 raw=0x454C4349");
    // 0x4e6fac: 0x4154535f  .word       0x4154535F                   # INVALID     $t2, $s4, 0x535F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6facu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E6FAC raw=0x4154535F");
    // 0x4e6fb0: 0x55595f52  bnel        $t2, $t9, . + 4 + (0x5F52 << 2)
    ctx->pc = 0x4E6FB0u;
    {
        const bool branch_taken_0x4e6fb0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 25));
        if (branch_taken_0x4e6fb0) {
            ctx->pc = 0x4E6FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6FB0u;
            // 0x4e6fb4: 0x324d  break       0, 201 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FECFCu;
            return;
        }
    }
    ctx->pc = 0x4E6FB8u;
    // 0x4e6fb8: 0x0  nop
    ctx->pc = 0x4e6fb8u;
    // NOP
    // 0x4e6fbc: 0x0  nop
    ctx->pc = 0x4e6fbcu;
    // NOP
    ctx->pc = 0x4e6fc0u;
}
