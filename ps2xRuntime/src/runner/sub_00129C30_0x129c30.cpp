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

// Function: sub_00129C30
// Address: 0x129c30 - 0x129d90
void sub_00129C30_0x129c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129C30_0x129c30");
#endif

    switch (ctx->pc) {
        case 0x129c64u: goto label_129c64;
        case 0x129c78u: goto label_129c78;
        case 0x129c9cu: goto label_129c9c;
        case 0x129cc4u: goto label_129cc4;
        case 0x129ce8u: goto label_129ce8;
        case 0x129d10u: goto label_129d10;
        case 0x129d40u: goto label_129d40;
        case 0x129d50u: goto label_129d50;
        case 0x129d74u: goto label_129d74;
        default: break;
    }

    ctx->pc = 0x129c30u;

    // 0x129c30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x129c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x129c34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x129c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x129c38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x129c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x129c3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x129c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x129c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129c44: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x129c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x129c48: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x129c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x129c4c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x129c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x129c50: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x129c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x129c54: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x129c54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x129c58: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x129c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129c5c: 0xc049b20  jal         func_126C80
    ctx->pc = 0x129C5Cu;
    SET_GPR_U32(ctx, 31, 0x129C64u);
    ctx->pc = 0x126C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C80u, 0x129C5Cu, 0x129C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C64u;
label_129c64:
    // 0x129c64: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x129c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x129c68: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x129c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x129c6c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x129c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x129c70: 0xc041954  jal         func_106550
    ctx->pc = 0x129C70u;
    SET_GPR_U32(ctx, 31, 0x129C78u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x129C70u, 0x129C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C78u;
label_129c78:
    // 0x129c78: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x129c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x129c7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x129c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129c80: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x129c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129c84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x129c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129c88: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x129c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x129c8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x129c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x129c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c94: 0xc04aac4  jal         func_12AB10
    ctx->pc = 0x129C94u;
    SET_GPR_U32(ctx, 31, 0x129C9Cu);
    ctx->pc = 0x12AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AB10u, 0x129C94u, 0x129C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C9Cu;
label_129c9c:
    // 0x129c9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ca0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x129ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ca4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x129ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129ca8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x129ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x129cac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x129cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129cb0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x129cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x129cb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x129cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cb8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x129cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x129cbc: 0xc04a7b4  jal         func_129ED0
    ctx->pc = 0x129CBCu;
    SET_GPR_U32(ctx, 31, 0x129CC4u);
    ctx->pc = 0x129ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129ED0u, 0x129CBCu, 0x129CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CC4u;
label_129cc4:
    // 0x129cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cc8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x129ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129cd0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129CD0u;
    {
        const bool branch_taken_0x129cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x129cd0) {
            ctx->pc = 0x129CF4u;
            goto label_129cf4;
        }
    }
    ctx->pc = 0x129CD8u;
    // 0x129cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cdc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x129cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129ce0: 0xc04a7d4  jal         func_129F50
    ctx->pc = 0x129CE0u;
    SET_GPR_U32(ctx, 31, 0x129CE8u);
    ctx->pc = 0x129F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F50u, 0x129CE0u, 0x129CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CE8u;
label_129ce8:
    // 0x129ce8: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x129ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x129cec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x129CECu;
    {
        const bool branch_taken_0x129cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129cec) {
            ctx->pc = 0x129D14u;
            goto label_129d14;
        }
    }
    ctx->pc = 0x129CF4u;
label_129cf4:
    // 0x129cf4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x129cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x129cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cfc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x129cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x129d00: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x129d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129d04: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x129d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x129d08: 0xc04a794  jal         func_129E50
    ctx->pc = 0x129D08u;
    SET_GPR_U32(ctx, 31, 0x129D10u);
    ctx->pc = 0x129E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E50u, 0x129D08u, 0x129D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D10u;
label_129d10:
    // 0x129d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129d14:
    // 0x129d14: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x129d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x129d18: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x129D18u;
    {
        const bool branch_taken_0x129d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129d18) {
            ctx->pc = 0x129D44u;
            goto label_129d44;
        }
    }
    ctx->pc = 0x129D20u;
    // 0x129d20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x129d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129d24: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x129d24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x129d28: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x129d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x129d2c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x129d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x129d30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x129d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d34: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x129d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129d38: 0xc04a7b4  jal         func_129ED0
    ctx->pc = 0x129D38u;
    SET_GPR_U32(ctx, 31, 0x129D40u);
    ctx->pc = 0x129ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129ED0u, 0x129D38u, 0x129D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D40u;
label_129d40:
    // 0x129d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129d44:
    // 0x129d44: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x129d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129d48: 0xc04a778  jal         func_129DE0
    ctx->pc = 0x129D48u;
    SET_GPR_U32(ctx, 31, 0x129D50u);
    ctx->pc = 0x129DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129DE0u, 0x129D48u, 0x129D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D50u;
label_129d50:
    // 0x129d50: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x129d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x129d54: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x129d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x129d58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x129d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x129d5c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x129d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x129d60: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x129d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129d64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x129d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d6c: 0xc04a764  jal         func_129D90
    ctx->pc = 0x129D6Cu;
    SET_GPR_U32(ctx, 31, 0x129D74u);
    ctx->pc = 0x129D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129D90u, 0x129D6Cu, 0x129D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D74u;
label_129d74:
    // 0x129d74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x129d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x129d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129d84: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x129d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x129d88: 0x3e00008  jr          $ra
    ctx->pc = 0x129D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129D90u;
}
