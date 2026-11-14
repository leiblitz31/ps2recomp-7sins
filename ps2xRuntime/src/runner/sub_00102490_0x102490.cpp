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

// Function: sub_00102490
// Address: 0x102490 - 0x102620
void sub_00102490_0x102490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102490_0x102490");
#endif

    switch (ctx->pc) {
        case 0x102490u: goto label_102490;
        case 0x102494u: goto label_102494;
        case 0x102498u: goto label_102498;
        case 0x10249cu: goto label_10249c;
        case 0x1024a0u: goto label_1024a0;
        case 0x1024a4u: goto label_1024a4;
        case 0x1024a8u: goto label_1024a8;
        case 0x1024acu: goto label_1024ac;
        case 0x1024b0u: goto label_1024b0;
        case 0x1024b4u: goto label_1024b4;
        case 0x1024b8u: goto label_1024b8;
        case 0x1024bcu: goto label_1024bc;
        case 0x1024c0u: goto label_1024c0;
        case 0x1024c4u: goto label_1024c4;
        case 0x1024c8u: goto label_1024c8;
        case 0x1024ccu: goto label_1024cc;
        case 0x1024d0u: goto label_1024d0;
        case 0x1024d4u: goto label_1024d4;
        case 0x1024d8u: goto label_1024d8;
        case 0x1024dcu: goto label_1024dc;
        case 0x1024e0u: goto label_1024e0;
        case 0x1024e4u: goto label_1024e4;
        case 0x1024e8u: goto label_1024e8;
        case 0x1024ecu: goto label_1024ec;
        case 0x1024f0u: goto label_1024f0;
        case 0x1024f4u: goto label_1024f4;
        case 0x1024f8u: goto label_1024f8;
        case 0x1024fcu: goto label_1024fc;
        case 0x102500u: goto label_102500;
        case 0x102504u: goto label_102504;
        case 0x102508u: goto label_102508;
        case 0x10250cu: goto label_10250c;
        case 0x102510u: goto label_102510;
        case 0x102514u: goto label_102514;
        case 0x102518u: goto label_102518;
        case 0x10251cu: goto label_10251c;
        case 0x102520u: goto label_102520;
        case 0x102524u: goto label_102524;
        case 0x102528u: goto label_102528;
        case 0x10252cu: goto label_10252c;
        case 0x102530u: goto label_102530;
        case 0x102534u: goto label_102534;
        case 0x102538u: goto label_102538;
        case 0x10253cu: goto label_10253c;
        case 0x102540u: goto label_102540;
        case 0x102544u: goto label_102544;
        case 0x102548u: goto label_102548;
        case 0x10254cu: goto label_10254c;
        case 0x102550u: goto label_102550;
        case 0x102554u: goto label_102554;
        case 0x102558u: goto label_102558;
        case 0x10255cu: goto label_10255c;
        case 0x102560u: goto label_102560;
        case 0x102564u: goto label_102564;
        case 0x102568u: goto label_102568;
        case 0x10256cu: goto label_10256c;
        case 0x102570u: goto label_102570;
        case 0x102574u: goto label_102574;
        case 0x102578u: goto label_102578;
        case 0x10257cu: goto label_10257c;
        case 0x102580u: goto label_102580;
        case 0x102584u: goto label_102584;
        case 0x102588u: goto label_102588;
        case 0x10258cu: goto label_10258c;
        case 0x102590u: goto label_102590;
        case 0x102594u: goto label_102594;
        case 0x102598u: goto label_102598;
        case 0x10259cu: goto label_10259c;
        case 0x1025a0u: goto label_1025a0;
        case 0x1025a4u: goto label_1025a4;
        case 0x1025a8u: goto label_1025a8;
        case 0x1025acu: goto label_1025ac;
        case 0x1025b0u: goto label_1025b0;
        case 0x1025b4u: goto label_1025b4;
        case 0x1025b8u: goto label_1025b8;
        case 0x1025bcu: goto label_1025bc;
        case 0x1025c0u: goto label_1025c0;
        case 0x1025c4u: goto label_1025c4;
        case 0x1025c8u: goto label_1025c8;
        case 0x1025ccu: goto label_1025cc;
        case 0x1025d0u: goto label_1025d0;
        case 0x1025d4u: goto label_1025d4;
        case 0x1025d8u: goto label_1025d8;
        case 0x1025dcu: goto label_1025dc;
        case 0x1025e0u: goto label_1025e0;
        case 0x1025e4u: goto label_1025e4;
        case 0x1025e8u: goto label_1025e8;
        case 0x1025ecu: goto label_1025ec;
        case 0x1025f0u: goto label_1025f0;
        case 0x1025f4u: goto label_1025f4;
        case 0x1025f8u: goto label_1025f8;
        case 0x1025fcu: goto label_1025fc;
        case 0x102600u: goto label_102600;
        case 0x102604u: goto label_102604;
        case 0x102608u: goto label_102608;
        case 0x10260cu: goto label_10260c;
        case 0x102610u: goto label_102610;
        case 0x102614u: goto label_102614;
        case 0x102618u: goto label_102618;
        case 0x10261cu: goto label_10261c;
        default: break;
    }

    ctx->pc = 0x102490u;

label_102490:
    // 0x102490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_102494:
    // 0x102494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_102498:
    // 0x102498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10249c:
    // 0x10249c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10249cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1024a0:
    // 0x1024a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1024a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_1024a4:
    // 0x1024a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1024a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1024a8:
    // 0x1024a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1024a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1024ac:
    // 0x1024ac: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1024acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1024b0:
    // 0x1024b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1024b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1024b4:
    // 0x1024b4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1024b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1024b8:
    // 0x1024b8: 0x320f809  jalr        $t9
label_1024bc:
    if (ctx->pc == 0x1024BCu) {
        ctx->pc = 0x1024C0u;
        goto label_1024c0;
    }
    ctx->pc = 0x1024B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1024C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1024B8u, 0x1024C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1024C0u;
label_1024c0:
    // 0x1024c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1024c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1024c4:
    // 0x1024c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1024c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1024c8:
    // 0x1024c8: 0x3e00008  jr          $ra
label_1024cc:
    if (ctx->pc == 0x1024CCu) {
        ctx->pc = 0x1024D0u;
        goto label_1024d0;
    }
    ctx->pc = 0x1024C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1024C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1024D0u;
label_1024d0:
    // 0x1024d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1024d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1024d4:
    // 0x1024d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1024d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1024d8:
    // 0x1024d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1024d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1024dc:
    // 0x1024dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1024dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1024e0:
    // 0x1024e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1024e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1024e4:
    // 0x1024e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1024e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1024e8:
    // 0x1024e8: 0xc08ec68  jal         func_23B1A0
label_1024ec:
    if (ctx->pc == 0x1024ECu) {
        ctx->pc = 0x1024F0u;
        goto label_1024f0;
    }
    ctx->pc = 0x1024E8u;
    SET_GPR_U32(ctx, 31, 0x1024F0u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x1024E8u, 0x1024F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024F0u;
label_1024f0:
    // 0x1024f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1024f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1024f4:
    // 0x1024f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1024f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1024f8:
    // 0x1024f8: 0x3e00008  jr          $ra
label_1024fc:
    if (ctx->pc == 0x1024FCu) {
        ctx->pc = 0x102500u;
        goto label_102500;
    }
    ctx->pc = 0x1024F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1024F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102500u;
label_102500:
    // 0x102500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_102504:
    // 0x102504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x102504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_102508:
    // 0x102508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x102508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10250c:
    // 0x10250c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_102510:
    // 0x102510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102514:
    // 0x102514: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x102514u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102518:
    // 0x102518: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10251c:
    // 0x10251c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x10251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_102520:
    // 0x102520: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102524:
    // 0x102524: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x102524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_102528:
    // 0x102528: 0x320f809  jalr        $t9
label_10252c:
    if (ctx->pc == 0x10252Cu) {
        ctx->pc = 0x102530u;
        goto label_102530;
    }
    ctx->pc = 0x102528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102530u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102528u, 0x102530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102530u;
label_102530:
    // 0x102530: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x102530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102534:
    // 0x102534: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x102534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_102538:
    // 0x102538: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10253c:
    // 0x10253c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10253cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102540:
    // 0x102540: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102544:
    // 0x102544: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102548:
    // 0x102548: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x102548u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10254c:
    // 0x10254c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102550:
    // 0x102550: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x102550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_102554:
    // 0x102554: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102558:
    // 0x102558: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x102558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10255c:
    // 0x10255c: 0x320f809  jalr        $t9
label_102560:
    if (ctx->pc == 0x102560u) {
        ctx->pc = 0x102564u;
        goto label_102564;
    }
    ctx->pc = 0x10255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102564u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10255Cu, 0x102564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102564u;
label_102564:
    // 0x102564: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x102564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102568:
    // 0x102568: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x102568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10256c:
    // 0x10256c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_102570:
    // 0x102570: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102574:
    // 0x102574: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102578:
    // 0x102578: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10257c:
    // 0x10257c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10257cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102580:
    // 0x102580: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102584:
    // 0x102584: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x102584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_102588:
    // 0x102588: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10258c:
    // 0x10258c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10258cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_102590:
    // 0x102590: 0x320f809  jalr        $t9
label_102594:
    if (ctx->pc == 0x102594u) {
        ctx->pc = 0x102598u;
        goto label_102598;
    }
    ctx->pc = 0x102590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102598u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102590u, 0x102598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102598u;
label_102598:
    // 0x102598: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x102598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10259c:
    // 0x10259c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10259cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1025a0:
    // 0x1025a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1025a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1025a4:
    // 0x1025a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1025a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1025a8:
    // 0x1025a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1025a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1025ac:
    // 0x1025ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1025acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1025b0:
    // 0x1025b0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1025b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1025b4:
    // 0x1025b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1025b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1025b8:
    // 0x1025b8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1025b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1025bc:
    // 0x1025bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1025bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1025c0:
    // 0x1025c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1025c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1025c4:
    // 0x1025c4: 0x320f809  jalr        $t9
label_1025c8:
    if (ctx->pc == 0x1025C8u) {
        ctx->pc = 0x1025CCu;
        goto label_1025cc;
    }
    ctx->pc = 0x1025C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1025CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1025C4u, 0x1025CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1025CCu;
label_1025cc:
    // 0x1025cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1025ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1025d0:
    // 0x1025d0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1025d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1025d4:
    // 0x1025d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1025d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1025d8:
    // 0x1025d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1025d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1025dc:
    // 0x1025dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1025dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1025e0:
    // 0x1025e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1025e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1025e4:
    // 0x1025e4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1025e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1025e8:
    // 0x1025e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1025e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1025ec:
    // 0x1025ec: 0xc08ec70  jal         func_23B1C0
label_1025f0:
    if (ctx->pc == 0x1025F0u) {
        ctx->pc = 0x1025F4u;
        goto label_1025f4;
    }
    ctx->pc = 0x1025ECu;
    SET_GPR_U32(ctx, 31, 0x1025F4u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x1025ECu, 0x1025F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025F4u;
label_1025f4:
    // 0x1025f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1025f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1025f8:
    // 0x1025f8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1025f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1025fc:
    // 0x1025fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1025fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_102600:
    // 0x102600: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102604:
    // 0x102604: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102608:
    // 0x102608: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10260c:
    // 0x10260c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10260cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_102610:
    // 0x102610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_102614:
    // 0x102614: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102618:
    // 0x102618: 0x3e00008  jr          $ra
label_10261c:
    if (ctx->pc == 0x10261Cu) {
        ctx->pc = 0x102620u;
        goto label_fallthrough_0x102618;
    }
    ctx->pc = 0x102618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x102618:
    ctx->pc = 0x102620u;
}
