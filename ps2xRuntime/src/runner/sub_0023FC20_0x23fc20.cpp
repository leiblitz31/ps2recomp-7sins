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

// Function: sub_0023FC20
// Address: 0x23fc20 - 0x23fd80
void sub_0023FC20_0x23fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FC20_0x23fc20");
#endif

    switch (ctx->pc) {
        case 0x23fc54u: goto label_23fc54;
        case 0x23fc68u: goto label_23fc68;
        case 0x23fc8cu: goto label_23fc8c;
        case 0x23fcb4u: goto label_23fcb4;
        case 0x23fcd8u: goto label_23fcd8;
        case 0x23fd00u: goto label_23fd00;
        case 0x23fd30u: goto label_23fd30;
        case 0x23fd40u: goto label_23fd40;
        case 0x23fd5cu: goto label_23fd5c;
        default: break;
    }

    ctx->pc = 0x23fc20u;

    // 0x23fc20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23fc24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23fc28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23fc2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fc30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23fc34: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x23fc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x23fc38: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x23fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x23fc3c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x23fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x23fc40: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x23fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x23fc44: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x23fc44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x23fc48: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fc4c: 0xc08ffd4  jal         func_23FF50
    ctx->pc = 0x23FC4Cu;
    SET_GPR_U32(ctx, 31, 0x23FC54u);
    ctx->pc = 0x23FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FF50u, 0x23FC4Cu, 0x23FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC54u;
label_23fc54:
    // 0x23fc54: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x23fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x23fc58: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x23fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x23fc5c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23fc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23fc60: 0xc041954  jal         func_106550
    ctx->pc = 0x23FC60u;
    SET_GPR_U32(ctx, 31, 0x23FC68u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x23FC60u, 0x23FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC68u;
label_23fc68:
    // 0x23fc68: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x23fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x23fc6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fc70: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23fc70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fc74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fc78: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x23fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23fc7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23fc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23fc80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc84: 0xc090020  jal         func_240080
    ctx->pc = 0x23FC84u;
    SET_GPR_U32(ctx, 31, 0x23FC8Cu);
    ctx->pc = 0x240080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240080u, 0x23FC84u, 0x23FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC8Cu;
label_23fc8c:
    // 0x23fc8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23fc8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc90: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x23fc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc94: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fc98: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x23fc98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fc9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fca0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x23fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23fca4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23fca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fca8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x23fca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23fcac: 0xc08ffb4  jal         func_23FED0
    ctx->pc = 0x23FCACu;
    SET_GPR_U32(ctx, 31, 0x23FCB4u);
    ctx->pc = 0x23FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FED0u, 0x23FCACu, 0x23FCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCB4u;
label_23fcb4:
    // 0x23fcb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23fcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcb8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x23fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23fcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fcc0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FCC0u;
    {
        const bool branch_taken_0x23fcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23fcc0) {
            ctx->pc = 0x23FCE4u;
            goto label_23fce4;
        }
    }
    ctx->pc = 0x23FCC8u;
    // 0x23fcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fccc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x23fcccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23fcd0: 0xc08ffe4  jal         func_23FF90
    ctx->pc = 0x23FCD0u;
    SET_GPR_U32(ctx, 31, 0x23FCD8u);
    ctx->pc = 0x23FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FF90u, 0x23FCD0u, 0x23FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCD8u;
label_23fcd8:
    // 0x23fcd8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x23fcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x23fcdc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23FCDCu;
    {
        const bool branch_taken_0x23fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fcdc) {
            ctx->pc = 0x23FD04u;
            goto label_23fd04;
        }
    }
    ctx->pc = 0x23FCE4u;
label_23fce4:
    // 0x23fce4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x23fce4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcec: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23fcecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23fcf0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x23fcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23fcf4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x23fcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x23fcf8: 0xc08ff94  jal         func_23FE50
    ctx->pc = 0x23FCF8u;
    SET_GPR_U32(ctx, 31, 0x23FD00u);
    ctx->pc = 0x23FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FE50u, 0x23FCF8u, 0x23FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD00u;
label_23fd00:
    // 0x23fd00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23fd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fd04:
    // 0x23fd04: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x23fd04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23fd08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FD08u;
    {
        const bool branch_taken_0x23fd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fd08) {
            ctx->pc = 0x23FD34u;
            goto label_23fd34;
        }
    }
    ctx->pc = 0x23FD10u;
    // 0x23fd10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fd14: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x23fd14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fd18: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x23fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23fd1c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23fd20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23fd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd24: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x23fd24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23fd28: 0xc08ffb4  jal         func_23FED0
    ctx->pc = 0x23FD28u;
    SET_GPR_U32(ctx, 31, 0x23FD30u);
    ctx->pc = 0x23FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FED0u, 0x23FD28u, 0x23FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD30u;
label_23fd30:
    // 0x23fd30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23fd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fd34:
    // 0x23fd34: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fd38: 0xc08ff74  jal         func_23FDD0
    ctx->pc = 0x23FD38u;
    SET_GPR_U32(ctx, 31, 0x23FD40u);
    ctx->pc = 0x23FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FDD0u, 0x23FD38u, 0x23FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD40u;
label_23fd40:
    // 0x23fd40: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x23fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x23fd44: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x23fd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23fd48: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fd4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23fd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23fd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd54: 0xc08ff60  jal         func_23FD80
    ctx->pc = 0x23FD54u;
    SET_GPR_U32(ctx, 31, 0x23FD5Cu);
    ctx->pc = 0x23FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FD80u, 0x23FD54u, 0x23FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD5Cu;
label_23fd5c:
    // 0x23fd5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23fd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fd60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23fd60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fd64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23fd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fd68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fd6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x23fd6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23fd70: 0x3e00008  jr          $ra
    ctx->pc = 0x23FD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FD78u;
    // 0x23fd78: 0x0  nop
    ctx->pc = 0x23fd78u;
    // NOP
    // 0x23fd7c: 0x0  nop
    ctx->pc = 0x23fd7cu;
    // NOP
    ctx->pc = 0x23fd80u;
}
