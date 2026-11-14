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

// Function: sub_00180D30
// Address: 0x180d30 - 0x180db0
void sub_00180D30_0x180d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180D30_0x180d30");
#endif

    switch (ctx->pc) {
        case 0x180d54u: goto label_180d54;
        case 0x180d98u: goto label_180d98;
        default: break;
    }

    ctx->pc = 0x180d30u;

    // 0x180d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x180d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x180d3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x180d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x180d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180d44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x180d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180d48: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x180d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180d4c: 0xc05ee94  jal         func_17BA50
    ctx->pc = 0x180D4Cu;
    SET_GPR_U32(ctx, 31, 0x180D54u);
    ctx->pc = 0x17BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA50u, 0x180D4Cu, 0x180D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D54u;
label_180d54:
    // 0x180d54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x180d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180d58: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x180d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180d5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x180d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180d60: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x180d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x180d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x180d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180d68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180d6c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180d70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x180d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180d74: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x180d74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x180d78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180D78u;
    {
        const bool branch_taken_0x180d78 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x180d78) {
            ctx->pc = 0x180D88u;
            goto label_180d88;
        }
    }
    ctx->pc = 0x180D80u;
    // 0x180d80: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x180d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x180d84: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x180d84u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_180d88:
    // 0x180d88: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x180d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x180d8c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x180d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180d90: 0xc05ff7c  jal         func_17FDF0
    ctx->pc = 0x180D90u;
    SET_GPR_U32(ctx, 31, 0x180D98u);
    ctx->pc = 0x17FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FDF0u, 0x180D90u, 0x180D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D98u;
label_180d98:
    // 0x180d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180d9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x180d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180da0: 0x3e00008  jr          $ra
    ctx->pc = 0x180DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180DA8u;
    // 0x180da8: 0x0  nop
    ctx->pc = 0x180da8u;
    // NOP
    // 0x180dac: 0x0  nop
    ctx->pc = 0x180dacu;
    // NOP
    ctx->pc = 0x180db0u;
}
