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

// Function: sub_0041B408
// Address: 0x41b408 - 0x41b530
void sub_0041B408_0x41b408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B408_0x41b408");
#endif

    switch (ctx->pc) {
        case 0x41b408u: goto label_41b408;
        case 0x41b40cu: goto label_41b40c;
        case 0x41b410u: goto label_41b410;
        case 0x41b414u: goto label_41b414;
        case 0x41b418u: goto label_41b418;
        case 0x41b41cu: goto label_41b41c;
        case 0x41b420u: goto label_41b420;
        case 0x41b424u: goto label_41b424;
        case 0x41b428u: goto label_41b428;
        case 0x41b42cu: goto label_41b42c;
        case 0x41b430u: goto label_41b430;
        case 0x41b434u: goto label_41b434;
        case 0x41b438u: goto label_41b438;
        case 0x41b43cu: goto label_41b43c;
        case 0x41b440u: goto label_41b440;
        case 0x41b444u: goto label_41b444;
        case 0x41b448u: goto label_41b448;
        case 0x41b44cu: goto label_41b44c;
        case 0x41b450u: goto label_41b450;
        case 0x41b454u: goto label_41b454;
        case 0x41b458u: goto label_41b458;
        case 0x41b45cu: goto label_41b45c;
        case 0x41b460u: goto label_41b460;
        case 0x41b464u: goto label_41b464;
        case 0x41b468u: goto label_41b468;
        case 0x41b46cu: goto label_41b46c;
        case 0x41b470u: goto label_41b470;
        case 0x41b474u: goto label_41b474;
        case 0x41b478u: goto label_41b478;
        case 0x41b47cu: goto label_41b47c;
        case 0x41b480u: goto label_41b480;
        case 0x41b484u: goto label_41b484;
        case 0x41b488u: goto label_41b488;
        case 0x41b48cu: goto label_41b48c;
        case 0x41b490u: goto label_41b490;
        case 0x41b494u: goto label_41b494;
        case 0x41b498u: goto label_41b498;
        case 0x41b49cu: goto label_41b49c;
        case 0x41b4a0u: goto label_41b4a0;
        case 0x41b4a4u: goto label_41b4a4;
        case 0x41b4a8u: goto label_41b4a8;
        case 0x41b4acu: goto label_41b4ac;
        case 0x41b4b0u: goto label_41b4b0;
        case 0x41b4b4u: goto label_41b4b4;
        case 0x41b4b8u: goto label_41b4b8;
        case 0x41b4bcu: goto label_41b4bc;
        case 0x41b4c0u: goto label_41b4c0;
        case 0x41b4c4u: goto label_41b4c4;
        case 0x41b4c8u: goto label_41b4c8;
        case 0x41b4ccu: goto label_41b4cc;
        case 0x41b4d0u: goto label_41b4d0;
        case 0x41b4d4u: goto label_41b4d4;
        case 0x41b4d8u: goto label_41b4d8;
        case 0x41b4dcu: goto label_41b4dc;
        case 0x41b4e0u: goto label_41b4e0;
        case 0x41b4e4u: goto label_41b4e4;
        case 0x41b4e8u: goto label_41b4e8;
        case 0x41b4ecu: goto label_41b4ec;
        case 0x41b4f0u: goto label_41b4f0;
        case 0x41b4f4u: goto label_41b4f4;
        case 0x41b4f8u: goto label_41b4f8;
        case 0x41b4fcu: goto label_41b4fc;
        case 0x41b500u: goto label_41b500;
        case 0x41b504u: goto label_41b504;
        case 0x41b508u: goto label_41b508;
        case 0x41b50cu: goto label_41b50c;
        case 0x41b510u: goto label_41b510;
        case 0x41b514u: goto label_41b514;
        case 0x41b518u: goto label_41b518;
        case 0x41b51cu: goto label_41b51c;
        case 0x41b520u: goto label_41b520;
        case 0x41b524u: goto label_41b524;
        case 0x41b528u: goto label_41b528;
        case 0x41b52cu: goto label_41b52c;
        default: break;
    }

    ctx->pc = 0x41b408u;

label_41b408:
    // 0x41b408: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41b408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41b40c:
    // 0x41b40c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41b410:
    // 0x41b410: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41b410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41b414:
    // 0x41b414: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x41b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_41b418:
    // 0x41b418: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41b418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41b41c:
    // 0x41b41c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41b420:
    // 0x41b420: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41b420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_41b424:
    // 0x41b424: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x41b424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41b428:
    // 0x41b428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41b42c:
    // 0x41b42c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41b42cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b430:
    // 0x41b430: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x41b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_41b434:
    // 0x41b434: 0x40f809  jalr        $v0
label_41b438:
    if (ctx->pc == 0x41B438u) {
        ctx->pc = 0x41B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B434u;
        // 0x41b438: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B43Cu;
        goto label_41b43c;
    }
    ctx->pc = 0x41B434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B43Cu);
        ctx->pc = 0x41B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B434u;
        // 0x41b438: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B434u, 0x41B43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B43Cu;
label_41b43c:
    // 0x41b43c: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x41b43cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_41b440:
    // 0x41b440: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x41b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_41b444:
    // 0x41b444: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x41b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_41b448:
    // 0x41b448: 0x40f809  jalr        $v0
label_41b44c:
    if (ctx->pc == 0x41B44Cu) {
        ctx->pc = 0x41B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B448u;
        // 0x41b44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B450u;
        goto label_41b450;
    }
    ctx->pc = 0x41B448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B450u);
        ctx->pc = 0x41B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B448u;
        // 0x41b44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B448u, 0x41B450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B450u;
label_41b450:
    // 0x41b450: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x41b450u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_41b454:
    // 0x41b454: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x41b454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_41b458:
    // 0x41b458: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x41b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_41b45c:
    // 0x41b45c: 0x40f809  jalr        $v0
label_41b460:
    if (ctx->pc == 0x41B460u) {
        ctx->pc = 0x41B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B45Cu;
        // 0x41b460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B464u;
        goto label_41b464;
    }
    ctx->pc = 0x41B45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B464u);
        ctx->pc = 0x41B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B45Cu;
        // 0x41b460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B45Cu, 0x41B464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B464u;
label_41b464:
    // 0x41b464: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x41b464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_41b468:
    // 0x41b468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b46c:
    // 0x41b46c: 0x42200b  movn        $a0, $v0, $v0
    ctx->pc = 0x41b46cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_41b470:
    // 0x41b470: 0x60f809  jalr        $v1
label_41b474:
    if (ctx->pc == 0x41B474u) {
        ctx->pc = 0x41B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B470u;
        // 0x41b474: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B478u;
        goto label_41b478;
    }
    ctx->pc = 0x41B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B478u);
        ctx->pc = 0x41B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B470u;
        // 0x41b474: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B470u, 0x41B478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B478u;
label_41b478:
    // 0x41b478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41b478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b47c:
    // 0x41b47c: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_41b480:
    if (ctx->pc == 0x41B480u) {
        ctx->pc = 0x41B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B47Cu;
        // 0x41b480: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B484u;
        goto label_41b484;
    }
    ctx->pc = 0x41B47Cu;
    {
        const bool branch_taken_0x41b47c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B47Cu;
        // 0x41b480: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b47c) {
            ctx->pc = 0x41B50Cu;
            goto label_41b50c;
        }
    }
    ctx->pc = 0x41B484u;
label_41b484:
    // 0x41b484: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41b488:
    // 0x41b488: 0x8c50021c  lw          $s0, 0x21C($v0)
    ctx->pc = 0x41b488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_41b48c:
    // 0x41b48c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_41b490:
    if (ctx->pc == 0x41B490u) {
        ctx->pc = 0x41B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B48Cu;
        // 0x41b490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B494u;
        goto label_41b494;
    }
    ctx->pc = 0x41B48Cu;
    {
        const bool branch_taken_0x41b48c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B48Cu;
        // 0x41b490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b48c) {
            ctx->pc = 0x41B510u;
            goto label_41b510;
        }
    }
    ctx->pc = 0x41B494u;
label_41b494:
    // 0x41b494: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x41b494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_41b498:
    // 0x41b498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b49c:
    // 0x41b49c: 0x40f809  jalr        $v0
label_41b4a0:
    if (ctx->pc == 0x41B4A0u) {
        ctx->pc = 0x41B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B49Cu;
        // 0x41b4a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4A4u;
        goto label_41b4a4;
    }
    ctx->pc = 0x41B49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B4A4u);
        ctx->pc = 0x41B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B49Cu;
        // 0x41b4a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B49Cu, 0x41B4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B4A4u;
label_41b4a4:
    // 0x41b4a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41b4a8:
    if (ctx->pc == 0x41B4A8u) {
        ctx->pc = 0x41B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4A4u;
        // 0x41b4a8: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4ACu;
        goto label_41b4ac;
    }
    ctx->pc = 0x41B4A4u;
    {
        const bool branch_taken_0x41b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4A4u;
        // 0x41b4a8: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b4a4) {
            ctx->pc = 0x41B4C0u;
            goto label_41b4c0;
        }
    }
    ctx->pc = 0x41B4ACu;
label_41b4ac:
    // 0x41b4ac: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x41b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_41b4b0:
    // 0x41b4b0: 0x40f809  jalr        $v0
label_41b4b4:
    if (ctx->pc == 0x41B4B4u) {
        ctx->pc = 0x41B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4B0u;
        // 0x41b4b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4B8u;
        goto label_41b4b8;
    }
    ctx->pc = 0x41B4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B4B8u);
        ctx->pc = 0x41B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4B0u;
        // 0x41b4b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B4B0u, 0x41B4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B4B8u;
label_41b4b8:
    // 0x41b4b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_41b4bc:
    if (ctx->pc == 0x41B4BCu) {
        ctx->pc = 0x41B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4B8u;
        // 0x41b4bc: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4C0u;
        goto label_41b4c0;
    }
    ctx->pc = 0x41B4B8u;
    {
        const bool branch_taken_0x41b4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b4b8) {
            ctx->pc = 0x41B4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B4B8u;
            // 0x41b4bc: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B4D4u;
            goto label_41b4d4;
        }
    }
    ctx->pc = 0x41B4C0u;
label_41b4c0:
    // 0x41b4c0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x41b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_41b4c4:
    // 0x41b4c4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_41b4c8:
    if (ctx->pc == 0x41B4C8u) {
        ctx->pc = 0x41B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4C4u;
        // 0x41b4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4CCu;
        goto label_41b4cc;
    }
    ctx->pc = 0x41B4C4u;
    {
        const bool branch_taken_0x41b4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4C4u;
        // 0x41b4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b4c4) {
            ctx->pc = 0x41B4E4u;
            goto label_41b4e4;
        }
    }
    ctx->pc = 0x41B4CCu;
label_41b4cc:
    // 0x41b4cc: 0x10000011  b           . + 4 + (0x11 << 2)
label_41b4d0:
    if (ctx->pc == 0x41B4D0u) {
        ctx->pc = 0x41B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4CCu;
        // 0x41b4d0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4D4u;
        goto label_41b4d4;
    }
    ctx->pc = 0x41B4CCu;
    {
        const bool branch_taken_0x41b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4CCu;
        // 0x41b4d0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b4cc) {
            ctx->pc = 0x41B514u;
            goto label_41b514;
        }
    }
    ctx->pc = 0x41B4D4u;
label_41b4d4:
    // 0x41b4d4: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
label_41b4d8:
    if (ctx->pc == 0x41B4D8u) {
        ctx->pc = 0x41B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4D4u;
        // 0x41b4d8: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4DCu;
        goto label_41b4dc;
    }
    ctx->pc = 0x41B4D4u;
    {
        const bool branch_taken_0x41b4d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b4d4) {
            ctx->pc = 0x41B4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B4D4u;
            // 0x41b4d8: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41b498;
        }
    }
    ctx->pc = 0x41B4DCu;
label_41b4dc:
    // 0x41b4dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_41b4e0:
    if (ctx->pc == 0x41B4E0u) {
        ctx->pc = 0x41B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4DCu;
        // 0x41b4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4E4u;
        goto label_41b4e4;
    }
    ctx->pc = 0x41B4DCu;
    {
        const bool branch_taken_0x41b4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4DCu;
        // 0x41b4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b4dc) {
            ctx->pc = 0x41B510u;
            goto label_41b510;
        }
    }
    ctx->pc = 0x41B4E4u;
label_41b4e4:
    // 0x41b4e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x41b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_41b4e8:
    // 0x41b4e8: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x41b4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_41b4ec:
    // 0x41b4ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41b4f0:
    // 0x41b4f0: 0x24c6cc18  addiu       $a2, $a2, -0x33E8
    ctx->pc = 0x41b4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954008));
label_41b4f4:
    // 0x41b4f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x41b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_41b4f8:
    // 0x41b4f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x41b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_41b4fc:
    // 0x41b4fc: 0xc106c40  jal         func_41B100
label_41b500:
    if (ctx->pc == 0x41B500u) {
        ctx->pc = 0x41B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4FCu;
        // 0x41b500: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B504u;
        goto label_41b504;
    }
    ctx->pc = 0x41B4FCu;
    SET_GPR_U32(ctx, 31, 0x41B504u);
    ctx->pc = 0x41B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B4FCu;
    // 0x41b500: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B100u, 0x41B4FCu, 0x41B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B504u;
label_41b504:
    // 0x41b504: 0x10000002  b           . + 4 + (0x2 << 2)
label_41b508:
    if (ctx->pc == 0x41B508u) {
        ctx->pc = 0x41B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B504u;
        // 0x41b508: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B50Cu;
        goto label_41b50c;
    }
    ctx->pc = 0x41B504u;
    {
        const bool branch_taken_0x41b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B504u;
        // 0x41b508: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b504) {
            ctx->pc = 0x41B510u;
            goto label_41b510;
        }
    }
    ctx->pc = 0x41B50Cu;
label_41b50c:
    // 0x41b50c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41b50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b510:
    // 0x41b510: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41b510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41b514:
    // 0x41b514: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41b514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b518:
    // 0x41b518: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41b518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b51c:
    // 0x41b51c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x41b51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b520:
    // 0x41b520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41b520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41b524:
    // 0x41b524: 0x3e00008  jr          $ra
label_41b528:
    if (ctx->pc == 0x41B528u) {
        ctx->pc = 0x41B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B524u;
        // 0x41b528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B52Cu;
        goto label_41b52c;
    }
    ctx->pc = 0x41B524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B524u;
        // 0x41b528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B52Cu;
label_41b52c:
    // 0x41b52c: 0x0  nop
    ctx->pc = 0x41b52cu;
    // NOP
    ctx->pc = 0x41b530u;
}
