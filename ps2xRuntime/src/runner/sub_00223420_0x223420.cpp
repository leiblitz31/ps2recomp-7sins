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

// Function: sub_00223420
// Address: 0x223420 - 0x2234a0
void sub_00223420_0x223420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223420_0x223420");
#endif

    switch (ctx->pc) {
        case 0x223444u: goto label_223444;
        case 0x223488u: goto label_223488;
        default: break;
    }

    ctx->pc = 0x223420u;

    // 0x223420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223428: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x223428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22342c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223434: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223438: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x223438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22343c: 0xc0886cc  jal         func_221B30
    ctx->pc = 0x22343Cu;
    SET_GPR_U32(ctx, 31, 0x223444u);
    ctx->pc = 0x221B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221B30u, 0x22343Cu, 0x223444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223444u;
label_223444:
    // 0x223444: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x223444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223448: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x223448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22344c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223450: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x223450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x223454: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223458: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x223458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22345c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22345cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223460: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x223460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x223464: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x223464u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x223468: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223468u;
    {
        const bool branch_taken_0x223468 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x223468) {
            ctx->pc = 0x223478u;
            goto label_223478;
        }
    }
    ctx->pc = 0x223470u;
    // 0x223470: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x223470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x223474: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x223474u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_223478:
    // 0x223478: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x223478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22347c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22347cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223480: 0xc089574  jal         func_2255D0
    ctx->pc = 0x223480u;
    SET_GPR_U32(ctx, 31, 0x223488u);
    ctx->pc = 0x2255D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255D0u, 0x223480u, 0x223488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223488u;
label_223488:
    // 0x223488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22348c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22348cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x223490: 0x3e00008  jr          $ra
    ctx->pc = 0x223490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223498u;
    // 0x223498: 0x0  nop
    ctx->pc = 0x223498u;
    // NOP
    // 0x22349c: 0x0  nop
    ctx->pc = 0x22349cu;
    // NOP
    ctx->pc = 0x2234a0u;
}
