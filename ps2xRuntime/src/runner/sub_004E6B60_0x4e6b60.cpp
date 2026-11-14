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

// Function: sub_004E6B60
// Address: 0x4e6b60 - 0x4e6b80
void sub_004E6B60_0x4e6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B60_0x4e6b60");
#endif

    ctx->pc = 0x4e6b60u;

    // 0x4e6b60: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6B60u;
    {
        const bool branch_taken_0x4e6b60 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6b60) {
            ctx->pc = 0x4E6B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6B60u;
            // 0x4e6b64: 0x53525543  beql        $k0, $s2, . + 4 + (0x5543 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6B64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x502108u;
            return;
        }
    }
    ctx->pc = 0x4E6B68u;
    // 0x4e6b68: 0x475f524f  .word       0x475F524F                   # INVALID     $k0, $ra, 0x524F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6b68u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0xF at 0x4E6B68 raw=0x475F524F");
    // 0x4e6b6c: 0x4e454552  .word       0x4E454552                   # INVALID     $s2, $a1, 0x4552 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6b6cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6B6C raw=0x4E454552");
    // 0x4e6b70: 0x0  nop
    ctx->pc = 0x4e6b70u;
    // NOP
    // 0x4e6b74: 0x0  nop
    ctx->pc = 0x4e6b74u;
    // NOP
    // 0x4e6b78: 0x0  nop
    ctx->pc = 0x4e6b78u;
    // NOP
    // 0x4e6b7c: 0x0  nop
    ctx->pc = 0x4e6b7cu;
    // NOP
    ctx->pc = 0x4e6b80u;
}
