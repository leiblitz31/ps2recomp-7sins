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

// Function: sub_00181430
// Address: 0x181430 - 0x1814b0
void sub_00181430_0x181430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181430_0x181430");
#endif

    switch (ctx->pc) {
        case 0x181454u: goto label_181454;
        case 0x181498u: goto label_181498;
        default: break;
    }

    ctx->pc = 0x181430u;

    // 0x181430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x181438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18143c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181440: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181444: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x181444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181448: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x181448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18144c: 0xc05edf4  jal         func_17B7D0
    ctx->pc = 0x18144Cu;
    SET_GPR_U32(ctx, 31, 0x181454u);
    ctx->pc = 0x17B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B7D0u, 0x18144Cu, 0x181454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181454u;
label_181454:
    // 0x181454: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x181454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181458: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x181458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18145c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181460: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x181460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x181464: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181468: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x181468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18146c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18146cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x181470: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x181470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x181474: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x181474u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x181478: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181478u;
    {
        const bool branch_taken_0x181478 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x181478) {
            ctx->pc = 0x181488u;
            goto label_181488;
        }
    }
    ctx->pc = 0x181480u;
    // 0x181480: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x181480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x181484: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x181484u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_181488:
    // 0x181488: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x181488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x18148c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18148cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181490: 0xc05ff68  jal         func_17FDA0
    ctx->pc = 0x181490u;
    SET_GPR_U32(ctx, 31, 0x181498u);
    ctx->pc = 0x17FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FDA0u, 0x181490u, 0x181498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181498u;
label_181498:
    // 0x181498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18149c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18149cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1814a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1814A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1814A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1814A8u;
    // 0x1814a8: 0x0  nop
    ctx->pc = 0x1814a8u;
    // NOP
    // 0x1814ac: 0x0  nop
    ctx->pc = 0x1814acu;
    // NOP
    ctx->pc = 0x1814b0u;
}
