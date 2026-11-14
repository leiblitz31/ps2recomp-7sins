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

// Function: sub_004E6BB0
// Address: 0x4e6bb0 - 0x4e6bd0
void sub_004E6BB0_0x4e6bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6BB0_0x4e6bb0");
#endif

    ctx->pc = 0x4e6bb0u;

    // 0x4e6bb0: 0x52747874  beql        $s3, $s4, . + 4 + (0x7874 << 2)
    ctx->pc = 0x4E6BB0u;
    {
        const bool branch_taken_0x4e6bb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x4e6bb0) {
            ctx->pc = 0x4E6BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6BB0u;
            // 0x4e6bb4: 0x69616d65  ldl         $at, 0x6D65($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x504D84u;
            return;
        }
    }
    ctx->pc = 0x4E6BB8u;
    // 0x4e6bb8: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x4e6bb8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
    // 0x4e6bbc: 0x65697254  daddiu      $t1, $t3, 0x7254
    ctx->pc = 0x4e6bbcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29268);
    // 0x4e6bc0: 0x3173  tltu        $zero, $zero, 197
    ctx->pc = 0x4e6bc0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6bc4: 0x0  nop
    ctx->pc = 0x4e6bc4u;
    // NOP
    // 0x4e6bc8: 0x0  nop
    ctx->pc = 0x4e6bc8u;
    // NOP
    // 0x4e6bcc: 0x0  nop
    ctx->pc = 0x4e6bccu;
    // NOP
    ctx->pc = 0x4e6bd0u;
}
