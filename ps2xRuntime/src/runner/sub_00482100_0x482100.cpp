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

// Function: sub_00482100
// Address: 0x482100 - 0x4821a0
void sub_00482100_0x482100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482100_0x482100");
#endif

    switch (ctx->pc) {
        case 0x482128u: goto label_482128;
        case 0x482140u: goto label_482140;
        case 0x482158u: goto label_482158;
        case 0x482174u: goto label_482174;
        default: break;
    }

    ctx->pc = 0x482100u;

    // 0x482100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x482100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x482104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x482104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x482108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48210c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482110: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x482110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x482114: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x482114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x482118: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x482118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48211c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x48211cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482120: 0xc1208fc  jal         func_4823F0
    ctx->pc = 0x482120u;
    SET_GPR_U32(ctx, 31, 0x482128u);
    ctx->pc = 0x4823F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4823F0u, 0x482120u, 0x482128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482128u;
label_482128:
    // 0x482128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x482128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48212c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482130: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x482130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x482134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x482134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482138: 0xc04f260  jal         func_13C980
    ctx->pc = 0x482138u;
    SET_GPR_U32(ctx, 31, 0x482140u);
    ctx->pc = 0x13C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C980u, 0x482138u, 0x482140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482140u;
label_482140:
    // 0x482140: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x482140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x482144: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x482144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x482148: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x482148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48214c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x482150: 0xc04e0d0  jal         func_138340
    ctx->pc = 0x482150u;
    SET_GPR_U32(ctx, 31, 0x482158u);
    ctx->pc = 0x138340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138340u, 0x482150u, 0x482158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482158u;
label_482158:
    // 0x482158: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x482158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48215c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x48215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x482160: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x482160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x482164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482168: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x482168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48216c: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x48216Cu;
    SET_GPR_U32(ctx, 31, 0x482174u);
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x48216Cu, 0x482174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482174u;
label_482174:
    // 0x482174: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x482174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482178: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x482178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x48217c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48217cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482188: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x482188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48218c: 0x3e00008  jr          $ra
    ctx->pc = 0x48218Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48218Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482194u;
    // 0x482194: 0x0  nop
    ctx->pc = 0x482194u;
    // NOP
    // 0x482198: 0x0  nop
    ctx->pc = 0x482198u;
    // NOP
    // 0x48219c: 0x0  nop
    ctx->pc = 0x48219cu;
    // NOP
    ctx->pc = 0x4821a0u;
}
