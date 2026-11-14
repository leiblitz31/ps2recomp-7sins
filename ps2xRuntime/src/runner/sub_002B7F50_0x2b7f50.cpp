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

// Function: sub_002B7F50
// Address: 0x2b7f50 - 0x2b7fd0
void sub_002B7F50_0x2b7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7F50_0x2b7f50");
#endif

    switch (ctx->pc) {
        case 0x2b7f74u: goto label_2b7f74;
        case 0x2b7fb8u: goto label_2b7fb8;
        default: break;
    }

    ctx->pc = 0x2b7f50u;

    // 0x2b7f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b7f5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7f64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7f68: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b7f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7f6c: 0xc0ada0c  jal         func_2B6830
    ctx->pc = 0x2B7F6Cu;
    SET_GPR_U32(ctx, 31, 0x2B7F74u);
    ctx->pc = 0x2B6830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6830u, 0x2B7F6Cu, 0x2B7F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7F74u;
label_2b7f74:
    // 0x2b7f74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b7f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7f78: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2b7f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7f7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7f80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b7f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7f88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7f8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2b7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7f90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b7f94: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2b7f94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b7f98: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7F98u;
    {
        const bool branch_taken_0x2b7f98 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b7f98) {
            ctx->pc = 0x2B7FA8u;
            goto label_2b7fa8;
        }
    }
    ctx->pc = 0x2B7FA0u;
    // 0x2b7fa0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2b7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b7fa4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2b7fa4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2b7fa8:
    // 0x2b7fa8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2b7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2b7fac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2b7facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b7fb0: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2B7FB0u;
    SET_GPR_U32(ctx, 31, 0x2B7FB8u);
    ctx->pc = 0x2B8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8700u, 0x2B7FB0u, 0x2B7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FB8u;
label_2b7fb8:
    // 0x2b7fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7fbc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7FC8u;
    // 0x2b7fc8: 0x0  nop
    ctx->pc = 0x2b7fc8u;
    // NOP
    // 0x2b7fcc: 0x0  nop
    ctx->pc = 0x2b7fccu;
    // NOP
    ctx->pc = 0x2b7fd0u;
}
