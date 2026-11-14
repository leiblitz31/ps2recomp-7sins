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

// Function: sub_004E12C0
// Address: 0x4e12c0 - 0x4e12d8
void sub_004E12C0_0x4e12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E12C0_0x4e12c0");
#endif

    switch (ctx->pc) {
        case 0x4e12d4u: goto label_4e12d4;
        default: break;
    }

    ctx->pc = 0x4e12c0u;

    // 0x4e12c0: 0x756d6953  .word       0x756D6953                   # INVALID     $t3, $t5, 0x6953 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e12c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E12C0 raw=0x756D6953");
    // 0x4e12c4: 0x6974616c  ldl         $s4, 0x616C($t3)
    ctx->pc = 0x4e12c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4e12c8: 0x55206e6f  bnel        $t1, $zero, . + 4 + (0x6E6F << 2)
    ctx->pc = 0x4E12C8u;
    {
        const bool branch_taken_0x4e12c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e12c8) {
            ctx->pc = 0x4E12CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E12C8u;
            // 0x4e12cc: 0x74616470  .word       0x74616470                   # INVALID     $v1, $at, 0x6470 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E12CC raw=0x74616470");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCC88u;
            return;
        }
    }
    ctx->pc = 0x4E12D0u;
    // 0x4e12d0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e12d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e12d4:
    // 0x4e12d4: 0x0  nop
    ctx->pc = 0x4e12d4u;
    // NOP
    ctx->pc = 0x4e12d8u;
}
