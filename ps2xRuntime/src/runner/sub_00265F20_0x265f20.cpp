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

// Function: sub_00265F20
// Address: 0x265f20 - 0x266200
void sub_00265F20_0x265f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265F20_0x265f20");
#endif

    switch (ctx->pc) {
        case 0x265f84u: goto label_265f84;
        case 0x265f90u: goto label_265f90;
        case 0x265fa8u: goto label_265fa8;
        case 0x265fb4u: goto label_265fb4;
        case 0x265fccu: goto label_265fcc;
        case 0x265fe4u: goto label_265fe4;
        case 0x265ff4u: goto label_265ff4;
        case 0x266000u: goto label_266000;
        case 0x266018u: goto label_266018;
        case 0x266024u: goto label_266024;
        case 0x26603cu: goto label_26603c;
        case 0x266054u: goto label_266054;
        case 0x266064u: goto label_266064;
        case 0x266070u: goto label_266070;
        case 0x266088u: goto label_266088;
        case 0x266094u: goto label_266094;
        case 0x2660acu: goto label_2660ac;
        case 0x2660c4u: goto label_2660c4;
        case 0x2660d4u: goto label_2660d4;
        case 0x2660e0u: goto label_2660e0;
        case 0x2660f8u: goto label_2660f8;
        case 0x266104u: goto label_266104;
        case 0x26611cu: goto label_26611c;
        case 0x266134u: goto label_266134;
        case 0x26614cu: goto label_26614c;
        case 0x266160u: goto label_266160;
        case 0x266174u: goto label_266174;
        case 0x266188u: goto label_266188;
        case 0x26619cu: goto label_26619c;
        case 0x2661b0u: goto label_2661b0;
        case 0x2661c4u: goto label_2661c4;
        case 0x2661e4u: goto label_2661e4;
        default: break;
    }

    ctx->pc = 0x265f20u;

    // 0x265f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x265f24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x265f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x265f28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x265f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265f2c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x265f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x265f30: 0x3e00008  jr          $ra
    ctx->pc = 0x265F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265F38u;
    // 0x265f38: 0x0  nop
    ctx->pc = 0x265f38u;
    // NOP
    // 0x265f3c: 0x0  nop
    ctx->pc = 0x265f3cu;
    // NOP
    // 0x265f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x265f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x265f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x265f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x265f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x265f50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x265f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x265f54: 0xa7a50040  sh          $a1, 0x40($sp)
    ctx->pc = 0x265f54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x265f58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x265f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265f5c: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x265F5Cu;
    {
        const bool branch_taken_0x265f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265f5c) {
            ctx->pc = 0x2661E4u;
            goto label_2661e4;
        }
    }
    ctx->pc = 0x265F64u;
    // 0x265f64: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x265f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x265f68: 0x246359e0  addiu       $v1, $v1, 0x59E0
    ctx->pc = 0x265f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23008));
    // 0x265f6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x265f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265f70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x265f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x265f74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x265f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265f78: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x265f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x265f7c: 0xc041a60  jal         func_106980
    ctx->pc = 0x265F7Cu;
    SET_GPR_U32(ctx, 31, 0x265F84u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x265F7Cu, 0x265F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265F84u;
label_265f84:
    // 0x265f84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x265f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x265F88u;
    {
        const bool branch_taken_0x265f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265f88) {
            ctx->pc = 0x265FBCu;
            goto label_265fbc;
        }
    }
    ctx->pc = 0x265F90u;
label_265f90:
    // 0x265f90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x265f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265f94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x265F94u;
    {
        const bool branch_taken_0x265f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265f94) {
            ctx->pc = 0x265FB8u;
            goto label_265fb8;
        }
    }
    ctx->pc = 0x265F9Cu;
    // 0x265f9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265fa0: 0xc099928  jal         func_2664A0
    ctx->pc = 0x265FA0u;
    SET_GPR_U32(ctx, 31, 0x265FA8u);
    ctx->pc = 0x2664A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664A0u, 0x265FA0u, 0x265FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FA8u;
label_265fa8:
    // 0x265fa8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265fac: 0xc119c5c  jal         func_467170
    ctx->pc = 0x265FACu;
    SET_GPR_U32(ctx, 31, 0x265FB4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x265FACu, 0x265FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FB4u;
label_265fb4:
    // 0x265fb4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x265fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_265fb8:
    // 0x265fb8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_265fbc:
    // 0x265fbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x265fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265fc0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x265fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x265fc4: 0xc041a14  jal         func_106850
    ctx->pc = 0x265FC4u;
    SET_GPR_U32(ctx, 31, 0x265FCCu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x265FC4u, 0x265FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FCCu;
label_265fcc:
    // 0x265fcc: 0x1622fff0  bne         $s1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x265FCCu;
    {
        const bool branch_taken_0x265fcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x265fcc) {
            ctx->pc = 0x265F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265f90;
        }
    }
    ctx->pc = 0x265FD4u;
    // 0x265fd4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x265fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265fd8: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x265fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x265fdc: 0xc0998e4  jal         func_266390
    ctx->pc = 0x265FDCu;
    SET_GPR_U32(ctx, 31, 0x265FE4u);
    ctx->pc = 0x266390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266390u, 0x265FDCu, 0x265FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FE4u;
label_265fe4:
    // 0x265fe4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x265fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265fe8: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x265fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x265fec: 0xc041a60  jal         func_106980
    ctx->pc = 0x265FECu;
    SET_GPR_U32(ctx, 31, 0x265FF4u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x265FECu, 0x265FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FF4u;
label_265ff4:
    // 0x265ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x265ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ff8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x265FF8u;
    {
        const bool branch_taken_0x265ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ff8) {
            ctx->pc = 0x26602Cu;
            goto label_26602c;
        }
    }
    ctx->pc = 0x266000u;
label_266000:
    // 0x266000: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x266000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x266004: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266004u;
    {
        const bool branch_taken_0x266004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266004) {
            ctx->pc = 0x266028u;
            goto label_266028;
        }
    }
    ctx->pc = 0x26600Cu;
    // 0x26600c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26600cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x266010: 0xc099928  jal         func_2664A0
    ctx->pc = 0x266010u;
    SET_GPR_U32(ctx, 31, 0x266018u);
    ctx->pc = 0x2664A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664A0u, 0x266010u, 0x266018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266018u;
label_266018:
    // 0x266018: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x266018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26601c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26601Cu;
    SET_GPR_U32(ctx, 31, 0x266024u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26601Cu, 0x266024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266024u;
label_266024:
    // 0x266024: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x266024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_266028:
    // 0x266028: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x266028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_26602c:
    // 0x26602c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266030: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x266030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x266034: 0xc041a14  jal         func_106850
    ctx->pc = 0x266034u;
    SET_GPR_U32(ctx, 31, 0x26603Cu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x266034u, 0x26603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26603Cu;
label_26603c:
    // 0x26603c: 0x1622fff0  bne         $s1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26603Cu;
    {
        const bool branch_taken_0x26603c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x26603c) {
            ctx->pc = 0x266000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266000;
        }
    }
    ctx->pc = 0x266044u;
    // 0x266044: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266048: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x266048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x26604c: 0xc0998e4  jal         func_266390
    ctx->pc = 0x26604Cu;
    SET_GPR_U32(ctx, 31, 0x266054u);
    ctx->pc = 0x266390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266390u, 0x26604Cu, 0x266054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266054u;
label_266054:
    // 0x266054: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266058: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x266058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x26605c: 0xc0998dc  jal         func_266370
    ctx->pc = 0x26605Cu;
    SET_GPR_U32(ctx, 31, 0x266064u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x26605Cu, 0x266064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266064u;
label_266064:
    // 0x266064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266068: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x266068u;
    {
        const bool branch_taken_0x266068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266068) {
            ctx->pc = 0x26609Cu;
            goto label_26609c;
        }
    }
    ctx->pc = 0x266070u;
label_266070:
    // 0x266070: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x266070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x266074: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266074u;
    {
        const bool branch_taken_0x266074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266074) {
            ctx->pc = 0x266098u;
            goto label_266098;
        }
    }
    ctx->pc = 0x26607Cu;
    // 0x26607c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x266080: 0xc0998cc  jal         func_266330
    ctx->pc = 0x266080u;
    SET_GPR_U32(ctx, 31, 0x266088u);
    ctx->pc = 0x266330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266330u, 0x266080u, 0x266088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266088u;
label_266088:
    // 0x266088: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x266088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26608c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26608Cu;
    SET_GPR_U32(ctx, 31, 0x266094u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26608Cu, 0x266094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266094u;
label_266094:
    // 0x266094: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x266094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_266098:
    // 0x266098: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x266098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26609c:
    // 0x26609c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2660a0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2660a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2660a4: 0xc0998c4  jal         func_266310
    ctx->pc = 0x2660A4u;
    SET_GPR_U32(ctx, 31, 0x2660ACu);
    ctx->pc = 0x266310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266310u, 0x2660A4u, 0x2660ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660ACu;
label_2660ac:
    // 0x2660ac: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2660ACu;
    {
        const bool branch_taken_0x2660ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2660ac) {
            ctx->pc = 0x266070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266070;
        }
    }
    ctx->pc = 0x2660B4u;
    // 0x2660b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2660b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2660b8: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2660b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2660bc: 0xc099880  jal         func_266200
    ctx->pc = 0x2660BCu;
    SET_GPR_U32(ctx, 31, 0x2660C4u);
    ctx->pc = 0x266200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266200u, 0x2660BCu, 0x2660C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660C4u;
label_2660c4:
    // 0x2660c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2660c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2660c8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2660c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2660cc: 0xc0998dc  jal         func_266370
    ctx->pc = 0x2660CCu;
    SET_GPR_U32(ctx, 31, 0x2660D4u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x2660CCu, 0x2660D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660D4u;
label_2660d4:
    // 0x2660d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2660d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2660D8u;
    {
        const bool branch_taken_0x2660d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2660d8) {
            ctx->pc = 0x26610Cu;
            goto label_26610c;
        }
    }
    ctx->pc = 0x2660E0u;
label_2660e0:
    // 0x2660e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2660e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2660e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2660E4u;
    {
        const bool branch_taken_0x2660e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2660e4) {
            ctx->pc = 0x266108u;
            goto label_266108;
        }
    }
    ctx->pc = 0x2660ECu;
    // 0x2660ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2660ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2660f0: 0xc0998cc  jal         func_266330
    ctx->pc = 0x2660F0u;
    SET_GPR_U32(ctx, 31, 0x2660F8u);
    ctx->pc = 0x266330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266330u, 0x2660F0u, 0x2660F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660F8u;
label_2660f8:
    // 0x2660f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2660f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2660fc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2660FCu;
    SET_GPR_U32(ctx, 31, 0x266104u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2660FCu, 0x266104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266104u;
label_266104:
    // 0x266104: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x266104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_266108:
    // 0x266108: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x266108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26610c:
    // 0x26610c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266110: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x266110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x266114: 0xc0998c4  jal         func_266310
    ctx->pc = 0x266114u;
    SET_GPR_U32(ctx, 31, 0x26611Cu);
    ctx->pc = 0x266310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266310u, 0x266114u, 0x26611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26611Cu;
label_26611c:
    // 0x26611c: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26611Cu;
    {
        const bool branch_taken_0x26611c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26611c) {
            ctx->pc = 0x2660E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2660e0;
        }
    }
    ctx->pc = 0x266124u;
    // 0x266124: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266128: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x266128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x26612c: 0xc099880  jal         func_266200
    ctx->pc = 0x26612Cu;
    SET_GPR_U32(ctx, 31, 0x266134u);
    ctx->pc = 0x266200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266200u, 0x26612Cu, 0x266134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266134u;
label_266134:
    // 0x266134: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266138: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x266138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26613c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26613cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x266140: 0x24a5cd50  addiu       $a1, $a1, -0x32B0
    ctx->pc = 0x266140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954320));
    // 0x266144: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x266144u;
    SET_GPR_U32(ctx, 31, 0x26614Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x266144u, 0x26614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26614Cu;
label_26614c:
    // 0x26614c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266150: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x266150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x266154: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x266154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266158: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x266158u;
    SET_GPR_U32(ctx, 31, 0x266160u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x266158u, 0x266160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266160u;
label_266160:
    // 0x266160: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266164: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x266164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x266168: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x266168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26616c: 0xc0995fc  jal         func_2657F0
    ctx->pc = 0x26616Cu;
    SET_GPR_U32(ctx, 31, 0x266174u);
    ctx->pc = 0x2657F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2657F0u, 0x26616Cu, 0x266174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266174u;
label_266174:
    // 0x266174: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266178: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x266178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x26617c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266180: 0xc0995fc  jal         func_2657F0
    ctx->pc = 0x266180u;
    SET_GPR_U32(ctx, 31, 0x266188u);
    ctx->pc = 0x2657F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2657F0u, 0x266180u, 0x266188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266188u;
label_266188:
    // 0x266188: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26618c: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x26618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x266190: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x266190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266194: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x266194u;
    SET_GPR_U32(ctx, 31, 0x26619Cu);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x266194u, 0x26619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26619Cu;
label_26619c:
    // 0x26619c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2661a0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2661a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2661a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2661a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2661a8: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x2661A8u;
    SET_GPR_U32(ctx, 31, 0x2661B0u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x2661A8u, 0x2661B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661B0u;
label_2661b0:
    // 0x2661b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2661b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2661b4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2661b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2661b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2661b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2661bc: 0xc099684  jal         func_265A10
    ctx->pc = 0x2661BCu;
    SET_GPR_U32(ctx, 31, 0x2661C4u);
    ctx->pc = 0x265A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265A10u, 0x2661BCu, 0x2661C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661C4u;
label_2661c4:
    // 0x2661c4: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x2661c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2661c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2661c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2661cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2661ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2661d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2661D0u;
    {
        const bool branch_taken_0x2661d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2661d0) {
            ctx->pc = 0x2661E4u;
            goto label_2661e4;
        }
    }
    ctx->pc = 0x2661D8u;
    // 0x2661d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2661d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2661dc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2661DCu;
    SET_GPR_U32(ctx, 31, 0x2661E4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2661DCu, 0x2661E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661E4u;
label_2661e4:
    // 0x2661e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2661e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2661e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2661e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2661ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2661ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2661f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2661f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2661f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2661f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2661f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2661F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2661F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266200u;
}
