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

// Function: sub_004E4A70
// Address: 0x4e4a70 - 0x4e4a90
void sub_004E4A70_0x4e4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4A70_0x4e4a70");
#endif

    ctx->pc = 0x4e4a70u;

    // 0x4e4a70: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4A70u;
    {
        const bool branch_taken_0x4e4a70 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4a70) {
            ctx->pc = 0x4E4A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4A70u;
            // 0x4e4a74: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500C2Cu;
            return;
        }
    }
    ctx->pc = 0x4E4A78u;
    // 0x4e4a78: 0x69765f65  ldl         $s6, 0x5F65($t3)
    ctx->pc = 0x4e4a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x4e4a7c: 0x6e656c6f  ldr         $a1, 0x6C6F($s3)
    ctx->pc = 0x4e4a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e4a80: 0x626563  .word       0x00626563                   # subu        $t4, $v1, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4a80u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e4a84: 0x0  nop
    ctx->pc = 0x4e4a84u;
    // NOP
    // 0x4e4a88: 0x0  nop
    ctx->pc = 0x4e4a88u;
    // NOP
    // 0x4e4a8c: 0x0  nop
    ctx->pc = 0x4e4a8cu;
    // NOP
    ctx->pc = 0x4e4a90u;
}
