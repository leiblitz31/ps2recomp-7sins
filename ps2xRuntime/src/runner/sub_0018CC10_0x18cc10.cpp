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

// Function: sub_0018CC10
// Address: 0x18cc10 - 0x18cd70
void sub_0018CC10_0x18cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CC10_0x18cc10");
#endif

    switch (ctx->pc) {
        case 0x18cc44u: goto label_18cc44;
        case 0x18cc58u: goto label_18cc58;
        case 0x18cc7cu: goto label_18cc7c;
        case 0x18cca4u: goto label_18cca4;
        case 0x18ccc8u: goto label_18ccc8;
        case 0x18ccf0u: goto label_18ccf0;
        case 0x18cd20u: goto label_18cd20;
        case 0x18cd30u: goto label_18cd30;
        case 0x18cd4cu: goto label_18cd4c;
        default: break;
    }

    ctx->pc = 0x18cc10u;

    // 0x18cc10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18cc14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18cc18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18cc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18cc1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18cc20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18cc24: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x18cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x18cc28: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x18cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x18cc2c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x18cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x18cc30: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x18cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x18cc34: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x18cc34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x18cc38: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cc3c: 0xc0633d0  jal         func_18CF40
    ctx->pc = 0x18CC3Cu;
    SET_GPR_U32(ctx, 31, 0x18CC44u);
    ctx->pc = 0x18CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF40u, 0x18CC3Cu, 0x18CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC44u;
label_18cc44:
    // 0x18cc44: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x18cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x18cc48: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x18cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x18cc4c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18cc50: 0xc041954  jal         func_106550
    ctx->pc = 0x18CC50u;
    SET_GPR_U32(ctx, 31, 0x18CC58u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x18CC50u, 0x18CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC58u;
label_18cc58:
    // 0x18cc58: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x18cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x18cc5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cc60: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x18cc60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18cc64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cc68: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x18cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18cc6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18cc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cc70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc74: 0xc063d8c  jal         func_18F630
    ctx->pc = 0x18CC74u;
    SET_GPR_U32(ctx, 31, 0x18CC7Cu);
    ctx->pc = 0x18F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F630u, 0x18CC74u, 0x18CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC7Cu;
label_18cc7c:
    // 0x18cc7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18cc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc80: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x18cc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cc88: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x18cc88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cc8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cc90: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x18cc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18cc94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc98: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x18cc98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x18cc9c: 0xc0633b0  jal         func_18CEC0
    ctx->pc = 0x18CC9Cu;
    SET_GPR_U32(ctx, 31, 0x18CCA4u);
    ctx->pc = 0x18CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CEC0u, 0x18CC9Cu, 0x18CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCA4u;
label_18cca4:
    // 0x18cca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18cca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cca8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x18cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18ccac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ccb0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CCB0u;
    {
        const bool branch_taken_0x18ccb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ccb0) {
            ctx->pc = 0x18CCD4u;
            goto label_18ccd4;
        }
    }
    ctx->pc = 0x18CCB8u;
    // 0x18ccb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccbc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x18ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ccc0: 0xc0633e0  jal         func_18CF80
    ctx->pc = 0x18CCC0u;
    SET_GPR_U32(ctx, 31, 0x18CCC8u);
    ctx->pc = 0x18CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF80u, 0x18CCC0u, 0x18CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCC8u;
label_18ccc8:
    // 0x18ccc8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x18ccc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x18cccc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18CCCCu;
    {
        const bool branch_taken_0x18cccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cccc) {
            ctx->pc = 0x18CCF4u;
            goto label_18ccf4;
        }
    }
    ctx->pc = 0x18CCD4u;
label_18ccd4:
    // 0x18ccd4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x18ccd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ccd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ccd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccdc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x18ccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18cce0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x18cce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18cce4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x18cce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x18cce8: 0xc063390  jal         func_18CE40
    ctx->pc = 0x18CCE8u;
    SET_GPR_U32(ctx, 31, 0x18CCF0u);
    ctx->pc = 0x18CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CE40u, 0x18CCE8u, 0x18CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCF0u;
label_18ccf0:
    // 0x18ccf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ccf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ccf4:
    // 0x18ccf4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x18ccf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18ccf8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18CCF8u;
    {
        const bool branch_taken_0x18ccf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ccf8) {
            ctx->pc = 0x18CD24u;
            goto label_18cd24;
        }
    }
    ctx->pc = 0x18CD00u;
    // 0x18cd00: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cd04: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x18cd04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cd08: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18cd0c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18cd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18cd10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18cd10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd14: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x18cd14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18cd18: 0xc0633b0  jal         func_18CEC0
    ctx->pc = 0x18CD18u;
    SET_GPR_U32(ctx, 31, 0x18CD20u);
    ctx->pc = 0x18CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CEC0u, 0x18CD18u, 0x18CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD20u;
label_18cd20:
    // 0x18cd20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18cd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18cd24:
    // 0x18cd24: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cd28: 0xc063370  jal         func_18CDC0
    ctx->pc = 0x18CD28u;
    SET_GPR_U32(ctx, 31, 0x18CD30u);
    ctx->pc = 0x18CDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CDC0u, 0x18CD28u, 0x18CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD30u;
label_18cd30:
    // 0x18cd30: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x18cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x18cd34: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x18cd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18cd38: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cd3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18cd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18cd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd44: 0xc06335c  jal         func_18CD70
    ctx->pc = 0x18CD44u;
    SET_GPR_U32(ctx, 31, 0x18CD4Cu);
    ctx->pc = 0x18CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD70u, 0x18CD44u, 0x18CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD4Cu;
label_18cd4c:
    // 0x18cd4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cd50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18cd50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cd54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cd54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cd58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18cd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cd5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x18cd5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18cd60: 0x3e00008  jr          $ra
    ctx->pc = 0x18CD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CD68u;
    // 0x18cd68: 0x0  nop
    ctx->pc = 0x18cd68u;
    // NOP
    // 0x18cd6c: 0x0  nop
    ctx->pc = 0x18cd6cu;
    // NOP
    ctx->pc = 0x18cd70u;
}
