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

// Function: sub_001C4F50
// Address: 0x1c4f50 - 0x1c4fd0
void sub_001C4F50_0x1c4f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4F50_0x1c4f50");
#endif

    switch (ctx->pc) {
        case 0x1c4f74u: goto label_1c4f74;
        case 0x1c4fb8u: goto label_1c4fb8;
        default: break;
    }

    ctx->pc = 0x1c4f50u;

    // 0x1c4f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c4f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c4f5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c4f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4f68: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c4f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4f6c: 0xc0560f8  jal         func_1583E0
    ctx->pc = 0x1C4F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C4F74u);
    ctx->pc = 0x1583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1583E0u, 0x1C4F6Cu, 0x1C4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F74u;
label_1c4f74:
    // 0x1c4f74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c4f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f78: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1c4f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4f8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4f90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4f94: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1c4f94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1c4f98: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4F98u;
    {
        const bool branch_taken_0x1c4f98 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c4f98) {
            ctx->pc = 0x1C4FA8u;
            goto label_1c4fa8;
        }
    }
    ctx->pc = 0x1C4FA0u;
    // 0x1c4fa0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1c4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c4fa4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1c4fa4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1c4fa8:
    // 0x1c4fa8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c4fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c4fac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1c4facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c4fb0: 0xc06f958  jal         func_1BE560
    ctx->pc = 0x1C4FB0u;
    SET_GPR_U32(ctx, 31, 0x1C4FB8u);
    ctx->pc = 0x1BE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE560u, 0x1C4FB0u, 0x1C4FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FB8u;
label_1c4fb8:
    // 0x1c4fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4fbc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c4fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4FC8u;
    // 0x1c4fc8: 0x0  nop
    ctx->pc = 0x1c4fc8u;
    // NOP
    // 0x1c4fcc: 0x0  nop
    ctx->pc = 0x1c4fccu;
    // NOP
    ctx->pc = 0x1c4fd0u;
}
