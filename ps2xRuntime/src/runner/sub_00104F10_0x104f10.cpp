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

// Function: sub_00104F10
// Address: 0x104f10 - 0x1051b0
void sub_00104F10_0x104f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104F10_0x104f10");
#endif

    switch (ctx->pc) {
        case 0x104f54u: goto label_104f54;
        case 0x104f60u: goto label_104f60;
        case 0x104fd4u: goto label_104fd4;
        case 0x104fe8u: goto label_104fe8;
        case 0x104ff4u: goto label_104ff4;
        case 0x105000u: goto label_105000;
        case 0x105008u: goto label_105008;
        case 0x105014u: goto label_105014;
        case 0x105024u: goto label_105024;
        case 0x105034u: goto label_105034;
        case 0x105040u: goto label_105040;
        case 0x105054u: goto label_105054;
        case 0x105064u: goto label_105064;
        case 0x10507cu: goto label_10507c;
        case 0x105088u: goto label_105088;
        case 0x105094u: goto label_105094;
        case 0x1050a0u: goto label_1050a0;
        case 0x1050b0u: goto label_1050b0;
        case 0x1050c0u: goto label_1050c0;
        case 0x1050ccu: goto label_1050cc;
        case 0x1050dcu: goto label_1050dc;
        case 0x1050ecu: goto label_1050ec;
        case 0x1050fcu: goto label_1050fc;
        case 0x10513cu: goto label_10513c;
        case 0x105154u: goto label_105154;
        case 0x105160u: goto label_105160;
        case 0x105174u: goto label_105174;
        case 0x105184u: goto label_105184;
        default: break;
    }

    ctx->pc = 0x104f10u;

    // 0x104f10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x104f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x104f14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x104f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x104f18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x104f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x104f1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x104f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x104f20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x104f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x104f24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x104f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x104f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x104f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x104f2c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x104f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x104f30: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x104f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104f38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104F38u;
    {
        const bool branch_taken_0x104f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104f38) {
            ctx->pc = 0x104F4Cu;
            goto label_104f4c;
        }
    }
    ctx->pc = 0x104F40u;
    // 0x104f40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f44: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x104F44u;
    {
        const bool branch_taken_0x104f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104f44) {
            ctx->pc = 0x105188u;
            goto label_105188;
        }
    }
    ctx->pc = 0x104F4Cu;
label_104f4c:
    // 0x104f4c: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x104F4Cu;
    SET_GPR_U32(ctx, 31, 0x104F54u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x104F4Cu, 0x104F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F54u;
label_104f54:
    // 0x104f54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x104f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f58: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x104F58u;
    SET_GPR_U32(ctx, 31, 0x104F60u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x104F58u, 0x104F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F60u;
label_104f60:
    // 0x104f60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104f64: 0x10430069  beq         $v0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x104F64u;
    {
        const bool branch_taken_0x104f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x104f64) {
            ctx->pc = 0x10510Cu;
            goto label_10510c;
        }
    }
    ctx->pc = 0x104F6Cu;
    // 0x104f6c: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x104F6Cu;
    {
        const bool branch_taken_0x104f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104f6c) {
            ctx->pc = 0x10510Cu;
            goto label_10510c;
        }
    }
    ctx->pc = 0x104F74u;
    // 0x104f74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x104f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104f78: 0x10430082  beq         $v0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x104F78u;
    {
        const bool branch_taken_0x104f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x104f78) {
            ctx->pc = 0x105184u;
            goto label_105184;
        }
    }
    ctx->pc = 0x104F80u;
    // 0x104f80: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x104f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x104f84: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x104F84u;
    {
        const bool branch_taken_0x104f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x104f84) {
            ctx->pc = 0x104FC4u;
            goto label_104fc4;
        }
    }
    ctx->pc = 0x104F8Cu;
    // 0x104f8c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x104f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104f90: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x104F90u;
    {
        const bool branch_taken_0x104f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x104f90) {
            ctx->pc = 0x104FC4u;
            goto label_104fc4;
        }
    }
    ctx->pc = 0x104F98u;
    // 0x104f98: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x104f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x104f9c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x104F9Cu;
    {
        const bool branch_taken_0x104f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x104f9c) {
            ctx->pc = 0x104FC4u;
            goto label_104fc4;
        }
    }
    ctx->pc = 0x104FA4u;
    // 0x104fa4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x104fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x104fa8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x104FA8u;
    {
        const bool branch_taken_0x104fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x104fa8) {
            ctx->pc = 0x104FC4u;
            goto label_104fc4;
        }
    }
    ctx->pc = 0x104FB0u;
    // 0x104fb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x104fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x104fb4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x104FB4u;
    {
        const bool branch_taken_0x104fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x104fb4) {
            ctx->pc = 0x104FC4u;
            goto label_104fc4;
        }
    }
    ctx->pc = 0x104FBCu;
    // 0x104fbc: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x104FBCu;
    {
        const bool branch_taken_0x104fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104fbc) {
            ctx->pc = 0x105164u;
            goto label_105164;
        }
    }
    ctx->pc = 0x104FC4u;
label_104fc4:
    // 0x104fc4: 0x8f84b9a0  lw          $a0, -0x4660($gp)
    ctx->pc = 0x104fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949280)));
    // 0x104fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fcc: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x104FCCu;
    SET_GPR_U32(ctx, 31, 0x104FD4u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x104FCCu, 0x104FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FD4u;
label_104fd4:
    // 0x104fd4: 0x8f82b99c  lw          $v0, -0x4664($gp)
    ctx->pc = 0x104fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949276)));
    // 0x104fd8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x104fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x104fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fe0: 0xc09fc14  jal         func_27F050
    ctx->pc = 0x104FE0u;
    SET_GPR_U32(ctx, 31, 0x104FE8u);
    ctx->pc = 0x27F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F050u, 0x104FE0u, 0x104FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FE8u;
label_104fe8:
    // 0x104fe8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fec: 0xc053554  jal         func_14D550
    ctx->pc = 0x104FECu;
    SET_GPR_U32(ctx, 31, 0x104FF4u);
    ctx->pc = 0x14D550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D550u, 0x104FECu, 0x104FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FF4u;
label_104ff4:
    // 0x104ff4: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x104ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x104ff8: 0xc08a648  jal         func_229920
    ctx->pc = 0x104FF8u;
    SET_GPR_U32(ctx, 31, 0x105000u);
    ctx->pc = 0x229920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229920u, 0x104FF8u, 0x105000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105000u;
label_105000:
    // 0x105000: 0xc090864  jal         func_242190
    ctx->pc = 0x105000u;
    SET_GPR_U32(ctx, 31, 0x105008u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x105000u, 0x105008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105008u;
label_105008:
    // 0x105008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10500c: 0xc090590  jal         func_241640
    ctx->pc = 0x10500Cu;
    SET_GPR_U32(ctx, 31, 0x105014u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x10500Cu, 0x105014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105014u;
label_105014:
    // 0x105014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105018: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x105018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10501c: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x10501Cu;
    SET_GPR_U32(ctx, 31, 0x105024u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x10501Cu, 0x105024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105024u;
label_105024:
    // 0x105024: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x105024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105028: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x105028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10502c: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x10502Cu;
    SET_GPR_U32(ctx, 31, 0x105034u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x10502Cu, 0x105034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105034u;
label_105034:
    // 0x105034: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105038: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x105038u;
    {
        const bool branch_taken_0x105038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105038) {
            ctx->pc = 0x105058u;
            goto label_105058;
        }
    }
    ctx->pc = 0x105040u;
label_105040:
    // 0x105040: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x105040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105044: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x105044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x105048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10504c: 0xc0913a0  jal         func_244E80
    ctx->pc = 0x10504Cu;
    SET_GPR_U32(ctx, 31, 0x105054u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x10504Cu, 0x105054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105054u;
label_105054:
    // 0x105054: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x105054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_105058:
    // 0x105058: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x105058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10505c: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x10505Cu;
    SET_GPR_U32(ctx, 31, 0x105064u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x10505Cu, 0x105064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105064u;
label_105064:
    // 0x105064: 0x1622fff6  bne         $s1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x105064u;
    {
        const bool branch_taken_0x105064 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x105064) {
            ctx->pc = 0x105040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105040;
        }
    }
    ctx->pc = 0x10506Cu;
    // 0x10506c: 0x8f82b99c  lw          $v0, -0x4664($gp)
    ctx->pc = 0x10506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949276)));
    // 0x105070: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x105070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x105074: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x105074u;
    SET_GPR_U32(ctx, 31, 0x10507Cu);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x105074u, 0x10507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10507Cu;
label_10507c:
    // 0x10507c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105080: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x105080u;
    SET_GPR_U32(ctx, 31, 0x105088u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x105080u, 0x105088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105088u;
label_105088:
    // 0x105088: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x105088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10508c: 0xc090864  jal         func_242190
    ctx->pc = 0x10508Cu;
    SET_GPR_U32(ctx, 31, 0x105094u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x10508Cu, 0x105094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105094u;
label_105094:
    // 0x105094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105098: 0xc090590  jal         func_241640
    ctx->pc = 0x105098u;
    SET_GPR_U32(ctx, 31, 0x1050A0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x105098u, 0x1050A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050A0u;
label_1050a0:
    // 0x1050a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1050a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1050a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1050a8: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x1050A8u;
    SET_GPR_U32(ctx, 31, 0x1050B0u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x1050A8u, 0x1050B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050B0u;
label_1050b0:
    // 0x1050b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1050b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1050b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050b8: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x1050B8u;
    SET_GPR_U32(ctx, 31, 0x1050C0u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1050B8u, 0x1050C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050C0u;
label_1050c0:
    // 0x1050c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1050c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1050C4u;
    {
        const bool branch_taken_0x1050c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1050c4) {
            ctx->pc = 0x1050F0u;
            goto label_1050f0;
        }
    }
    ctx->pc = 0x1050CCu;
label_1050cc:
    // 0x1050cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1050ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1050d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1050d4: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x1050D4u;
    SET_GPR_U32(ctx, 31, 0x1050DCu);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x1050D4u, 0x1050DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050DCu;
label_1050dc:
    // 0x1050dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1050dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1050e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1050e4: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x1050E4u;
    SET_GPR_U32(ctx, 31, 0x1050ECu);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x1050E4u, 0x1050ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050ECu;
label_1050ec:
    // 0x1050ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1050ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1050f0:
    // 0x1050f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1050f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050f4: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x1050F4u;
    SET_GPR_U32(ctx, 31, 0x1050FCu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x1050F4u, 0x1050FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050FCu;
label_1050fc:
    // 0x1050fc: 0x1602fff3  bne         $s0, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1050FCu;
    {
        const bool branch_taken_0x1050fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1050fc) {
            ctx->pc = 0x1050CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1050cc;
        }
    }
    ctx->pc = 0x105104u;
    // 0x105104: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x105104u;
    {
        const bool branch_taken_0x105104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105104) {
            ctx->pc = 0x105184u;
            goto label_105184;
        }
    }
    ctx->pc = 0x10510Cu;
label_10510c:
    // 0x10510c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x10510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x105110: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x105110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x105114: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x105114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x105118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10511c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10511Cu;
    {
        const bool branch_taken_0x10511c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10511c) {
            ctx->pc = 0x105184u;
            goto label_105184;
        }
    }
    ctx->pc = 0x105124u;
    // 0x105124: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x105124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x105128: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x105128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10512c: 0x24050548  addiu       $a1, $zero, 0x548
    ctx->pc = 0x10512cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1352));
    // 0x105130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105134: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x105134u;
    SET_GPR_U32(ctx, 31, 0x10513Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x105134u, 0x10513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10513Cu;
label_10513c:
    // 0x10513c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10513cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x105140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105144: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x105144u;
    {
        const bool branch_taken_0x105144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x105144) {
            ctx->pc = 0x105184u;
            goto label_105184;
        }
    }
    ctx->pc = 0x10514Cu;
    // 0x10514c: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x10514Cu;
    SET_GPR_U32(ctx, 31, 0x105154u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x10514Cu, 0x105154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105154u;
label_105154:
    // 0x105154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105158: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x105158u;
    SET_GPR_U32(ctx, 31, 0x105160u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x105158u, 0x105160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105160u;
label_105160:
    // 0x105160: 0xaf82b9a0  sw          $v0, -0x4660($gp)
    ctx->pc = 0x105160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949280), GPR_U32(ctx, 2));
label_105164:
    // 0x105164: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x105164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10516c: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x10516Cu;
    SET_GPR_U32(ctx, 31, 0x105174u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x10516Cu, 0x105174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105174u;
label_105174:
    // 0x105174: 0x8f82b99c  lw          $v0, -0x4664($gp)
    ctx->pc = 0x105174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949276)));
    // 0x105178: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x105178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10517c: 0xc0a06fc  jal         func_281BF0
    ctx->pc = 0x10517Cu;
    SET_GPR_U32(ctx, 31, 0x105184u);
    ctx->pc = 0x281BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BF0u, 0x10517Cu, 0x105184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105184u;
label_105184:
    // 0x105184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105188:
    // 0x105188: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x105188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10518c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10518cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105190: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x105190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x105194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10519c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10519cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1051a0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1051a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1051a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1051A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1051A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1051ACu;
    // 0x1051ac: 0x0  nop
    ctx->pc = 0x1051acu;
    // NOP
    ctx->pc = 0x1051b0u;
}
