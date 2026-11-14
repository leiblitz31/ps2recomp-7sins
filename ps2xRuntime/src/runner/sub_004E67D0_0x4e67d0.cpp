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

// Function: sub_004E67D0
// Address: 0x4e67d0 - 0x4e67f0
void sub_004E67D0_0x4e67d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E67D0_0x4e67d0");
#endif

    ctx->pc = 0x4e67d0u;

    // 0x4e67d0: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E67D0u;
    {
        const bool branch_taken_0x4e67d0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e67d0) {
            ctx->pc = 0x4E67D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E67D0u;
            // 0x4e67d4: 0x6c616863  ldr         $at, 0x6863($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9C6Cu;
            return;
        }
    }
    ctx->pc = 0x4E67D8u;
    // 0x4e67d8: 0x676e656c  daddiu      $t6, $k1, 0x656C
    ctx->pc = 0x4e67d8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25964);
    // 0x4e67dc: 0x25313065  addiu       $s1, $t1, 0x3065
    ctx->pc = 0x4e67dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 12389));
    // 0x4e67e0: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e67e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x4e67e4: 0x0  nop
    ctx->pc = 0x4e67e4u;
    // NOP
    // 0x4e67e8: 0x0  nop
    ctx->pc = 0x4e67e8u;
    // NOP
    // 0x4e67ec: 0x0  nop
    ctx->pc = 0x4e67ecu;
    // NOP
    ctx->pc = 0x4e67f0u;
}
