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

// Function: sub_0010EA40
// Address: 0x10ea40 - 0x10eb20
void sub_0010EA40_0x10ea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EA40_0x10ea40");
#endif

    switch (ctx->pc) {
        case 0x10ea7cu: goto label_10ea7c;
        case 0x10ea8cu: goto label_10ea8c;
        case 0x10eae0u: goto label_10eae0;
        case 0x10eb08u: goto label_10eb08;
        default: break;
    }

    ctx->pc = 0x10ea40u;

    // 0x10ea40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ea44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10ea48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ea4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10ea50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ea54: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10ea54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10ea58: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EA60u;
    // 0x10ea60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ea64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ea68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10ea6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10ea70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ea74: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x10EA74u;
    SET_GPR_U32(ctx, 31, 0x10EA7Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x10EA74u, 0x10EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA7Cu;
label_10ea7c:
    // 0x10ea7c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10ea7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10ea80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ea84: 0xc043ac8  jal         func_10EB20
    ctx->pc = 0x10EA84u;
    SET_GPR_U32(ctx, 31, 0x10EA8Cu);
    ctx->pc = 0x10EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB20u, 0x10EA84u, 0x10EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA8Cu;
label_10ea8c:
    // 0x10ea8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10ea90: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10ea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x10ea94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10ea98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10ea98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10ea9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10ea9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10eaa0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10eaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10eaa4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10eaa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10eaa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10eaa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eaac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10eaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10eab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eab4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10eab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10eab8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EAC0u;
    // 0x10eac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10eac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10eacc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10ead0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ead4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ead8: 0xc08ec68  jal         func_23B1A0
    ctx->pc = 0x10EAD8u;
    SET_GPR_U32(ctx, 31, 0x10EAE0u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x10EAD8u, 0x10EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAE0u;
label_10eae0:
    // 0x10eae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10eae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eae4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10eae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10eae8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EAF0u;
    // 0x10eaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10eaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10eaf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10eafc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eb00: 0xc08ec70  jal         func_23B1C0
    ctx->pc = 0x10EB00u;
    SET_GPR_U32(ctx, 31, 0x10EB08u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x10EB00u, 0x10EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB08u;
label_10eb08:
    // 0x10eb08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10eb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eb0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10eb0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10eb10: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EB18u;
    // 0x10eb18: 0x0  nop
    ctx->pc = 0x10eb18u;
    // NOP
    // 0x10eb1c: 0x0  nop
    ctx->pc = 0x10eb1cu;
    // NOP
    ctx->pc = 0x10eb20u;
}
