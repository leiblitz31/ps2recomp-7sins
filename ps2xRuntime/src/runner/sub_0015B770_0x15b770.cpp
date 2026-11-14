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

// Function: sub_0015B770
// Address: 0x15b770 - 0x15b7e0
void sub_0015B770_0x15b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B770_0x15b770");
#endif

    switch (ctx->pc) {
        case 0x15b770u: goto label_15b770;
        case 0x15b774u: goto label_15b774;
        case 0x15b778u: goto label_15b778;
        case 0x15b77cu: goto label_15b77c;
        case 0x15b780u: goto label_15b780;
        case 0x15b784u: goto label_15b784;
        case 0x15b788u: goto label_15b788;
        case 0x15b78cu: goto label_15b78c;
        case 0x15b790u: goto label_15b790;
        case 0x15b794u: goto label_15b794;
        case 0x15b798u: goto label_15b798;
        case 0x15b79cu: goto label_15b79c;
        case 0x15b7a0u: goto label_15b7a0;
        case 0x15b7a4u: goto label_15b7a4;
        case 0x15b7a8u: goto label_15b7a8;
        case 0x15b7acu: goto label_15b7ac;
        case 0x15b7b0u: goto label_15b7b0;
        case 0x15b7b4u: goto label_15b7b4;
        case 0x15b7b8u: goto label_15b7b8;
        case 0x15b7bcu: goto label_15b7bc;
        case 0x15b7c0u: goto label_15b7c0;
        case 0x15b7c4u: goto label_15b7c4;
        case 0x15b7c8u: goto label_15b7c8;
        case 0x15b7ccu: goto label_15b7cc;
        case 0x15b7d0u: goto label_15b7d0;
        case 0x15b7d4u: goto label_15b7d4;
        case 0x15b7d8u: goto label_15b7d8;
        case 0x15b7dcu: goto label_15b7dc;
        default: break;
    }

    ctx->pc = 0x15b770u;

label_15b770:
    // 0x15b770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15b774:
    // 0x15b774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15b778:
    // 0x15b778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15b77c:
    // 0x15b77c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x15b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_15b780:
    // 0x15b780: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x15b780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_15b784:
    // 0x15b784: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x15b784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_15b788:
    // 0x15b788: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x15b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_15b78c:
    // 0x15b78c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b790:
    // 0x15b790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b794:
    // 0x15b794: 0xc056df8  jal         func_15B7E0
label_15b798:
    if (ctx->pc == 0x15B798u) {
        ctx->pc = 0x15B79Cu;
        goto label_15b79c;
    }
    ctx->pc = 0x15B794u;
    SET_GPR_U32(ctx, 31, 0x15B79Cu);
    ctx->pc = 0x15B7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B7E0u, 0x15B794u, 0x15B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B79Cu;
label_15b79c:
    // 0x15b79c: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x15b79cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
label_15b7a0:
    // 0x15b7a0: 0x2610b340  addiu       $s0, $s0, -0x4CC0
    ctx->pc = 0x15b7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947648));
label_15b7a4:
    // 0x15b7a4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x15b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_15b7a8:
    // 0x15b7a8: 0x200f809  jalr        $s0
label_15b7ac:
    if (ctx->pc == 0x15B7ACu) {
        ctx->pc = 0x15B7B0u;
        goto label_15b7b0;
    }
    ctx->pc = 0x15B7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x15B7B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B7A8u, 0x15B7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B7B0u;
label_15b7b0:
    // 0x15b7b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x15b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_15b7b4:
    // 0x15b7b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x15b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15b7b8:
    // 0x15b7b8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x15b7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_15b7bc:
    // 0x15b7bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x15b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_15b7c0:
    // 0x15b7c0: 0xc056774  jal         func_159DD0
label_15b7c4:
    if (ctx->pc == 0x15B7C4u) {
        ctx->pc = 0x15B7C8u;
        goto label_15b7c8;
    }
    ctx->pc = 0x15B7C0u;
    SET_GPR_U32(ctx, 31, 0x15B7C8u);
    ctx->pc = 0x159DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159DD0u, 0x15B7C0u, 0x15B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B7C8u;
label_15b7c8:
    // 0x15b7c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15b7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15b7cc:
    // 0x15b7cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15b7d0:
    // 0x15b7d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x15b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15b7d4:
    // 0x15b7d4: 0x3e00008  jr          $ra
label_15b7d8:
    if (ctx->pc == 0x15B7D8u) {
        ctx->pc = 0x15B7DCu;
        goto label_15b7dc;
    }
    ctx->pc = 0x15B7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B7DCu;
label_15b7dc:
    // 0x15b7dc: 0x0  nop
    ctx->pc = 0x15b7dcu;
    // NOP
    ctx->pc = 0x15b7e0u;
}
