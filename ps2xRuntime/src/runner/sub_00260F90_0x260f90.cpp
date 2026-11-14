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

// Function: sub_00260F90
// Address: 0x260f90 - 0x261290
void sub_00260F90_0x260f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260F90_0x260f90");
#endif

    switch (ctx->pc) {
        case 0x260fbcu: goto label_260fbc;
        case 0x260fd0u: goto label_260fd0;
        case 0x260fecu: goto label_260fec;
        case 0x261000u: goto label_261000;
        case 0x26101cu: goto label_26101c;
        case 0x261030u: goto label_261030;
        case 0x26104cu: goto label_26104c;
        case 0x261060u: goto label_261060;
        case 0x26107cu: goto label_26107c;
        case 0x261090u: goto label_261090;
        case 0x2610a8u: goto label_2610a8;
        case 0x2610bcu: goto label_2610bc;
        case 0x2610d4u: goto label_2610d4;
        case 0x2610e8u: goto label_2610e8;
        case 0x261100u: goto label_261100;
        case 0x261114u: goto label_261114;
        case 0x26112cu: goto label_26112c;
        case 0x261140u: goto label_261140;
        case 0x261158u: goto label_261158;
        case 0x26116cu: goto label_26116c;
        case 0x261184u: goto label_261184;
        case 0x261198u: goto label_261198;
        case 0x2611b0u: goto label_2611b0;
        case 0x2611c4u: goto label_2611c4;
        case 0x2611dcu: goto label_2611dc;
        case 0x2611f0u: goto label_2611f0;
        case 0x261208u: goto label_261208;
        case 0x26121cu: goto label_26121c;
        case 0x261234u: goto label_261234;
        case 0x261248u: goto label_261248;
        case 0x261260u: goto label_261260;
        case 0x261274u: goto label_261274;
        default: break;
    }

    ctx->pc = 0x260f90u;

    // 0x260f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x260f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x260f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260f98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x260f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x260f9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x260f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x260fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x260fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x260fa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x260fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260fa8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x260fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260fac: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260fb0: 0x24a5c4a0  addiu       $a1, $a1, -0x3B60
    ctx->pc = 0x260fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952096));
    // 0x260fb4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260FB4u;
    SET_GPR_U32(ctx, 31, 0x260FBCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260FB4u, 0x260FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FBCu;
label_260fbc:
    // 0x260fbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x260fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260fc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x260fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x260fc4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x260fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x260fc8: 0xc09850c  jal         func_261430
    ctx->pc = 0x260FC8u;
    SET_GPR_U32(ctx, 31, 0x260FD0u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x260FC8u, 0x260FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FD0u;
label_260fd0:
    // 0x260fd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x260fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x260fd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x260fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260fd8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x260fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260fdc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260fe0: 0x24a5c4c0  addiu       $a1, $a1, -0x3B40
    ctx->pc = 0x260fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952128));
    // 0x260fe4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260FE4u;
    SET_GPR_U32(ctx, 31, 0x260FECu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260FE4u, 0x260FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FECu;
label_260fec:
    // 0x260fec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x260fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ff4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x260ff4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x260ff8: 0xc09850c  jal         func_261430
    ctx->pc = 0x260FF8u;
    SET_GPR_U32(ctx, 31, 0x261000u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x260FF8u, 0x261000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261000u;
label_261000:
    // 0x261000: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x261000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x261004: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x261004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261008: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26100c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26100cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x261010: 0x24a5c4e0  addiu       $a1, $a1, -0x3B20
    ctx->pc = 0x261010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952160));
    // 0x261014: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x261014u;
    SET_GPR_U32(ctx, 31, 0x26101Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x261014u, 0x26101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26101Cu;
label_26101c:
    // 0x26101c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261020: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261024: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x261024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x261028: 0xc09850c  jal         func_261430
    ctx->pc = 0x261028u;
    SET_GPR_U32(ctx, 31, 0x261030u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x261028u, 0x261030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261030u;
label_261030:
    // 0x261030: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x261030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x261034: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x261034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261038: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26103c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26103cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x261040: 0x24a5c500  addiu       $a1, $a1, -0x3B00
    ctx->pc = 0x261040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952192));
    // 0x261044: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x261044u;
    SET_GPR_U32(ctx, 31, 0x26104Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x261044u, 0x26104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26104Cu;
label_26104c:
    // 0x26104c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26104cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261050: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x261050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x261054: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x261054u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x261058: 0xc09850c  jal         func_261430
    ctx->pc = 0x261058u;
    SET_GPR_U32(ctx, 31, 0x261060u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x261058u, 0x261060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261060u;
label_261060:
    // 0x261060: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x261060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x261064: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x261064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261068: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26106c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26106cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x261070: 0x24a5c520  addiu       $a1, $a1, -0x3AE0
    ctx->pc = 0x261070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952224));
    // 0x261074: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x261074u;
    SET_GPR_U32(ctx, 31, 0x26107Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x261074u, 0x26107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26107Cu;
label_26107c:
    // 0x26107c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261080: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x261080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x261084: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x261084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x261088: 0xc09850c  jal         func_261430
    ctx->pc = 0x261088u;
    SET_GPR_U32(ctx, 31, 0x261090u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x261088u, 0x261090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261090u;
label_261090:
    // 0x261090: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261094: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261098: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x261098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26109c: 0x24a5c610  addiu       $a1, $a1, -0x39F0
    ctx->pc = 0x26109cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952464));
    // 0x2610a0: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2610A0u;
    SET_GPR_U32(ctx, 31, 0x2610A8u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2610A0u, 0x2610A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610A8u;
label_2610a8:
    // 0x2610a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2610a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2610ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2610acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2610b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2610b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2610b4: 0xc09850c  jal         func_261430
    ctx->pc = 0x2610B4u;
    SET_GPR_U32(ctx, 31, 0x2610BCu);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x2610B4u, 0x2610BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610BCu;
label_2610bc:
    // 0x2610bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2610bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2610c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2610c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2610c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2610c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2610c8: 0x24a5c630  addiu       $a1, $a1, -0x39D0
    ctx->pc = 0x2610c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
    // 0x2610cc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2610CCu;
    SET_GPR_U32(ctx, 31, 0x2610D4u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2610CCu, 0x2610D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610D4u;
label_2610d4:
    // 0x2610d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2610d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2610d8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2610d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2610dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2610dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2610e0: 0xc09850c  jal         func_261430
    ctx->pc = 0x2610E0u;
    SET_GPR_U32(ctx, 31, 0x2610E8u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x2610E0u, 0x2610E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610E8u;
label_2610e8:
    // 0x2610e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2610e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2610ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2610ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2610f0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2610f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2610f4: 0x24a5c650  addiu       $a1, $a1, -0x39B0
    ctx->pc = 0x2610f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952528));
    // 0x2610f8: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2610F8u;
    SET_GPR_U32(ctx, 31, 0x261100u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2610F8u, 0x261100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261100u;
label_261100:
    // 0x261100: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261104: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x261104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x261108: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x261108u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26110c: 0xc09850c  jal         func_261430
    ctx->pc = 0x26110Cu;
    SET_GPR_U32(ctx, 31, 0x261114u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x26110Cu, 0x261114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261114u;
label_261114:
    // 0x261114: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261118: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26111c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26111cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x261120: 0x24a5c670  addiu       $a1, $a1, -0x3990
    ctx->pc = 0x261120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952560));
    // 0x261124: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x261124u;
    SET_GPR_U32(ctx, 31, 0x26112Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x261124u, 0x26112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26112Cu;
label_26112c:
    // 0x26112c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26112cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261130: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x261130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x261134: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x261134u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x261138: 0xc09850c  jal         func_261430
    ctx->pc = 0x261138u;
    SET_GPR_U32(ctx, 31, 0x261140u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x261138u, 0x261140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261140u;
label_261140:
    // 0x261140: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261144: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261148: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x261148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26114c: 0x24a5c690  addiu       $a1, $a1, -0x3970
    ctx->pc = 0x26114cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952592));
    // 0x261150: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x261150u;
    SET_GPR_U32(ctx, 31, 0x261158u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x261150u, 0x261158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261158u;
label_261158:
    // 0x261158: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26115c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x261160: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x261160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x261164: 0xc09850c  jal         func_261430
    ctx->pc = 0x261164u;
    SET_GPR_U32(ctx, 31, 0x26116Cu);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x261164u, 0x26116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26116Cu;
label_26116c:
    // 0x26116c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26116cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261170: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261174: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x261174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x261178: 0x24a5c6b0  addiu       $a1, $a1, -0x3950
    ctx->pc = 0x261178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952624));
    // 0x26117c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x26117Cu;
    SET_GPR_U32(ctx, 31, 0x261184u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x26117Cu, 0x261184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261184u;
label_261184:
    // 0x261184: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261188: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x261188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26118c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26118cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x261190: 0xc09850c  jal         func_261430
    ctx->pc = 0x261190u;
    SET_GPR_U32(ctx, 31, 0x261198u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x261190u, 0x261198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261198u;
label_261198:
    // 0x261198: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26119c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26119cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2611a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2611a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2611a4: 0x24a5c6d0  addiu       $a1, $a1, -0x3930
    ctx->pc = 0x2611a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
    // 0x2611a8: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2611A8u;
    SET_GPR_U32(ctx, 31, 0x2611B0u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2611A8u, 0x2611B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611B0u;
label_2611b0:
    // 0x2611b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2611b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2611b4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2611b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2611b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2611b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2611bc: 0xc09850c  jal         func_261430
    ctx->pc = 0x2611BCu;
    SET_GPR_U32(ctx, 31, 0x2611C4u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x2611BCu, 0x2611C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611C4u;
label_2611c4:
    // 0x2611c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2611c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2611c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2611c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2611cc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2611ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2611d0: 0x24a5c6f0  addiu       $a1, $a1, -0x3910
    ctx->pc = 0x2611d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952688));
    // 0x2611d4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2611D4u;
    SET_GPR_U32(ctx, 31, 0x2611DCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2611D4u, 0x2611DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611DCu;
label_2611dc:
    // 0x2611dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2611dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2611e0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2611e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2611e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2611e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2611e8: 0xc09850c  jal         func_261430
    ctx->pc = 0x2611E8u;
    SET_GPR_U32(ctx, 31, 0x2611F0u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x2611E8u, 0x2611F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611F0u;
label_2611f0:
    // 0x2611f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2611f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2611f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2611f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2611f8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2611f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2611fc: 0x24a5c710  addiu       $a1, $a1, -0x38F0
    ctx->pc = 0x2611fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952720));
    // 0x261200: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x261200u;
    SET_GPR_U32(ctx, 31, 0x261208u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x261200u, 0x261208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261208u;
label_261208:
    // 0x261208: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26120c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x261210: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x261210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x261214: 0xc09850c  jal         func_261430
    ctx->pc = 0x261214u;
    SET_GPR_U32(ctx, 31, 0x26121Cu);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x261214u, 0x26121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26121Cu;
label_26121c:
    // 0x26121c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26121cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261220: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261224: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x261224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x261228: 0x24a5c730  addiu       $a1, $a1, -0x38D0
    ctx->pc = 0x261228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952752));
    // 0x26122c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x26122Cu;
    SET_GPR_U32(ctx, 31, 0x261234u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x26122Cu, 0x261234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261234u;
label_261234:
    // 0x261234: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261238: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x261238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26123c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26123cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x261240: 0xc09850c  jal         func_261430
    ctx->pc = 0x261240u;
    SET_GPR_U32(ctx, 31, 0x261248u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x261240u, 0x261248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261248u;
label_261248:
    // 0x261248: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26124c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261250: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x261250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x261254: 0x24a5c750  addiu       $a1, $a1, -0x38B0
    ctx->pc = 0x261254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952784));
    // 0x261258: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x261258u;
    SET_GPR_U32(ctx, 31, 0x261260u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x261258u, 0x261260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261260u;
label_261260:
    // 0x261260: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261264: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x261264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x261268: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x261268u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26126c: 0xc09850c  jal         func_261430
    ctx->pc = 0x26126Cu;
    SET_GPR_U32(ctx, 31, 0x261274u);
    ctx->pc = 0x261430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261430u, 0x26126Cu, 0x261274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261274u;
label_261274:
    // 0x261274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261278: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26127c: 0x3e00008  jr          $ra
    ctx->pc = 0x26127Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26127Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261284u;
    // 0x261284: 0x0  nop
    ctx->pc = 0x261284u;
    // NOP
    // 0x261288: 0x0  nop
    ctx->pc = 0x261288u;
    // NOP
    // 0x26128c: 0x0  nop
    ctx->pc = 0x26128cu;
    // NOP
    ctx->pc = 0x261290u;
}
