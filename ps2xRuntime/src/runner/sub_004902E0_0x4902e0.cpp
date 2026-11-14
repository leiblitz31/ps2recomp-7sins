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

// Function: sub_004902E0
// Address: 0x4902e0 - 0x490490
void sub_004902E0_0x4902e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004902E0_0x4902e0");
#endif

    switch (ctx->pc) {
        case 0x49031cu: goto label_49031c;
        case 0x490340u: goto label_490340;
        case 0x49036cu: goto label_49036c;
        case 0x490384u: goto label_490384;
        case 0x490390u: goto label_490390;
        case 0x4903a4u: goto label_4903a4;
        case 0x4903b0u: goto label_4903b0;
        case 0x4903c4u: goto label_4903c4;
        case 0x4903e0u: goto label_4903e0;
        case 0x4903f4u: goto label_4903f4;
        case 0x49040cu: goto label_49040c;
        case 0x490424u: goto label_490424;
        case 0x490454u: goto label_490454;
        case 0x490464u: goto label_490464;
        default: break;
    }

    ctx->pc = 0x4902e0u;

    // 0x4902e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4902e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4902e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4902e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4902e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4902e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4902ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4902ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4902f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4902f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4902f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4902f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4902f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4902f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4902fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4902fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x490300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x490300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x490304: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x490304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x490308: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x490308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x49030c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x49030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x490310: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x490310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490314: 0xc04e50c  jal         func_139430
    ctx->pc = 0x490314u;
    SET_GPR_U32(ctx, 31, 0x49031Cu);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x490314u, 0x49031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49031Cu;
label_49031c:
    // 0x49031c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x49031cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490320: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x490320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x490324: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x490324u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x490328: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x490328u;
    {
        const bool branch_taken_0x490328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x490328) {
            ctx->pc = 0x490464u;
            goto label_490464;
        }
    }
    ctx->pc = 0x490330u;
    // 0x490330: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x490330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x490334: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x490334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x490338: 0xc123ed0  jal         func_48FB40
    ctx->pc = 0x490338u;
    SET_GPR_U32(ctx, 31, 0x490340u);
    ctx->pc = 0x48FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FB40u, 0x490338u, 0x490340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490340u;
label_490340:
    // 0x490340: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x490340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490344: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x490344u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x490348: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x490348u;
    {
        const bool branch_taken_0x490348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x490348) {
            ctx->pc = 0x490464u;
            goto label_490464;
        }
    }
    ctx->pc = 0x490350u;
    // 0x490350: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x490350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x490354: 0x27b5009c  addiu       $s5, $sp, 0x9C
    ctx->pc = 0x490354u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x490358: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x490358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x49035c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x49035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x490360: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x490360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490364: 0xc04f590  jal         func_13D640
    ctx->pc = 0x490364u;
    SET_GPR_U32(ctx, 31, 0x49036Cu);
    ctx->pc = 0x13D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D640u, 0x490364u, 0x49036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49036Cu;
label_49036c:
    // 0x49036c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x49036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x490370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x490370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490374: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x490374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490378: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x490378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x49037c: 0xc04f550  jal         func_13D540
    ctx->pc = 0x49037Cu;
    SET_GPR_U32(ctx, 31, 0x490384u);
    ctx->pc = 0x13D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D540u, 0x49037Cu, 0x490384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490384u;
label_490384:
    // 0x490384: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x490384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490388: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x490388u;
    {
        const bool branch_taken_0x490388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490388) {
            ctx->pc = 0x490434u;
            goto label_490434;
        }
    }
    ctx->pc = 0x490390u;
label_490390:
    // 0x490390: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x490390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x490394: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x490394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x490398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49039c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x49039Cu;
    SET_GPR_U32(ctx, 31, 0x4903A4u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x49039Cu, 0x4903A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4903A4u;
label_4903a4:
    // 0x4903a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4903a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4903a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4903A8u;
    {
        const bool branch_taken_0x4903a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4903a8) {
            ctx->pc = 0x490428u;
            goto label_490428;
        }
    }
    ctx->pc = 0x4903B0u;
label_4903b0:
    // 0x4903b0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x4903b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4903b4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x4903b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4903b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4903b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4903bc: 0xc124124  jal         func_490490
    ctx->pc = 0x4903BCu;
    SET_GPR_U32(ctx, 31, 0x4903C4u);
    ctx->pc = 0x490490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490490u, 0x4903BCu, 0x4903C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4903C4u;
label_4903c4:
    // 0x4903c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4903c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4903c8: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x4903c8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4903cc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4903ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4903d0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4903d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4903d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4903d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4903d8: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4903D8u;
    SET_GPR_U32(ctx, 31, 0x4903E0u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4903D8u, 0x4903E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4903E0u;
label_4903e0:
    // 0x4903e0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x4903e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x4903e4: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x4903e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x4903e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4903e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4903ec: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4903ECu;
    SET_GPR_U32(ctx, 31, 0x4903F4u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4903ECu, 0x4903F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4903F4u;
label_4903f4:
    // 0x4903f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4903f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4903f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4903f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4903fc: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x4903fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x490400: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x490400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490404: 0xc04e51c  jal         func_139470
    ctx->pc = 0x490404u;
    SET_GPR_U32(ctx, 31, 0x49040Cu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x490404u, 0x49040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49040Cu;
label_49040c:
    // 0x49040c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x49040cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x490410: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x490410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x490414: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x490414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x490418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49041c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x49041Cu;
    SET_GPR_U32(ctx, 31, 0x490424u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x49041Cu, 0x490424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490424u;
label_490424:
    // 0x490424: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x490424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_490428:
    // 0x490428: 0x1600ffe1  bnez        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x490428u;
    {
        const bool branch_taken_0x490428 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x490428) {
            ctx->pc = 0x4903B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4903b0;
        }
    }
    ctx->pc = 0x490430u;
    // 0x490430: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x490430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_490434:
    // 0x490434: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x490434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x490438: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x490438u;
    {
        const bool branch_taken_0x490438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490438) {
            ctx->pc = 0x490390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490390;
        }
    }
    ctx->pc = 0x490440u;
    // 0x490440: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x490440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x490444: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x490444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490448: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x490448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x49044c: 0xc04f4d0  jal         func_13D340
    ctx->pc = 0x49044Cu;
    SET_GPR_U32(ctx, 31, 0x490454u);
    ctx->pc = 0x13D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D340u, 0x49044Cu, 0x490454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490454u;
label_490454:
    // 0x490454: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x490454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x490458: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x490458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49045c: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x49045Cu;
    SET_GPR_U32(ctx, 31, 0x490464u);
    ctx->pc = 0x137F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F50u, 0x49045Cu, 0x490464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490464u;
label_490464:
    // 0x490464: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x490464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x490468: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x490468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49046c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x49046cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x490470: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x490470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x490474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x490478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49047c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49047cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x490480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490484: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x490484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x490488: 0x3e00008  jr          $ra
    ctx->pc = 0x490488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490490u;
}
