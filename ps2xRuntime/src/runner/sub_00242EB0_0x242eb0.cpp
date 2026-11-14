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

// Function: sub_00242EB0
// Address: 0x242eb0 - 0x243010
void sub_00242EB0_0x242eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242EB0_0x242eb0");
#endif

    switch (ctx->pc) {
        case 0x242ee4u: goto label_242ee4;
        case 0x242ef8u: goto label_242ef8;
        case 0x242f1cu: goto label_242f1c;
        case 0x242f44u: goto label_242f44;
        case 0x242f68u: goto label_242f68;
        case 0x242f90u: goto label_242f90;
        case 0x242fc0u: goto label_242fc0;
        case 0x242fd0u: goto label_242fd0;
        case 0x242fecu: goto label_242fec;
        default: break;
    }

    ctx->pc = 0x242eb0u;

    // 0x242eb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x242eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x242eb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x242eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x242eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x242eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x242ebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242ec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x242ec4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x242ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x242ec8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x242ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x242ecc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x242eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x242ed0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x242ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x242ed4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x242ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x242ed8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x242ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242edc: 0xc090c78  jal         func_2431E0
    ctx->pc = 0x242EDCu;
    SET_GPR_U32(ctx, 31, 0x242EE4u);
    ctx->pc = 0x2431E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2431E0u, 0x242EDCu, 0x242EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242EE4u;
label_242ee4:
    // 0x242ee4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x242ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x242ee8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x242ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x242eec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x242eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x242ef0: 0xc041954  jal         func_106550
    ctx->pc = 0x242EF0u;
    SET_GPR_U32(ctx, 31, 0x242EF8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x242EF0u, 0x242EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242EF8u;
label_242ef8:
    // 0x242ef8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x242ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x242efc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242f00: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x242f00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242f04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x242f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242f08: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x242f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x242f0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x242f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f14: 0xc090e14  jal         func_243850
    ctx->pc = 0x242F14u;
    SET_GPR_U32(ctx, 31, 0x242F1Cu);
    ctx->pc = 0x243850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243850u, 0x242F14u, 0x242F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F1Cu;
label_242f1c:
    // 0x242f1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x242f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f20: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x242f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x242f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242f28: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x242f28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x242f2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242f30: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x242f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x242f34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x242f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f38: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x242f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x242f3c: 0xc090c58  jal         func_243160
    ctx->pc = 0x242F3Cu;
    SET_GPR_U32(ctx, 31, 0x242F44u);
    ctx->pc = 0x243160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243160u, 0x242F3Cu, 0x242F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F44u;
label_242f44:
    // 0x242f44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f48: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x242f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x242f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242f50: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x242F50u;
    {
        const bool branch_taken_0x242f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x242f50) {
            ctx->pc = 0x242F74u;
            goto label_242f74;
        }
    }
    ctx->pc = 0x242F58u;
    // 0x242f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f5c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x242f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x242f60: 0xc090c88  jal         func_243220
    ctx->pc = 0x242F60u;
    SET_GPR_U32(ctx, 31, 0x242F68u);
    ctx->pc = 0x243220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243220u, 0x242F60u, 0x242F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F68u;
label_242f68:
    // 0x242f68: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x242f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x242f6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x242F6Cu;
    {
        const bool branch_taken_0x242f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242f6c) {
            ctx->pc = 0x242F94u;
            goto label_242f94;
        }
    }
    ctx->pc = 0x242F74u;
label_242f74:
    // 0x242f74: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x242f74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x242f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f7c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x242f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x242f80: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x242f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x242f84: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x242f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x242f88: 0xc090c38  jal         func_2430E0
    ctx->pc = 0x242F88u;
    SET_GPR_U32(ctx, 31, 0x242F90u);
    ctx->pc = 0x2430E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2430E0u, 0x242F88u, 0x242F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F90u;
label_242f90:
    // 0x242f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242f94:
    // 0x242f94: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x242f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x242f98: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x242F98u;
    {
        const bool branch_taken_0x242f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242f98) {
            ctx->pc = 0x242FC4u;
            goto label_242fc4;
        }
    }
    ctx->pc = 0x242FA0u;
    // 0x242fa0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x242fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242fa4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x242fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x242fa8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x242fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x242fac: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x242facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x242fb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x242fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fb4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x242fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x242fb8: 0xc090c58  jal         func_243160
    ctx->pc = 0x242FB8u;
    SET_GPR_U32(ctx, 31, 0x242FC0u);
    ctx->pc = 0x243160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243160u, 0x242FB8u, 0x242FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FC0u;
label_242fc0:
    // 0x242fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242fc4:
    // 0x242fc4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x242fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242fc8: 0xc090c18  jal         func_243060
    ctx->pc = 0x242FC8u;
    SET_GPR_U32(ctx, 31, 0x242FD0u);
    ctx->pc = 0x243060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243060u, 0x242FC8u, 0x242FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FD0u;
label_242fd0:
    // 0x242fd0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x242fd4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x242fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x242fd8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x242fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242fdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x242fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fe0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x242fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fe4: 0xc090c04  jal         func_243010
    ctx->pc = 0x242FE4u;
    SET_GPR_U32(ctx, 31, 0x242FECu);
    ctx->pc = 0x243010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243010u, 0x242FE4u, 0x242FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FECu;
label_242fec:
    // 0x242fec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x242fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242ff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242ff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242ffc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x242ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x243000: 0x3e00008  jr          $ra
    ctx->pc = 0x243000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243008u;
    // 0x243008: 0x0  nop
    ctx->pc = 0x243008u;
    // NOP
    // 0x24300c: 0x0  nop
    ctx->pc = 0x24300cu;
    // NOP
    ctx->pc = 0x243010u;
}
