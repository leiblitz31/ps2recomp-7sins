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

// Function: sub_00495F80
// Address: 0x495f80 - 0x4960d0
void sub_00495F80_0x495f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495F80_0x495f80");
#endif

    switch (ctx->pc) {
        case 0x495f80u: goto label_495f80;
        case 0x495f84u: goto label_495f84;
        case 0x495f88u: goto label_495f88;
        case 0x495f8cu: goto label_495f8c;
        case 0x495f90u: goto label_495f90;
        case 0x495f94u: goto label_495f94;
        case 0x495f98u: goto label_495f98;
        case 0x495f9cu: goto label_495f9c;
        case 0x495fa0u: goto label_495fa0;
        case 0x495fa4u: goto label_495fa4;
        case 0x495fa8u: goto label_495fa8;
        case 0x495facu: goto label_495fac;
        case 0x495fb0u: goto label_495fb0;
        case 0x495fb4u: goto label_495fb4;
        case 0x495fb8u: goto label_495fb8;
        case 0x495fbcu: goto label_495fbc;
        case 0x495fc0u: goto label_495fc0;
        case 0x495fc4u: goto label_495fc4;
        case 0x495fc8u: goto label_495fc8;
        case 0x495fccu: goto label_495fcc;
        case 0x495fd0u: goto label_495fd0;
        case 0x495fd4u: goto label_495fd4;
        case 0x495fd8u: goto label_495fd8;
        case 0x495fdcu: goto label_495fdc;
        case 0x495fe0u: goto label_495fe0;
        case 0x495fe4u: goto label_495fe4;
        case 0x495fe8u: goto label_495fe8;
        case 0x495fecu: goto label_495fec;
        case 0x495ff0u: goto label_495ff0;
        case 0x495ff4u: goto label_495ff4;
        case 0x495ff8u: goto label_495ff8;
        case 0x495ffcu: goto label_495ffc;
        case 0x496000u: goto label_496000;
        case 0x496004u: goto label_496004;
        case 0x496008u: goto label_496008;
        case 0x49600cu: goto label_49600c;
        case 0x496010u: goto label_496010;
        case 0x496014u: goto label_496014;
        case 0x496018u: goto label_496018;
        case 0x49601cu: goto label_49601c;
        case 0x496020u: goto label_496020;
        case 0x496024u: goto label_496024;
        case 0x496028u: goto label_496028;
        case 0x49602cu: goto label_49602c;
        case 0x496030u: goto label_496030;
        case 0x496034u: goto label_496034;
        case 0x496038u: goto label_496038;
        case 0x49603cu: goto label_49603c;
        case 0x496040u: goto label_496040;
        case 0x496044u: goto label_496044;
        case 0x496048u: goto label_496048;
        case 0x49604cu: goto label_49604c;
        case 0x496050u: goto label_496050;
        case 0x496054u: goto label_496054;
        case 0x496058u: goto label_496058;
        case 0x49605cu: goto label_49605c;
        case 0x496060u: goto label_496060;
        case 0x496064u: goto label_496064;
        case 0x496068u: goto label_496068;
        case 0x49606cu: goto label_49606c;
        case 0x496070u: goto label_496070;
        case 0x496074u: goto label_496074;
        case 0x496078u: goto label_496078;
        case 0x49607cu: goto label_49607c;
        case 0x496080u: goto label_496080;
        case 0x496084u: goto label_496084;
        case 0x496088u: goto label_496088;
        case 0x49608cu: goto label_49608c;
        case 0x496090u: goto label_496090;
        case 0x496094u: goto label_496094;
        case 0x496098u: goto label_496098;
        case 0x49609cu: goto label_49609c;
        case 0x4960a0u: goto label_4960a0;
        case 0x4960a4u: goto label_4960a4;
        case 0x4960a8u: goto label_4960a8;
        case 0x4960acu: goto label_4960ac;
        case 0x4960b0u: goto label_4960b0;
        case 0x4960b4u: goto label_4960b4;
        case 0x4960b8u: goto label_4960b8;
        case 0x4960bcu: goto label_4960bc;
        case 0x4960c0u: goto label_4960c0;
        case 0x4960c4u: goto label_4960c4;
        case 0x4960c8u: goto label_4960c8;
        case 0x4960ccu: goto label_4960cc;
        default: break;
    }

    ctx->pc = 0x495f80u;

label_495f80:
    // 0x495f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x495f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_495f84:
    // 0x495f84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x495f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_495f88:
    // 0x495f88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x495f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_495f8c:
    // 0x495f8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x495f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_495f90:
    // 0x495f90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x495f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_495f94:
    // 0x495f94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x495f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_495f98:
    // 0x495f98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x495f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495f9c:
    // 0x495f9c: 0xc116f3c  jal         func_45BCF0
label_495fa0:
    if (ctx->pc == 0x495FA0u) {
        ctx->pc = 0x495FA4u;
        goto label_495fa4;
    }
    ctx->pc = 0x495F9Cu;
    SET_GPR_U32(ctx, 31, 0x495FA4u);
    ctx->pc = 0x45BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BCF0u, 0x495F9Cu, 0x495FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495FA4u;
label_495fa4:
    // 0x495fa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x495fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495fa8:
    // 0x495fa8: 0x10000011  b           . + 4 + (0x11 << 2)
label_495fac:
    if (ctx->pc == 0x495FACu) {
        ctx->pc = 0x495FB0u;
        goto label_495fb0;
    }
    ctx->pc = 0x495FA8u;
    {
        const bool branch_taken_0x495fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495fa8) {
            ctx->pc = 0x495FF0u;
            goto label_495ff0;
        }
    }
    ctx->pc = 0x495FB0u;
label_495fb0:
    // 0x495fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x495fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_495fb4:
    // 0x495fb4: 0xc116ea4  jal         func_45BA90
label_495fb8:
    if (ctx->pc == 0x495FB8u) {
        ctx->pc = 0x495FBCu;
        goto label_495fbc;
    }
    ctx->pc = 0x495FB4u;
    SET_GPR_U32(ctx, 31, 0x495FBCu);
    ctx->pc = 0x45BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BA90u, 0x495FB4u, 0x495FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495FBCu;
label_495fbc:
    // 0x495fbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x495fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495fc0:
    // 0x495fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x495fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495fc4:
    // 0x495fc4: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_495fc8:
    if (ctx->pc == 0x495FC8u) {
        ctx->pc = 0x495FCCu;
        goto label_495fcc;
    }
    ctx->pc = 0x495FC4u;
    {
        const bool branch_taken_0x495fc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x495fc4) {
            ctx->pc = 0x495FD8u;
            goto label_495fd8;
        }
    }
    ctx->pc = 0x495FCCu;
label_495fcc:
    // 0x495fcc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x495fccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495fd0:
    // 0x495fd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_495fd4:
    if (ctx->pc == 0x495FD4u) {
        ctx->pc = 0x495FD8u;
        goto label_495fd8;
    }
    ctx->pc = 0x495FD0u;
    {
        const bool branch_taken_0x495fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495fd0) {
            ctx->pc = 0x495FDCu;
            goto label_495fdc;
        }
    }
    ctx->pc = 0x495FD8u;
label_495fd8:
    // 0x495fd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x495fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495fdc:
    // 0x495fdc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x495fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_495fe0:
    // 0x495fe0: 0x2782c140  addiu       $v0, $gp, -0x3EC0
    ctx->pc = 0x495fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951232));
label_495fe4:
    // 0x495fe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x495fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_495fe8:
    // 0x495fe8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x495fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_495fec:
    // 0x495fec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x495fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_495ff0:
    // 0x495ff0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x495ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_495ff4:
    // 0x495ff4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_495ff8:
    if (ctx->pc == 0x495FF8u) {
        ctx->pc = 0x495FFCu;
        goto label_495ffc;
    }
    ctx->pc = 0x495FF4u;
    {
        const bool branch_taken_0x495ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x495ff4) {
            ctx->pc = 0x495FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_495fb0;
        }
    }
    ctx->pc = 0x495FFCu;
label_495ffc:
    // 0x495ffc: 0x8f83c15c  lw          $v1, -0x3EA4($gp)
    ctx->pc = 0x495ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_496000:
    // 0x496000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496004:
    // 0x496004: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_496008:
    if (ctx->pc == 0x496008u) {
        ctx->pc = 0x49600Cu;
        goto label_49600c;
    }
    ctx->pc = 0x496004u;
    {
        const bool branch_taken_0x496004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x496004) {
            ctx->pc = 0x496014u;
            goto label_496014;
        }
    }
    ctx->pc = 0x49600Cu;
label_49600c:
    // 0x49600c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_496010:
    if (ctx->pc == 0x496010u) {
        ctx->pc = 0x496014u;
        goto label_496014;
    }
    ctx->pc = 0x49600Cu;
    {
        const bool branch_taken_0x49600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49600c) {
            ctx->pc = 0x496080u;
            goto label_496080;
        }
    }
    ctx->pc = 0x496014u;
label_496014:
    // 0x496014: 0x8f83c140  lw          $v1, -0x3EC0($gp)
    ctx->pc = 0x496014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951232)));
label_496018:
    // 0x496018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49601c:
    // 0x49601c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_496020:
    if (ctx->pc == 0x496020u) {
        ctx->pc = 0x496024u;
        goto label_496024;
    }
    ctx->pc = 0x49601Cu;
    {
        const bool branch_taken_0x49601c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x49601c) {
            ctx->pc = 0x496048u;
            goto label_496048;
        }
    }
    ctx->pc = 0x496024u;
label_496024:
    // 0x496024: 0x8f82c148  lw          $v0, -0x3EB8($gp)
    ctx->pc = 0x496024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951240)));
label_496028:
    // 0x496028: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_49602c:
    if (ctx->pc == 0x49602Cu) {
        ctx->pc = 0x496030u;
        goto label_496030;
    }
    ctx->pc = 0x496028u;
    {
        const bool branch_taken_0x496028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x496028) {
            ctx->pc = 0x4960ACu;
            goto label_4960ac;
        }
    }
    ctx->pc = 0x496030u;
label_496030:
    // 0x496030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x496030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496034:
    // 0x496034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x496034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496038:
    // 0x496038: 0xc125548  jal         func_495520
label_49603c:
    if (ctx->pc == 0x49603Cu) {
        ctx->pc = 0x496040u;
        goto label_496040;
    }
    ctx->pc = 0x496038u;
    SET_GPR_U32(ctx, 31, 0x496040u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x496038u, 0x496040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496040u;
label_496040:
    // 0x496040: 0x1000001a  b           . + 4 + (0x1A << 2)
label_496044:
    if (ctx->pc == 0x496044u) {
        ctx->pc = 0x496048u;
        goto label_496048;
    }
    ctx->pc = 0x496040u;
    {
        const bool branch_taken_0x496040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496040) {
            ctx->pc = 0x4960ACu;
            goto label_4960ac;
        }
    }
    ctx->pc = 0x496048u;
label_496048:
    // 0x496048: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x496048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_49604c:
    // 0x49604c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x49604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_496050:
    // 0x496050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x496050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496054:
    // 0x496054: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x496054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_496058:
    // 0x496058: 0x40f809  jalr        $v0
label_49605c:
    if (ctx->pc == 0x49605Cu) {
        ctx->pc = 0x496060u;
        goto label_496060;
    }
    ctx->pc = 0x496058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x496060u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x496058u, 0x496060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x496060u;
label_496060:
    // 0x496060: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x496060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_496064:
    // 0x496064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496068:
    // 0x496068: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
label_49606c:
    if (ctx->pc == 0x49606Cu) {
        ctx->pc = 0x496070u;
        goto label_496070;
    }
    ctx->pc = 0x496068u;
    {
        const bool branch_taken_0x496068 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x496068) {
            ctx->pc = 0x4960ACu;
            goto label_4960ac;
        }
    }
    ctx->pc = 0x496070u;
label_496070:
    // 0x496070: 0xc12524c  jal         func_494930
label_496074:
    if (ctx->pc == 0x496074u) {
        ctx->pc = 0x496078u;
        goto label_496078;
    }
    ctx->pc = 0x496070u;
    SET_GPR_U32(ctx, 31, 0x496078u);
    ctx->pc = 0x494930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494930u, 0x496070u, 0x496078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496078u;
label_496078:
    // 0x496078: 0x1000000c  b           . + 4 + (0xC << 2)
label_49607c:
    if (ctx->pc == 0x49607Cu) {
        ctx->pc = 0x496080u;
        goto label_496080;
    }
    ctx->pc = 0x496078u;
    {
        const bool branch_taken_0x496078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496078) {
            ctx->pc = 0x4960ACu;
            goto label_4960ac;
        }
    }
    ctx->pc = 0x496080u;
label_496080:
    // 0x496080: 0x8f82c140  lw          $v0, -0x3EC0($gp)
    ctx->pc = 0x496080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951232)));
label_496084:
    // 0x496084: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_496088:
    if (ctx->pc == 0x496088u) {
        ctx->pc = 0x49608Cu;
        goto label_49608c;
    }
    ctx->pc = 0x496084u;
    {
        const bool branch_taken_0x496084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496084) {
            ctx->pc = 0x4960ACu;
            goto label_4960ac;
        }
    }
    ctx->pc = 0x49608Cu;
label_49608c:
    // 0x49608c: 0x8f82c14c  lw          $v0, -0x3EB4($gp)
    ctx->pc = 0x49608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951244)));
label_496090:
    // 0x496090: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x496090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_496094:
    // 0x496094: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_496098:
    if (ctx->pc == 0x496098u) {
        ctx->pc = 0x49609Cu;
        goto label_49609c;
    }
    ctx->pc = 0x496094u;
    {
        const bool branch_taken_0x496094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496094) {
            ctx->pc = 0x4960ACu;
            goto label_4960ac;
        }
    }
    ctx->pc = 0x49609Cu;
label_49609c:
    // 0x49609c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49609cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4960a0:
    // 0x4960a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4960a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4960a4:
    // 0x4960a4: 0xc125548  jal         func_495520
label_4960a8:
    if (ctx->pc == 0x4960A8u) {
        ctx->pc = 0x4960ACu;
        goto label_4960ac;
    }
    ctx->pc = 0x4960A4u;
    SET_GPR_U32(ctx, 31, 0x4960ACu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4960A4u, 0x4960ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4960ACu;
label_4960ac:
    // 0x4960ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4960acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4960b0:
    // 0x4960b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4960b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4960b4:
    // 0x4960b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4960b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4960b8:
    // 0x4960b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4960b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4960bc:
    // 0x4960bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4960bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4960c0:
    // 0x4960c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4960c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4960c4:
    // 0x4960c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4960c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4960c8:
    // 0x4960c8: 0x3e00008  jr          $ra
label_4960cc:
    if (ctx->pc == 0x4960CCu) {
        ctx->pc = 0x4960D0u;
        goto label_fallthrough_0x4960c8;
    }
    ctx->pc = 0x4960C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4960C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4960c8:
    ctx->pc = 0x4960D0u;
}
