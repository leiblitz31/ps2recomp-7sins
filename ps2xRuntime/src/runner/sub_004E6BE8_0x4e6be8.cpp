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

// Function: sub_004E6BE8
// Address: 0x4e6be8 - 0x4e6c00
void sub_004E6BE8_0x4e6be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6BE8_0x4e6be8");
#endif

    ctx->pc = 0x4e6be8u;

    // 0x4e6be8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6BE8u;
    {
        const bool branch_taken_0x4e6be8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6be8) {
            ctx->pc = 0x4E6BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6BE8u;
            // 0x4e6bec: 0x6c616863  ldr         $at, 0x6863($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x504DBCu;
            return;
        }
    }
    ctx->pc = 0x4E6BF0u;
    // 0x4e6bf0: 0x676e656c  daddiu      $t6, $k1, 0x656C
    ctx->pc = 0x4e6bf0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25964);
    // 0x4e6bf4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6bf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e6bf8: 0x0  nop
    ctx->pc = 0x4e6bf8u;
    // NOP
    // 0x4e6bfc: 0x0  nop
    ctx->pc = 0x4e6bfcu;
    // NOP
    ctx->pc = 0x4e6c00u;
}
