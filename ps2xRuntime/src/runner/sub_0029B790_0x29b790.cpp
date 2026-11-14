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

// Function: sub_0029B790
// Address: 0x29b790 - 0x29b830
void sub_0029B790_0x29b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B790_0x29b790");
#endif

    switch (ctx->pc) {
        case 0x29b7b0u: goto label_29b7b0;
        case 0x29b7d4u: goto label_29b7d4;
        case 0x29b7e4u: goto label_29b7e4;
        case 0x29b808u: goto label_29b808;
        default: break;
    }

    ctx->pc = 0x29b790u;

    // 0x29b790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b7a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29b7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29b7a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b7a8: 0xc0e0d30  jal         func_3834C0
    ctx->pc = 0x29B7A8u;
    SET_GPR_U32(ctx, 31, 0x29B7B0u);
    ctx->pc = 0x3834C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3834C0u, 0x29B7A8u, 0x29B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7B0u;
label_29b7b0:
    // 0x29b7b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B7B0u;
    {
        const bool branch_taken_0x29b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b7b0) {
            ctx->pc = 0x29B7D4u;
            goto label_29b7d4;
        }
    }
    ctx->pc = 0x29B7B8u;
    // 0x29b7b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b7bc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29b7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29b7c0: 0x24a5d848  addiu       $a1, $a1, -0x27B8
    ctx->pc = 0x29b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957128));
    // 0x29b7c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29b7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b7c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29b7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b7cc: 0xc0e0d10  jal         func_383440
    ctx->pc = 0x29B7CCu;
    SET_GPR_U32(ctx, 31, 0x29B7D4u);
    ctx->pc = 0x383440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383440u, 0x29B7CCu, 0x29B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7D4u;
label_29b7d4:
    // 0x29b7d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7dc: 0xc0e0d24  jal         func_383490
    ctx->pc = 0x29B7DCu;
    SET_GPR_U32(ctx, 31, 0x29B7E4u);
    ctx->pc = 0x383490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383490u, 0x29B7DCu, 0x29B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7E4u;
label_29b7e4:
    // 0x29b7e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29b7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b7ec: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x29b7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29b7f0: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x29b7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x29b7f4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x29b7f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29b7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b800: 0xc0e0dcc  jal         func_383730
    ctx->pc = 0x29B800u;
    SET_GPR_U32(ctx, 31, 0x29B808u);
    ctx->pc = 0x383730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383730u, 0x29B800u, 0x29B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B808u;
label_29b808:
    // 0x29b808: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b80c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b818: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29b818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b81c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B824u;
    // 0x29b824: 0x0  nop
    ctx->pc = 0x29b824u;
    // NOP
    // 0x29b828: 0x0  nop
    ctx->pc = 0x29b828u;
    // NOP
    // 0x29b82c: 0x0  nop
    ctx->pc = 0x29b82cu;
    // NOP
    ctx->pc = 0x29b830u;
}
