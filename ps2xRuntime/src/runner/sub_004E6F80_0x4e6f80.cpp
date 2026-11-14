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

// Function: sub_004E6F80
// Address: 0x4e6f80 - 0x4e6fa0
void sub_004E6F80_0x4e6f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6F80_0x4e6f80");
#endif

    ctx->pc = 0x4e6f80u;

    // 0x4e6f80: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6F80u;
    {
        const bool branch_taken_0x4e6f80 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6f80) {
            ctx->pc = 0x4E6F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F80u;
            // 0x4e6f84: 0x54524150  bnel        $v0, $s2, . + 4 + (0x4150 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6F84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x502528u;
            return;
        }
    }
    ctx->pc = 0x4E6F88u;
    // 0x4e6f88: 0x454c4349  .word       0x454C4349                   # INVALID     $t2, $t4, 0x4349 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6f88u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x4E6F88 raw=0x454C4349");
    // 0x4e6f8c: 0x4154535f  .word       0x4154535F                   # INVALID     $t2, $s4, 0x535F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6f8cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E6F8C raw=0x4154535F");
    // 0x4e6f90: 0x55595f52  bnel        $t2, $t9, . + 4 + (0x5F52 << 2)
    ctx->pc = 0x4E6F90u;
    {
        const bool branch_taken_0x4e6f90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 25));
        if (branch_taken_0x4e6f90) {
            ctx->pc = 0x4E6F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F90u;
            // 0x4e6f94: 0x314d  break       0, 197 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FECDCu;
            return;
        }
    }
    ctx->pc = 0x4E6F98u;
    // 0x4e6f98: 0x0  nop
    ctx->pc = 0x4e6f98u;
    // NOP
    // 0x4e6f9c: 0x0  nop
    ctx->pc = 0x4e6f9cu;
    // NOP
    ctx->pc = 0x4e6fa0u;
}
