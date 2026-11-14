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

// Function: sub_002CF250
// Address: 0x2cf250 - 0x2cf3e0
void sub_002CF250_0x2cf250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF250_0x2cf250");
#endif

    switch (ctx->pc) {
        case 0x2cf26cu: goto label_2cf26c;
        case 0x2cf284u: goto label_2cf284;
        case 0x2cf290u: goto label_2cf290;
        case 0x2cf2a0u: goto label_2cf2a0;
        case 0x2cf2b0u: goto label_2cf2b0;
        case 0x2cf2bcu: goto label_2cf2bc;
        case 0x2cf2c8u: goto label_2cf2c8;
        case 0x2cf2ecu: goto label_2cf2ec;
        case 0x2cf300u: goto label_2cf300;
        case 0x2cf314u: goto label_2cf314;
        case 0x2cf320u: goto label_2cf320;
        case 0x2cf330u: goto label_2cf330;
        case 0x2cf340u: goto label_2cf340;
        case 0x2cf348u: goto label_2cf348;
        case 0x2cf358u: goto label_2cf358;
        case 0x2cf368u: goto label_2cf368;
        case 0x2cf370u: goto label_2cf370;
        case 0x2cf380u: goto label_2cf380;
        case 0x2cf398u: goto label_2cf398;
        case 0x2cf3a8u: goto label_2cf3a8;
        case 0x2cf3b8u: goto label_2cf3b8;
        default: break;
    }

    ctx->pc = 0x2cf250u;

    // 0x2cf250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cf250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cf254: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cf254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cf258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cf258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cf25c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cf260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf264: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF264u;
    SET_GPR_U32(ctx, 31, 0x2CF26Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF264u, 0x2CF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF26Cu;
label_2cf26c:
    // 0x2cf26c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x2cf26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf270: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2cf270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2cf274: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2CF274u;
    {
        const bool branch_taken_0x2cf274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf274) {
            ctx->pc = 0x2CF3C0u;
            goto label_2cf3c0;
        }
    }
    ctx->pc = 0x2CF27Cu;
    // 0x2cf27c: 0xc090864  jal         func_242190
    ctx->pc = 0x2CF27Cu;
    SET_GPR_U32(ctx, 31, 0x2CF284u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2CF27Cu, 0x2CF284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF284u;
label_2cf284:
    // 0x2cf284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cf284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf288: 0xc090590  jal         func_241640
    ctx->pc = 0x2CF288u;
    SET_GPR_U32(ctx, 31, 0x2CF290u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2CF288u, 0x2CF290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF290u;
label_2cf290:
    // 0x2cf290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cf290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf294: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2cf294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cf298: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2CF298u;
    SET_GPR_U32(ctx, 31, 0x2CF2A0u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2CF298u, 0x2CF2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF2A0u;
label_2cf2a0:
    // 0x2cf2a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cf2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2a8: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2CF2A8u;
    SET_GPR_U32(ctx, 31, 0x2CF2B0u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2CF2A8u, 0x2CF2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF2B0u;
label_2cf2b0:
    // 0x2cf2b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2b4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2CF2B4u;
    {
        const bool branch_taken_0x2cf2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf2b4) {
            ctx->pc = 0x2CF3ACu;
            goto label_2cf3ac;
        }
    }
    ctx->pc = 0x2CF2BCu;
label_2cf2bc:
    // 0x2cf2bc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2cf2bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf2c0: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF2C0u;
    SET_GPR_U32(ctx, 31, 0x2CF2C8u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF2C0u, 0x2CF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF2C8u;
label_2cf2c8:
    // 0x2cf2c8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2cf2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf2cc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2cf2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2cf2d0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2cf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cf2d4: 0x16420034  bne         $s2, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2CF2D4u;
    {
        const bool branch_taken_0x2cf2d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cf2d4) {
            ctx->pc = 0x2CF3A8u;
            goto label_2cf3a8;
        }
    }
    ctx->pc = 0x2CF2DCu;
    // 0x2cf2dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2cf2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2cf2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2e4: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2CF2E4u;
    SET_GPR_U32(ctx, 31, 0x2CF2ECu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2CF2E4u, 0x2CF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF2ECu;
label_2cf2ec:
    // 0x2cf2ec: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF2ECu;
    {
        const bool branch_taken_0x2cf2ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cf2ec) {
            ctx->pc = 0x2CF304u;
            goto label_2cf304;
        }
    }
    ctx->pc = 0x2CF2F4u;
    // 0x2cf2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2f8: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2CF2F8u;
    SET_GPR_U32(ctx, 31, 0x2CF300u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2CF2F8u, 0x2CF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF300u;
label_2cf300:
    // 0x2cf300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf304:
    // 0x2cf304: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cf304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf308: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2cf308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2cf30c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CF30Cu;
    SET_GPR_U32(ctx, 31, 0x2CF314u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CF30Cu, 0x2CF314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF314u;
label_2cf314:
    // 0x2cf314: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cf314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf318: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF318u;
    SET_GPR_U32(ctx, 31, 0x2CF320u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF318u, 0x2CF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF320u;
label_2cf320:
    // 0x2cf320: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2cf320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf324: 0xac520034  sw          $s2, 0x34($v0)
    ctx->pc = 0x2cf324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 18));
    // 0x2cf328: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF328u;
    SET_GPR_U32(ctx, 31, 0x2CF330u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF328u, 0x2CF330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF330u;
label_2cf330:
    // 0x2cf330: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2cf330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf334: 0x2785a4f4  addiu       $a1, $gp, -0x5B0C
    ctx->pc = 0x2cf334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943988));
    // 0x2cf338: 0xc0b3c88  jal         func_2CF220
    ctx->pc = 0x2CF338u;
    SET_GPR_U32(ctx, 31, 0x2CF340u);
    ctx->pc = 0x2CF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF220u, 0x2CF338u, 0x2CF340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF340u;
label_2cf340:
    // 0x2cf340: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF340u;
    SET_GPR_U32(ctx, 31, 0x2CF348u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF340u, 0x2CF348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF348u;
label_2cf348:
    // 0x2cf348: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2cf348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf34c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2cf34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2cf350: 0xc096958  jal         func_25A560
    ctx->pc = 0x2CF350u;
    SET_GPR_U32(ctx, 31, 0x2CF358u);
    ctx->pc = 0x25A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A560u, 0x2CF350u, 0x2CF358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF358u;
label_2cf358:
    // 0x2cf358: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cf358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cf35c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf360: 0xc1194c4  jal         func_465310
    ctx->pc = 0x2CF360u;
    SET_GPR_U32(ctx, 31, 0x2CF368u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x2CF360u, 0x2CF368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF368u;
label_2cf368:
    // 0x2cf368: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF368u;
    SET_GPR_U32(ctx, 31, 0x2CF370u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF368u, 0x2CF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF370u;
label_2cf370:
    // 0x2cf370: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cf370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf374: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cf374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cf378: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2CF378u;
    SET_GPR_U32(ctx, 31, 0x2CF380u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2CF378u, 0x2CF380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF380u;
label_2cf380:
    // 0x2cf380: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x2cf380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2cf384: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2cf384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2cf388: 0x24a5e360  addiu       $a1, $a1, -0x1CA0
    ctx->pc = 0x2cf388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959968));
    // 0x2cf38c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cf38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf390: 0xc0b3c88  jal         func_2CF220
    ctx->pc = 0x2CF390u;
    SET_GPR_U32(ctx, 31, 0x2CF398u);
    ctx->pc = 0x2CF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF220u, 0x2CF390u, 0x2CF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF398u;
label_2cf398:
    // 0x2cf398: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cf398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cf39c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cf39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf3a0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CF3A0u;
    SET_GPR_U32(ctx, 31, 0x2CF3A8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CF3A0u, 0x2CF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3A8u;
label_2cf3a8:
    // 0x2cf3a8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2cf3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2cf3ac:
    // 0x2cf3ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3b0: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2CF3B0u;
    SET_GPR_U32(ctx, 31, 0x2CF3B8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2CF3B0u, 0x2CF3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3B8u;
label_2cf3b8:
    // 0x2cf3b8: 0x1602ffc0  bne         $s0, $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2CF3B8u;
    {
        const bool branch_taken_0x2cf3b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cf3b8) {
            ctx->pc = 0x2CF2BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf2bc;
        }
    }
    ctx->pc = 0x2CF3C0u;
label_2cf3c0:
    // 0x2cf3c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cf3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf3c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cf3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf3c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf3cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf3d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cf3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cf3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF3DCu;
    // 0x2cf3dc: 0x0  nop
    ctx->pc = 0x2cf3dcu;
    // NOP
    ctx->pc = 0x2cf3e0u;
}
