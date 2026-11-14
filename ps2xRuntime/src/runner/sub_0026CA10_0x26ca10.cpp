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

// Function: sub_0026CA10
// Address: 0x26ca10 - 0x26cd70
void sub_0026CA10_0x26ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CA10_0x26ca10");
#endif

    switch (ctx->pc) {
        case 0x26ca4cu: goto label_26ca4c;
        case 0x26ca58u: goto label_26ca58;
        case 0x26ca68u: goto label_26ca68;
        case 0x26ca74u: goto label_26ca74;
        case 0x26caa4u: goto label_26caa4;
        case 0x26cac4u: goto label_26cac4;
        case 0x26cae4u: goto label_26cae4;
        case 0x26caf4u: goto label_26caf4;
        case 0x26cb10u: goto label_26cb10;
        case 0x26cb28u: goto label_26cb28;
        case 0x26cb44u: goto label_26cb44;
        case 0x26cb5cu: goto label_26cb5c;
        case 0x26cb80u: goto label_26cb80;
        case 0x26cb94u: goto label_26cb94;
        case 0x26cba8u: goto label_26cba8;
        case 0x26cbc0u: goto label_26cbc0;
        case 0x26cbd0u: goto label_26cbd0;
        case 0x26cbe4u: goto label_26cbe4;
        case 0x26cbf0u: goto label_26cbf0;
        case 0x26cc00u: goto label_26cc00;
        case 0x26cc18u: goto label_26cc18;
        case 0x26cc34u: goto label_26cc34;
        case 0x26cc48u: goto label_26cc48;
        case 0x26cc54u: goto label_26cc54;
        case 0x26cc70u: goto label_26cc70;
        case 0x26cc84u: goto label_26cc84;
        case 0x26ccb0u: goto label_26ccb0;
        case 0x26ccc8u: goto label_26ccc8;
        case 0x26ccf0u: goto label_26ccf0;
        case 0x26cd04u: goto label_26cd04;
        case 0x26cd30u: goto label_26cd30;
        case 0x26cd40u: goto label_26cd40;
        default: break;
    }

    ctx->pc = 0x26ca10u;

    // 0x26ca10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x26ca14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26ca18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26ca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26ca1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26ca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26ca20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26ca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26ca24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26ca28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ca2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ca30: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x26ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x26ca34: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x26ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x26ca38: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x26ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x26ca3c: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x26ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x26ca40: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26ca44: 0xc04809c  jal         func_120270
    ctx->pc = 0x26CA44u;
    SET_GPR_U32(ctx, 31, 0x26CA4Cu);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26CA44u, 0x26CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA4Cu;
label_26ca4c:
    // 0x26ca4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ca4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca50: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x26CA50u;
    {
        const bool branch_taken_0x26ca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca50) {
            ctx->pc = 0x26CD34u;
            goto label_26cd34;
        }
    }
    ctx->pc = 0x26CA58u;
label_26ca58:
    // 0x26ca58: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26ca58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca5c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x26ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26ca60: 0xc0525e4  jal         func_149790
    ctx->pc = 0x26CA60u;
    SET_GPR_U32(ctx, 31, 0x26CA68u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x26CA60u, 0x26CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA68u;
label_26ca68:
    // 0x26ca68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ca68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26CA6Cu;
    {
        const bool branch_taken_0x26ca6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca6c) {
            ctx->pc = 0x26CA98u;
            goto label_26ca98;
        }
    }
    ctx->pc = 0x26CA74u;
label_26ca74:
    // 0x26ca74: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26ca78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ca7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CA7Cu;
    {
        const bool branch_taken_0x26ca7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ca7c) {
            ctx->pc = 0x26CA94u;
            goto label_26ca94;
        }
    }
    ctx->pc = 0x26CA84u;
    // 0x26ca84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ca88: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x26ca88u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26ca8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26CA8Cu;
    {
        const bool branch_taken_0x26ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca8c) {
            ctx->pc = 0x26CAACu;
            goto label_26caac;
        }
    }
    ctx->pc = 0x26CA94u;
label_26ca94:
    // 0x26ca94: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x26ca94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_26ca98:
    // 0x26ca98: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x26ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26ca9c: 0xc0525dc  jal         func_149770
    ctx->pc = 0x26CA9Cu;
    SET_GPR_U32(ctx, 31, 0x26CAA4u);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x26CA9Cu, 0x26CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAA4u;
label_26caa4:
    // 0x26caa4: 0x1642fff3  bne         $s2, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x26CAA4u;
    {
        const bool branch_taken_0x26caa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x26caa4) {
            ctx->pc = 0x26CA74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ca74;
        }
    }
    ctx->pc = 0x26CAACu;
label_26caac:
    // 0x26caac: 0x168000a0  bnez        $s4, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26CAACu;
    {
        const bool branch_taken_0x26caac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x26caac) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CAB4u;
    // 0x26cab4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x26cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26cab8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26cabc: 0xc085530  jal         func_2154C0
    ctx->pc = 0x26CABCu;
    SET_GPR_U32(ctx, 31, 0x26CAC4u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x26CABCu, 0x26CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAC4u;
label_26cac4:
    // 0x26cac4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26cac8: 0x14430066  bne         $v0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x26CAC8u;
    {
        const bool branch_taken_0x26cac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26cac8) {
            ctx->pc = 0x26CC64u;
            goto label_26cc64;
        }
    }
    ctx->pc = 0x26CAD0u;
    // 0x26cad0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x26cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26cad4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26cad8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26cadc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x26CADCu;
    SET_GPR_U32(ctx, 31, 0x26CAE4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26CADCu, 0x26CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAE4u;
label_26cae4:
    // 0x26cae4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26cae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26caec: 0xc096e38  jal         func_25B8E0
    ctx->pc = 0x26CAECu;
    SET_GPR_U32(ctx, 31, 0x26CAF4u);
    ctx->pc = 0x25B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8E0u, 0x26CAECu, 0x26CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAF4u;
label_26caf4:
    // 0x26caf4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26caf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26caf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cafc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26CAFCu;
    {
        const bool branch_taken_0x26cafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26cafc) {
            ctx->pc = 0x26CB38u;
            goto label_26cb38;
        }
    }
    ctx->pc = 0x26CB04u;
    // 0x26cb04: 0x2784a100  addiu       $a0, $gp, -0x5F00
    ctx->pc = 0x26cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942976));
    // 0x26cb08: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x26CB08u;
    SET_GPR_U32(ctx, 31, 0x26CB10u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x26CB08u, 0x26CB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB10u;
label_26cb10:
    // 0x26cb10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cb14: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x26cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26cb18: 0x2785a100  addiu       $a1, $gp, -0x5F00
    ctx->pc = 0x26cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942976));
    // 0x26cb1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26cb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb20: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x26CB20u;
    SET_GPR_U32(ctx, 31, 0x26CB28u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x26CB20u, 0x26CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB28u;
label_26cb28:
    // 0x26cb28: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x26CB28u;
    {
        const bool branch_taken_0x26cb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cb28) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CB30u;
    // 0x26cb30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26CB30u;
    {
        const bool branch_taken_0x26cb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb30) {
            ctx->pc = 0x26CB64u;
            goto label_26cb64;
        }
    }
    ctx->pc = 0x26CB38u;
label_26cb38:
    // 0x26cb38: 0x2784a100  addiu       $a0, $gp, -0x5F00
    ctx->pc = 0x26cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942976));
    // 0x26cb3c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x26CB3Cu;
    SET_GPR_U32(ctx, 31, 0x26CB44u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x26CB3Cu, 0x26CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB44u;
label_26cb44:
    // 0x26cb44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cb48: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x26cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26cb4c: 0x2785a100  addiu       $a1, $gp, -0x5F00
    ctx->pc = 0x26cb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942976));
    // 0x26cb50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26cb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb54: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x26CB54u;
    SET_GPR_U32(ctx, 31, 0x26CB5Cu);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x26CB54u, 0x26CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB5Cu;
label_26cb5c:
    // 0x26cb5c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x26CB5Cu;
    {
        const bool branch_taken_0x26cb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb5c) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CB64u;
label_26cb64:
    // 0x26cb64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cb68: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x26cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26cb6c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26cb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26cb70: 0x24a5cf40  addiu       $a1, $a1, -0x30C0
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954816));
    // 0x26cb74: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x26cb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26cb78: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x26CB78u;
    SET_GPR_U32(ctx, 31, 0x26CB80u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x26CB78u, 0x26CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB80u;
label_26cb80:
    // 0x26cb80: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26CB80u;
    {
        const bool branch_taken_0x26cb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cb80) {
            ctx->pc = 0x26CBB4u;
            goto label_26cbb4;
        }
    }
    ctx->pc = 0x26CB88u;
    // 0x26cb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb8c: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x26CB8Cu;
    SET_GPR_U32(ctx, 31, 0x26CB94u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x26CB8Cu, 0x26CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB94u;
label_26cb94:
    // 0x26cb94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26CB94u;
    {
        const bool branch_taken_0x26cb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb94) {
            ctx->pc = 0x26CBB4u;
            goto label_26cbb4;
        }
    }
    ctx->pc = 0x26CB9Cu;
    // 0x26cb9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cba0: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x26CBA0u;
    SET_GPR_U32(ctx, 31, 0x26CBA8u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x26CBA0u, 0x26CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBA8u;
label_26cba8:
    // 0x26cba8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26cbac: 0x14430060  bne         $v0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x26CBACu;
    {
        const bool branch_taken_0x26cbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26cbac) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CBB4u;
label_26cbb4:
    // 0x26cbb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbb8: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x26CBB8u;
    SET_GPR_U32(ctx, 31, 0x26CBC0u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x26CBB8u, 0x26CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBC0u;
label_26cbc0:
    // 0x26cbc0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26cbc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbc8: 0xc09b35c  jal         func_26CD70
    ctx->pc = 0x26CBC8u;
    SET_GPR_U32(ctx, 31, 0x26CBD0u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x26CBC8u, 0x26CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBD0u;
label_26cbd0:
    // 0x26cbd0: 0x16a20057  bne         $s5, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x26CBD0u;
    {
        const bool branch_taken_0x26cbd0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x26cbd0) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CBD8u;
    // 0x26cbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbdc: 0xc096a18  jal         func_25A860
    ctx->pc = 0x26CBDCu;
    SET_GPR_U32(ctx, 31, 0x26CBE4u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x26CBDCu, 0x26CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBE4u;
label_26cbe4:
    // 0x26cbe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26cbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbe8: 0xc0970c0  jal         func_25C300
    ctx->pc = 0x26CBE8u;
    SET_GPR_U32(ctx, 31, 0x26CBF0u);
    ctx->pc = 0x25C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C300u, 0x26CBE8u, 0x26CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBF0u;
label_26cbf0:
    // 0x26cbf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26cbf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbf4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x26cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x26cbf8: 0xc048b18  jal         func_122C60
    ctx->pc = 0x26CBF8u;
    SET_GPR_U32(ctx, 31, 0x26CC00u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x26CBF8u, 0x26CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC00u;
label_26cc00:
    // 0x26cc00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26cc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc04: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26cc08: 0x24a5cf50  addiu       $a1, $a1, -0x30B0
    ctx->pc = 0x26cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954832));
    // 0x26cc0c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x26cc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26cc10: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x26CC10u;
    SET_GPR_U32(ctx, 31, 0x26CC18u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x26CC10u, 0x26CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC18u;
label_26cc18:
    // 0x26cc18: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26CC18u;
    {
        const bool branch_taken_0x26cc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc18) {
            ctx->pc = 0x26CC64u;
            goto label_26cc64;
        }
    }
    ctx->pc = 0x26CC20u;
    // 0x26cc20: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x26CC20u;
    {
        const bool branch_taken_0x26cc20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc20) {
            ctx->pc = 0x26CC64u;
            goto label_26cc64;
        }
    }
    ctx->pc = 0x26CC28u;
    // 0x26cc28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26cc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc2c: 0xc096e08  jal         func_25B820
    ctx->pc = 0x26CC2Cu;
    SET_GPR_U32(ctx, 31, 0x26CC34u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x26CC2Cu, 0x26CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC34u;
label_26cc34:
    // 0x26cc34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26CC34u;
    {
        const bool branch_taken_0x26cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc34) {
            ctx->pc = 0x26CC64u;
            goto label_26cc64;
        }
    }
    ctx->pc = 0x26CC3Cu;
    // 0x26cc3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc40: 0xc096a18  jal         func_25A860
    ctx->pc = 0x26CC40u;
    SET_GPR_U32(ctx, 31, 0x26CC48u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x26CC40u, 0x26CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC48u;
label_26cc48:
    // 0x26cc48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26cc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc4c: 0xc097070  jal         func_25C1C0
    ctx->pc = 0x26CC4Cu;
    SET_GPR_U32(ctx, 31, 0x26CC54u);
    ctx->pc = 0x25C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C1C0u, 0x26CC4Cu, 0x26CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC54u;
label_26cc54:
    // 0x26cc54: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x26cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x26cc58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26cc5c: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x26CC5Cu;
    {
        const bool branch_taken_0x26cc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26cc5c) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CC64u;
label_26cc64:
    // 0x26cc64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cc68: 0xc048094  jal         func_120250
    ctx->pc = 0x26CC68u;
    SET_GPR_U32(ctx, 31, 0x26CC70u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26CC68u, 0x26CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC70u;
label_26cc70:
    // 0x26cc70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26cc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc74: 0x24050477  addiu       $a1, $zero, 0x477
    ctx->pc = 0x26cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1143));
    // 0x26cc78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc7c: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x26CC7Cu;
    SET_GPR_U32(ctx, 31, 0x26CC84u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x26CC7Cu, 0x26CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC84u;
label_26cc84:
    // 0x26cc84: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26CC84u;
    {
        const bool branch_taken_0x26cc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cc84) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CC8Cu;
    // 0x26cc8c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26cc90: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x26cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x26cc94: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x26cc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26cc98: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cc9c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x26cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26cca0: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x26cca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x26cca4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cca8: 0xc09b3f4  jal         func_26CFD0
    ctx->pc = 0x26CCA8u;
    SET_GPR_U32(ctx, 31, 0x26CCB0u);
    ctx->pc = 0x26CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CFD0u, 0x26CCA8u, 0x26CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCB0u;
label_26ccb0:
    // 0x26ccb0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26CCB0u;
    {
        const bool branch_taken_0x26ccb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ccb0) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CCB8u;
    // 0x26ccb8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x26ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26ccbc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26ccc0: 0xc085530  jal         func_2154C0
    ctx->pc = 0x26CCC0u;
    SET_GPR_U32(ctx, 31, 0x26CCC8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x26CCC0u, 0x26CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCC8u;
label_26ccc8:
    // 0x26ccc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cccc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26CCCCu;
    {
        const bool branch_taken_0x26cccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26cccc) {
            ctx->pc = 0x26CCF8u;
            goto label_26ccf8;
        }
    }
    ctx->pc = 0x26CCD4u;
    // 0x26ccd4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x26ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26ccd8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26ccdc: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x26ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x26cce0: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x26cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26cce4: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x26cce8: 0xc09ba18  jal         func_26E860
    ctx->pc = 0x26CCE8u;
    SET_GPR_U32(ctx, 31, 0x26CCF0u);
    ctx->pc = 0x26E860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E860u, 0x26CCE8u, 0x26CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCF0u;
label_26ccf0:
    // 0x26ccf0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26CCF0u;
    {
        const bool branch_taken_0x26ccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ccf0) {
            ctx->pc = 0x26CD30u;
            goto label_26cd30;
        }
    }
    ctx->pc = 0x26CCF8u;
label_26ccf8:
    // 0x26ccf8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x26ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26ccfc: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x26CCFCu;
    SET_GPR_U32(ctx, 31, 0x26CD04u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x26CCFCu, 0x26CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD04u;
label_26cd04:
    // 0x26cd04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cd08: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x26cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x26cd0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x26cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26cd10: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x26cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26cd14: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x26cd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x26cd18: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x26cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x26cd1c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x26cd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x26cd20: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x26cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26cd24: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x26cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26cd28: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x26CD28u;
    SET_GPR_U32(ctx, 31, 0x26CD30u);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x26CD28u, 0x26CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD30u;
label_26cd30:
    // 0x26cd30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26cd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26cd34:
    // 0x26cd34: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26cd38: 0xc04808c  jal         func_120230
    ctx->pc = 0x26CD38u;
    SET_GPR_U32(ctx, 31, 0x26CD40u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26CD38u, 0x26CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD40u;
label_26cd40:
    // 0x26cd40: 0x1602ff45  bne         $s0, $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x26CD40u;
    {
        const bool branch_taken_0x26cd40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26cd40) {
            ctx->pc = 0x26CA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ca58;
        }
    }
    ctx->pc = 0x26CD48u;
    // 0x26cd48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26cd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26cd4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26cd4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26cd50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26cd50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26cd54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26cd54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26cd58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26cd58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cd5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cd60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cd64: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x26cd64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26cd68: 0x3e00008  jr          $ra
    ctx->pc = 0x26CD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CD70u;
}
