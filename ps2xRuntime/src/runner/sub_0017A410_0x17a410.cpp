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

// Function: sub_0017A410
// Address: 0x17a410 - 0x17a470
void sub_0017A410_0x17a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A410_0x17a410");
#endif

    switch (ctx->pc) {
        case 0x17a42cu: goto label_17a42c;
        case 0x17a43cu: goto label_17a43c;
        default: break;
    }

    ctx->pc = 0x17a410u;

    // 0x17a410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17a418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17a41c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17a420: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x17a420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x17a424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A424u;
    {
        const bool branch_taken_0x17a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a424) {
            ctx->pc = 0x17A448u;
            goto label_17a448;
        }
    }
    ctx->pc = 0x17A42Cu;
label_17a42c:
    // 0x17a42c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a430: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a434: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17A434u;
    SET_GPR_U32(ctx, 31, 0x17A43Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17A434u, 0x17A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A43Cu;
label_17a43c:
    // 0x17a43c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a440: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x17a440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x17a444: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x17a444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_17a448:
    // 0x17a448: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17a448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a44c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a450: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x17A450u;
    {
        const bool branch_taken_0x17a450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a450) {
            ctx->pc = 0x17A42Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a42c;
        }
    }
    ctx->pc = 0x17A458u;
    // 0x17a458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a45c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17a45cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17a460: 0x3e00008  jr          $ra
    ctx->pc = 0x17A460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A468u;
    // 0x17a468: 0x0  nop
    ctx->pc = 0x17a468u;
    // NOP
    // 0x17a46c: 0x0  nop
    ctx->pc = 0x17a46cu;
    // NOP
    ctx->pc = 0x17a470u;
}
