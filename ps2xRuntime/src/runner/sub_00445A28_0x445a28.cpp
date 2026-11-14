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

// Function: sub_00445A28
// Address: 0x445a28 - 0x445a88
void sub_00445A28_0x445a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445A28_0x445a28");
#endif

    switch (ctx->pc) {
        case 0x445a54u: goto label_445a54;
        case 0x445a68u: goto label_445a68;
        default: break;
    }

    ctx->pc = 0x445a28u;

    // 0x445a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x445a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x445a2c: 0x8f82af1c  lw          $v0, -0x50E4($gp)
    ctx->pc = 0x445a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946588)));
    // 0x445a30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x445a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x445a34: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x445A34u;
    {
        const bool branch_taken_0x445a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445A34u;
        // 0x445a38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445a34) {
            ctx->pc = 0x445A70u;
            goto label_445a70;
        }
    }
    ctx->pc = 0x445A3Cu;
    // 0x445a3c: 0x8f82bf20  lw          $v0, -0x40E0($gp)
    ctx->pc = 0x445a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x445a40: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x445a40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x445a44: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x445a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
    // 0x445a48: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x445a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x445a4c: 0xc104284  jal         func_410A10
    ctx->pc = 0x445A4Cu;
    SET_GPR_U32(ctx, 31, 0x445A54u);
    ctx->pc = 0x445A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445A4Cu;
    // 0x445a50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x445A4Cu, 0x445A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445A54u;
label_445a54:
    // 0x445a54: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x445a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x445a58: 0x8f84af20  lw          $a0, -0x50E0($gp)
    ctx->pc = 0x445a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    // 0x445a5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x445a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x445a60: 0xc1131fc  jal         func_44C7F0
    ctx->pc = 0x445A60u;
    SET_GPR_U32(ctx, 31, 0x445A68u);
    ctx->pc = 0x445A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445A60u;
    // 0x445a64: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C7F0u, 0x445A60u, 0x445A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445A68u;
label_445a68:
    // 0x445a68: 0xaf80af20  sw          $zero, -0x50E0($gp)
    ctx->pc = 0x445a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946592), GPR_U32(ctx, 0));
    // 0x445a6c: 0xaf80af1c  sw          $zero, -0x50E4($gp)
    ctx->pc = 0x445a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946588), GPR_U32(ctx, 0));
label_445a70:
    // 0x445a70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x445a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x445a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x445a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x445a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x445a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x445A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445A7Cu;
        // 0x445a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445A84u;
    // 0x445a84: 0x0  nop
    ctx->pc = 0x445a84u;
    // NOP
    ctx->pc = 0x445a88u;
}
