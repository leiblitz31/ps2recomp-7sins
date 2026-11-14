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

// Function: sub_004E6BD0
// Address: 0x4e6bd0 - 0x4e6be8
void sub_004E6BD0_0x4e6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6BD0_0x4e6bd0");
#endif

    ctx->pc = 0x4e6bd0u;

    // 0x4e6bd0: 0x52747874  beql        $s3, $s4, . + 4 + (0x7874 << 2)
    ctx->pc = 0x4E6BD0u;
    {
        const bool branch_taken_0x4e6bd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x4e6bd0) {
            ctx->pc = 0x4E6BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6BD0u;
            // 0x4e6bd4: 0x69616d65  ldl         $at, 0x6D65($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x504DA4u;
            return;
        }
    }
    ctx->pc = 0x4E6BD8u;
    // 0x4e6bd8: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x4e6bd8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
    // 0x4e6bdc: 0x65697254  daddiu      $t1, $t3, 0x7254
    ctx->pc = 0x4e6bdcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29268);
    // 0x4e6be0: 0x3273  tltu        $zero, $zero, 201
    ctx->pc = 0x4e6be0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6be4: 0x0  nop
    ctx->pc = 0x4e6be4u;
    // NOP
    ctx->pc = 0x4e6be8u;
}
