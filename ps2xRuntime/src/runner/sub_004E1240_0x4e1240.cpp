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

// Function: sub_004E1240
// Address: 0x4e1240 - 0x4e1250
void sub_004E1240_0x4e1240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1240_0x4e1240");
#endif

    ctx->pc = 0x4e1240u;

    // 0x4e1240: 0x52554c42  beql        $s2, $s5, . + 4 + (0x4C42 << 2)
    ctx->pc = 0x4E1240u;
    {
        const bool branch_taken_0x4e1240 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        if (branch_taken_0x4e1240) {
            ctx->pc = 0x4E1244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1240u;
            // 0x4e1244: 0x20202020  addi        $zero, $at, 0x2020 (Delay Slot)
            // NOP (addi to $zero)
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F434Cu;
            return;
        }
    }
    ctx->pc = 0x4E1248u;
    // 0x4e1248: 0x4f202020  .word       0x4F202020                   # INVALID     $t9, $zero, 0x2020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1248u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E1248 raw=0x4F202020");
    // 0x4e124c: 0xa4e  .word       0x00000A4E                   # INVALID     $zero, $zero, 0xA4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e124cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E124C raw=0x00000A4E");
    ctx->pc = 0x4e1250u;
}
