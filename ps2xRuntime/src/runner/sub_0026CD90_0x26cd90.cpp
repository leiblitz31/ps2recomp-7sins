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

// Function: sub_0026CD90
// Address: 0x26cd90 - 0x26cfd0
void sub_0026CD90_0x26cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CD90_0x26cd90");
#endif

    switch (ctx->pc) {
        case 0x26cdccu: goto label_26cdcc;
        case 0x26cdecu: goto label_26cdec;
        case 0x26cdfcu: goto label_26cdfc;
        case 0x26ce18u: goto label_26ce18;
        case 0x26ce30u: goto label_26ce30;
        case 0x26ce50u: goto label_26ce50;
        case 0x26ce68u: goto label_26ce68;
        case 0x26ce90u: goto label_26ce90;
        case 0x26cea4u: goto label_26cea4;
        case 0x26ceb8u: goto label_26ceb8;
        case 0x26ced4u: goto label_26ced4;
        case 0x26cee8u: goto label_26cee8;
        case 0x26cefcu: goto label_26cefc;
        case 0x26cf34u: goto label_26cf34;
        case 0x26cf50u: goto label_26cf50;
        case 0x26cf78u: goto label_26cf78;
        default: break;
    }

    ctx->pc = 0x26cd90u;

    // 0x26cd90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26cd94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26cd98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26cd9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26cd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26cda0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x26cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x26cda4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x26cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x26cda8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x26cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x26cdac: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x26cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x26cdb0: 0xa3a80080  sb          $t0, 0x80($sp)
    ctx->pc = 0x26cdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 8));
    // 0x26cdb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cdb8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x26cdb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26cdbc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26cdc0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26cdc4: 0xc085530  jal         func_2154C0
    ctx->pc = 0x26CDC4u;
    SET_GPR_U32(ctx, 31, 0x26CDCCu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x26CDC4u, 0x26CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDCCu;
label_26cdcc:
    // 0x26cdcc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26cdd0: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x26CDD0u;
    {
        const bool branch_taken_0x26cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26cdd0) {
            ctx->pc = 0x26CEC8u;
            goto label_26cec8;
        }
    }
    ctx->pc = 0x26CDD8u;
    // 0x26cdd8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26cddc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26cde0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26cde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26cde4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x26CDE4u;
    SET_GPR_U32(ctx, 31, 0x26CDECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26CDE4u, 0x26CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDECu;
label_26cdec:
    // 0x26cdec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26cdecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdf4: 0xc096e38  jal         func_25B8E0
    ctx->pc = 0x26CDF4u;
    SET_GPR_U32(ctx, 31, 0x26CDFCu);
    ctx->pc = 0x25B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8E0u, 0x26CDF4u, 0x26CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDFCu;
label_26cdfc:
    // 0x26cdfc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26cdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26ce00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ce04: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26CE04u;
    {
        const bool branch_taken_0x26ce04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ce04) {
            ctx->pc = 0x26CE44u;
            goto label_26ce44;
        }
    }
    ctx->pc = 0x26CE0Cu;
    // 0x26ce0c: 0x2784a100  addiu       $a0, $gp, -0x5F00
    ctx->pc = 0x26ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942976));
    // 0x26ce10: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x26CE10u;
    SET_GPR_U32(ctx, 31, 0x26CE18u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x26CE10u, 0x26CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE18u;
label_26ce18:
    // 0x26ce18: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26ce1c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x26ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26ce20: 0x2785a100  addiu       $a1, $gp, -0x5F00
    ctx->pc = 0x26ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942976));
    // 0x26ce24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26ce24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce28: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x26CE28u;
    SET_GPR_U32(ctx, 31, 0x26CE30u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x26CE28u, 0x26CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE30u;
label_26ce30:
    // 0x26ce30: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26CE30u;
    {
        const bool branch_taken_0x26ce30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce30) {
            ctx->pc = 0x26CE74u;
            goto label_26ce74;
        }
    }
    ctx->pc = 0x26CE38u;
    // 0x26ce38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26ce38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26CE3Cu;
    {
        const bool branch_taken_0x26ce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce3c) {
            ctx->pc = 0x26CE74u;
            goto label_26ce74;
        }
    }
    ctx->pc = 0x26CE44u;
label_26ce44:
    // 0x26ce44: 0x2784a100  addiu       $a0, $gp, -0x5F00
    ctx->pc = 0x26ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942976));
    // 0x26ce48: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x26CE48u;
    SET_GPR_U32(ctx, 31, 0x26CE50u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x26CE48u, 0x26CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE50u;
label_26ce50:
    // 0x26ce50: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26ce54: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x26ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26ce58: 0x2785a100  addiu       $a1, $gp, -0x5F00
    ctx->pc = 0x26ce58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942976));
    // 0x26ce5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26ce5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce60: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x26CE60u;
    SET_GPR_U32(ctx, 31, 0x26CE68u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x26CE60u, 0x26CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE68u;
label_26ce68:
    // 0x26ce68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26CE68u;
    {
        const bool branch_taken_0x26ce68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ce68) {
            ctx->pc = 0x26CE74u;
            goto label_26ce74;
        }
    }
    ctx->pc = 0x26CE70u;
    // 0x26ce70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26ce70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ce74:
    // 0x26ce74: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26ce78: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x26ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26ce7c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ce80: 0x24a5cf40  addiu       $a1, $a1, -0x30C0
    ctx->pc = 0x26ce80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954816));
    // 0x26ce84: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x26ce84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26ce88: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x26CE88u;
    SET_GPR_U32(ctx, 31, 0x26CE90u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x26CE88u, 0x26CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE90u;
label_26ce90:
    // 0x26ce90: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26CE90u;
    {
        const bool branch_taken_0x26ce90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ce90) {
            ctx->pc = 0x26CEC8u;
            goto label_26cec8;
        }
    }
    ctx->pc = 0x26CE98u;
    // 0x26ce98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ce98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce9c: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x26CE9Cu;
    SET_GPR_U32(ctx, 31, 0x26CEA4u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x26CE9Cu, 0x26CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEA4u;
label_26cea4:
    // 0x26cea4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26CEA4u;
    {
        const bool branch_taken_0x26cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cea4) {
            ctx->pc = 0x26CEC8u;
            goto label_26cec8;
        }
    }
    ctx->pc = 0x26CEACu;
    // 0x26ceac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ceb0: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x26CEB0u;
    SET_GPR_U32(ctx, 31, 0x26CEB8u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x26CEB0u, 0x26CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEB8u;
label_26ceb8:
    // 0x26ceb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26cebc: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26CEBCu;
    {
        const bool branch_taken_0x26cebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26cebc) {
            ctx->pc = 0x26CEC8u;
            goto label_26cec8;
        }
    }
    ctx->pc = 0x26CEC4u;
    // 0x26cec4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26cec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cec8:
    // 0x26cec8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x26cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26cecc: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x26CECCu;
    SET_GPR_U32(ctx, 31, 0x26CED4u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x26CECCu, 0x26CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CED4u;
label_26ced4:
    // 0x26ced4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26CED4u;
    {
        const bool branch_taken_0x26ced4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ced4) {
            ctx->pc = 0x26CF08u;
            goto label_26cf08;
        }
    }
    ctx->pc = 0x26CEDCu;
    // 0x26cedc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26cee0: 0xc048094  jal         func_120250
    ctx->pc = 0x26CEE0u;
    SET_GPR_U32(ctx, 31, 0x26CEE8u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26CEE0u, 0x26CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEE8u;
label_26cee8:
    // 0x26cee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ceec: 0x24050477  addiu       $a1, $zero, 0x477
    ctx->pc = 0x26ceecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1143));
    // 0x26cef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cef4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x26CEF4u;
    SET_GPR_U32(ctx, 31, 0x26CEFCu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x26CEF4u, 0x26CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEFCu;
label_26cefc:
    // 0x26cefc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26CEFCu;
    {
        const bool branch_taken_0x26cefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cefc) {
            ctx->pc = 0x26CF08u;
            goto label_26cf08;
        }
    }
    ctx->pc = 0x26CF04u;
    // 0x26cf04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26cf04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cf08:
    // 0x26cf08: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26cf0c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x26cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x26cf10: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26CF10u;
    {
        const bool branch_taken_0x26cf10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf10) {
            ctx->pc = 0x26CF38u;
            goto label_26cf38;
        }
    }
    ctx->pc = 0x26CF18u;
    // 0x26cf18: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26cf1c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x26cf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26cf20: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x26cf20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26cf24: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x26cf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x26cf28: 0x93a80080  lbu         $t0, 0x80($sp)
    ctx->pc = 0x26cf28u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26cf2c: 0xc09b3f4  jal         func_26CFD0
    ctx->pc = 0x26CF2Cu;
    SET_GPR_U32(ctx, 31, 0x26CF34u);
    ctx->pc = 0x26CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CFD0u, 0x26CF2Cu, 0x26CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF34u;
label_26cf34:
    // 0x26cf34: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x26cf34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26cf38:
    // 0x26cf38: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26CF38u;
    {
        const bool branch_taken_0x26cf38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf38) {
            ctx->pc = 0x26CF7Cu;
            goto label_26cf7c;
        }
    }
    ctx->pc = 0x26CF40u;
    // 0x26cf40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26cf44: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26cf48: 0xc085530  jal         func_2154C0
    ctx->pc = 0x26CF48u;
    SET_GPR_U32(ctx, 31, 0x26CF50u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x26CF48u, 0x26CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF50u;
label_26cf50:
    // 0x26cf50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cf54: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26CF54u;
    {
        const bool branch_taken_0x26cf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26cf54) {
            ctx->pc = 0x26CF7Cu;
            goto label_26cf7c;
        }
    }
    ctx->pc = 0x26CF5Cu;
    // 0x26cf5c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26cf60: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x26cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26cf64: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x26cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x26cf68: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x26cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26cf6c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x26cf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x26cf70: 0xc09ba18  jal         func_26E860
    ctx->pc = 0x26CF70u;
    SET_GPR_U32(ctx, 31, 0x26CF78u);
    ctx->pc = 0x26E860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E860u, 0x26CF70u, 0x26CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF78u;
label_26cf78:
    // 0x26cf78: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x26cf78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26cf7c:
    // 0x26cf7c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x26CF7Cu;
    {
        const bool branch_taken_0x26cf7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf7c) {
            ctx->pc = 0x26CFACu;
            goto label_26cfac;
        }
    }
    ctx->pc = 0x26CF84u;
    // 0x26cf84: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26cf88: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26cf8c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x26cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x26cf90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26cf94: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x26cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26cf98: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26cf9c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x26cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x26cfa0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x26cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x26cfa4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26cfa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26cfac:
    // 0x26cfac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26cfacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26cfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cfb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cfb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cfb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cfbc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x26cfbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26cfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x26CFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CFC8u;
    // 0x26cfc8: 0x0  nop
    ctx->pc = 0x26cfc8u;
    // NOP
    // 0x26cfcc: 0x0  nop
    ctx->pc = 0x26cfccu;
    // NOP
    ctx->pc = 0x26cfd0u;
}
