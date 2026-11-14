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

// Function: sub_00182100
// Address: 0x182100 - 0x182190
void sub_00182100_0x182100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182100_0x182100");
#endif

    switch (ctx->pc) {
        case 0x182120u: goto label_182120;
        case 0x182134u: goto label_182134;
        case 0x182148u: goto label_182148;
        case 0x182170u: goto label_182170;
        default: break;
    }

    ctx->pc = 0x182100u;

    // 0x182100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18210c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x182110: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x182110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x182114: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x182114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182118: 0xc060260  jal         func_180980
    ctx->pc = 0x182118u;
    SET_GPR_U32(ctx, 31, 0x182120u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x182118u, 0x182120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182120u;
label_182120:
    // 0x182120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182124: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x182124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x182128: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x182128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18212c: 0xc0608ac  jal         func_1822B0
    ctx->pc = 0x18212Cu;
    SET_GPR_U32(ctx, 31, 0x182134u);
    ctx->pc = 0x1822B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1822B0u, 0x18212Cu, 0x182134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182134u;
label_182134:
    // 0x182134: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x182134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18213c: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x18213cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x182140: 0xc060864  jal         func_182190
    ctx->pc = 0x182140u;
    SET_GPR_U32(ctx, 31, 0x182148u);
    ctx->pc = 0x182190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182190u, 0x182140u, 0x182148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182148u;
label_182148:
    // 0x182148: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x182148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18214c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182150: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x182150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182154: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x182154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x182158: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x182158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18215c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x18215cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x182160: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x182160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182164: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x182164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x182168: 0xc0600fc  jal         func_1803F0
    ctx->pc = 0x182168u;
    SET_GPR_U32(ctx, 31, 0x182170u);
    ctx->pc = 0x1803F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1803F0u, 0x182168u, 0x182170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182170u;
label_182170:
    // 0x182170: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x182170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182174: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x182174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x182178: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x182178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18217c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18217cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182184: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x182184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x182188: 0x3e00008  jr          $ra
    ctx->pc = 0x182188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182190u;
}
