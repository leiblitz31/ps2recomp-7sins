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

// Function: sub_002646E0
// Address: 0x2646e0 - 0x264760
void sub_002646E0_0x2646e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002646E0_0x2646e0");
#endif

    switch (ctx->pc) {
        case 0x264704u: goto label_264704;
        case 0x264748u: goto label_264748;
        default: break;
    }

    ctx->pc = 0x2646e0u;

    // 0x2646e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2646e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2646e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2646e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2646e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2646e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2646ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2646ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2646f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2646f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2646f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2646f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2646f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2646f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2646fc: 0xc09874c  jal         func_261D30
    ctx->pc = 0x2646FCu;
    SET_GPR_U32(ctx, 31, 0x264704u);
    ctx->pc = 0x261D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261D30u, 0x2646FCu, 0x264704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264704u;
label_264704:
    // 0x264704: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x264704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264708: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x264708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26470c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264710: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x264710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x264714: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264718: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x264718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26471c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26471cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264720: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x264720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x264724: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x264724u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x264728: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264728u;
    {
        const bool branch_taken_0x264728 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x264728) {
            ctx->pc = 0x264738u;
            goto label_264738;
        }
    }
    ctx->pc = 0x264730u;
    // 0x264730: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x264730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x264734: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x264734u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_264738:
    // 0x264738: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x264738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26473c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x26473cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x264740: 0xc09957c  jal         func_2655F0
    ctx->pc = 0x264740u;
    SET_GPR_U32(ctx, 31, 0x264748u);
    ctx->pc = 0x2655F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2655F0u, 0x264740u, 0x264748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264748u;
label_264748:
    // 0x264748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26474c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26474cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x264750: 0x3e00008  jr          $ra
    ctx->pc = 0x264750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264758u;
    // 0x264758: 0x0  nop
    ctx->pc = 0x264758u;
    // NOP
    // 0x26475c: 0x0  nop
    ctx->pc = 0x26475cu;
    // NOP
    ctx->pc = 0x264760u;
}
