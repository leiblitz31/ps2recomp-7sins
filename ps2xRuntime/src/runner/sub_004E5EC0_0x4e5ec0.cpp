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

// Function: sub_004E5EC0
// Address: 0x4e5ec0 - 0x4e5ee0
void sub_004E5EC0_0x4e5ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5EC0_0x4e5ec0");
#endif

    switch (ctx->pc) {
        case 0x4e5ec8u: goto label_4e5ec8;
        default: break;
    }

    ctx->pc = 0x4e5ec0u;

    // 0x4e5ec0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5EC0u;
    {
        const bool branch_taken_0x4e5ec0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5ec0) {
            ctx->pc = 0x4E5EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5EC0u;
            // 0x4e5ec4: 0x6d696e61  ldr         $t1, 0x6E61($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501468u;
            return;
        }
    }
    ctx->pc = 0x4E5EC8u;
label_4e5ec8:
    // 0x4e5ec8: 0x68776c61  ldl         $s7, 0x6C61($v1)
    ctx->pc = 0x4e5ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x4e5ecc: 0x656b6361  daddiu      $t3, $t3, 0x6361
    ctx->pc = 0x4e5eccu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25441);
    // 0x4e5ed0: 0x3064  .word       0x00003064                   # and         $a2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e5ed4: 0x0  nop
    ctx->pc = 0x4e5ed4u;
    // NOP
    // 0x4e5ed8: 0x0  nop
    ctx->pc = 0x4e5ed8u;
    // NOP
    // 0x4e5edc: 0x0  nop
    ctx->pc = 0x4e5edcu;
    // NOP
    ctx->pc = 0x4e5ee0u;
}
