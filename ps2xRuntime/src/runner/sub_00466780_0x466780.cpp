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

// Function: sub_00466780
// Address: 0x466780 - 0x466840
void sub_00466780_0x466780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466780_0x466780");
#endif

    switch (ctx->pc) {
        case 0x4667acu: goto label_4667ac;
        case 0x4667b8u: goto label_4667b8;
        case 0x4667e0u: goto label_4667e0;
        case 0x4667ecu: goto label_4667ec;
        case 0x466808u: goto label_466808;
        case 0x466814u: goto label_466814;
        case 0x466820u: goto label_466820;
        default: break;
    }

    ctx->pc = 0x466780u;

    // 0x466780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x466780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x466784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466788: 0x8f82c02c  lw          $v0, -0x3FD4($gp)
    ctx->pc = 0x466788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950956)));
    // 0x46678c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x46678Cu;
    {
        const bool branch_taken_0x46678c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46678c) {
            ctx->pc = 0x4667BCu;
            goto label_4667bc;
        }
    }
    ctx->pc = 0x466794u;
    // 0x466794: 0x8f82c02c  lw          $v0, -0x3FD4($gp)
    ctx->pc = 0x466794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950956)));
    // 0x466798: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x466798u;
    {
        const bool branch_taken_0x466798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466798) {
            ctx->pc = 0x4667BCu;
            goto label_4667bc;
        }
    }
    ctx->pc = 0x4667A0u;
    // 0x4667a0: 0x8f84c02c  lw          $a0, -0x3FD4($gp)
    ctx->pc = 0x4667a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950956)));
    // 0x4667a4: 0xc115b6c  jal         func_456DB0
    ctx->pc = 0x4667A4u;
    SET_GPR_U32(ctx, 31, 0x4667ACu);
    ctx->pc = 0x456DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456DB0u, 0x4667A4u, 0x4667ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4667ACu;
label_4667ac:
    // 0x4667ac: 0x8f84c02c  lw          $a0, -0x3FD4($gp)
    ctx->pc = 0x4667acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950956)));
    // 0x4667b0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x4667B0u;
    SET_GPR_U32(ctx, 31, 0x4667B8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x4667B0u, 0x4667B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4667B8u;
label_4667b8:
    // 0x4667b8: 0xaf80c02c  sw          $zero, -0x3FD4($gp)
    ctx->pc = 0x4667b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950956), GPR_U32(ctx, 0));
label_4667bc:
    // 0x4667bc: 0x8f82c030  lw          $v0, -0x3FD0($gp)
    ctx->pc = 0x4667bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950960)));
    // 0x4667c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4667C0u;
    {
        const bool branch_taken_0x4667c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4667c0) {
            ctx->pc = 0x4667F0u;
            goto label_4667f0;
        }
    }
    ctx->pc = 0x4667C8u;
    // 0x4667c8: 0x8f82c030  lw          $v0, -0x3FD0($gp)
    ctx->pc = 0x4667c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950960)));
    // 0x4667cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4667CCu;
    {
        const bool branch_taken_0x4667cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4667cc) {
            ctx->pc = 0x4667F0u;
            goto label_4667f0;
        }
    }
    ctx->pc = 0x4667D4u;
    // 0x4667d4: 0x8f84c030  lw          $a0, -0x3FD0($gp)
    ctx->pc = 0x4667d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950960)));
    // 0x4667d8: 0xc119a1c  jal         func_466870
    ctx->pc = 0x4667D8u;
    SET_GPR_U32(ctx, 31, 0x4667E0u);
    ctx->pc = 0x466870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466870u, 0x4667D8u, 0x4667E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4667E0u;
label_4667e0:
    // 0x4667e0: 0x8f84c030  lw          $a0, -0x3FD0($gp)
    ctx->pc = 0x4667e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950960)));
    // 0x4667e4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x4667E4u;
    SET_GPR_U32(ctx, 31, 0x4667ECu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x4667E4u, 0x4667ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4667ECu;
label_4667ec:
    // 0x4667ec: 0xaf80c030  sw          $zero, -0x3FD0($gp)
    ctx->pc = 0x4667ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950960), GPR_U32(ctx, 0));
label_4667f0:
    // 0x4667f0: 0x8f82c008  lw          $v0, -0x3FF8($gp)
    ctx->pc = 0x4667f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x4667f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4667F4u;
    {
        const bool branch_taken_0x4667f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4667f4) {
            ctx->pc = 0x466824u;
            goto label_466824;
        }
    }
    ctx->pc = 0x4667FCu;
    // 0x4667fc: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x4667fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x466800: 0xc119a10  jal         func_466840
    ctx->pc = 0x466800u;
    SET_GPR_U32(ctx, 31, 0x466808u);
    ctx->pc = 0x466840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466840u, 0x466800u, 0x466808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466808u;
label_466808:
    // 0x466808: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x466808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x46680c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x46680Cu;
    SET_GPR_U32(ctx, 31, 0x466814u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x46680Cu, 0x466814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466814u;
label_466814:
    // 0x466814: 0x8f84c028  lw          $a0, -0x3FD8($gp)
    ctx->pc = 0x466814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950952)));
    // 0x466818: 0xc0bb49a  jal         func_2ED268
    ctx->pc = 0x466818u;
    SET_GPR_U32(ctx, 31, 0x466820u);
    ctx->pc = 0x2ED268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED268u, 0x466818u, 0x466820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466820u;
label_466820:
    // 0x466820: 0xaf80c008  sw          $zero, -0x3FF8($gp)
    ctx->pc = 0x466820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950920), GPR_U32(ctx, 0));
label_466824:
    // 0x466824: 0xaf80c004  sw          $zero, -0x3FFC($gp)
    ctx->pc = 0x466824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950916), GPR_U32(ctx, 0));
    // 0x466828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x466828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46682c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46682cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466830: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x466830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x466834: 0x3e00008  jr          $ra
    ctx->pc = 0x466834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46683Cu;
    // 0x46683c: 0x0  nop
    ctx->pc = 0x46683cu;
    // NOP
    ctx->pc = 0x466840u;
}
