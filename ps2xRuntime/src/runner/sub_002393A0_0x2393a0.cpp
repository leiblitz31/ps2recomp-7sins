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

// Function: sub_002393A0
// Address: 0x2393a0 - 0x239450
void sub_002393A0_0x2393a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002393A0_0x2393a0");
#endif

    switch (ctx->pc) {
        case 0x2393c0u: goto label_2393c0;
        case 0x2393d4u: goto label_2393d4;
        case 0x2393e8u: goto label_2393e8;
        case 0x239404u: goto label_239404;
        case 0x239418u: goto label_239418;
        case 0x23942cu: goto label_23942c;
        case 0x23943cu: goto label_23943c;
        default: break;
    }

    ctx->pc = 0x2393a0u;

    // 0x2393a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2393a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2393a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2393a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2393a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2393a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2393ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2393acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2393b0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2393b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2393b4: 0x24a5bbd0  addiu       $a1, $a1, -0x4430
    ctx->pc = 0x2393b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949840));
    // 0x2393b8: 0xc040304  jal         func_100C10
    ctx->pc = 0x2393B8u;
    SET_GPR_U32(ctx, 31, 0x2393C0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2393B8u, 0x2393C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393C0u;
label_2393c0:
    // 0x2393c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2393c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2393c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2393c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2393c8: 0x24a5bb50  addiu       $a1, $a1, -0x44B0
    ctx->pc = 0x2393c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949712));
    // 0x2393cc: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2393CCu;
    SET_GPR_U32(ctx, 31, 0x2393D4u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2393CCu, 0x2393D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393D4u;
label_2393d4:
    // 0x2393d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2393d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2393d8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2393d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2393dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2393dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2393e0: 0xc11bcf4  jal         func_46F3D0
    ctx->pc = 0x2393E0u;
    SET_GPR_U32(ctx, 31, 0x2393E8u);
    ctx->pc = 0x46F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F3D0u, 0x2393E0u, 0x2393E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393E8u;
label_2393e8:
    // 0x2393e8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2393E8u;
    {
        const bool branch_taken_0x2393e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2393e8) {
            ctx->pc = 0x23942Cu;
            goto label_23942c;
        }
    }
    ctx->pc = 0x2393F0u;
    // 0x2393f0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2393f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2393f4: 0x2484bb50  addiu       $a0, $a0, -0x44B0
    ctx->pc = 0x2393f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949712));
    // 0x2393f8: 0x27859d78  addiu       $a1, $gp, -0x6288
    ctx->pc = 0x2393f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942072));
    // 0x2393fc: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2393FCu;
    SET_GPR_U32(ctx, 31, 0x239404u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2393FCu, 0x239404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239404u;
label_239404:
    // 0x239404: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x239404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239408: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x239408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x23940c: 0x24a5bbf0  addiu       $a1, $a1, -0x4410
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949872));
    // 0x239410: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x239410u;
    SET_GPR_U32(ctx, 31, 0x239418u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x239410u, 0x239418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239418u;
label_239418:
    // 0x239418: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x239418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23941c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x23941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x239420: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x239420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239424: 0xc11bcf4  jal         func_46F3D0
    ctx->pc = 0x239424u;
    SET_GPR_U32(ctx, 31, 0x23942Cu);
    ctx->pc = 0x46F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F3D0u, 0x239424u, 0x23942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23942Cu;
label_23942c:
    // 0x23942c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239430: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239434: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x239434u;
    SET_GPR_U32(ctx, 31, 0x23943Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239434u, 0x23943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23943Cu;
label_23943c:
    // 0x23943c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23943cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239440: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x239440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239444: 0x3e00008  jr          $ra
    ctx->pc = 0x239444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23944Cu;
    // 0x23944c: 0x0  nop
    ctx->pc = 0x23944cu;
    // NOP
    ctx->pc = 0x239450u;
}
