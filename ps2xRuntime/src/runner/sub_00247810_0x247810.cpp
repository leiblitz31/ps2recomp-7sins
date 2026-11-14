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

// Function: sub_00247810
// Address: 0x247810 - 0x247880
void sub_00247810_0x247810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247810_0x247810");
#endif

    switch (ctx->pc) {
        case 0x247844u: goto label_247844;
        case 0x247864u: goto label_247864;
        default: break;
    }

    ctx->pc = 0x247810u;

    // 0x247810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24781c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24781cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x247820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247824: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x247824u;
    {
        const bool branch_taken_0x247824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247824) {
            ctx->pc = 0x247864u;
            goto label_247864;
        }
    }
    ctx->pc = 0x24782Cu;
    // 0x24782c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247830: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247834: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x247834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x247838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24783c: 0xc093b5c  jal         func_24ED70
    ctx->pc = 0x24783Cu;
    SET_GPR_U32(ctx, 31, 0x247844u);
    ctx->pc = 0x24ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ED70u, 0x24783Cu, 0x247844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247844u;
label_247844:
    // 0x247844: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x247844u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247848: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x24784c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x24784cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247850: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247850u;
    {
        const bool branch_taken_0x247850 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x247850) {
            ctx->pc = 0x247864u;
            goto label_247864;
        }
    }
    ctx->pc = 0x247858u;
    // 0x247858: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24785c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x24785Cu;
    SET_GPR_U32(ctx, 31, 0x247864u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x24785Cu, 0x247864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247864u;
label_247864:
    // 0x247864: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24786c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24786cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247870: 0x3e00008  jr          $ra
    ctx->pc = 0x247870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247878u;
    // 0x247878: 0x0  nop
    ctx->pc = 0x247878u;
    // NOP
    // 0x24787c: 0x0  nop
    ctx->pc = 0x24787cu;
    // NOP
    ctx->pc = 0x247880u;
}
