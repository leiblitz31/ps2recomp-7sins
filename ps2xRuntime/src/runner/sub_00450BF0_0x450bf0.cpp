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

// Function: sub_00450BF0
// Address: 0x450bf0 - 0x450c70
void sub_00450BF0_0x450bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450BF0_0x450bf0");
#endif

    switch (ctx->pc) {
        case 0x450c14u: goto label_450c14;
        case 0x450c58u: goto label_450c58;
        default: break;
    }

    ctx->pc = 0x450bf0u;

    // 0x450bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x450bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x450bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x450bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x450bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x450bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x450bfc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x450bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450c00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x450c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450c04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x450c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x450c08: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x450c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x450c0c: 0xc113d74  jal         func_44F5D0
    ctx->pc = 0x450C0Cu;
    SET_GPR_U32(ctx, 31, 0x450C14u);
    ctx->pc = 0x44F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F5D0u, 0x450C0Cu, 0x450C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450C14u;
label_450c14:
    // 0x450c14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x450c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450c18: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x450c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x450c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450c20: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x450c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x450c24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x450c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450c28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x450c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x450c2c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x450c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x450c30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x450c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x450c34: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x450c34u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x450c38: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x450C38u;
    {
        const bool branch_taken_0x450c38 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x450c38) {
            ctx->pc = 0x450C48u;
            goto label_450c48;
        }
    }
    ctx->pc = 0x450C40u;
    // 0x450c40: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x450c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x450c44: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x450c44u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_450c48:
    // 0x450c48: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x450c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x450c4c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x450c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x450c50: 0xc11486c  jal         func_4521B0
    ctx->pc = 0x450C50u;
    SET_GPR_U32(ctx, 31, 0x450C58u);
    ctx->pc = 0x4521B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4521B0u, 0x450C50u, 0x450C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450C58u;
label_450c58:
    // 0x450c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x450c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450c5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x450c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x450c60: 0x3e00008  jr          $ra
    ctx->pc = 0x450C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450C68u;
    // 0x450c68: 0x0  nop
    ctx->pc = 0x450c68u;
    // NOP
    // 0x450c6c: 0x0  nop
    ctx->pc = 0x450c6cu;
    // NOP
    ctx->pc = 0x450c70u;
}
