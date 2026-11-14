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

// Function: sub_00233690
// Address: 0x233690 - 0x233710
void sub_00233690_0x233690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233690_0x233690");
#endif

    switch (ctx->pc) {
        case 0x2336c4u: goto label_2336c4;
        case 0x2336d4u: goto label_2336d4;
        case 0x2336f4u: goto label_2336f4;
        default: break;
    }

    ctx->pc = 0x233690u;

    // 0x233690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23369c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23369cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2336a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2336a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2336a4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2336A4u;
    {
        const bool branch_taken_0x2336a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2336a4) {
            ctx->pc = 0x2336F4u;
            goto label_2336f4;
        }
    }
    ctx->pc = 0x2336ACu;
    // 0x2336ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2336acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2336b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2336b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2336b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2336b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2336b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2336b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2336bc: 0xc08cdec  jal         func_2337B0
    ctx->pc = 0x2336BCu;
    SET_GPR_U32(ctx, 31, 0x2336C4u);
    ctx->pc = 0x2337B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2337B0u, 0x2336BCu, 0x2336C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336C4u;
label_2336c4:
    // 0x2336c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2336c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2336c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2336c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336cc: 0xc08cdc4  jal         func_233710
    ctx->pc = 0x2336CCu;
    SET_GPR_U32(ctx, 31, 0x2336D4u);
    ctx->pc = 0x233710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233710u, 0x2336CCu, 0x2336D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336D4u;
label_2336d4:
    // 0x2336d4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2336d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2336d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2336d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2336dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2336dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2336e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2336E0u;
    {
        const bool branch_taken_0x2336e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2336e0) {
            ctx->pc = 0x2336F4u;
            goto label_2336f4;
        }
    }
    ctx->pc = 0x2336E8u;
    // 0x2336e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2336e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2336ec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2336ECu;
    SET_GPR_U32(ctx, 31, 0x2336F4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2336ECu, 0x2336F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336F4u;
label_2336f4:
    // 0x2336f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2336f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2336f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2336f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2336fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2336fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x233700: 0x3e00008  jr          $ra
    ctx->pc = 0x233700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233708u;
    // 0x233708: 0x0  nop
    ctx->pc = 0x233708u;
    // NOP
    // 0x23370c: 0x0  nop
    ctx->pc = 0x23370cu;
    // NOP
    ctx->pc = 0x233710u;
}
