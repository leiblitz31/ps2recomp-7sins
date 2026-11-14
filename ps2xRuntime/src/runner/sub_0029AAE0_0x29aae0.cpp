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

// Function: sub_0029AAE0
// Address: 0x29aae0 - 0x29ab60
void sub_0029AAE0_0x29aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AAE0_0x29aae0");
#endif

    switch (ctx->pc) {
        case 0x29ab04u: goto label_29ab04;
        case 0x29ab48u: goto label_29ab48;
        default: break;
    }

    ctx->pc = 0x29aae0u;

    // 0x29aae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29aae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29aae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29aaec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aaf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aaf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29aaf8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x29aaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29aafc: 0xc0a67b0  jal         func_299EC0
    ctx->pc = 0x29AAFCu;
    SET_GPR_U32(ctx, 31, 0x29AB04u);
    ctx->pc = 0x299EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EC0u, 0x29AAFCu, 0x29AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB04u;
label_29ab04:
    // 0x29ab04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29ab04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ab08: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x29ab08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ab0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ab10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29ab14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ab18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29ab1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29ab20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29ab24: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x29ab24u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x29ab28: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AB28u;
    {
        const bool branch_taken_0x29ab28 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x29ab28) {
            ctx->pc = 0x29AB38u;
            goto label_29ab38;
        }
    }
    ctx->pc = 0x29AB30u;
    // 0x29ab30: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x29ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x29ab34: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x29ab34u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_29ab38:
    // 0x29ab38: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x29ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x29ab3c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x29ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29ab40: 0xc0a6d3c  jal         func_29B4F0
    ctx->pc = 0x29AB40u;
    SET_GPR_U32(ctx, 31, 0x29AB48u);
    ctx->pc = 0x29B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B4F0u, 0x29AB40u, 0x29AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB48u;
label_29ab48:
    // 0x29ab48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ab4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29ab4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29ab50: 0x3e00008  jr          $ra
    ctx->pc = 0x29AB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AB58u;
    // 0x29ab58: 0x0  nop
    ctx->pc = 0x29ab58u;
    // NOP
    // 0x29ab5c: 0x0  nop
    ctx->pc = 0x29ab5cu;
    // NOP
    ctx->pc = 0x29ab60u;
}
