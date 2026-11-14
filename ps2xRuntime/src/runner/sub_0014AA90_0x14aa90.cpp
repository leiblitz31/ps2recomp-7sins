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

// Function: sub_0014AA90
// Address: 0x14aa90 - 0x14ab90
void sub_0014AA90_0x14aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AA90_0x14aa90");
#endif

    switch (ctx->pc) {
        case 0x14aab8u: goto label_14aab8;
        case 0x14aac8u: goto label_14aac8;
        case 0x14aad8u: goto label_14aad8;
        case 0x14aaf0u: goto label_14aaf0;
        case 0x14aafcu: goto label_14aafc;
        case 0x14ab10u: goto label_14ab10;
        case 0x14ab28u: goto label_14ab28;
        case 0x14ab40u: goto label_14ab40;
        case 0x14ab58u: goto label_14ab58;
        case 0x14ab68u: goto label_14ab68;
        case 0x14ab74u: goto label_14ab74;
        default: break;
    }

    ctx->pc = 0x14aa90u;

    // 0x14aa90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14aa94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14aa98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14aa9c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x14aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x14aaa0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x14aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x14aaa4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14aaa8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x14aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14aaac: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x14aaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14aab0: 0xc052b58  jal         func_14AD60
    ctx->pc = 0x14AAB0u;
    SET_GPR_U32(ctx, 31, 0x14AAB8u);
    ctx->pc = 0x14AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AD60u, 0x14AAB0u, 0x14AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAB8u;
label_14aab8:
    // 0x14aab8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x14aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14aabc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x14aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14aac0: 0xc046fcc  jal         func_11BF30
    ctx->pc = 0x14AAC0u;
    SET_GPR_U32(ctx, 31, 0x14AAC8u);
    ctx->pc = 0x11BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BF30u, 0x14AAC0u, 0x14AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAC8u;
label_14aac8:
    // 0x14aac8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14aacc: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x14aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14aad0: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x14AAD0u;
    SET_GPR_U32(ctx, 31, 0x14AAD8u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x14AAD0u, 0x14AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAD8u;
label_14aad8:
    // 0x14aad8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14AAD8u;
    {
        const bool branch_taken_0x14aad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aad8) {
            ctx->pc = 0x14AB18u;
            goto label_14ab18;
        }
    }
    ctx->pc = 0x14AAE0u;
    // 0x14aae0: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x14aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x14aae4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x14aae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14aae8: 0xc052b3c  jal         func_14ACF0
    ctx->pc = 0x14AAE8u;
    SET_GPR_U32(ctx, 31, 0x14AAF0u);
    ctx->pc = 0x14ACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACF0u, 0x14AAE8u, 0x14AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAF0u;
label_14aaf0:
    // 0x14aaf0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14aaf4: 0xc052b34  jal         func_14ACD0
    ctx->pc = 0x14AAF4u;
    SET_GPR_U32(ctx, 31, 0x14AAFCu);
    ctx->pc = 0x14ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACD0u, 0x14AAF4u, 0x14AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAFCu;
label_14aafc:
    // 0x14aafc: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x14aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x14ab00: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x14ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ab04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ab04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab08: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x14AB08u;
    SET_GPR_U32(ctx, 31, 0x14AB10u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x14AB08u, 0x14AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB10u;
label_14ab10:
    // 0x14ab10: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14AB10u;
    {
        const bool branch_taken_0x14ab10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab10) {
            ctx->pc = 0x14AB68u;
            goto label_14ab68;
        }
    }
    ctx->pc = 0x14AB18u;
label_14ab18:
    // 0x14ab18: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x14ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x14ab1c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x14ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14ab20: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x14AB20u;
    SET_GPR_U32(ctx, 31, 0x14AB28u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x14AB20u, 0x14AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB28u;
label_14ab28:
    // 0x14ab28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ab28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14ab30: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x14ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ab34: 0x27868cb8  addiu       $a2, $gp, -0x7348
    ctx->pc = 0x14ab34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937784));
    // 0x14ab38: 0xc052b0c  jal         func_14AC30
    ctx->pc = 0x14AB38u;
    SET_GPR_U32(ctx, 31, 0x14AB40u);
    ctx->pc = 0x14AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC30u, 0x14AB38u, 0x14AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB40u;
label_14ab40:
    // 0x14ab40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14ab44: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x14ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ab48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14ab48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14ab4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab50: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x14AB50u;
    SET_GPR_U32(ctx, 31, 0x14AB58u);
    ctx->pc = 0x14ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABD0u, 0x14AB50u, 0x14AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB58u;
label_14ab58:
    // 0x14ab58: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14ab5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x14ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14ab60: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14AB60u;
    SET_GPR_U32(ctx, 31, 0x14AB68u);
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14AB60u, 0x14AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB68u;
label_14ab68:
    // 0x14ab68: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14ab6c: 0xc052b34  jal         func_14ACD0
    ctx->pc = 0x14AB6Cu;
    SET_GPR_U32(ctx, 31, 0x14AB74u);
    ctx->pc = 0x14ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACD0u, 0x14AB6Cu, 0x14AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB74u;
label_14ab74:
    // 0x14ab74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14ab78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ab7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ab7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ab80: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14ab84: 0x3e00008  jr          $ra
    ctx->pc = 0x14AB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AB8Cu;
    // 0x14ab8c: 0x0  nop
    ctx->pc = 0x14ab8cu;
    // NOP
    ctx->pc = 0x14ab90u;
}
