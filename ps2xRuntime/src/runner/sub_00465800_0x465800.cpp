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

// Function: sub_00465800
// Address: 0x465800 - 0x4658f0
void sub_00465800_0x465800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465800_0x465800");
#endif

    switch (ctx->pc) {
        case 0x465828u: goto label_465828;
        case 0x465838u: goto label_465838;
        case 0x465848u: goto label_465848;
        case 0x465854u: goto label_465854;
        case 0x465860u: goto label_465860;
        case 0x465870u: goto label_465870;
        case 0x465880u: goto label_465880;
        case 0x465894u: goto label_465894;
        case 0x4658a4u: goto label_4658a4;
        case 0x4658b4u: goto label_4658b4;
        case 0x4658c4u: goto label_4658c4;
        case 0x4658d4u: goto label_4658d4;
        default: break;
    }

    ctx->pc = 0x465800u;

    // 0x465800: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x465800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x465804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x465808: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x465808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x46580c: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x46580cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x465810: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x465810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x465814: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x465814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x465818: 0x2785b2a8  addiu       $a1, $gp, -0x4D58
    ctx->pc = 0x465818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947496));
    // 0x46581c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x46581cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x465820: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x465820u;
    SET_GPR_U32(ctx, 31, 0x465828u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x465820u, 0x465828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465828u;
label_465828:
    // 0x465828: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x465828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x46582c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x46582cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x465830: 0xc040304  jal         func_100C10
    ctx->pc = 0x465830u;
    SET_GPR_U32(ctx, 31, 0x465838u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x465830u, 0x465838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465838u;
label_465838:
    // 0x465838: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x465838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46583c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x46583cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x465840: 0xc040304  jal         func_100C10
    ctx->pc = 0x465840u;
    SET_GPR_U32(ctx, 31, 0x465848u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x465840u, 0x465848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465848u;
label_465848:
    // 0x465848: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x465848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46584c: 0xc0495d4  jal         func_125750
    ctx->pc = 0x46584Cu;
    SET_GPR_U32(ctx, 31, 0x465854u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x46584Cu, 0x465854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465854u;
label_465854:
    // 0x465854: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x465854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x465858: 0xc0495d4  jal         func_125750
    ctx->pc = 0x465858u;
    SET_GPR_U32(ctx, 31, 0x465860u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x465858u, 0x465860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465860u;
label_465860:
    // 0x465860: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x465860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x465864: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x465864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x465868: 0xc1195a4  jal         func_465690
    ctx->pc = 0x465868u;
    SET_GPR_U32(ctx, 31, 0x465870u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x465868u, 0x465870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465870u;
label_465870:
    // 0x465870: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x465870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x465874: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x465874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x465878: 0xc1195a4  jal         func_465690
    ctx->pc = 0x465878u;
    SET_GPR_U32(ctx, 31, 0x465880u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x465878u, 0x465880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465880u;
label_465880:
    // 0x465880: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x465880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x465884: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x465884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x465888: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x465888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46588c: 0xc1195d4  jal         func_465750
    ctx->pc = 0x46588Cu;
    SET_GPR_U32(ctx, 31, 0x465894u);
    ctx->pc = 0x465750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465750u, 0x46588Cu, 0x465894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465894u;
label_465894:
    // 0x465894: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x465894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x465898: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x465898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46589c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x46589Cu;
    SET_GPR_U32(ctx, 31, 0x4658A4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46589Cu, 0x4658A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4658A4u;
label_4658a4:
    // 0x4658a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4658a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4658a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4658a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4658ac: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x4658ACu;
    SET_GPR_U32(ctx, 31, 0x4658B4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x4658ACu, 0x4658B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4658B4u;
label_4658b4:
    // 0x4658b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4658b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4658b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4658b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4658bc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x4658BCu;
    SET_GPR_U32(ctx, 31, 0x4658C4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4658BCu, 0x4658C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4658C4u;
label_4658c4:
    // 0x4658c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4658c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4658c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4658c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4658cc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x4658CCu;
    SET_GPR_U32(ctx, 31, 0x4658D4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4658CCu, 0x4658D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4658D4u;
label_4658d4:
    // 0x4658d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4658d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4658d8: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x4658d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x4658dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4658DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4658DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4658E4u;
    // 0x4658e4: 0x0  nop
    ctx->pc = 0x4658e4u;
    // NOP
    // 0x4658e8: 0x0  nop
    ctx->pc = 0x4658e8u;
    // NOP
    // 0x4658ec: 0x0  nop
    ctx->pc = 0x4658ecu;
    // NOP
    ctx->pc = 0x4658f0u;
}
