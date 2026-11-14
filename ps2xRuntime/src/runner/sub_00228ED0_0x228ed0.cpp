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

// Function: sub_00228ED0
// Address: 0x228ed0 - 0x229040
void sub_00228ED0_0x228ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228ED0_0x228ed0");
#endif

    switch (ctx->pc) {
        case 0x228f04u: goto label_228f04;
        case 0x228f18u: goto label_228f18;
        case 0x228f3cu: goto label_228f3c;
        case 0x228f64u: goto label_228f64;
        case 0x228f88u: goto label_228f88;
        case 0x228fb0u: goto label_228fb0;
        case 0x228fe0u: goto label_228fe0;
        case 0x228ff0u: goto label_228ff0;
        case 0x22901cu: goto label_22901c;
        default: break;
    }

    ctx->pc = 0x228ed0u;

    // 0x228ed0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x228ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x228ed4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x228ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x228ed8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x228ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x228edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x228ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x228ee4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x228ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x228ee8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x228ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x228eec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x228eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x228ef0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x228ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x228ef4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x228ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x228ef8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x228ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228efc: 0xc08a480  jal         func_229200
    ctx->pc = 0x228EFCu;
    SET_GPR_U32(ctx, 31, 0x228F04u);
    ctx->pc = 0x229200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229200u, 0x228EFCu, 0x228F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F04u;
label_228f04:
    // 0x228f04: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x228f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x228f08: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x228f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x228f0c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x228f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x228f10: 0xc041954  jal         func_106550
    ctx->pc = 0x228F10u;
    SET_GPR_U32(ctx, 31, 0x228F18u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x228F10u, 0x228F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F18u;
label_228f18:
    // 0x228f18: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x228f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x228f1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x228f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228f20: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x228f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228f24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x228f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228f28: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x228f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x228f2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x228f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f34: 0xc08ab4c  jal         func_22AD30
    ctx->pc = 0x228F34u;
    SET_GPR_U32(ctx, 31, 0x228F3Cu);
    ctx->pc = 0x22AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AD30u, 0x228F34u, 0x228F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F3Cu;
label_228f3c:
    // 0x228f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x228f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f40: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x228f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x228f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228f48: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x228f48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x228f4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x228f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228f50: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x228f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228f54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x228f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f58: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x228f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x228f5c: 0xc08a460  jal         func_229180
    ctx->pc = 0x228F5Cu;
    SET_GPR_U32(ctx, 31, 0x228F64u);
    ctx->pc = 0x229180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229180u, 0x228F5Cu, 0x228F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F64u;
label_228f64:
    // 0x228f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f68: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x228f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228f70: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x228F70u;
    {
        const bool branch_taken_0x228f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x228f70) {
            ctx->pc = 0x228F94u;
            goto label_228f94;
        }
    }
    ctx->pc = 0x228F78u;
    // 0x228f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f7c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x228f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228f80: 0xc08a490  jal         func_229240
    ctx->pc = 0x228F80u;
    SET_GPR_U32(ctx, 31, 0x228F88u);
    ctx->pc = 0x229240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229240u, 0x228F80u, 0x228F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F88u;
label_228f88:
    // 0x228f88: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x228f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x228f8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x228F8Cu;
    {
        const bool branch_taken_0x228f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f8c) {
            ctx->pc = 0x228FB4u;
            goto label_228fb4;
        }
    }
    ctx->pc = 0x228F94u;
label_228f94:
    // 0x228f94: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x228f94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x228f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f9c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x228f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228fa0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x228fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228fa4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x228fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x228fa8: 0xc08a440  jal         func_229100
    ctx->pc = 0x228FA8u;
    SET_GPR_U32(ctx, 31, 0x228FB0u);
    ctx->pc = 0x229100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229100u, 0x228FA8u, 0x228FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FB0u;
label_228fb0:
    // 0x228fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228fb4:
    // 0x228fb4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x228fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x228fb8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x228FB8u;
    {
        const bool branch_taken_0x228fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228fb8) {
            ctx->pc = 0x228FE4u;
            goto label_228fe4;
        }
    }
    ctx->pc = 0x228FC0u;
    // 0x228fc0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x228fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228fc4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x228fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x228fc8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x228fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228fcc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x228fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228fd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x228fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fd4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x228fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x228fd8: 0xc08a460  jal         func_229180
    ctx->pc = 0x228FD8u;
    SET_GPR_U32(ctx, 31, 0x228FE0u);
    ctx->pc = 0x229180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229180u, 0x228FD8u, 0x228FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FE0u;
label_228fe0:
    // 0x228fe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228fe4:
    // 0x228fe4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x228fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228fe8: 0xc08a424  jal         func_229090
    ctx->pc = 0x228FE8u;
    SET_GPR_U32(ctx, 31, 0x228FF0u);
    ctx->pc = 0x229090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229090u, 0x228FE8u, 0x228FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FF0u;
label_228ff0:
    // 0x228ff0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x228ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x228ff4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x228ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x228ff8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x228ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x228ffc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x228ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x229000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x229000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x229004: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x229004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x229008: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x229008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22900c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229010: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x229010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229014: 0xc08a410  jal         func_229040
    ctx->pc = 0x229014u;
    SET_GPR_U32(ctx, 31, 0x22901Cu);
    ctx->pc = 0x229040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229040u, 0x229014u, 0x22901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22901Cu;
label_22901c:
    // 0x22901c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x229020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22902c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22902cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x229030: 0x3e00008  jr          $ra
    ctx->pc = 0x229030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229038u;
    // 0x229038: 0x0  nop
    ctx->pc = 0x229038u;
    // NOP
    // 0x22903c: 0x0  nop
    ctx->pc = 0x22903cu;
    // NOP
    ctx->pc = 0x229040u;
}
