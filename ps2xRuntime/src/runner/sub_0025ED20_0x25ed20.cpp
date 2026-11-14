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

// Function: sub_0025ED20
// Address: 0x25ed20 - 0x25eee0
void sub_0025ED20_0x25ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ED20_0x25ed20");
#endif

    switch (ctx->pc) {
        case 0x25ed78u: goto label_25ed78;
        case 0x25ed90u: goto label_25ed90;
        case 0x25eda8u: goto label_25eda8;
        case 0x25edc0u: goto label_25edc0;
        case 0x25edd8u: goto label_25edd8;
        case 0x25edf4u: goto label_25edf4;
        case 0x25ee10u: goto label_25ee10;
        case 0x25ee2cu: goto label_25ee2c;
        case 0x25ee48u: goto label_25ee48;
        case 0x25ee64u: goto label_25ee64;
        case 0x25ee80u: goto label_25ee80;
        case 0x25ee8cu: goto label_25ee8c;
        case 0x25eea0u: goto label_25eea0;
        case 0x25eeb0u: goto label_25eeb0;
        default: break;
    }

    ctx->pc = 0x25ed20u;

    // 0x25ed20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25ed24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25ed28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25ed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25ed2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25ed2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25ed30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25ed30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25ed34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ed38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ed3c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x25ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x25ed40: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x25ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x25ed44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ed48: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x25ed48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ed4c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x25ed4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ed50: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x25ed50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ed54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25ed54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed58: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x25ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ed5c: 0x1002003c  beq         $zero, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x25ED5Cu;
    {
        const bool branch_taken_0x25ed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ed5c) {
            ctx->pc = 0x25EE50u;
            goto label_25ee50;
        }
    }
    ctx->pc = 0x25ED64u;
    // 0x25ed64: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ed68: 0x240503fa  addiu       $a1, $zero, 0x3FA
    ctx->pc = 0x25ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
    // 0x25ed6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ed6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed70: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x25ED70u;
    SET_GPR_U32(ctx, 31, 0x25ED78u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x25ED70u, 0x25ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED78u;
label_25ed78:
    // 0x25ed78: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x25ed78u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ed7c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ed80: 0x240503fb  addiu       $a1, $zero, 0x3FB
    ctx->pc = 0x25ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
    // 0x25ed84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ed88: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25ED88u;
    SET_GPR_U32(ctx, 31, 0x25ED90u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25ED88u, 0x25ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED90u;
label_25ed90:
    // 0x25ed90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25ed90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed94: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ed98: 0x240503fc  addiu       $a1, $zero, 0x3FC
    ctx->pc = 0x25ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x25ed9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25ed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25eda0: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25EDA0u;
    SET_GPR_U32(ctx, 31, 0x25EDA8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25EDA0u, 0x25EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDA8u;
label_25eda8:
    // 0x25eda8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25eda8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edac: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25edacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25edb0: 0x240503fd  addiu       $a1, $zero, 0x3FD
    ctx->pc = 0x25edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
    // 0x25edb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25edb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edb8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25EDB8u;
    SET_GPR_U32(ctx, 31, 0x25EDC0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25EDB8u, 0x25EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDC0u;
label_25edc0:
    // 0x25edc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25edc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edc4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25edc8: 0x24050408  addiu       $a1, $zero, 0x408
    ctx->pc = 0x25edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x25edcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25edccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edd0: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25EDD0u;
    SET_GPR_U32(ctx, 31, 0x25EDD8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25EDD0u, 0x25EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDD8u;
label_25edd8:
    // 0x25edd8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x25edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25eddc: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x25eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x25ede0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ede4: 0x24050407  addiu       $a1, $zero, 0x407
    ctx->pc = 0x25ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
    // 0x25ede8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ede8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edec: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25EDECu;
    SET_GPR_U32(ctx, 31, 0x25EDF4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25EDECu, 0x25EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDF4u;
label_25edf4:
    // 0x25edf4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x25edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25edf8: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x25edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x25edfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25edfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25ee00: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ee04: 0x24050409  addiu       $a1, $zero, 0x409
    ctx->pc = 0x25ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x25ee08: 0xc042090  jal         func_108240
    ctx->pc = 0x25EE08u;
    SET_GPR_U32(ctx, 31, 0x25EE10u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x25EE08u, 0x25EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE10u;
label_25ee10:
    // 0x25ee10: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x25ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ee14: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x25ee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x25ee18: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ee1c: 0x24050404  addiu       $a1, $zero, 0x404
    ctx->pc = 0x25ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x25ee20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ee20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee24: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25EE24u;
    SET_GPR_U32(ctx, 31, 0x25EE2Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25EE24u, 0x25EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE2Cu;
label_25ee2c:
    // 0x25ee2c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x25ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ee30: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x25ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x25ee34: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25ee38: 0x24050403  addiu       $a1, $zero, 0x403
    ctx->pc = 0x25ee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x25ee3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ee3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee40: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x25EE40u;
    SET_GPR_U32(ctx, 31, 0x25EE48u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x25EE40u, 0x25EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE48u;
label_25ee48:
    // 0x25ee48: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x25ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ee4c: 0xa062006c  sb          $v0, 0x6C($v1)
    ctx->pc = 0x25ee4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 108), (uint8_t)GPR_U32(ctx, 2));
label_25ee50:
    // 0x25ee50: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x25ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ee54: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x25ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25ee58: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x25ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25ee5c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25EE5Cu;
    SET_GPR_U32(ctx, 31, 0x25EE64u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25EE5Cu, 0x25EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE64u;
label_25ee64:
    // 0x25ee64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ee64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee68: 0x10100011  beq         $zero, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25EE68u;
    {
        const bool branch_taken_0x25ee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x25ee68) {
            ctx->pc = 0x25EEB0u;
            goto label_25eeb0;
        }
    }
    ctx->pc = 0x25EE70u;
    // 0x25ee70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ee70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25ee74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee78: 0xc091020  jal         func_244080
    ctx->pc = 0x25EE78u;
    SET_GPR_U32(ctx, 31, 0x25EE80u);
    ctx->pc = 0x244080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244080u, 0x25EE78u, 0x25EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE80u;
label_25ee80:
    // 0x25ee80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ee80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee84: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x25EE84u;
    SET_GPR_U32(ctx, 31, 0x25EE8Cu);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x25EE84u, 0x25EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE8Cu;
label_25ee8c:
    // 0x25ee8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25ee8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25ee90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25ee94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee98: 0xc094f14  jal         func_253C50
    ctx->pc = 0x25EE98u;
    SET_GPR_U32(ctx, 31, 0x25EEA0u);
    ctx->pc = 0x253C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C50u, 0x25EE98u, 0x25EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEA0u;
label_25eea0:
    // 0x25eea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25eea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eea8: 0xc090fa8  jal         func_243EA0
    ctx->pc = 0x25EEA8u;
    SET_GPR_U32(ctx, 31, 0x25EEB0u);
    ctx->pc = 0x243EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EA0u, 0x25EEA8u, 0x25EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEB0u;
label_25eeb0:
    // 0x25eeb0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25eeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25eeb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25eeb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25eeb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25eeb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25eebc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25eebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25eec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25eec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25eec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25eec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25eec8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x25eec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25eecc: 0x3e00008  jr          $ra
    ctx->pc = 0x25EECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EED4u;
    // 0x25eed4: 0x0  nop
    ctx->pc = 0x25eed4u;
    // NOP
    // 0x25eed8: 0x0  nop
    ctx->pc = 0x25eed8u;
    // NOP
    // 0x25eedc: 0x0  nop
    ctx->pc = 0x25eedcu;
    // NOP
    ctx->pc = 0x25eee0u;
}
