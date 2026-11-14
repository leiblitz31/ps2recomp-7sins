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

// Function: sub_00267320
// Address: 0x267320 - 0x2673a0
void sub_00267320_0x267320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267320_0x267320");
#endif

    switch (ctx->pc) {
        case 0x267344u: goto label_267344;
        case 0x267388u: goto label_267388;
        default: break;
    }

    ctx->pc = 0x267320u;

    // 0x267320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x267324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x267328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26732c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267330: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267334: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x267334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267338: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x267338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26733c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x26733Cu;
    SET_GPR_U32(ctx, 31, 0x267344u);
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x26733Cu, 0x267344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267344u;
label_267344:
    // 0x267344: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x267344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267348: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x267348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26734c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267350: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x267350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x267354: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26735c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26735cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267360: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x267360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x267364: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x267364u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x267368: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267368u;
    {
        const bool branch_taken_0x267368 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x267368) {
            ctx->pc = 0x267378u;
            goto label_267378;
        }
    }
    ctx->pc = 0x267370u;
    // 0x267370: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x267370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x267374: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x267374u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_267378:
    // 0x267378: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x267378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26737c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x26737cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x267380: 0xc048c1c  jal         func_123070
    ctx->pc = 0x267380u;
    SET_GPR_U32(ctx, 31, 0x267388u);
    ctx->pc = 0x123070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123070u, 0x267380u, 0x267388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267388u;
label_267388:
    // 0x267388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26738c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26738cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x267390: 0x3e00008  jr          $ra
    ctx->pc = 0x267390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267398u;
    // 0x267398: 0x0  nop
    ctx->pc = 0x267398u;
    // NOP
    // 0x26739c: 0x0  nop
    ctx->pc = 0x26739cu;
    // NOP
    ctx->pc = 0x2673a0u;
}
