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

// Function: sub_00131B00
// Address: 0x131b00 - 0x131b80
void sub_00131B00_0x131b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131B00_0x131b00");
#endif

    switch (ctx->pc) {
        case 0x131b24u: goto label_131b24;
        case 0x131b68u: goto label_131b68;
        default: break;
    }

    ctx->pc = 0x131b00u;

    // 0x131b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x131b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x131b0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x131b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x131b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131b18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x131b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131b1c: 0xc04ac78  jal         func_12B1E0
    ctx->pc = 0x131B1Cu;
    SET_GPR_U32(ctx, 31, 0x131B24u);
    ctx->pc = 0x12B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B1E0u, 0x131B1Cu, 0x131B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B24u;
label_131b24:
    // 0x131b24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x131b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b28: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x131b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x131b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x131b34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x131b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131b3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x131b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131b40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x131b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131b44: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x131b44u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x131b48: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131B48u;
    {
        const bool branch_taken_0x131b48 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x131b48) {
            ctx->pc = 0x131B58u;
            goto label_131b58;
        }
    }
    ctx->pc = 0x131B50u;
    // 0x131b50: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x131b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x131b54: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x131b54u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_131b58:
    // 0x131b58: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x131b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x131b5c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x131b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131b60: 0xc04c644  jal         func_131910
    ctx->pc = 0x131B60u;
    SET_GPR_U32(ctx, 31, 0x131B68u);
    ctx->pc = 0x131910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131910u, 0x131B60u, 0x131B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B68u;
label_131b68:
    // 0x131b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131b6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x131b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x131b70: 0x3e00008  jr          $ra
    ctx->pc = 0x131B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131B78u;
    // 0x131b78: 0x0  nop
    ctx->pc = 0x131b78u;
    // NOP
    // 0x131b7c: 0x0  nop
    ctx->pc = 0x131b7cu;
    // NOP
    ctx->pc = 0x131b80u;
}
