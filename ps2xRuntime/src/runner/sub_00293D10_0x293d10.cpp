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

// Function: sub_00293D10
// Address: 0x293d10 - 0x293d90
void sub_00293D10_0x293d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293D10_0x293d10");
#endif

    switch (ctx->pc) {
        case 0x293d34u: goto label_293d34;
        case 0x293d78u: goto label_293d78;
        default: break;
    }

    ctx->pc = 0x293d10u;

    // 0x293d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x293d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x293d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x293d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x293d1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x293d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293d20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x293d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293d24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x293d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293d28: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x293d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x293d2c: 0xc0a472c  jal         func_291CB0
    ctx->pc = 0x293D2Cu;
    SET_GPR_U32(ctx, 31, 0x293D34u);
    ctx->pc = 0x291CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291CB0u, 0x293D2Cu, 0x293D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D34u;
label_293d34:
    // 0x293d34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x293d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293d38: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x293d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293d3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x293d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293d40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x293d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x293d44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x293d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293d48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x293d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293d4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x293d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293d50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x293d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x293d54: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x293d54u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x293d58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x293D58u;
    {
        const bool branch_taken_0x293d58 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x293d58) {
            ctx->pc = 0x293D68u;
            goto label_293d68;
        }
    }
    ctx->pc = 0x293D60u;
    // 0x293d60: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x293d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x293d64: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x293d64u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_293d68:
    // 0x293d68: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x293d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x293d6c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x293d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293d70: 0xc0a4e38  jal         func_2938E0
    ctx->pc = 0x293D70u;
    SET_GPR_U32(ctx, 31, 0x293D78u);
    ctx->pc = 0x2938E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938E0u, 0x293D70u, 0x293D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D78u;
label_293d78:
    // 0x293d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293d7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x293d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x293d80: 0x3e00008  jr          $ra
    ctx->pc = 0x293D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293D88u;
    // 0x293d88: 0x0  nop
    ctx->pc = 0x293d88u;
    // NOP
    // 0x293d8c: 0x0  nop
    ctx->pc = 0x293d8cu;
    // NOP
    ctx->pc = 0x293d90u;
}
