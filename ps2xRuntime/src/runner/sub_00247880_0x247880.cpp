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

// Function: sub_00247880
// Address: 0x247880 - 0x247920
void sub_00247880_0x247880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247880_0x247880");
#endif

    switch (ctx->pc) {
        case 0x2478acu: goto label_2478ac;
        case 0x2478bcu: goto label_2478bc;
        case 0x2478d0u: goto label_2478d0;
        case 0x2478e0u: goto label_2478e0;
        case 0x2478f8u: goto label_2478f8;
        default: break;
    }

    ctx->pc = 0x247880u;

    // 0x247880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24788c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x247890: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x247890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247894: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x247894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x247898: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x247898u;
    {
        const bool branch_taken_0x247898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247898) {
            ctx->pc = 0x247904u;
            goto label_247904;
        }
    }
    ctx->pc = 0x2478A0u;
    // 0x2478a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2478a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2478a4: 0xc091e50  jal         func_247940
    ctx->pc = 0x2478A4u;
    SET_GPR_U32(ctx, 31, 0x2478ACu);
    ctx->pc = 0x247940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247940u, 0x2478A4u, 0x2478ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478ACu;
label_2478ac:
    // 0x2478ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2478acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2478b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2478b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2478b4: 0xc093e10  jal         func_24F840
    ctx->pc = 0x2478B4u;
    SET_GPR_U32(ctx, 31, 0x2478BCu);
    ctx->pc = 0x24F840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F840u, 0x2478B4u, 0x2478BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478BCu;
label_2478bc:
    // 0x2478bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2478bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2478c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2478c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2478c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2478c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2478c8: 0xc064198  jal         func_190660
    ctx->pc = 0x2478C8u;
    SET_GPR_U32(ctx, 31, 0x2478D0u);
    ctx->pc = 0x190660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190660u, 0x2478C8u, 0x2478D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478D0u;
label_2478d0:
    // 0x2478d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2478d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2478d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2478d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2478d8: 0xc091e50  jal         func_247940
    ctx->pc = 0x2478D8u;
    SET_GPR_U32(ctx, 31, 0x2478E0u);
    ctx->pc = 0x247940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247940u, 0x2478D8u, 0x2478E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478E0u;
label_2478e0:
    // 0x2478e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2478e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2478e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2478e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2478e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2478e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2478ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2478ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2478f0: 0xc091e48  jal         func_247920
    ctx->pc = 0x2478F0u;
    SET_GPR_U32(ctx, 31, 0x2478F8u);
    ctx->pc = 0x247920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247920u, 0x2478F0u, 0x2478F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478F8u;
label_2478f8:
    // 0x2478f8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2478f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2478fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2478fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247900: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x247900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_247904:
    // 0x247904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24790c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24790cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247910: 0x3e00008  jr          $ra
    ctx->pc = 0x247910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247918u;
    // 0x247918: 0x0  nop
    ctx->pc = 0x247918u;
    // NOP
    // 0x24791c: 0x0  nop
    ctx->pc = 0x24791cu;
    // NOP
    ctx->pc = 0x247920u;
}
