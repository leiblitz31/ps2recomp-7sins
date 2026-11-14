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

// Function: sub_00215820
// Address: 0x215820 - 0x2158a0
void sub_00215820_0x215820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215820_0x215820");
#endif

    switch (ctx->pc) {
        case 0x215844u: goto label_215844;
        case 0x215888u: goto label_215888;
        default: break;
    }

    ctx->pc = 0x215820u;

    // 0x215820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21582c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215834: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x215834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215838: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x215838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21583c: 0xc084f80  jal         func_213E00
    ctx->pc = 0x21583Cu;
    SET_GPR_U32(ctx, 31, 0x215844u);
    ctx->pc = 0x213E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E00u, 0x21583Cu, 0x215844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215844u;
label_215844:
    // 0x215844: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x215844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215848: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x215848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21584c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215850: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x215850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215854: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215858: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21585c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x21585cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215860: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x215860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215864: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x215864u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x215868: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215868u;
    {
        const bool branch_taken_0x215868 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x215868) {
            ctx->pc = 0x215878u;
            goto label_215878;
        }
    }
    ctx->pc = 0x215870u;
    // 0x215870: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x215870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x215874: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x215874u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_215878:
    // 0x215878: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x215878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21587c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x21587cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215880: 0xc08533c  jal         func_214CF0
    ctx->pc = 0x215880u;
    SET_GPR_U32(ctx, 31, 0x215888u);
    ctx->pc = 0x214CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214CF0u, 0x215880u, 0x215888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215888u;
label_215888:
    // 0x215888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21588c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21588cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x215890: 0x3e00008  jr          $ra
    ctx->pc = 0x215890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215898u;
    // 0x215898: 0x0  nop
    ctx->pc = 0x215898u;
    // NOP
    // 0x21589c: 0x0  nop
    ctx->pc = 0x21589cu;
    // NOP
    ctx->pc = 0x2158a0u;
}
