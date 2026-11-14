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

// Function: sub_00477A40
// Address: 0x477a40 - 0x477ac0
void sub_00477A40_0x477a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477A40_0x477a40");
#endif

    switch (ctx->pc) {
        case 0x477a64u: goto label_477a64;
        case 0x477aa8u: goto label_477aa8;
        default: break;
    }

    ctx->pc = 0x477a40u;

    // 0x477a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x477a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x477a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x477a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x477a4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x477a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477a50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x477a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477a54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x477a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x477a58: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x477a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x477a5c: 0xc11dca4  jal         func_477290
    ctx->pc = 0x477A5Cu;
    SET_GPR_U32(ctx, 31, 0x477A64u);
    ctx->pc = 0x477290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477290u, 0x477A5Cu, 0x477A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477A64u;
label_477a64:
    // 0x477a64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x477a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477a68: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x477a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x477a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477a70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x477a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x477a74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x477a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477a78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x477a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x477a7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x477a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x477a80: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x477a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x477a84: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x477a84u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x477a88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x477A88u;
    {
        const bool branch_taken_0x477a88 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x477a88) {
            ctx->pc = 0x477A98u;
            goto label_477a98;
        }
    }
    ctx->pc = 0x477A90u;
    // 0x477a90: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x477a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x477a94: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x477a94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_477a98:
    // 0x477a98: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x477a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x477a9c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x477a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x477aa0: 0xc11e224  jal         func_478890
    ctx->pc = 0x477AA0u;
    SET_GPR_U32(ctx, 31, 0x477AA8u);
    ctx->pc = 0x478890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478890u, 0x477AA0u, 0x477AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477AA8u;
label_477aa8:
    // 0x477aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x477aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477aac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x477aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x477ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x477AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477AB8u;
    // 0x477ab8: 0x0  nop
    ctx->pc = 0x477ab8u;
    // NOP
    // 0x477abc: 0x0  nop
    ctx->pc = 0x477abcu;
    // NOP
    ctx->pc = 0x477ac0u;
}
