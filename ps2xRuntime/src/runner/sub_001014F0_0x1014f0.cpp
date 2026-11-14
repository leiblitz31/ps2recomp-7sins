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

// Function: sub_001014F0
// Address: 0x1014f0 - 0x101680
void sub_001014F0_0x1014f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001014F0_0x1014f0");
#endif

    switch (ctx->pc) {
        case 0x1014f0u: goto label_1014f0;
        case 0x1014f4u: goto label_1014f4;
        case 0x1014f8u: goto label_1014f8;
        case 0x1014fcu: goto label_1014fc;
        case 0x101500u: goto label_101500;
        case 0x101504u: goto label_101504;
        case 0x101508u: goto label_101508;
        case 0x10150cu: goto label_10150c;
        case 0x101510u: goto label_101510;
        case 0x101514u: goto label_101514;
        case 0x101518u: goto label_101518;
        case 0x10151cu: goto label_10151c;
        case 0x101520u: goto label_101520;
        case 0x101524u: goto label_101524;
        case 0x101528u: goto label_101528;
        case 0x10152cu: goto label_10152c;
        case 0x101530u: goto label_101530;
        case 0x101534u: goto label_101534;
        case 0x101538u: goto label_101538;
        case 0x10153cu: goto label_10153c;
        case 0x101540u: goto label_101540;
        case 0x101544u: goto label_101544;
        case 0x101548u: goto label_101548;
        case 0x10154cu: goto label_10154c;
        case 0x101550u: goto label_101550;
        case 0x101554u: goto label_101554;
        case 0x101558u: goto label_101558;
        case 0x10155cu: goto label_10155c;
        case 0x101560u: goto label_101560;
        case 0x101564u: goto label_101564;
        case 0x101568u: goto label_101568;
        case 0x10156cu: goto label_10156c;
        case 0x101570u: goto label_101570;
        case 0x101574u: goto label_101574;
        case 0x101578u: goto label_101578;
        case 0x10157cu: goto label_10157c;
        case 0x101580u: goto label_101580;
        case 0x101584u: goto label_101584;
        case 0x101588u: goto label_101588;
        case 0x10158cu: goto label_10158c;
        case 0x101590u: goto label_101590;
        case 0x101594u: goto label_101594;
        case 0x101598u: goto label_101598;
        case 0x10159cu: goto label_10159c;
        case 0x1015a0u: goto label_1015a0;
        case 0x1015a4u: goto label_1015a4;
        case 0x1015a8u: goto label_1015a8;
        case 0x1015acu: goto label_1015ac;
        case 0x1015b0u: goto label_1015b0;
        case 0x1015b4u: goto label_1015b4;
        case 0x1015b8u: goto label_1015b8;
        case 0x1015bcu: goto label_1015bc;
        case 0x1015c0u: goto label_1015c0;
        case 0x1015c4u: goto label_1015c4;
        case 0x1015c8u: goto label_1015c8;
        case 0x1015ccu: goto label_1015cc;
        case 0x1015d0u: goto label_1015d0;
        case 0x1015d4u: goto label_1015d4;
        case 0x1015d8u: goto label_1015d8;
        case 0x1015dcu: goto label_1015dc;
        case 0x1015e0u: goto label_1015e0;
        case 0x1015e4u: goto label_1015e4;
        case 0x1015e8u: goto label_1015e8;
        case 0x1015ecu: goto label_1015ec;
        case 0x1015f0u: goto label_1015f0;
        case 0x1015f4u: goto label_1015f4;
        case 0x1015f8u: goto label_1015f8;
        case 0x1015fcu: goto label_1015fc;
        case 0x101600u: goto label_101600;
        case 0x101604u: goto label_101604;
        case 0x101608u: goto label_101608;
        case 0x10160cu: goto label_10160c;
        case 0x101610u: goto label_101610;
        case 0x101614u: goto label_101614;
        case 0x101618u: goto label_101618;
        case 0x10161cu: goto label_10161c;
        case 0x101620u: goto label_101620;
        case 0x101624u: goto label_101624;
        case 0x101628u: goto label_101628;
        case 0x10162cu: goto label_10162c;
        case 0x101630u: goto label_101630;
        case 0x101634u: goto label_101634;
        case 0x101638u: goto label_101638;
        case 0x10163cu: goto label_10163c;
        case 0x101640u: goto label_101640;
        case 0x101644u: goto label_101644;
        case 0x101648u: goto label_101648;
        case 0x10164cu: goto label_10164c;
        case 0x101650u: goto label_101650;
        case 0x101654u: goto label_101654;
        case 0x101658u: goto label_101658;
        case 0x10165cu: goto label_10165c;
        case 0x101660u: goto label_101660;
        case 0x101664u: goto label_101664;
        case 0x101668u: goto label_101668;
        case 0x10166cu: goto label_10166c;
        case 0x101670u: goto label_101670;
        case 0x101674u: goto label_101674;
        case 0x101678u: goto label_101678;
        case 0x10167cu: goto label_10167c;
        default: break;
    }

    ctx->pc = 0x1014f0u;

label_1014f0:
    // 0x1014f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1014f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1014f4:
    // 0x1014f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1014f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1014f8:
    // 0x1014f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1014f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1014fc:
    // 0x1014fc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1014fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_101500:
    // 0x101500: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x101500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_101504:
    // 0x101504: 0xac400218  sw          $zero, 0x218($v0)
    ctx->pc = 0x101504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 0));
label_101508:
    // 0x101508: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x101508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10150c:
    // 0x10150c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10150cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_101510:
    // 0x101510: 0x3e00008  jr          $ra
label_101514:
    if (ctx->pc == 0x101514u) {
        ctx->pc = 0x101518u;
        goto label_101518;
    }
    ctx->pc = 0x101510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101518u;
label_101518:
    // 0x101518: 0x0  nop
    ctx->pc = 0x101518u;
    // NOP
label_10151c:
    // 0x10151c: 0x0  nop
    ctx->pc = 0x10151cu;
    // NOP
label_101520:
    // 0x101520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_101524:
    // 0x101524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_101528:
    // 0x101528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10152c:
    // 0x10152c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10152cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101530:
    // 0x101530: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x101530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_101534:
    // 0x101534: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x101534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_101538:
    // 0x101538: 0xc040208  jal         func_100820
label_10153c:
    if (ctx->pc == 0x10153Cu) {
        ctx->pc = 0x101540u;
        goto label_101540;
    }
    ctx->pc = 0x101538u;
    SET_GPR_U32(ctx, 31, 0x101540u);
    ctx->pc = 0x100820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100820u, 0x101538u, 0x101540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101540u;
label_101540:
    // 0x101540: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x101540u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101544:
    // 0x101544: 0xc1222c0  jal         func_488B00
label_101548:
    if (ctx->pc == 0x101548u) {
        ctx->pc = 0x10154Cu;
        goto label_10154c;
    }
    ctx->pc = 0x101544u;
    SET_GPR_U32(ctx, 31, 0x10154Cu);
    ctx->pc = 0x488B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488B00u, 0x101544u, 0x10154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10154Cu;
label_10154c:
    // 0x10154c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10154cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101550:
    // 0x101550: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x101550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_101554:
    // 0x101554: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x101554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_101558:
    // 0x101558: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x101558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_10155c:
    // 0x10155c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_101560:
    // 0x101560: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x101560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_101564:
    // 0x101564: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x101564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_101568:
    // 0x101568: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x101568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_10156c:
    // 0x10156c: 0xc117988  jal         func_45E620
label_101570:
    if (ctx->pc == 0x101570u) {
        ctx->pc = 0x101574u;
        goto label_101574;
    }
    ctx->pc = 0x10156Cu;
    SET_GPR_U32(ctx, 31, 0x101574u);
    ctx->pc = 0x45E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E620u, 0x10156Cu, 0x101574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101574u;
label_101574:
    // 0x101574: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x101574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_101578:
    // 0x101578: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x101578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_10157c:
    // 0x10157c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101580:
    // 0x101580: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x101580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_101584:
    // 0x101584: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x101584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_101588:
    // 0x101588: 0xc117998  jal         func_45E660
label_10158c:
    if (ctx->pc == 0x10158Cu) {
        ctx->pc = 0x101590u;
        goto label_101590;
    }
    ctx->pc = 0x101588u;
    SET_GPR_U32(ctx, 31, 0x101590u);
    ctx->pc = 0x45E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E660u, 0x101588u, 0x101590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101590u;
label_101590:
    // 0x101590: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x101590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101594:
    // 0x101594: 0xc10d4d8  jal         func_435360
label_101598:
    if (ctx->pc == 0x101598u) {
        ctx->pc = 0x10159Cu;
        goto label_10159c;
    }
    ctx->pc = 0x101594u;
    SET_GPR_U32(ctx, 31, 0x10159Cu);
    ctx->pc = 0x435360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435360u, 0x101594u, 0x10159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10159Cu;
label_10159c:
    // 0x10159c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1015a0:
    // 0x1015a0: 0xc10d4de  jal         func_435378
label_1015a4:
    if (ctx->pc == 0x1015A4u) {
        ctx->pc = 0x1015A8u;
        goto label_1015a8;
    }
    ctx->pc = 0x1015A0u;
    SET_GPR_U32(ctx, 31, 0x1015A8u);
    ctx->pc = 0x435378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435378u, 0x1015A0u, 0x1015A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015A8u;
label_1015a8:
    // 0x1015a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1015a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1015ac:
    // 0x1015ac: 0xc10a742  jal         func_429D08
label_1015b0:
    if (ctx->pc == 0x1015B0u) {
        ctx->pc = 0x1015B4u;
        goto label_1015b4;
    }
    ctx->pc = 0x1015ACu;
    SET_GPR_U32(ctx, 31, 0x1015B4u);
    ctx->pc = 0x429D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D08u, 0x1015ACu, 0x1015B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015B4u;
label_1015b4:
    // 0x1015b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1015b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1015b8:
    // 0x1015b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1015b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1015bc:
    // 0x1015bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1015bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1015c0:
    // 0x1015c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1015c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1015c4:
    // 0x1015c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1015c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1015c8:
    // 0x1015c8: 0x3e00008  jr          $ra
label_1015cc:
    if (ctx->pc == 0x1015CCu) {
        ctx->pc = 0x1015D0u;
        goto label_1015d0;
    }
    ctx->pc = 0x1015C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1015C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1015D0u;
label_1015d0:
    // 0x1015d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1015d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1015d4:
    // 0x1015d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1015d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1015d8:
    // 0x1015d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1015d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1015dc:
    // 0x1015dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1015dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1015e0:
    // 0x1015e0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1015e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_1015e4:
    // 0x1015e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1015e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1015e8:
    // 0x1015e8: 0xc04032c  jal         func_100CB0
label_1015ec:
    if (ctx->pc == 0x1015ECu) {
        ctx->pc = 0x1015F0u;
        goto label_1015f0;
    }
    ctx->pc = 0x1015E8u;
    SET_GPR_U32(ctx, 31, 0x1015F0u);
    ctx->pc = 0x100CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100CB0u, 0x1015E8u, 0x1015F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015F0u;
label_1015f0:
    // 0x1015f0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1015f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1015f4:
    // 0x1015f4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1015f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1015f8:
    // 0x1015f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1015f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1015fc:
    // 0x1015fc: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_101600:
    if (ctx->pc == 0x101600u) {
        ctx->pc = 0x101604u;
        goto label_101604;
    }
    ctx->pc = 0x1015FCu;
    {
        const bool branch_taken_0x1015fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1015fc) {
            ctx->pc = 0x10165Cu;
            goto label_10165c;
        }
    }
    ctx->pc = 0x101604u;
label_101604:
    // 0x101604: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x101604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_101608:
    // 0x101608: 0xc0405a0  jal         func_101680
label_10160c:
    if (ctx->pc == 0x10160Cu) {
        ctx->pc = 0x101610u;
        goto label_101610;
    }
    ctx->pc = 0x101608u;
    SET_GPR_U32(ctx, 31, 0x101610u);
    ctx->pc = 0x101680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101680u, 0x101608u, 0x101610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101610u;
label_101610:
    // 0x101610: 0xc0423b8  jal         func_108EE0
label_101614:
    if (ctx->pc == 0x101614u) {
        ctx->pc = 0x101618u;
        goto label_101618;
    }
    ctx->pc = 0x101610u;
    SET_GPR_U32(ctx, 31, 0x101618u);
    ctx->pc = 0x108EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108EE0u, 0x101610u, 0x101618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101618u;
label_101618:
    // 0x101618: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x101618u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
label_10161c:
    // 0x10161c: 0x26319f00  addiu       $s1, $s1, -0x6100
    ctx->pc = 0x10161cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942464));
label_101620:
    // 0x101620: 0x220f809  jalr        $s1
label_101624:
    if (ctx->pc == 0x101624u) {
        ctx->pc = 0x101628u;
        goto label_101628;
    }
    ctx->pc = 0x101620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x101628u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101620u, 0x101628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101628u;
label_101628:
    // 0x101628: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x101628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_10162c:
    // 0x10162c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_101630:
    // 0x101630: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x101630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
label_101634:
    // 0x101634: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x101634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_101638:
    // 0x101638: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x101638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_10163c:
    // 0x10163c: 0xc125188  jal         func_494620
label_101640:
    if (ctx->pc == 0x101640u) {
        ctx->pc = 0x101644u;
        goto label_101644;
    }
    ctx->pc = 0x10163Cu;
    SET_GPR_U32(ctx, 31, 0x101644u);
    ctx->pc = 0x494620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494620u, 0x10163Cu, 0x101644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101644u;
label_101644:
    // 0x101644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101648:
    // 0x101648: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_10164c:
    if (ctx->pc == 0x10164Cu) {
        ctx->pc = 0x101650u;
        goto label_101650;
    }
    ctx->pc = 0x101648u;
    {
        const bool branch_taken_0x101648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x101648) {
            ctx->pc = 0x10165Cu;
            goto label_10165c;
        }
    }
    ctx->pc = 0x101650u;
label_101650:
    // 0x101650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101654:
    // 0x101654: 0x10000002  b           . + 4 + (0x2 << 2)
label_101658:
    if (ctx->pc == 0x101658u) {
        ctx->pc = 0x10165Cu;
        goto label_10165c;
    }
    ctx->pc = 0x101654u;
    {
        const bool branch_taken_0x101654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101654) {
            ctx->pc = 0x101660u;
            goto label_101660;
        }
    }
    ctx->pc = 0x10165Cu;
label_10165c:
    // 0x10165c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10165cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101660:
    // 0x101660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x101660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_101664:
    // 0x101664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101668:
    // 0x101668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10166c:
    // 0x10166c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10166cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_101670:
    // 0x101670: 0x3e00008  jr          $ra
label_101674:
    if (ctx->pc == 0x101674u) {
        ctx->pc = 0x101678u;
        goto label_101678;
    }
    ctx->pc = 0x101670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101678u;
label_101678:
    // 0x101678: 0x0  nop
    ctx->pc = 0x101678u;
    // NOP
label_10167c:
    // 0x10167c: 0x0  nop
    ctx->pc = 0x10167cu;
    // NOP
    ctx->pc = 0x101680u;
}
