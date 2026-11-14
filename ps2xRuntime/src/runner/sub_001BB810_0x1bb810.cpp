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

// Function: sub_001BB810
// Address: 0x1bb810 - 0x1bbaa0
void sub_001BB810_0x1bb810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB810_0x1bb810");
#endif

    switch (ctx->pc) {
        case 0x1bb848u: goto label_1bb848;
        case 0x1bb858u: goto label_1bb858;
        case 0x1bb868u: goto label_1bb868;
        case 0x1bb87cu: goto label_1bb87c;
        case 0x1bb8a0u: goto label_1bb8a0;
        case 0x1bb8b8u: goto label_1bb8b8;
        case 0x1bb8c4u: goto label_1bb8c4;
        case 0x1bb8dcu: goto label_1bb8dc;
        case 0x1bb8e8u: goto label_1bb8e8;
        case 0x1bb954u: goto label_1bb954;
        case 0x1bb96cu: goto label_1bb96c;
        case 0x1bb998u: goto label_1bb998;
        case 0x1bb9b0u: goto label_1bb9b0;
        case 0x1bb9d0u: goto label_1bb9d0;
        case 0x1bb9e4u: goto label_1bb9e4;
        case 0x1bba18u: goto label_1bba18;
        case 0x1bba2cu: goto label_1bba2c;
        case 0x1bba40u: goto label_1bba40;
        case 0x1bba64u: goto label_1bba64;
        default: break;
    }

    ctx->pc = 0x1bb810u;

    // 0x1bb810: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x1bb810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x1bb814: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bb814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1bb818: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bb818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bb81c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bb81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bb820: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bb820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bb824: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bb828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bb82c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bb830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb838: 0xafa402f0  sw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bb838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 4));
    // 0x1bb83c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bb83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bb840: 0xc0702a4  jal         func_1C0A90
    ctx->pc = 0x1BB840u;
    SET_GPR_U32(ctx, 31, 0x1BB848u);
    ctx->pc = 0x1C0A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0A90u, 0x1BB840u, 0x1BB848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB848u;
label_1bb848:
    // 0x1bb848: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1bb848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bb84c: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bb84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bb850: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1BB850u;
    SET_GPR_U32(ctx, 31, 0x1BB858u);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1BB850u, 0x1BB858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB858u;
label_1bb858:
    // 0x1bb858: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1bb858u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb85c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bb85cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb860: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1BB860u;
    {
        const bool branch_taken_0x1bb860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb860) {
            ctx->pc = 0x1BBA4Cu;
            goto label_1bba4c;
        }
    }
    ctx->pc = 0x1BB868u;
label_1bb868:
    // 0x1bb868: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1bb868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bb86c: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bb86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bb870: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bb870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb874: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BB874u;
    SET_GPR_U32(ctx, 31, 0x1BB87Cu);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BB874u, 0x1BB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB87Cu;
label_1bb87c:
    // 0x1bb87c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bb87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb880: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1bb880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bb884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bb888: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1BB888u;
    {
        const bool branch_taken_0x1bb888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb888) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BB890u;
    // 0x1bb890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb894: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1bb894u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bb898: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1BB898u;
    {
        const bool branch_taken_0x1bb898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb898) {
            ctx->pc = 0x1BBA40u;
            goto label_1bba40;
        }
    }
    ctx->pc = 0x1BB8A0u;
label_1bb8a0:
    // 0x1bb8a0: 0xafa002ec  sw          $zero, 0x2EC($sp)
    ctx->pc = 0x1bb8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 0));
    // 0x1bb8a4: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x1bb8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
    // 0x1bb8a8: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1bb8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bb8ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1bb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bb8b0: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1bb8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bb8b4: 0x27b40220  addiu       $s4, $sp, 0x220
    ctx->pc = 0x1bb8b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1bb8b8:
    // 0x1bb8b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bb8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8bc: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1BB8BCu;
    SET_GPR_U32(ctx, 31, 0x1BB8C4u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1BB8BCu, 0x1BB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB8C4u;
label_1bb8c4:
    // 0x1bb8c4: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1bb8c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x1bb8c8: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x1bb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1bb8cc: 0x0  nop
    ctx->pc = 0x1bb8ccu;
    // NOP
    // 0x1bb8d0: 0x1682fff9  bne         $s4, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BB8D0u;
    {
        const bool branch_taken_0x1bb8d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb8d0) {
            ctx->pc = 0x1BB8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb8b8;
        }
    }
    ctx->pc = 0x1BB8D8u;
    // 0x1bb8d8: 0x27b30160  addiu       $s3, $sp, 0x160
    ctx->pc = 0x1bb8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1bb8dc:
    // 0x1bb8dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bb8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8e0: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1BB8E0u;
    SET_GPR_U32(ctx, 31, 0x1BB8E8u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1BB8E0u, 0x1BB8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB8E8u;
label_1bb8e8:
    // 0x1bb8e8: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1bb8e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bb8ec: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x1bb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1bb8f0: 0x0  nop
    ctx->pc = 0x1bb8f0u;
    // NOP
    // 0x1bb8f4: 0x1662fff9  bne         $s3, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BB8F4u;
    {
        const bool branch_taken_0x1bb8f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb8f4) {
            ctx->pc = 0x1BB8DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb8dc;
        }
    }
    ctx->pc = 0x1BB8FCu;
    // 0x1bb8fc: 0x6400052  bltz        $s2, . + 4 + (0x52 << 2)
    ctx->pc = 0x1BB8FCu;
    {
        const bool branch_taken_0x1bb8fc = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1bb8fc) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BB904u;
    // 0x1bb904: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bb904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bb908: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1bb908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bb90c: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1bb90cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bb910: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x1BB910u;
    {
        const bool branch_taken_0x1bb910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb910) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BB918u;
    // 0x1bb918: 0x620004b  bltz        $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1BB918u;
    {
        const bool branch_taken_0x1bb918 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1bb918) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BB920u;
    // 0x1bb920: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bb920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bb924: 0x8c42be5c  lw          $v0, -0x41A4($v0)
    ctx->pc = 0x1bb924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1bb928: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1bb928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bb92c: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x1BB92Cu;
    {
        const bool branch_taken_0x1bb92c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb92c) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BB934u;
    // 0x1bb934: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1bb934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bb938: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1bb938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bb93c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bb940: 0x27a70220  addiu       $a3, $sp, 0x220
    ctx->pc = 0x1bb940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1bb944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb948: 0x26090004  addiu       $t1, $s0, 0x4
    ctx->pc = 0x1bb948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1bb94c: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1BB94Cu;
    SET_GPR_U32(ctx, 31, 0x1BB954u);
    ctx->pc = 0x1BFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFDA0u, 0x1BB94Cu, 0x1BB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB954u;
label_1bb954:
    // 0x1bb954: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bb954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bb958: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1bb958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1bb95c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bb95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb960: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1bb960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb964: 0xc070194  jal         func_1C0650
    ctx->pc = 0x1BB964u;
    SET_GPR_U32(ctx, 31, 0x1BB96Cu);
    ctx->pc = 0x1C0650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0650u, 0x1BB964u, 0x1BB96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB96Cu;
label_1bb96c:
    // 0x1bb96c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bb96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bb970: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1BB970u;
    {
        const bool branch_taken_0x1bb970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb970) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BB978u;
    // 0x1bb978: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bb97c: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1bb97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1bb980: 0x27a602ec  addiu       $a2, $sp, 0x2EC
    ctx->pc = 0x1bb980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 748));
    // 0x1bb984: 0x27a702e8  addiu       $a3, $sp, 0x2E8
    ctx->pc = 0x1bb984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
    // 0x1bb988: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb98c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bb98cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb990: 0xc0700c0  jal         func_1C0300
    ctx->pc = 0x1BB990u;
    SET_GPR_U32(ctx, 31, 0x1BB998u);
    ctx->pc = 0x1C0300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0300u, 0x1BB990u, 0x1BB998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB998u;
label_1bb998:
    // 0x1bb998: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x1bb998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bb99c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1bb99cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bb9a0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1bb9a0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1bb9a4: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bb9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bb9a8: 0xc06fe40  jal         func_1BF900
    ctx->pc = 0x1BB9A8u;
    SET_GPR_U32(ctx, 31, 0x1BB9B0u);
    ctx->pc = 0x1BF900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF900u, 0x1BB9A8u, 0x1BB9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9B0u;
label_1bb9b0:
    // 0x1bb9b0: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bb9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bb9b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bb9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb9b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb9bc: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x1bb9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1bb9c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb9c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb9c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bb9c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb9c8: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1BB9C8u;
    SET_GPR_U32(ctx, 31, 0x1BB9D0u);
    ctx->pc = 0x1BFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFDA0u, 0x1BB9C8u, 0x1BB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9D0u;
label_1bb9d0:
    // 0x1bb9d0: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bb9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bb9d4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1bb9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1bb9d8: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x1bb9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1bb9dc: 0xc06ef34  jal         func_1BBCD0
    ctx->pc = 0x1BB9DCu;
    SET_GPR_U32(ctx, 31, 0x1BB9E4u);
    ctx->pc = 0x1BBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBCD0u, 0x1BB9DCu, 0x1BB9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9E4u;
label_1bb9e4:
    // 0x1bb9e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bb9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bb9e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB9E8u;
    {
        const bool branch_taken_0x1bb9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb9e8) {
            ctx->pc = 0x1BBA04u;
            goto label_1bba04;
        }
    }
    ctx->pc = 0x1BB9F0u;
    // 0x1bb9f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1bb9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bb9f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bb9f8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1bb9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1bb9fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB9FCu;
    {
        const bool branch_taken_0x1bb9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb9fc) {
            ctx->pc = 0x1BBA08u;
            goto label_1bba08;
        }
    }
    ctx->pc = 0x1BBA04u;
label_1bba04:
    // 0x1bba04: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1bba04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bba08:
    // 0x1bba08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1bba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bba0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bba0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba10: 0xc06eea8  jal         func_1BBAA0
    ctx->pc = 0x1BBA10u;
    SET_GPR_U32(ctx, 31, 0x1BBA18u);
    ctx->pc = 0x1BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAA0u, 0x1BBA10u, 0x1BBA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA18u;
label_1bba18:
    // 0x1bba18: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bba18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bba1c: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1bba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1bba20: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1bba20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1bba24: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x1BBA24u;
    SET_GPR_U32(ctx, 31, 0x1BBA2Cu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x1BBA24u, 0x1BBA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA2Cu;
label_1bba2c:
    // 0x1bba2c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bba30: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1bba30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bba34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bba34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bba38: 0xc06ff04  jal         func_1BFC10
    ctx->pc = 0x1BBA38u;
    SET_GPR_U32(ctx, 31, 0x1BBA40u);
    ctx->pc = 0x1BFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFC10u, 0x1BBA38u, 0x1BBA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA40u;
label_1bba40:
    // 0x1bba40: 0x16c0ff97  bnez        $s6, . + 4 + (-0x69 << 2)
    ctx->pc = 0x1BBA40u;
    {
        const bool branch_taken_0x1bba40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba40) {
            ctx->pc = 0x1BB8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb8a0;
        }
    }
    ctx->pc = 0x1BBA48u;
label_1bba48:
    // 0x1bba48: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bba48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1bba4c:
    // 0x1bba4c: 0x2b7102b  sltu        $v0, $s5, $s7
    ctx->pc = 0x1bba4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1bba50: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x1BBA50u;
    {
        const bool branch_taken_0x1bba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba50) {
            ctx->pc = 0x1BB868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb868;
        }
    }
    ctx->pc = 0x1BBA58u;
    // 0x1bba58: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1bba58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bba5c: 0xc0702a4  jal         func_1C0A90
    ctx->pc = 0x1BBA5Cu;
    SET_GPR_U32(ctx, 31, 0x1BBA64u);
    ctx->pc = 0x1C0A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0A90u, 0x1BBA5Cu, 0x1BBA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA64u;
label_1bba64:
    // 0x1bba64: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bba68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bba68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bba6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bba6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bba70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bba70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bba74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bba74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bba78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bba78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bba7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bba7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bba80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bba80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bba84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bba84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bba88: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x1bba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1bba8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBA94u;
    // 0x1bba94: 0x0  nop
    ctx->pc = 0x1bba94u;
    // NOP
    // 0x1bba98: 0x0  nop
    ctx->pc = 0x1bba98u;
    // NOP
    // 0x1bba9c: 0x0  nop
    ctx->pc = 0x1bba9cu;
    // NOP
    ctx->pc = 0x1bbaa0u;
}
