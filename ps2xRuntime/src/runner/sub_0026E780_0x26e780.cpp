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

// Function: sub_0026E780
// Address: 0x26e780 - 0x26e860
void sub_0026E780_0x26e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E780_0x26e780");
#endif

    switch (ctx->pc) {
        case 0x26e7a0u: goto label_26e7a0;
        case 0x26e7ecu: goto label_26e7ec;
        case 0x26e834u: goto label_26e834;
        default: break;
    }

    ctx->pc = 0x26e780u;

    // 0x26e780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26e788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26e78c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26e790: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26e790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e794: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26e794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e798: 0xc09bdd4  jal         func_26F750
    ctx->pc = 0x26E798u;
    SET_GPR_U32(ctx, 31, 0x26E7A0u);
    ctx->pc = 0x26F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F750u, 0x26E798u, 0x26E7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7A0u;
label_26e7a0:
    // 0x26e7a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e7a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26e7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x26E7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E7B4u;
    // 0x26e7b4: 0x0  nop
    ctx->pc = 0x26e7b4u;
    // NOP
    // 0x26e7b8: 0x0  nop
    ctx->pc = 0x26e7b8u;
    // NOP
    // 0x26e7bc: 0x0  nop
    ctx->pc = 0x26e7bcu;
    // NOP
    // 0x26e7c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26e7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26e7c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26e7c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26e7cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e7d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e7d4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x26e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x26e7d8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x26e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x26e7dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e7e0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x26e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e7e4: 0xc0911dc  jal         func_244770
    ctx->pc = 0x26E7E4u;
    SET_GPR_U32(ctx, 31, 0x26E7ECu);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x26E7E4u, 0x26E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7ECu;
label_26e7ec:
    // 0x26e7ec: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x26e7ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26e7f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e7f4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26e7f8: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E7F8u;
    {
        const bool branch_taken_0x26e7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e7f8) {
            ctx->pc = 0x26E810u;
            goto label_26e810;
        }
    }
    ctx->pc = 0x26E800u;
    // 0x26e800: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e804: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x26e804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26e808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E808u;
    {
        const bool branch_taken_0x26e808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e808) {
            ctx->pc = 0x26E818u;
            goto label_26e818;
        }
    }
    ctx->pc = 0x26E810u;
label_26e810:
    // 0x26e810: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e814: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26e814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e818:
    // 0x26e818: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x26e818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e81c: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E81Cu;
    {
        const bool branch_taken_0x26e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x26e81c) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E824u;
    // 0x26e824: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26e824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26e828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e82c: 0xc09b6bc  jal         func_26DAF0
    ctx->pc = 0x26E82Cu;
    SET_GPR_U32(ctx, 31, 0x26E834u);
    ctx->pc = 0x26DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DAF0u, 0x26E82Cu, 0x26E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E834u;
label_26e834:
    // 0x26e834: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26e834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e838: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26e838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e83c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26e83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e848: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26e848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e84c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E854u;
    // 0x26e854: 0x0  nop
    ctx->pc = 0x26e854u;
    // NOP
    // 0x26e858: 0x0  nop
    ctx->pc = 0x26e858u;
    // NOP
    // 0x26e85c: 0x0  nop
    ctx->pc = 0x26e85cu;
    // NOP
    ctx->pc = 0x26e860u;
}
