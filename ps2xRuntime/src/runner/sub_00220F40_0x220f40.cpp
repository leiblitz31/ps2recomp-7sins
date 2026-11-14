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

// Function: sub_00220F40
// Address: 0x220f40 - 0x221150
void sub_00220F40_0x220f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220F40_0x220f40");
#endif

    switch (ctx->pc) {
        case 0x220f7cu: goto label_220f7c;
        case 0x220f90u: goto label_220f90;
        case 0x220fa4u: goto label_220fa4;
        case 0x220fb4u: goto label_220fb4;
        case 0x220fccu: goto label_220fcc;
        case 0x220fe4u: goto label_220fe4;
        case 0x220ffcu: goto label_220ffc;
        case 0x22101cu: goto label_22101c;
        case 0x221034u: goto label_221034;
        case 0x221044u: goto label_221044;
        case 0x22106cu: goto label_22106c;
        case 0x221080u: goto label_221080;
        case 0x221094u: goto label_221094;
        case 0x2210a0u: goto label_2210a0;
        case 0x2210b4u: goto label_2210b4;
        case 0x2210ccu: goto label_2210cc;
        case 0x2210f4u: goto label_2210f4;
        case 0x221108u: goto label_221108;
        case 0x221124u: goto label_221124;
        default: break;
    }

    ctx->pc = 0x220f40u;

    // 0x220f40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x220f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x220f44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x220f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x220f48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x220f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x220f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x220f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x220f50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x220f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x220f54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x220f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x220f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x220f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x220f5c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x220f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x220f60: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x220f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x220f64: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x220f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x220f68: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x220f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x220f6c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x220f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220f70: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x220f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x220f74: 0xc0863ac  jal         func_218EB0
    ctx->pc = 0x220F74u;
    SET_GPR_U32(ctx, 31, 0x220F7Cu);
    ctx->pc = 0x218EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EB0u, 0x220F74u, 0x220F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F7Cu;
label_220f7c:
    // 0x220f7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x220f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220f84: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x220f84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220f88: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x220F88u;
    {
        const bool branch_taken_0x220f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220f88) {
            ctx->pc = 0x221004u;
            goto label_221004;
        }
    }
    ctx->pc = 0x220F90u;
label_220f90:
    // 0x220f90: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x220f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f94: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x220f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x220f98: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x220f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220f9c: 0xc08639c  jal         func_218E70
    ctx->pc = 0x220F9Cu;
    SET_GPR_U32(ctx, 31, 0x220FA4u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x220F9Cu, 0x220FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FA4u;
label_220fa4:
    // 0x220fa4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x220fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fac: 0xc08638c  jal         func_218E30
    ctx->pc = 0x220FACu;
    SET_GPR_U32(ctx, 31, 0x220FB4u);
    ctx->pc = 0x218E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E30u, 0x220FACu, 0x220FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FB4u;
label_220fb4:
    // 0x220fb4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x220fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x220fb8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x220fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x220fbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x220fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x220fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fc4: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x220FC4u;
    SET_GPR_U32(ctx, 31, 0x220FCCu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x220FC4u, 0x220FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FCCu;
label_220fcc:
    // 0x220fcc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x220fccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220fd0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x220FD0u;
    {
        const bool branch_taken_0x220fd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x220fd0) {
            ctx->pc = 0x220FF0u;
            goto label_220ff0;
        }
    }
    ctx->pc = 0x220FD8u;
    // 0x220fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fdc: 0xc086384  jal         func_218E10
    ctx->pc = 0x220FDCu;
    SET_GPR_U32(ctx, 31, 0x220FE4u);
    ctx->pc = 0x218E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E10u, 0x220FDCu, 0x220FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FE4u;
label_220fe4:
    // 0x220fe4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x220fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220fe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x220FE8u;
    {
        const bool branch_taken_0x220fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220fe8) {
            ctx->pc = 0x221000u;
            goto label_221000;
        }
    }
    ctx->pc = 0x220FF0u;
label_220ff0:
    // 0x220ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ff4: 0xc08637c  jal         func_218DF0
    ctx->pc = 0x220FF4u;
    SET_GPR_U32(ctx, 31, 0x220FFCu);
    ctx->pc = 0x218DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218DF0u, 0x220FF4u, 0x220FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FFCu;
label_220ffc:
    // 0x220ffc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x220ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_221000:
    // 0x221000: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x221000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_221004:
    // 0x221004: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x221004u;
    {
        const bool branch_taken_0x221004 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x221004) {
            ctx->pc = 0x220F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220f90;
        }
    }
    ctx->pc = 0x22100Cu;
    // 0x22100c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x22100cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x221010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221014: 0xc0861d8  jal         func_218760
    ctx->pc = 0x221014u;
    SET_GPR_U32(ctx, 31, 0x22101Cu);
    ctx->pc = 0x218760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218760u, 0x221014u, 0x22101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22101Cu;
label_22101c:
    // 0x22101c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x22101Cu;
    {
        const bool branch_taken_0x22101c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22101c) {
            ctx->pc = 0x221094u;
            goto label_221094;
        }
    }
    ctx->pc = 0x221024u;
    // 0x221024: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x221024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x221028: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x221028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22102c: 0xc086218  jal         func_218860
    ctx->pc = 0x22102Cu;
    SET_GPR_U32(ctx, 31, 0x221034u);
    ctx->pc = 0x218860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218860u, 0x22102Cu, 0x221034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221034u;
label_221034:
    // 0x221034: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x221034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x221038: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x221038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x22103c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x22103Cu;
    SET_GPR_U32(ctx, 31, 0x221044u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x22103Cu, 0x221044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221044u;
label_221044:
    // 0x221044: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x221044u;
    {
        const bool branch_taken_0x221044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221044) {
            ctx->pc = 0x221088u;
            goto label_221088;
        }
    }
    ctx->pc = 0x22104Cu;
    // 0x22104c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x221050: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x221050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x221054: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x221054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221058: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x221058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22105c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x22105cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x221060: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x221060u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221064: 0xc088468  jal         func_2211A0
    ctx->pc = 0x221064u;
    SET_GPR_U32(ctx, 31, 0x22106Cu);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x221064u, 0x22106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22106Cu;
label_22106c:
    // 0x22106c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221070: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x221070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x221074: 0x27869c48  addiu       $a2, $gp, -0x63B8
    ctx->pc = 0x221074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941768));
    // 0x221078: 0xc088454  jal         func_221150
    ctx->pc = 0x221078u;
    SET_GPR_U32(ctx, 31, 0x221080u);
    ctx->pc = 0x221150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221150u, 0x221078u, 0x221080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221080u;
label_221080:
    // 0x221080: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x221080u;
    {
        const bool branch_taken_0x221080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221080) {
            ctx->pc = 0x221124u;
            goto label_221124;
        }
    }
    ctx->pc = 0x221088u;
label_221088:
    // 0x221088: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x221088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x22108c: 0xc088398  jal         func_220E60
    ctx->pc = 0x22108Cu;
    SET_GPR_U32(ctx, 31, 0x221094u);
    ctx->pc = 0x220E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220E60u, 0x22108Cu, 0x221094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221094u;
label_221094:
    // 0x221094: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x221094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x221098: 0xc0883b8  jal         func_220EE0
    ctx->pc = 0x221098u;
    SET_GPR_U32(ctx, 31, 0x2210A0u);
    ctx->pc = 0x220EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EE0u, 0x221098u, 0x2210A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210A0u;
label_2210a0:
    // 0x2210a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2210a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210a4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x2210a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2210a8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2210a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2210ac: 0xc08639c  jal         func_218E70
    ctx->pc = 0x2210ACu;
    SET_GPR_U32(ctx, 31, 0x2210B4u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x2210ACu, 0x2210B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210B4u;
label_2210b4:
    // 0x2210b4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2210b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2210b8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2210b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2210bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2210bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2210c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210c4: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x2210C4u;
    SET_GPR_U32(ctx, 31, 0x2210CCu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x2210C4u, 0x2210CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210CCu;
label_2210cc:
    // 0x2210cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2210CCu;
    {
        const bool branch_taken_0x2210cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2210cc) {
            ctx->pc = 0x221110u;
            goto label_221110;
        }
    }
    ctx->pc = 0x2210D4u;
    // 0x2210d4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2210d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2210d8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2210d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2210dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2210dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2210e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210e4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x2210e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2210e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2210e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210ec: 0xc088468  jal         func_2211A0
    ctx->pc = 0x2210ECu;
    SET_GPR_U32(ctx, 31, 0x2210F4u);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x2210ECu, 0x2210F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210F4u;
label_2210f4:
    // 0x2210f4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2210f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2210f8: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x2210f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2210fc: 0x27869c4c  addiu       $a2, $gp, -0x63B4
    ctx->pc = 0x2210fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941772));
    // 0x221100: 0xc088454  jal         func_221150
    ctx->pc = 0x221100u;
    SET_GPR_U32(ctx, 31, 0x221108u);
    ctx->pc = 0x221150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221150u, 0x221100u, 0x221108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221108u;
label_221108:
    // 0x221108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x221108u;
    {
        const bool branch_taken_0x221108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221108) {
            ctx->pc = 0x221124u;
            goto label_221124;
        }
    }
    ctx->pc = 0x221110u;
label_221110:
    // 0x221110: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x221110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221114: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x221114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x221118: 0x27869c50  addiu       $a2, $gp, -0x63B0
    ctx->pc = 0x221118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941776));
    // 0x22111c: 0xc088454  jal         func_221150
    ctx->pc = 0x22111Cu;
    SET_GPR_U32(ctx, 31, 0x221124u);
    ctx->pc = 0x221150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221150u, 0x22111Cu, 0x221124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221124u;
label_221124:
    // 0x221124: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x221124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221128: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x221128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22112c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22112cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22113c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22113cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x221140: 0x3e00008  jr          $ra
    ctx->pc = 0x221140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221148u;
    // 0x221148: 0x0  nop
    ctx->pc = 0x221148u;
    // NOP
    // 0x22114c: 0x0  nop
    ctx->pc = 0x22114cu;
    // NOP
    ctx->pc = 0x221150u;
}
