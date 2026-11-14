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

// Function: sub_00469E00
// Address: 0x469e00 - 0x469ea0
void sub_00469E00_0x469e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469E00_0x469e00");
#endif

    switch (ctx->pc) {
        case 0x469e28u: goto label_469e28;
        case 0x469e40u: goto label_469e40;
        case 0x469e58u: goto label_469e58;
        case 0x469e74u: goto label_469e74;
        default: break;
    }

    ctx->pc = 0x469e00u;

    // 0x469e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x469e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x469e04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x469e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x469e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x469e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x469e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x469e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x469e10: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x469e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x469e14: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x469e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x469e18: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x469e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x469e1c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x469e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x469e20: 0xc11aa58  jal         func_46A960
    ctx->pc = 0x469E20u;
    SET_GPR_U32(ctx, 31, 0x469E28u);
    ctx->pc = 0x46A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A960u, 0x469E20u, 0x469E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469E28u;
label_469e28:
    // 0x469e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x469e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469e2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x469e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x469e30: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x469e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x469e34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x469e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469e38: 0xc11ab90  jal         func_46AE40
    ctx->pc = 0x469E38u;
    SET_GPR_U32(ctx, 31, 0x469E40u);
    ctx->pc = 0x46AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AE40u, 0x469E38u, 0x469E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469E40u;
label_469e40:
    // 0x469e40: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x469e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x469e44: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x469e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x469e48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x469e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x469e4c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x469e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x469e50: 0xc11a7b8  jal         func_469EE0
    ctx->pc = 0x469E50u;
    SET_GPR_U32(ctx, 31, 0x469E58u);
    ctx->pc = 0x469EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469EE0u, 0x469E50u, 0x469E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469E58u;
label_469e58:
    // 0x469e58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x469e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x469e5c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x469e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x469e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x469e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469e64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x469e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469e68: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x469e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469e6c: 0xc11a7a8  jal         func_469EA0
    ctx->pc = 0x469E6Cu;
    SET_GPR_U32(ctx, 31, 0x469E74u);
    ctx->pc = 0x469EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469EA0u, 0x469E6Cu, 0x469E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469E74u;
label_469e74:
    // 0x469e74: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x469e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x469e78: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x469e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x469e7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x469e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469e80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x469e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x469e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469e88: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x469e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x469e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x469E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469E94u;
    // 0x469e94: 0x0  nop
    ctx->pc = 0x469e94u;
    // NOP
    // 0x469e98: 0x0  nop
    ctx->pc = 0x469e98u;
    // NOP
    // 0x469e9c: 0x0  nop
    ctx->pc = 0x469e9cu;
    // NOP
    ctx->pc = 0x469ea0u;
}
