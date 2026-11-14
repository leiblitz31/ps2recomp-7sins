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

// Function: sub_003FCEC8
// Address: 0x3fcec8 - 0x3fcef8
void sub_003FCEC8_0x3fcec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCEC8_0x3fcec8");
#endif

    ctx->pc = 0x3fcec8u;

    // 0x3fcec8: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3fcec8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3fcecc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3fceccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fced0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fced4: 0xfc820108  sd          $v0, 0x108($a0)
    ctx->pc = 0x3fced4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
    // 0x3fced8: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x3fced8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3fcedc: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x3fcedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3fcee0: 0x80a30004  lb          $v1, 0x4($a1)
    ctx->pc = 0x3fcee0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3fcee4: 0xa8820274  swl         $v0, 0x274($a0)
    ctx->pc = 0x3fcee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 628); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3fcee8: 0xb8820271  swr         $v0, 0x271($a0)
    ctx->pc = 0x3fcee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 625); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3fceec: 0xa0830275  sb          $v1, 0x275($a0)
    ctx->pc = 0x3fceecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 629), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcef0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCEF8u;
}
