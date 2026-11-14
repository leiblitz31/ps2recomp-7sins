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

// Function: sub_0028EDB0
// Address: 0x28edb0 - 0x28efc0
void sub_0028EDB0_0x28edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EDB0_0x28edb0");
#endif

    switch (ctx->pc) {
        case 0x28edecu: goto label_28edec;
        case 0x28ee00u: goto label_28ee00;
        case 0x28ee14u: goto label_28ee14;
        case 0x28ee24u: goto label_28ee24;
        case 0x28ee3cu: goto label_28ee3c;
        case 0x28ee54u: goto label_28ee54;
        case 0x28ee6cu: goto label_28ee6c;
        case 0x28ee8cu: goto label_28ee8c;
        case 0x28eea4u: goto label_28eea4;
        case 0x28eeb4u: goto label_28eeb4;
        case 0x28eedcu: goto label_28eedc;
        case 0x28eef0u: goto label_28eef0;
        case 0x28ef04u: goto label_28ef04;
        case 0x28ef10u: goto label_28ef10;
        case 0x28ef24u: goto label_28ef24;
        case 0x28ef3cu: goto label_28ef3c;
        case 0x28ef64u: goto label_28ef64;
        case 0x28ef78u: goto label_28ef78;
        case 0x28ef94u: goto label_28ef94;
        default: break;
    }

    ctx->pc = 0x28edb0u;

    // 0x28edb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28edb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28edb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28edb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28edbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28edbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28edc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28edc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28edc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28edc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28edcc: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x28edccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x28edd0: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x28edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x28edd4: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x28edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x28edd8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x28edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28eddc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x28eddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ede0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x28ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ede4: 0xc0a13d4  jal         func_284F50
    ctx->pc = 0x28EDE4u;
    SET_GPR_U32(ctx, 31, 0x28EDECu);
    ctx->pc = 0x284F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F50u, 0x28EDE4u, 0x28EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EDECu;
label_28edec:
    // 0x28edec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28edecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28edf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28edf4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x28edf4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28edf8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28EDF8u;
    {
        const bool branch_taken_0x28edf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28edf8) {
            ctx->pc = 0x28EE74u;
            goto label_28ee74;
        }
    }
    ctx->pc = 0x28EE00u;
label_28ee00:
    // 0x28ee00: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28ee00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee04: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x28ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x28ee08: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28ee08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ee0c: 0xc0a3c88  jal         func_28F220
    ctx->pc = 0x28EE0Cu;
    SET_GPR_U32(ctx, 31, 0x28EE14u);
    ctx->pc = 0x28F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F220u, 0x28EE0Cu, 0x28EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE14u;
label_28ee14:
    // 0x28ee14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28ee14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee1c: 0xc0a3c78  jal         func_28F1E0
    ctx->pc = 0x28EE1Cu;
    SET_GPR_U32(ctx, 31, 0x28EE24u);
    ctx->pc = 0x28F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F1E0u, 0x28EE1Cu, 0x28EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE24u;
label_28ee24:
    // 0x28ee24: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ee28: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x28ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28ee2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28ee2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ee30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee34: 0xc0a3c58  jal         func_28F160
    ctx->pc = 0x28EE34u;
    SET_GPR_U32(ctx, 31, 0x28EE3Cu);
    ctx->pc = 0x28F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F160u, 0x28EE34u, 0x28EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE3Cu;
label_28ee3c:
    // 0x28ee3c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x28ee3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ee40: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x28EE40u;
    {
        const bool branch_taken_0x28ee40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee40) {
            ctx->pc = 0x28EE60u;
            goto label_28ee60;
        }
    }
    ctx->pc = 0x28EE48u;
    // 0x28ee48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ee48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee4c: 0xc0a3c50  jal         func_28F140
    ctx->pc = 0x28EE4Cu;
    SET_GPR_U32(ctx, 31, 0x28EE54u);
    ctx->pc = 0x28F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F140u, 0x28EE4Cu, 0x28EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE54u;
label_28ee54:
    // 0x28ee54: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x28ee54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ee58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28EE58u;
    {
        const bool branch_taken_0x28ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee58) {
            ctx->pc = 0x28EE70u;
            goto label_28ee70;
        }
    }
    ctx->pc = 0x28EE60u;
label_28ee60:
    // 0x28ee60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee64: 0xc0a3c48  jal         func_28F120
    ctx->pc = 0x28EE64u;
    SET_GPR_U32(ctx, 31, 0x28EE6Cu);
    ctx->pc = 0x28F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F120u, 0x28EE64u, 0x28EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE6Cu;
label_28ee6c:
    // 0x28ee6c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x28ee6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28ee70:
    // 0x28ee70: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x28ee70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28ee74:
    // 0x28ee74: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x28EE74u;
    {
        const bool branch_taken_0x28ee74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee74) {
            ctx->pc = 0x28EE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ee00;
        }
    }
    ctx->pc = 0x28EE7Cu;
    // 0x28ee7c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28ee80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28ee80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee84: 0xc0a3c3c  jal         func_28F0F0
    ctx->pc = 0x28EE84u;
    SET_GPR_U32(ctx, 31, 0x28EE8Cu);
    ctx->pc = 0x28F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F0F0u, 0x28EE84u, 0x28EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE8Cu;
label_28ee8c:
    // 0x28ee8c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x28EE8Cu;
    {
        const bool branch_taken_0x28ee8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee8c) {
            ctx->pc = 0x28EF04u;
            goto label_28ef04;
        }
    }
    ctx->pc = 0x28EE94u;
    // 0x28ee94: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x28ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x28ee98: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ee9c: 0xc0a3c2c  jal         func_28F0B0
    ctx->pc = 0x28EE9Cu;
    SET_GPR_U32(ctx, 31, 0x28EEA4u);
    ctx->pc = 0x28F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F0B0u, 0x28EE9Cu, 0x28EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEA4u;
label_28eea4:
    // 0x28eea4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28eea8: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x28eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x28eeac: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x28EEACu;
    SET_GPR_U32(ctx, 31, 0x28EEB4u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x28EEACu, 0x28EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEB4u;
label_28eeb4:
    // 0x28eeb4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28EEB4u;
    {
        const bool branch_taken_0x28eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eeb4) {
            ctx->pc = 0x28EEF8u;
            goto label_28eef8;
        }
    }
    ctx->pc = 0x28EEBCu;
    // 0x28eebc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28eec0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28eec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28eec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eec8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28eec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eecc: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x28eeccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28eed0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28eed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eed4: 0xc0a3f04  jal         func_28FC10
    ctx->pc = 0x28EED4u;
    SET_GPR_U32(ctx, 31, 0x28EEDCu);
    ctx->pc = 0x28FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FC10u, 0x28EED4u, 0x28EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEDCu;
label_28eedc:
    // 0x28eedc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28eee0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x28eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28eee4: 0x2786a2ac  addiu       $a2, $gp, -0x5D54
    ctx->pc = 0x28eee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943404));
    // 0x28eee8: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28EEE8u;
    SET_GPR_U32(ctx, 31, 0x28EEF0u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28EEE8u, 0x28EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEF0u;
label_28eef0:
    // 0x28eef0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x28EEF0u;
    {
        const bool branch_taken_0x28eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eef0) {
            ctx->pc = 0x28EF94u;
            goto label_28ef94;
        }
    }
    ctx->pc = 0x28EEF8u;
label_28eef8:
    // 0x28eef8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28eefc: 0xc0a3c08  jal         func_28F020
    ctx->pc = 0x28EEFCu;
    SET_GPR_U32(ctx, 31, 0x28EF04u);
    ctx->pc = 0x28F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F020u, 0x28EEFCu, 0x28EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF04u;
label_28ef04:
    // 0x28ef04: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x28ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x28ef08: 0xc0a3bf0  jal         func_28EFC0
    ctx->pc = 0x28EF08u;
    SET_GPR_U32(ctx, 31, 0x28EF10u);
    ctx->pc = 0x28EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EFC0u, 0x28EF08u, 0x28EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF10u;
label_28ef10:
    // 0x28ef10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28ef10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef14: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x28ef18: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ef1c: 0xc0a3c88  jal         func_28F220
    ctx->pc = 0x28EF1Cu;
    SET_GPR_U32(ctx, 31, 0x28EF24u);
    ctx->pc = 0x28F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F220u, 0x28EF1Cu, 0x28EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF24u;
label_28ef24:
    // 0x28ef24: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ef28: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x28ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28ef2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28ef2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ef30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef34: 0xc0a3c58  jal         func_28F160
    ctx->pc = 0x28EF34u;
    SET_GPR_U32(ctx, 31, 0x28EF3Cu);
    ctx->pc = 0x28F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F160u, 0x28EF34u, 0x28EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF3Cu;
label_28ef3c:
    // 0x28ef3c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28EF3Cu;
    {
        const bool branch_taken_0x28ef3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ef3c) {
            ctx->pc = 0x28EF80u;
            goto label_28ef80;
        }
    }
    ctx->pc = 0x28EF44u;
    // 0x28ef44: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x28ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28ef48: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ef4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ef4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28ef50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef54: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x28ef54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ef58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28ef58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef5c: 0xc0a3f04  jal         func_28FC10
    ctx->pc = 0x28EF5Cu;
    SET_GPR_U32(ctx, 31, 0x28EF64u);
    ctx->pc = 0x28FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FC10u, 0x28EF5Cu, 0x28EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF64u;
label_28ef64:
    // 0x28ef64: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ef68: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x28ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28ef6c: 0x2786a2b0  addiu       $a2, $gp, -0x5D50
    ctx->pc = 0x28ef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943408));
    // 0x28ef70: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28EF70u;
    SET_GPR_U32(ctx, 31, 0x28EF78u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28EF70u, 0x28EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF78u;
label_28ef78:
    // 0x28ef78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28EF78u;
    {
        const bool branch_taken_0x28ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ef78) {
            ctx->pc = 0x28EF94u;
            goto label_28ef94;
        }
    }
    ctx->pc = 0x28EF80u;
label_28ef80:
    // 0x28ef80: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ef84: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x28ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28ef88: 0x2786a2b4  addiu       $a2, $gp, -0x5D4C
    ctx->pc = 0x28ef88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943412));
    // 0x28ef8c: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28EF8Cu;
    SET_GPR_U32(ctx, 31, 0x28EF94u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28EF8Cu, 0x28EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF94u;
label_28ef94:
    // 0x28ef94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28ef94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ef98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28ef98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ef9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ef9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28efa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28efa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28efa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28efa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28efa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28efa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28efac: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x28efacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28efb0: 0x3e00008  jr          $ra
    ctx->pc = 0x28EFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EFB8u;
    // 0x28efb8: 0x0  nop
    ctx->pc = 0x28efb8u;
    // NOP
    // 0x28efbc: 0x0  nop
    ctx->pc = 0x28efbcu;
    // NOP
    ctx->pc = 0x28efc0u;
}
