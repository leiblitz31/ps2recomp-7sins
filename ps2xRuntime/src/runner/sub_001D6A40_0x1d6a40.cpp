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

// Function: sub_001D6A40
// Address: 0x1d6a40 - 0x1d6ad0
void sub_001D6A40_0x1d6a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6A40_0x1d6a40");
#endif

    switch (ctx->pc) {
        case 0x1d6a70u: goto label_1d6a70;
        case 0x1d6a84u: goto label_1d6a84;
        case 0x1d6a98u: goto label_1d6a98;
        case 0x1d6ab8u: goto label_1d6ab8;
        default: break;
    }

    ctx->pc = 0x1d6a40u;

    // 0x1d6a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d6a4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d6a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d6a50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6a54: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D6A54u;
    {
        const bool branch_taken_0x1d6a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6a54) {
            ctx->pc = 0x1D6AB8u;
            goto label_1d6ab8;
        }
    }
    ctx->pc = 0x1D6A5Cu;
    // 0x1d6a5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6a60: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1d6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1d6a64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6a68: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1D6A68u;
    SET_GPR_U32(ctx, 31, 0x1D6A70u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1D6A68u, 0x1D6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A70u;
label_1d6a70:
    // 0x1d6a70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6a74: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1d6a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1d6a78: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d6a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6a7c: 0xc056094  jal         func_158250
    ctx->pc = 0x1D6A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A84u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1D6A7Cu, 0x1D6A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A84u;
label_1d6a84:
    // 0x1d6a84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6a88: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1d6a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1d6a8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d6a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6a90: 0xc056094  jal         func_158250
    ctx->pc = 0x1D6A90u;
    SET_GPR_U32(ctx, 31, 0x1D6A98u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1D6A90u, 0x1D6A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A98u;
label_1d6a98:
    // 0x1d6a98: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d6a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6a9c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6aa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6aa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6aa4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6AA4u;
    {
        const bool branch_taken_0x1d6aa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6aa4) {
            ctx->pc = 0x1D6AB8u;
            goto label_1d6ab8;
        }
    }
    ctx->pc = 0x1D6AACu;
    // 0x1d6aac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6ab0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D6AB0u;
    SET_GPR_U32(ctx, 31, 0x1D6AB8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D6AB0u, 0x1D6AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AB8u;
label_1d6ab8:
    // 0x1d6ab8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6ac0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d6ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6ACCu;
    // 0x1d6acc: 0x0  nop
    ctx->pc = 0x1d6accu;
    // NOP
    ctx->pc = 0x1d6ad0u;
}
