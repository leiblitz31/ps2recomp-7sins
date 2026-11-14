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

// Function: sub_00230310
// Address: 0x230310 - 0x230390
void sub_00230310_0x230310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230310_0x230310");
#endif

    switch (ctx->pc) {
        case 0x230334u: goto label_230334;
        case 0x230378u: goto label_230378;
        default: break;
    }

    ctx->pc = 0x230310u;

    // 0x230310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x230318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23031c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x230320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230324: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230328: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x230328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23032c: 0xc08af7c  jal         func_22BDF0
    ctx->pc = 0x23032Cu;
    SET_GPR_U32(ctx, 31, 0x230334u);
    ctx->pc = 0x22BDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDF0u, 0x23032Cu, 0x230334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230334u;
label_230334:
    // 0x230334: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x230334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230338: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x230338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23033c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230340: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x230340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x230344: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x230344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230348: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x230348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23034c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23034cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230350: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230354: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x230354u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x230358: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x230358u;
    {
        const bool branch_taken_0x230358 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x230358) {
            ctx->pc = 0x230368u;
            goto label_230368;
        }
    }
    ctx->pc = 0x230360u;
    // 0x230360: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x230364: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x230364u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_230368:
    // 0x230368: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x230368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x23036c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23036cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x230370: 0xc08c9f8  jal         func_2327E0
    ctx->pc = 0x230370u;
    SET_GPR_U32(ctx, 31, 0x230378u);
    ctx->pc = 0x2327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2327E0u, 0x230370u, 0x230378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230378u;
label_230378:
    // 0x230378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23037c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23037cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x230380: 0x3e00008  jr          $ra
    ctx->pc = 0x230380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230388u;
    // 0x230388: 0x0  nop
    ctx->pc = 0x230388u;
    // NOP
    // 0x23038c: 0x0  nop
    ctx->pc = 0x23038cu;
    // NOP
    ctx->pc = 0x230390u;
}
