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

// Function: sub_00151A70
// Address: 0x151a70 - 0x151b20
void sub_00151A70_0x151a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151A70_0x151a70");
#endif

    switch (ctx->pc) {
        case 0x151a70u: goto label_151a70;
        case 0x151a74u: goto label_151a74;
        case 0x151a78u: goto label_151a78;
        case 0x151a7cu: goto label_151a7c;
        case 0x151a80u: goto label_151a80;
        case 0x151a84u: goto label_151a84;
        case 0x151a88u: goto label_151a88;
        case 0x151a8cu: goto label_151a8c;
        case 0x151a90u: goto label_151a90;
        case 0x151a94u: goto label_151a94;
        case 0x151a98u: goto label_151a98;
        case 0x151a9cu: goto label_151a9c;
        case 0x151aa0u: goto label_151aa0;
        case 0x151aa4u: goto label_151aa4;
        case 0x151aa8u: goto label_151aa8;
        case 0x151aacu: goto label_151aac;
        case 0x151ab0u: goto label_151ab0;
        case 0x151ab4u: goto label_151ab4;
        case 0x151ab8u: goto label_151ab8;
        case 0x151abcu: goto label_151abc;
        case 0x151ac0u: goto label_151ac0;
        case 0x151ac4u: goto label_151ac4;
        case 0x151ac8u: goto label_151ac8;
        case 0x151accu: goto label_151acc;
        case 0x151ad0u: goto label_151ad0;
        case 0x151ad4u: goto label_151ad4;
        case 0x151ad8u: goto label_151ad8;
        case 0x151adcu: goto label_151adc;
        case 0x151ae0u: goto label_151ae0;
        case 0x151ae4u: goto label_151ae4;
        case 0x151ae8u: goto label_151ae8;
        case 0x151aecu: goto label_151aec;
        case 0x151af0u: goto label_151af0;
        case 0x151af4u: goto label_151af4;
        case 0x151af8u: goto label_151af8;
        case 0x151afcu: goto label_151afc;
        case 0x151b00u: goto label_151b00;
        case 0x151b04u: goto label_151b04;
        case 0x151b08u: goto label_151b08;
        case 0x151b0cu: goto label_151b0c;
        case 0x151b10u: goto label_151b10;
        case 0x151b14u: goto label_151b14;
        case 0x151b18u: goto label_151b18;
        case 0x151b1cu: goto label_151b1c;
        default: break;
    }

    ctx->pc = 0x151a70u;

label_151a70:
    // 0x151a70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_151a74:
    // 0x151a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_151a78:
    // 0x151a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_151a7c:
    // 0x151a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_151a80:
    // 0x151a80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x151a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_151a84:
    // 0x151a84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x151a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_151a88:
    // 0x151a88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_151a8c:
    if (ctx->pc == 0x151A8Cu) {
        ctx->pc = 0x151A90u;
        goto label_151a90;
    }
    ctx->pc = 0x151A88u;
    {
        const bool branch_taken_0x151a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151a88) {
            ctx->pc = 0x151A98u;
            goto label_151a98;
        }
    }
    ctx->pc = 0x151A90u;
label_151a90:
    // 0x151a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151a94:
    // 0x151a94: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x151a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_151a98:
    // 0x151a98: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x151a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_151a9c:
    // 0x151a9c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x151a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_151aa0:
    // 0x151aa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151aa4:
    // 0x151aa4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x151aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_151aa8:
    // 0x151aa8: 0xc119b68  jal         func_466DA0
label_151aac:
    if (ctx->pc == 0x151AACu) {
        ctx->pc = 0x151AB0u;
        goto label_151ab0;
    }
    ctx->pc = 0x151AA8u;
    SET_GPR_U32(ctx, 31, 0x151AB0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x151AA8u, 0x151AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AB0u;
label_151ab0:
    // 0x151ab0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x151ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_151ab4:
    // 0x151ab4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_151ab8:
    if (ctx->pc == 0x151AB8u) {
        ctx->pc = 0x151ABCu;
        goto label_151abc;
    }
    ctx->pc = 0x151AB4u;
    {
        const bool branch_taken_0x151ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ab4) {
            ctx->pc = 0x151AC8u;
            goto label_151ac8;
        }
    }
    ctx->pc = 0x151ABCu;
label_151abc:
    // 0x151abc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x151abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151ac0:
    // 0x151ac0: 0x1000000e  b           . + 4 + (0xE << 2)
label_151ac4:
    if (ctx->pc == 0x151AC4u) {
        ctx->pc = 0x151AC8u;
        goto label_151ac8;
    }
    ctx->pc = 0x151AC0u;
    {
        const bool branch_taken_0x151ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ac0) {
            ctx->pc = 0x151AFCu;
            goto label_151afc;
        }
    }
    ctx->pc = 0x151AC8u;
label_151ac8:
    // 0x151ac8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x151ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151acc:
    // 0x151acc: 0xc0ba088  jal         func_2E8220
label_151ad0:
    if (ctx->pc == 0x151AD0u) {
        ctx->pc = 0x151AD4u;
        goto label_151ad4;
    }
    ctx->pc = 0x151ACCu;
    SET_GPR_U32(ctx, 31, 0x151AD4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x151ACCu, 0x151AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AD4u;
label_151ad4:
    // 0x151ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_151ad8:
    // 0x151ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151adc:
    // 0x151adc: 0xc0ba088  jal         func_2E8220
label_151ae0:
    if (ctx->pc == 0x151AE0u) {
        ctx->pc = 0x151AE4u;
        goto label_151ae4;
    }
    ctx->pc = 0x151ADCu;
    SET_GPR_U32(ctx, 31, 0x151AE4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x151ADCu, 0x151AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AE4u;
label_151ae4:
    // 0x151ae4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_151ae8:
    if (ctx->pc == 0x151AE8u) {
        ctx->pc = 0x151AECu;
        goto label_151aec;
    }
    ctx->pc = 0x151AE4u;
    {
        const bool branch_taken_0x151ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ae4) {
            ctx->pc = 0x151A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151a98;
        }
    }
    ctx->pc = 0x151AECu;
label_151aec:
    // 0x151aec: 0x200f809  jalr        $s0
label_151af0:
    if (ctx->pc == 0x151AF0u) {
        ctx->pc = 0x151AF4u;
        goto label_151af4;
    }
    ctx->pc = 0x151AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x151AF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151AECu, 0x151AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151AF4u;
label_151af4:
    // 0x151af4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_151af8:
    if (ctx->pc == 0x151AF8u) {
        ctx->pc = 0x151AFCu;
        goto label_151afc;
    }
    ctx->pc = 0x151AF4u;
    {
        const bool branch_taken_0x151af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151af4) {
            ctx->pc = 0x151A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151a98;
        }
    }
    ctx->pc = 0x151AFCu;
label_151afc:
    // 0x151afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_151b00:
    // 0x151b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151b04:
    // 0x151b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151b08:
    // 0x151b08: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x151b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_151b0c:
    // 0x151b0c: 0x3e00008  jr          $ra
label_151b10:
    if (ctx->pc == 0x151B10u) {
        ctx->pc = 0x151B14u;
        goto label_151b14;
    }
    ctx->pc = 0x151B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151B14u;
label_151b14:
    // 0x151b14: 0x0  nop
    ctx->pc = 0x151b14u;
    // NOP
label_151b18:
    // 0x151b18: 0x0  nop
    ctx->pc = 0x151b18u;
    // NOP
label_151b1c:
    // 0x151b1c: 0x0  nop
    ctx->pc = 0x151b1cu;
    // NOP
    ctx->pc = 0x151b20u;
}
