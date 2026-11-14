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

// Function: sub_002CC400
// Address: 0x2cc400 - 0x2cc480
void sub_002CC400_0x2cc400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC400_0x2cc400");
#endif

    switch (ctx->pc) {
        case 0x2cc424u: goto label_2cc424;
        case 0x2cc468u: goto label_2cc468;
        default: break;
    }

    ctx->pc = 0x2cc400u;

    // 0x2cc400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cc408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cc40c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2cc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc410: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc414: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cc414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc418: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cc418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc41c: 0xc0b2e58  jal         func_2CB960
    ctx->pc = 0x2CC41Cu;
    SET_GPR_U32(ctx, 31, 0x2CC424u);
    ctx->pc = 0x2CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB960u, 0x2CC41Cu, 0x2CC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC424u;
label_2cc424:
    // 0x2cc424: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cc424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc428: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2cc428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc42c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc430: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cc430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cc434: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc438: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cc438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc43c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc440: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc444: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2cc444u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2cc448: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC448u;
    {
        const bool branch_taken_0x2cc448 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2cc448) {
            ctx->pc = 0x2CC458u;
            goto label_2cc458;
        }
    }
    ctx->pc = 0x2CC450u;
    // 0x2cc450: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2cc450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2cc454: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2cc454u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2cc458:
    // 0x2cc458: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2cc458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2cc45c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cc45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cc460: 0xc0b3f50  jal         func_2CFD40
    ctx->pc = 0x2CC460u;
    SET_GPR_U32(ctx, 31, 0x2CC468u);
    ctx->pc = 0x2CFD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD40u, 0x2CC460u, 0x2CC468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC468u;
label_2cc468:
    // 0x2cc468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc46c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cc46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cc470: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC478u;
    // 0x2cc478: 0x0  nop
    ctx->pc = 0x2cc478u;
    // NOP
    // 0x2cc47c: 0x0  nop
    ctx->pc = 0x2cc47cu;
    // NOP
    ctx->pc = 0x2cc480u;
}
