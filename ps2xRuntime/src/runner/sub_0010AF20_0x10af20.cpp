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

// Function: sub_0010AF20
// Address: 0x10af20 - 0x10b000
void sub_0010AF20_0x10af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AF20_0x10af20");
#endif

    switch (ctx->pc) {
        case 0x10af5cu: goto label_10af5c;
        case 0x10af6cu: goto label_10af6c;
        case 0x10afc0u: goto label_10afc0;
        case 0x10afe8u: goto label_10afe8;
        default: break;
    }

    ctx->pc = 0x10af20u;

    // 0x10af20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10af24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10af24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10af28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10af30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af34: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10af34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10af38: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AF40u;
    // 0x10af40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10af44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10af48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10af48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10af4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10af50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10af54: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x10AF54u;
    SET_GPR_U32(ctx, 31, 0x10AF5Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x10AF54u, 0x10AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF5Cu;
label_10af5c:
    // 0x10af5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10af5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10af60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10af60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10af64: 0xc042c00  jal         func_10B000
    ctx->pc = 0x10AF64u;
    SET_GPR_U32(ctx, 31, 0x10AF6Cu);
    ctx->pc = 0x10B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B000u, 0x10AF64u, 0x10AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF6Cu;
label_10af6c:
    // 0x10af6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10af6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10af70: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10af70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x10af74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10af78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10af78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10af7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10af7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10af80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10af84: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10af84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10af88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10af88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10af8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10af90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10af94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10af98: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AFA0u;
    // 0x10afa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10afa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10afa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10afac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10afacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10afb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10afb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10afb8: 0xc08ec68  jal         func_23B1A0
    ctx->pc = 0x10AFB8u;
    SET_GPR_U32(ctx, 31, 0x10AFC0u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x10AFB8u, 0x10AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFC0u;
label_10afc0:
    // 0x10afc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10afc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10afc4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10afc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10afc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10AFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AFD0u;
    // 0x10afd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10afd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10afd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10afdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10afe0: 0xc08ec70  jal         func_23B1C0
    ctx->pc = 0x10AFE0u;
    SET_GPR_U32(ctx, 31, 0x10AFE8u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x10AFE0u, 0x10AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFE8u;
label_10afe8:
    // 0x10afe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10afe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10afec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10afecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10aff0: 0x3e00008  jr          $ra
    ctx->pc = 0x10AFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AFF8u;
    // 0x10aff8: 0x0  nop
    ctx->pc = 0x10aff8u;
    // NOP
    // 0x10affc: 0x0  nop
    ctx->pc = 0x10affcu;
    // NOP
    ctx->pc = 0x10b000u;
}
