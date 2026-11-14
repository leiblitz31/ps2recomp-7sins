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

// Function: sub_0046D980
// Address: 0x46d980 - 0x46da30
void sub_0046D980_0x46d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D980_0x46d980");
#endif

    switch (ctx->pc) {
        case 0x46d9a4u: goto label_46d9a4;
        case 0x46d9b4u: goto label_46d9b4;
        case 0x46d9c8u: goto label_46d9c8;
        case 0x46d9d8u: goto label_46d9d8;
        case 0x46d9ecu: goto label_46d9ec;
        case 0x46d9fcu: goto label_46d9fc;
        case 0x46da10u: goto label_46da10;
        default: break;
    }

    ctx->pc = 0x46d980u;

    // 0x46d980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46d984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46d988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46d98c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x46d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x46d990: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d994: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46d994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46d998: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x46d998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x46d99c: 0xc042844  jal         func_10A110
    ctx->pc = 0x46D99Cu;
    SET_GPR_U32(ctx, 31, 0x46D9A4u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46D99Cu, 0x46D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D9A4u;
label_46d9a4:
    // 0x46d9a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46d9a8: 0x2785b2f8  addiu       $a1, $gp, -0x4D08
    ctx->pc = 0x46d9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947576));
    // 0x46d9ac: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x46D9ACu;
    SET_GPR_U32(ctx, 31, 0x46D9B4u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x46D9ACu, 0x46D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D9B4u;
label_46d9b4:
    // 0x46d9b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d9b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46d9bc: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x46d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x46d9c0: 0xc048c50  jal         func_123140
    ctx->pc = 0x46D9C0u;
    SET_GPR_U32(ctx, 31, 0x46D9C8u);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x46D9C0u, 0x46D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D9C8u;
label_46d9c8:
    // 0x46d9c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46d9cc: 0x2785b2fc  addiu       $a1, $gp, -0x4D04
    ctx->pc = 0x46d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947580));
    // 0x46d9d0: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x46D9D0u;
    SET_GPR_U32(ctx, 31, 0x46D9D8u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x46D9D0u, 0x46D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D9D8u;
label_46d9d8:
    // 0x46d9d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d9dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46d9e0: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x46d9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x46d9e4: 0xc048c50  jal         func_123140
    ctx->pc = 0x46D9E4u;
    SET_GPR_U32(ctx, 31, 0x46D9ECu);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x46D9E4u, 0x46D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D9ECu;
label_46d9ec:
    // 0x46d9ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d9f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x46d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46d9f4: 0xc11b68c  jal         func_46DA30
    ctx->pc = 0x46D9F4u;
    SET_GPR_U32(ctx, 31, 0x46D9FCu);
    ctx->pc = 0x46DA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DA30u, 0x46D9F4u, 0x46D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D9FCu;
label_46d9fc:
    // 0x46d9fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x46d9fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x46da00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46da04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46da04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46da08: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46DA08u;
    SET_GPR_U32(ctx, 31, 0x46DA10u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46DA08u, 0x46DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DA10u;
label_46da10:
    // 0x46da10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46da10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46da14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46da14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46da18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46da18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46da1c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46da1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46da20: 0x3e00008  jr          $ra
    ctx->pc = 0x46DA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46DA28u;
    // 0x46da28: 0x0  nop
    ctx->pc = 0x46da28u;
    // NOP
    // 0x46da2c: 0x0  nop
    ctx->pc = 0x46da2cu;
    // NOP
    ctx->pc = 0x46da30u;
}
