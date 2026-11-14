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

// Function: sub_001C8F70
// Address: 0x1c8f70 - 0x1c92a0
void sub_001C8F70_0x1c8f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8F70_0x1c8f70");
#endif

    switch (ctx->pc) {
        case 0x1c8f90u: goto label_1c8f90;
        case 0x1c8fa8u: goto label_1c8fa8;
        case 0x1c8fd4u: goto label_1c8fd4;
        case 0x1c8fe0u: goto label_1c8fe0;
        case 0x1c8ff0u: goto label_1c8ff0;
        case 0x1c9008u: goto label_1c9008;
        case 0x1c901cu: goto label_1c901c;
        case 0x1c9034u: goto label_1c9034;
        case 0x1c9068u: goto label_1c9068;
        case 0x1c907cu: goto label_1c907c;
        case 0x1c9090u: goto label_1c9090;
        case 0x1c90a8u: goto label_1c90a8;
        case 0x1c9144u: goto label_1c9144;
        case 0x1c9158u: goto label_1c9158;
        case 0x1c916cu: goto label_1c916c;
        case 0x1c9180u: goto label_1c9180;
        case 0x1c91c4u: goto label_1c91c4;
        case 0x1c9280u: goto label_1c9280;
        default: break;
    }

    ctx->pc = 0x1c8f70u;

    // 0x1c8f70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c8f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c8f74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8f80: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c8f84: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c8f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c8f88: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x1C8F88u;
    SET_GPR_U32(ctx, 31, 0x1C8F90u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x1C8F88u, 0x1C8F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F90u;
label_1c8f90:
    // 0x1c8f90: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1c8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1c8f94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c8f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c8f98: 0x24450054  addiu       $a1, $v0, 0x54
    ctx->pc = 0x1c8f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x1c8f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fa0: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x1C8FA0u;
    SET_GPR_U32(ctx, 31, 0x1C8FA8u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x1C8FA0u, 0x1C8FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FA8u;
label_1c8fa8:
    // 0x1c8fa8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8fac: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1c8facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x1c8fb0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1c8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1c8fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8fb8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8fbc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c8fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1c8fc0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8fc4: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1c8fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1c8fc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c8fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c8fcc: 0xc043000  jal         func_10C000
    ctx->pc = 0x1C8FCCu;
    SET_GPR_U32(ctx, 31, 0x1C8FD4u);
    ctx->pc = 0x10C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C000u, 0x1C8FCCu, 0x1C8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FD4u;
label_1c8fd4:
    // 0x1c8fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fd8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1C8FD8u;
    {
        const bool branch_taken_0x1c8fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8fd8) {
            ctx->pc = 0x1C91B8u;
            goto label_1c91b8;
        }
    }
    ctx->pc = 0x1C8FE0u;
label_1c8fe0:
    // 0x1c8fe0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c8fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fe8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1C8FE8u;
    SET_GPR_U32(ctx, 31, 0x1C8FF0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1C8FE8u, 0x1C8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FF0u;
label_1c8ff0:
    // 0x1c8ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ff4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c8ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c8ff8: 0x24a577a0  addiu       $a1, $a1, 0x77A0
    ctx->pc = 0x1c8ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30624));
    // 0x1c8ffc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1c8ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9000: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x1C9000u;
    SET_GPR_U32(ctx, 31, 0x1C9008u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1C9000u, 0x1C9008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9008u;
label_1c9008:
    // 0x1c9008: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C9008u;
    {
        const bool branch_taken_0x1c9008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9008) {
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C9010u;
    // 0x1c9010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9014: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1C9014u;
    SET_GPR_U32(ctx, 31, 0x1C901Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1C9014u, 0x1C901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C901Cu;
label_1c901c:
    // 0x1c901c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9020: 0x2444000b  addiu       $a0, $v0, 0xB
    ctx->pc = 0x1c9020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x1c9024: 0x27859600  addiu       $a1, $gp, -0x6A00
    ctx->pc = 0x1c9024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940160));
    // 0x1c9028: 0x24660038  addiu       $a2, $v1, 0x38
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1c902c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x1C902Cu;
    SET_GPR_U32(ctx, 31, 0x1C9034u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x1C902Cu, 0x1C9034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9034u;
label_1c9034:
    // 0x1c9034: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9038: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1c9038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1c903c: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x1c903cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1c9040: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9040u;
    {
        const bool branch_taken_0x1c9040 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9040) {
            ctx->pc = 0x1C9054u;
            goto label_1c9054;
        }
    }
    ctx->pc = 0x1C9048u;
    // 0x1c9048: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1c9048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c904c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9050: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x1c9050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
label_1c9054:
    // 0x1c9054: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1C9054u;
    {
        const bool branch_taken_0x1c9054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9054) {
            ctx->pc = 0x1C91B4u;
            goto label_1c91b4;
        }
    }
    ctx->pc = 0x1C905Cu;
label_1c905c:
    // 0x1c905c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9060: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1C9060u;
    SET_GPR_U32(ctx, 31, 0x1C9068u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1C9060u, 0x1C9068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9068u;
label_1c9068:
    // 0x1c9068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c906c: 0x27859650  addiu       $a1, $gp, -0x69B0
    ctx->pc = 0x1c906cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940240));
    // 0x1c9070: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1c9070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c9074: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x1C9074u;
    SET_GPR_U32(ctx, 31, 0x1C907Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1C9074u, 0x1C907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C907Cu;
label_1c907c:
    // 0x1c907c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C907Cu;
    {
        const bool branch_taken_0x1c907c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c907c) {
            ctx->pc = 0x1C9138u;
            goto label_1c9138;
        }
    }
    ctx->pc = 0x1C9084u;
    // 0x1c9084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9088: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1C9088u;
    SET_GPR_U32(ctx, 31, 0x1C9090u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1C9088u, 0x1C9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9090u;
label_1c9090:
    // 0x1c9090: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c9090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9094: 0x24440006  addiu       $a0, $v0, 0x6
    ctx->pc = 0x1c9094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1c9098: 0x27859658  addiu       $a1, $gp, -0x69A8
    ctx->pc = 0x1c9098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940248));
    // 0x1c909c: 0x2466003c  addiu       $a2, $v1, 0x3C
    ctx->pc = 0x1c909cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1c90a0: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x1C90A0u;
    SET_GPR_U32(ctx, 31, 0x1C90A8u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x1C90A0u, 0x1C90A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90A8u;
label_1c90a8:
    // 0x1c90a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c90ac: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1c90acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c90b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c90b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c90b4: 0x0  nop
    ctx->pc = 0x1c90b4u;
    // NOP
    // 0x1c90b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c90b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c90bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C90BCu;
    {
        const bool branch_taken_0x1c90bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c90bc) {
            ctx->pc = 0x1C90DCu;
            goto label_1c90dc;
        }
    }
    ctx->pc = 0x1C90C4u;
    // 0x1c90c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1c90c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c90c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c90cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c90d0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c90d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1c90d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C90D4u;
    {
        const bool branch_taken_0x1c90d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90d4) {
            ctx->pc = 0x1C9120u;
            goto label_1c9120;
        }
    }
    ctx->pc = 0x1C90DCu;
label_1c90dc:
    // 0x1c90dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c90e0: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1c90e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c90e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1c90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1c90e8: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x1c90e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x1c90ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c90ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c90f0: 0x0  nop
    ctx->pc = 0x1c90f0u;
    // NOP
    // 0x1c90f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c90f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c90f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c90f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c90fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C90FCu;
    {
        const bool branch_taken_0x1c90fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c90fc) {
            ctx->pc = 0x1C9120u;
            goto label_1c9120;
        }
    }
    ctx->pc = 0x1C9104u;
    // 0x1c9104: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1c9104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1c9108: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x1c9108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x1c910c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c910cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9110: 0x0  nop
    ctx->pc = 0x1c9110u;
    // NOP
    // 0x1c9114: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c9118: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c911c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c911cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1c9120:
    // 0x1c9120: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9124: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c9124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9128: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c912c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1c912cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1c9130: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C9130u;
    {
        const bool branch_taken_0x1c9130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9130) {
            ctx->pc = 0x1C91B4u;
            goto label_1c91b4;
        }
    }
    ctx->pc = 0x1C9138u;
label_1c9138:
    // 0x1c9138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c913c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1C913Cu;
    SET_GPR_U32(ctx, 31, 0x1C9144u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1C913Cu, 0x1C9144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9144u;
label_1c9144:
    // 0x1c9144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9148: 0x27859660  addiu       $a1, $gp, -0x69A0
    ctx->pc = 0x1c9148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940256));
    // 0x1c914c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9150: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x1C9150u;
    SET_GPR_U32(ctx, 31, 0x1C9158u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1C9150u, 0x1C9158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9158u;
label_1c9158:
    // 0x1c9158: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C9158u;
    {
        const bool branch_taken_0x1c9158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9158) {
            ctx->pc = 0x1C91B4u;
            goto label_1c91b4;
        }
    }
    ctx->pc = 0x1C9160u;
    // 0x1c9160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9164: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1C9164u;
    SET_GPR_U32(ctx, 31, 0x1C916Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1C9164u, 0x1C916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C916Cu;
label_1c916c:
    // 0x1c916c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1c916cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c9170: 0x27859600  addiu       $a1, $gp, -0x6A00
    ctx->pc = 0x1c9170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940160));
    // 0x1c9174: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1c9174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c9178: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x1C9178u;
    SET_GPR_U32(ctx, 31, 0x1C9180u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x1C9178u, 0x1C9180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9180u;
label_1c9180:
    // 0x1c9180: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c9180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c9184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9188: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9188u;
    {
        const bool branch_taken_0x1c9188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9188) {
            ctx->pc = 0x1C9198u;
            goto label_1c9198;
        }
    }
    ctx->pc = 0x1C9190u;
    // 0x1c9190: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9190u;
    {
        const bool branch_taken_0x1c9190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9190) {
            ctx->pc = 0x1C91ACu;
            goto label_1c91ac;
        }
    }
    ctx->pc = 0x1C9198u;
label_1c9198:
    // 0x1c9198: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c9198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c919c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c91a0: 0xac430104  sw          $v1, 0x104($v0)
    ctx->pc = 0x1c91a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 3));
    // 0x1c91a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C91A4u;
    {
        const bool branch_taken_0x1c91a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c91a4) {
            ctx->pc = 0x1C91B4u;
            goto label_1c91b4;
        }
    }
    ctx->pc = 0x1C91ACu;
label_1c91ac:
    // 0x1c91ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c91acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c91b0: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1c91b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1c91b4:
    // 0x1c91b4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1c91b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1c91b8:
    // 0x1c91b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c91b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c91bc: 0xc0430fc  jal         func_10C3F0
    ctx->pc = 0x1C91BCu;
    SET_GPR_U32(ctx, 31, 0x1C91C4u);
    ctx->pc = 0x10C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3F0u, 0x1C91BCu, 0x1C91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91C4u;
label_1c91c4:
    // 0x1c91c4: 0x1602ff86  bne         $s0, $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x1C91C4u;
    {
        const bool branch_taken_0x1c91c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c91c4) {
            ctx->pc = 0x1C8FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8fe0;
        }
    }
    ctx->pc = 0x1C91CCu;
    // 0x1c91cc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c91d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1c91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1c91d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c91d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c91d8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1c91d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c91dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c91dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c91e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c91e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c91e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c91e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c91e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c91ec: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x1c91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
    // 0x1c91f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c91f4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c91f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c91f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c91f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c91fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c91fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c9200: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9204: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x1c9204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    // 0x1c9208: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c9208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c920c: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x1c920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x1c9210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9214: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1c9214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9218: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c9218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c921c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c921cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c9220: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c9220u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c9224: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9228: 0xac4300fc  sw          $v1, 0xFC($v0)
    ctx->pc = 0x1c9228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 3));
    // 0x1c922c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9230: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x1c9230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1c9234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9238: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9238u;
    {
        const bool branch_taken_0x1c9238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9238) {
            ctx->pc = 0x1C9270u;
            goto label_1c9270;
        }
    }
    ctx->pc = 0x1C9240u;
    // 0x1c9240: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9244: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1c9244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1c9248: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c924c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c9254: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c9254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c9258: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c925c: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x1c925cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    // 0x1c9260: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1c9260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1c9264: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1c9264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c9268: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c9268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c926c: 0xac4300fc  sw          $v1, 0xFC($v0)
    ctx->pc = 0x1c926cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 3));
label_1c9270:
    // 0x1c9270: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c9270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c9274: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c9274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9278: 0xc051428  jal         func_1450A0
    ctx->pc = 0x1C9278u;
    SET_GPR_U32(ctx, 31, 0x1C9280u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x1C9278u, 0x1C9280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9280u;
label_1c9280:
    // 0x1c9280: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c9280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c928c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c928cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9290: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9298u;
    // 0x1c9298: 0x0  nop
    ctx->pc = 0x1c9298u;
    // NOP
    // 0x1c929c: 0x0  nop
    ctx->pc = 0x1c929cu;
    // NOP
    ctx->pc = 0x1c92a0u;
}
