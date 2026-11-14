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

// Function: sub_001C6AF0
// Address: 0x1c6af0 - 0x1c6b70
void sub_001C6AF0_0x1c6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6AF0_0x1c6af0");
#endif

    switch (ctx->pc) {
        case 0x1c6b14u: goto label_1c6b14;
        case 0x1c6b58u: goto label_1c6b58;
        default: break;
    }

    ctx->pc = 0x1c6af0u;

    // 0x1c6af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6af8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c6af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c6afc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c6afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c6b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c6b08: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c6b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c6b0c: 0xc071adc  jal         func_1C6B70
    ctx->pc = 0x1C6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6B14u);
    ctx->pc = 0x1C6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B70u, 0x1C6B0Cu, 0x1C6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B14u;
label_1c6b14:
    // 0x1c6b14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b18: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1c6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b20: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c6b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6b24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6b2c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6b30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c6b34: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x1c6b34u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1c6b38: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6B38u;
    {
        const bool branch_taken_0x1c6b38 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c6b38) {
            ctx->pc = 0x1C6B48u;
            goto label_1c6b48;
        }
    }
    ctx->pc = 0x1C6B40u;
    // 0x1c6b40: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1c6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c6b44: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1c6b44u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1c6b48:
    // 0x1c6b48: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c6b4c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1c6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c6b50: 0xc0725a4  jal         func_1C9690
    ctx->pc = 0x1C6B50u;
    SET_GPR_U32(ctx, 31, 0x1C6B58u);
    ctx->pc = 0x1C9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9690u, 0x1C6B50u, 0x1C6B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B58u;
label_1c6b58:
    // 0x1c6b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c6b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c6b60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B68u;
    // 0x1c6b68: 0x0  nop
    ctx->pc = 0x1c6b68u;
    // NOP
    // 0x1c6b6c: 0x0  nop
    ctx->pc = 0x1c6b6cu;
    // NOP
    ctx->pc = 0x1c6b70u;
}
