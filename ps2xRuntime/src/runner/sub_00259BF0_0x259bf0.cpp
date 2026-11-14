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

// Function: sub_00259BF0
// Address: 0x259bf0 - 0x259d40
void sub_00259BF0_0x259bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259BF0_0x259bf0");
#endif

    switch (ctx->pc) {
        case 0x259c0cu: goto label_259c0c;
        case 0x259c4cu: goto label_259c4c;
        case 0x259c90u: goto label_259c90;
        case 0x259ca4u: goto label_259ca4;
        case 0x259cb0u: goto label_259cb0;
        case 0x259cc8u: goto label_259cc8;
        case 0x259cdcu: goto label_259cdc;
        case 0x259d04u: goto label_259d04;
        case 0x259d14u: goto label_259d14;
        default: break;
    }

    ctx->pc = 0x259bf0u;

    // 0x259bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x259bfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x259bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x259c00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x259c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259c04: 0xc0963d0  jal         func_258F40
    ctx->pc = 0x259C04u;
    SET_GPR_U32(ctx, 31, 0x259C0Cu);
    ctx->pc = 0x258F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F40u, 0x259C04u, 0x259C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C0Cu;
label_259c0c:
    // 0x259c0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x259c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259c10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259c1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259c20: 0x3e00008  jr          $ra
    ctx->pc = 0x259C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259C28u;
    // 0x259c28: 0x0  nop
    ctx->pc = 0x259c28u;
    // NOP
    // 0x259c2c: 0x0  nop
    ctx->pc = 0x259c2cu;
    // NOP
    // 0x259c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259c3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x259c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x259c40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x259c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259c44: 0xc0911a4  jal         func_244690
    ctx->pc = 0x259C44u;
    SET_GPR_U32(ctx, 31, 0x259C4Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x259C44u, 0x259C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C4Cu;
label_259c4c:
    // 0x259c4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x259c4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259c50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x259c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259c5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259c60: 0x3e00008  jr          $ra
    ctx->pc = 0x259C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259C68u;
    // 0x259c68: 0x0  nop
    ctx->pc = 0x259c68u;
    // NOP
    // 0x259c6c: 0x0  nop
    ctx->pc = 0x259c6cu;
    // NOP
    // 0x259c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x259c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x259c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259c80: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x259c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x259c84: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x259c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259c88: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x259C88u;
    SET_GPR_U32(ctx, 31, 0x259C90u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x259C88u, 0x259C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C90u;
label_259c90:
    // 0x259c90: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x259c90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259c94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x259c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259c98: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x259c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x259c9c: 0xc095a2c  jal         func_2568B0
    ctx->pc = 0x259C9Cu;
    SET_GPR_U32(ctx, 31, 0x259CA4u);
    ctx->pc = 0x2568B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568B0u, 0x259C9Cu, 0x259CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259CA4u;
label_259ca4:
    // 0x259ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x259CA8u;
    {
        const bool branch_taken_0x259ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ca8) {
            ctx->pc = 0x259CCCu;
            goto label_259ccc;
        }
    }
    ctx->pc = 0x259CB0u;
label_259cb0:
    // 0x259cb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x259cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x259cb4: 0x10020004  beq         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259CB4u;
    {
        const bool branch_taken_0x259cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x259cb4) {
            ctx->pc = 0x259CC8u;
            goto label_259cc8;
        }
    }
    ctx->pc = 0x259CBCu;
    // 0x259cbc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x259cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x259cc0: 0xc08cd4c  jal         func_233530
    ctx->pc = 0x259CC0u;
    SET_GPR_U32(ctx, 31, 0x259CC8u);
    ctx->pc = 0x233530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233530u, 0x259CC0u, 0x259CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259CC8u;
label_259cc8:
    // 0x259cc8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x259cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_259ccc:
    // 0x259ccc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x259cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259cd0: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x259cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x259cd4: 0xc095a24  jal         func_256890
    ctx->pc = 0x259CD4u;
    SET_GPR_U32(ctx, 31, 0x259CDCu);
    ctx->pc = 0x256890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256890u, 0x259CD4u, 0x259CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259CDCu;
label_259cdc:
    // 0x259cdc: 0x1602fff4  bne         $s0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x259CDCu;
    {
        const bool branch_taken_0x259cdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x259cdc) {
            ctx->pc = 0x259CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259cb0;
        }
    }
    ctx->pc = 0x259CE4u;
    // 0x259ce4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x259ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259ce8: 0x8c4201e8  lw          $v0, 0x1E8($v0)
    ctx->pc = 0x259ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x259cec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x259CECu;
    {
        const bool branch_taken_0x259cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259cec) {
            ctx->pc = 0x259D1Cu;
            goto label_259d1c;
        }
    }
    ctx->pc = 0x259CF4u;
    // 0x259cf4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x259cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259cf8: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x259cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x259cfc: 0xc096750  jal         func_259D40
    ctx->pc = 0x259CFCu;
    SET_GPR_U32(ctx, 31, 0x259D04u);
    ctx->pc = 0x259D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259D40u, 0x259CFCu, 0x259D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D04u;
label_259d04:
    // 0x259d04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x259d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259d08: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x259d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x259d0c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x259D0Cu;
    SET_GPR_U32(ctx, 31, 0x259D14u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x259D0Cu, 0x259D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D14u;
label_259d14:
    // 0x259d14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x259d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259d18: 0xac4001e8  sw          $zero, 0x1E8($v0)
    ctx->pc = 0x259d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 0));
label_259d1c:
    // 0x259d1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x259d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x259d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259d2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x259d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x259d30: 0x3e00008  jr          $ra
    ctx->pc = 0x259D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259D38u;
    // 0x259d38: 0x0  nop
    ctx->pc = 0x259d38u;
    // NOP
    // 0x259d3c: 0x0  nop
    ctx->pc = 0x259d3cu;
    // NOP
    ctx->pc = 0x259d40u;
}
