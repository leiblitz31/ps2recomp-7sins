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

// Function: sub_0046D730
// Address: 0x46d730 - 0x46d7f0
void sub_0046D730_0x46d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D730_0x46d730");
#endif

    switch (ctx->pc) {
        case 0x46d754u: goto label_46d754;
        case 0x46d774u: goto label_46d774;
        case 0x46d784u: goto label_46d784;
        case 0x46d794u: goto label_46d794;
        case 0x46d7a8u: goto label_46d7a8;
        case 0x46d7bcu: goto label_46d7bc;
        case 0x46d7d0u: goto label_46d7d0;
        default: break;
    }

    ctx->pc = 0x46d730u;

    // 0x46d730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46d734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46d738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46d738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46d73c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46d740: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46d740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46d744: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x46d744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x46d748: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46d748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d74c: 0xc11a684  jal         func_469A10
    ctx->pc = 0x46D74Cu;
    SET_GPR_U32(ctx, 31, 0x46D754u);
    ctx->pc = 0x469A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469A10u, 0x46D74Cu, 0x46D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D754u;
label_46d754:
    // 0x46d754: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46d754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46d758: 0x24636d08  addiu       $v1, $v1, 0x6D08
    ctx->pc = 0x46d758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27912));
    // 0x46d75c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d760: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46d760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46d764: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d768: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x46d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x46d76c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46D76Cu;
    SET_GPR_U32(ctx, 31, 0x46D774u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46D76Cu, 0x46D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D774u;
label_46d774:
    // 0x46d774: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d778: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x46d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x46d77c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46D77Cu;
    SET_GPR_U32(ctx, 31, 0x46D784u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46D77Cu, 0x46D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D784u;
label_46d784:
    // 0x46d784: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d788: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x46d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x46d78c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46D78Cu;
    SET_GPR_U32(ctx, 31, 0x46D794u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46D78Cu, 0x46D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D794u;
label_46d794:
    // 0x46d794: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d798: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x46d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x46d79c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d7a0: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46D7A0u;
    SET_GPR_U32(ctx, 31, 0x46D7A8u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46D7A0u, 0x46D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D7A8u;
label_46d7a8:
    // 0x46d7a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d7ac: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x46d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x46d7b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d7b4: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46D7B4u;
    SET_GPR_U32(ctx, 31, 0x46D7BCu);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46D7B4u, 0x46D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D7BCu;
label_46d7bc:
    // 0x46d7bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d7c0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x46d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x46d7c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x46d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46d7c8: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46D7C8u;
    SET_GPR_U32(ctx, 31, 0x46D7D0u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46D7C8u, 0x46D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D7D0u;
label_46d7d0:
    // 0x46d7d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d7d4: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x46d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x46d7d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46d7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d7e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46d7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x46D7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D7ECu;
    // 0x46d7ec: 0x0  nop
    ctx->pc = 0x46d7ecu;
    // NOP
    ctx->pc = 0x46d7f0u;
}
