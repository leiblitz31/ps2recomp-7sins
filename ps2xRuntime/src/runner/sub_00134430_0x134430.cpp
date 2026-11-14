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

// Function: sub_00134430
// Address: 0x134430 - 0x134870
void sub_00134430_0x134430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134430_0x134430");
#endif

    switch (ctx->pc) {
        case 0x134494u: goto label_134494;
        case 0x1344a4u: goto label_1344a4;
        case 0x1344b4u: goto label_1344b4;
        case 0x134504u: goto label_134504;
        case 0x134518u: goto label_134518;
        case 0x134528u: goto label_134528;
        case 0x13453cu: goto label_13453c;
        case 0x134554u: goto label_134554;
        case 0x134564u: goto label_134564;
        case 0x134570u: goto label_134570;
        case 0x134594u: goto label_134594;
        case 0x1345a8u: goto label_1345a8;
        case 0x1345b8u: goto label_1345b8;
        case 0x1345ccu: goto label_1345cc;
        case 0x1345e4u: goto label_1345e4;
        case 0x1345f4u: goto label_1345f4;
        case 0x134600u: goto label_134600;
        case 0x134624u: goto label_134624;
        case 0x134638u: goto label_134638;
        case 0x134648u: goto label_134648;
        case 0x13465cu: goto label_13465c;
        case 0x13466cu: goto label_13466c;
        case 0x134698u: goto label_134698;
        case 0x1346b0u: goto label_1346b0;
        case 0x1346c4u: goto label_1346c4;
        case 0x1346d4u: goto label_1346d4;
        case 0x1346e8u: goto label_1346e8;
        case 0x1346f8u: goto label_1346f8;
        case 0x134724u: goto label_134724;
        case 0x134800u: goto label_134800;
        case 0x134814u: goto label_134814;
        case 0x134824u: goto label_134824;
        case 0x134830u: goto label_134830;
        default: break;
    }

    ctx->pc = 0x134430u;

    // 0x134430: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x134430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x134434: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x134434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x134438: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x134438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13443c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x134440: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x134440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x134444: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x134444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x134448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x134448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13444c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x134450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13445c: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x13445cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x134460: 0xafa60120  sw          $a2, 0x120($sp)
    ctx->pc = 0x134460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 6));
    // 0x134464: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x134464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x134468: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x134468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x13446c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x13446cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134470: 0x120000f2  beqz        $s0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x134470u;
    {
        const bool branch_taken_0x134470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x134470) {
            ctx->pc = 0x13483Cu;
            goto label_13483c;
        }
    }
    ctx->pc = 0x134478u;
    // 0x134478: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x134478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13447c: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x13447Cu;
    {
        const bool branch_taken_0x13447c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13447c) {
            ctx->pc = 0x13483Cu;
            goto label_13483c;
        }
    }
    ctx->pc = 0x134484u;
    // 0x134484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134488: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x134488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13448c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13448Cu;
    SET_GPR_U32(ctx, 31, 0x134494u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13448Cu, 0x134494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134494u;
label_134494:
    // 0x134494: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x134494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134498: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x134498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13449c: 0xc096880  jal         func_25A200
    ctx->pc = 0x13449Cu;
    SET_GPR_U32(ctx, 31, 0x1344A4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x13449Cu, 0x1344A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344A4u;
label_1344a4:
    // 0x1344a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1344a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1344a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344ac: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x1344ACu;
    SET_GPR_U32(ctx, 31, 0x1344B4u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x1344ACu, 0x1344B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344B4u;
label_1344b4:
    // 0x1344b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1344b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344b8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1344b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1344bc: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x1344bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1344c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1344c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1344c4: 0x108300c8  beq         $a0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x1344C4u;
    {
        const bool branch_taken_0x1344c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1344c4) {
            ctx->pc = 0x1347E8u;
            goto label_1347e8;
        }
    }
    ctx->pc = 0x1344CCu;
    // 0x1344cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1344ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1344d0: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1344D0u;
    {
        const bool branch_taken_0x1344d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1344d0) {
            ctx->pc = 0x134614u;
            goto label_134614;
        }
    }
    ctx->pc = 0x1344D8u;
    // 0x1344d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1344d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1344dc: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1344DCu;
    {
        const bool branch_taken_0x1344dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1344dc) {
            ctx->pc = 0x134584u;
            goto label_134584;
        }
    }
    ctx->pc = 0x1344E4u;
    // 0x1344e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1344E4u;
    {
        const bool branch_taken_0x1344e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1344e4) {
            ctx->pc = 0x1344F4u;
            goto label_1344f4;
        }
    }
    ctx->pc = 0x1344ECu;
    // 0x1344ec: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x1344ECu;
    {
        const bool branch_taken_0x1344ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1344ec) {
            ctx->pc = 0x13483Cu;
            goto label_13483c;
        }
    }
    ctx->pc = 0x1344F4u;
label_1344f4:
    // 0x1344f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1344f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1344f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1344fc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1344FCu;
    SET_GPR_U32(ctx, 31, 0x134504u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1344FCu, 0x134504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134504u;
label_134504:
    // 0x134504: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x134504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x134508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13450c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134510: 0xc085538  jal         func_2154E0
    ctx->pc = 0x134510u;
    SET_GPR_U32(ctx, 31, 0x134518u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x134510u, 0x134518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134518u;
label_134518:
    // 0x134518: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x134518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x13451c: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x13451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x134520: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x134520u;
    SET_GPR_U32(ctx, 31, 0x134528u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x134520u, 0x134528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134528u;
label_134528:
    // 0x134528: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x134528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13452c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13452cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134530: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x134530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134534: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x134534u;
    SET_GPR_U32(ctx, 31, 0x13453Cu);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x134534u, 0x13453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13453Cu;
label_13453c:
    // 0x13453c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13453cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134540: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x134540u;
    {
        const bool branch_taken_0x134540 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x134540) {
            ctx->pc = 0x134564u;
            goto label_134564;
        }
    }
    ctx->pc = 0x134548u;
    // 0x134548: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13454c: 0xc106784  jal         func_419E10
    ctx->pc = 0x13454Cu;
    SET_GPR_U32(ctx, 31, 0x134554u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x13454Cu, 0x134554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134554u;
label_134554:
    // 0x134554: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x134554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x134558: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x134558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13455c: 0xc041d58  jal         func_107560
    ctx->pc = 0x13455Cu;
    SET_GPR_U32(ctx, 31, 0x134564u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x13455Cu, 0x134564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134564u;
label_134564:
    // 0x134564: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x134564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x134568: 0xc091008  jal         func_244020
    ctx->pc = 0x134568u;
    SET_GPR_U32(ctx, 31, 0x134570u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x134568u, 0x134570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134570u;
label_134570:
    // 0x134570: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x134570u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x134574: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x134574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x134578: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x134578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13457c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x13457Cu;
    {
        const bool branch_taken_0x13457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13457c) {
            ctx->pc = 0x13483Cu;
            goto label_13483c;
        }
    }
    ctx->pc = 0x134584u;
label_134584:
    // 0x134584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134588: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x134588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13458c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13458Cu;
    SET_GPR_U32(ctx, 31, 0x134594u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13458Cu, 0x134594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134594u;
label_134594:
    // 0x134594: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x134594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x134598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13459c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13459cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1345a0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1345A0u;
    SET_GPR_U32(ctx, 31, 0x1345A8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1345A0u, 0x1345A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345A8u;
label_1345a8:
    // 0x1345a8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1345a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1345ac: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x1345acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1345b0: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x1345B0u;
    SET_GPR_U32(ctx, 31, 0x1345B8u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x1345B0u, 0x1345B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345B8u;
label_1345b8:
    // 0x1345b8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1345b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1345bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1345bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1345c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1345c4: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x1345C4u;
    SET_GPR_U32(ctx, 31, 0x1345CCu);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x1345C4u, 0x1345CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345CCu;
label_1345cc:
    // 0x1345cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1345ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345d0: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1345D0u;
    {
        const bool branch_taken_0x1345d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345d0) {
            ctx->pc = 0x1345F4u;
            goto label_1345f4;
        }
    }
    ctx->pc = 0x1345D8u;
    // 0x1345d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1345d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345dc: 0xc106784  jal         func_419E10
    ctx->pc = 0x1345DCu;
    SET_GPR_U32(ctx, 31, 0x1345E4u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x1345DCu, 0x1345E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345E4u;
label_1345e4:
    // 0x1345e4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x1345e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1345e8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1345e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1345ec: 0xc041d58  jal         func_107560
    ctx->pc = 0x1345ECu;
    SET_GPR_U32(ctx, 31, 0x1345F4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1345ECu, 0x1345F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345F4u;
label_1345f4:
    // 0x1345f4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1345f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1345f8: 0xc091008  jal         func_244020
    ctx->pc = 0x1345F8u;
    SET_GPR_U32(ctx, 31, 0x134600u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x1345F8u, 0x134600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134600u;
label_134600:
    // 0x134600: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x134600u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x134604: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x134604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x134608: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x134608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13460c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x13460Cu;
    {
        const bool branch_taken_0x13460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13460c) {
            ctx->pc = 0x13483Cu;
            goto label_13483c;
        }
    }
    ctx->pc = 0x134614u;
label_134614:
    // 0x134614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134618: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x134618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13461c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13461Cu;
    SET_GPR_U32(ctx, 31, 0x134624u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13461Cu, 0x134624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134624u;
label_134624:
    // 0x134624: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x134624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x134628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13462c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134630: 0xc085538  jal         func_2154E0
    ctx->pc = 0x134630u;
    SET_GPR_U32(ctx, 31, 0x134638u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x134630u, 0x134638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134638u;
label_134638:
    // 0x134638: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x134638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13463c: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x13463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x134640: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x134640u;
    SET_GPR_U32(ctx, 31, 0x134648u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x134640u, 0x134648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134648u;
label_134648:
    // 0x134648: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x134648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13464c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134650: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x134650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134654: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x134654u;
    SET_GPR_U32(ctx, 31, 0x13465Cu);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x134654u, 0x13465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13465Cu;
label_13465c:
    // 0x13465c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x13465cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x134660: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x134660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x134664: 0xc106784  jal         func_419E10
    ctx->pc = 0x134664u;
    SET_GPR_U32(ctx, 31, 0x13466Cu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x134664u, 0x13466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13466Cu;
label_13466c:
    // 0x13466c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x13466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x134670: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x134670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x134674: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x134674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134678: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x134678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13467c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x13467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134680: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x134680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x134684: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x134684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x134688: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x134688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x13468c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x13468cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x134690: 0xc091008  jal         func_244020
    ctx->pc = 0x134690u;
    SET_GPR_U32(ctx, 31, 0x134698u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x134690u, 0x134698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134698u;
label_134698:
    // 0x134698: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x134698u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x13469c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x13469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1346a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1346a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1346a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1346a8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1346A8u;
    SET_GPR_U32(ctx, 31, 0x1346B0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1346A8u, 0x1346B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346B0u;
label_1346b0:
    // 0x1346b0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1346b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1346b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1346b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1346b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1346bc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1346BCu;
    SET_GPR_U32(ctx, 31, 0x1346C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1346BCu, 0x1346C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346C4u;
label_1346c4:
    // 0x1346c4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1346c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346c8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1346c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1346cc: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x1346CCu;
    SET_GPR_U32(ctx, 31, 0x1346D4u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x1346CCu, 0x1346D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346D4u;
label_1346d4:
    // 0x1346d4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1346d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1346d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1346d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346dc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1346dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1346e0: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x1346E0u;
    SET_GPR_U32(ctx, 31, 0x1346E8u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x1346E0u, 0x1346E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346E8u;
label_1346e8:
    // 0x1346e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1346e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1346ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346f0: 0xc106784  jal         func_419E10
    ctx->pc = 0x1346F0u;
    SET_GPR_U32(ctx, 31, 0x1346F8u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x1346F0u, 0x1346F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346F8u;
label_1346f8:
    // 0x1346f8: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1346f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1346fc: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1346fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x134700: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x134700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134704: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x134704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134708: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x134708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13470c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x13470cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x134710: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x134710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x134714: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x134714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x134718: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x134718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13471c: 0xc091008  jal         func_244020
    ctx->pc = 0x13471Cu;
    SET_GPR_U32(ctx, 31, 0x134724u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x13471Cu, 0x134724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134724u;
label_134724:
    // 0x134724: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x134724u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x134728: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x134728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x13472c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x13472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134730: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x134730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134734: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134738: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x134738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13473c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x13473cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x134740: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x134740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134744: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x134744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134748: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13474c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x13474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x134750: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x134750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x134754: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x134754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134758: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x134758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13475c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13475cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134760: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x134760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x134764: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x134764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x134768: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x134768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x13476c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13476cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134770: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x134770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x134774: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x134774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x134778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13477c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x13477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x134780: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x134780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x134784: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x134784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x134788: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x134788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x13478c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13478cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134790: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x134790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134794: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x134794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x134798: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x134798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13479c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x13479cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1347a0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x1347a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1347a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1347a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1347a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1347a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1347ac: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1347acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1347b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1347b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1347b4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1347b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1347b8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1347b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1347bc: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1347bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1347c0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1347c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1347c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1347c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1347c8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1347c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1347cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1347ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1347d0: 0x0  nop
    ctx->pc = 0x1347d0u;
    // NOP
    // 0x1347d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1347d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1347d8: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1347d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1347dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1347dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1347e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1347E0u;
    {
        const bool branch_taken_0x1347e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1347e0) {
            ctx->pc = 0x13483Cu;
            goto label_13483c;
        }
    }
    ctx->pc = 0x1347E8u;
label_1347e8:
    // 0x1347e8: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x1347E8u;
    {
        const bool branch_taken_0x1347e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1347e8) {
            ctx->pc = 0x13483Cu;
            goto label_13483c;
        }
    }
    ctx->pc = 0x1347F0u;
    // 0x1347f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1347f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347f4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1347f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1347f8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1347F8u;
    SET_GPR_U32(ctx, 31, 0x134800u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1347F8u, 0x134800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134800u;
label_134800:
    // 0x134800: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134804: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x134804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x134808: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13480c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x13480Cu;
    SET_GPR_U32(ctx, 31, 0x134814u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x13480Cu, 0x134814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134814u;
label_134814:
    // 0x134814: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x134814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x134818: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x134818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13481c: 0xc041d58  jal         func_107560
    ctx->pc = 0x13481Cu;
    SET_GPR_U32(ctx, 31, 0x134824u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x13481Cu, 0x134824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134824u;
label_134824:
    // 0x134824: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134828: 0xc091008  jal         func_244020
    ctx->pc = 0x134828u;
    SET_GPR_U32(ctx, 31, 0x134830u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x134828u, 0x134830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134830u;
label_134830:
    // 0x134830: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x134830u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x134834: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x134834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x134838: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x134838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13483c:
    // 0x13483c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13483cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x134840: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x134840u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134844: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x134844u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134848: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x134848u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13484c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13484cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134850: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13485c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13485cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134864: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x134864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x134868: 0x3e00008  jr          $ra
    ctx->pc = 0x134868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134870u;
}
