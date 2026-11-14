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

// Function: sub_00100490
// Address: 0x100490 - 0x1006e0
void sub_00100490_0x100490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100490_0x100490");
#endif

    switch (ctx->pc) {
        case 0x100490u: goto label_100490;
        case 0x100494u: goto label_100494;
        case 0x100498u: goto label_100498;
        case 0x10049cu: goto label_10049c;
        case 0x1004a0u: goto label_1004a0;
        case 0x1004a4u: goto label_1004a4;
        case 0x1004a8u: goto label_1004a8;
        case 0x1004acu: goto label_1004ac;
        case 0x1004b0u: goto label_1004b0;
        case 0x1004b4u: goto label_1004b4;
        case 0x1004b8u: goto label_1004b8;
        case 0x1004bcu: goto label_1004bc;
        case 0x1004c0u: goto label_1004c0;
        case 0x1004c4u: goto label_1004c4;
        case 0x1004c8u: goto label_1004c8;
        case 0x1004ccu: goto label_1004cc;
        case 0x1004d0u: goto label_1004d0;
        case 0x1004d4u: goto label_1004d4;
        case 0x1004d8u: goto label_1004d8;
        case 0x1004dcu: goto label_1004dc;
        case 0x1004e0u: goto label_1004e0;
        case 0x1004e4u: goto label_1004e4;
        case 0x1004e8u: goto label_1004e8;
        case 0x1004ecu: goto label_1004ec;
        case 0x1004f0u: goto label_1004f0;
        case 0x1004f4u: goto label_1004f4;
        case 0x1004f8u: goto label_1004f8;
        case 0x1004fcu: goto label_1004fc;
        case 0x100500u: goto label_100500;
        case 0x100504u: goto label_100504;
        case 0x100508u: goto label_100508;
        case 0x10050cu: goto label_10050c;
        case 0x100510u: goto label_100510;
        case 0x100514u: goto label_100514;
        case 0x100518u: goto label_100518;
        case 0x10051cu: goto label_10051c;
        case 0x100520u: goto label_100520;
        case 0x100524u: goto label_100524;
        case 0x100528u: goto label_100528;
        case 0x10052cu: goto label_10052c;
        case 0x100530u: goto label_100530;
        case 0x100534u: goto label_100534;
        case 0x100538u: goto label_100538;
        case 0x10053cu: goto label_10053c;
        case 0x100540u: goto label_100540;
        case 0x100544u: goto label_100544;
        case 0x100548u: goto label_100548;
        case 0x10054cu: goto label_10054c;
        case 0x100550u: goto label_100550;
        case 0x100554u: goto label_100554;
        case 0x100558u: goto label_100558;
        case 0x10055cu: goto label_10055c;
        case 0x100560u: goto label_100560;
        case 0x100564u: goto label_100564;
        case 0x100568u: goto label_100568;
        case 0x10056cu: goto label_10056c;
        case 0x100570u: goto label_100570;
        case 0x100574u: goto label_100574;
        case 0x100578u: goto label_100578;
        case 0x10057cu: goto label_10057c;
        case 0x100580u: goto label_100580;
        case 0x100584u: goto label_100584;
        case 0x100588u: goto label_100588;
        case 0x10058cu: goto label_10058c;
        case 0x100590u: goto label_100590;
        case 0x100594u: goto label_100594;
        case 0x100598u: goto label_100598;
        case 0x10059cu: goto label_10059c;
        case 0x1005a0u: goto label_1005a0;
        case 0x1005a4u: goto label_1005a4;
        case 0x1005a8u: goto label_1005a8;
        case 0x1005acu: goto label_1005ac;
        case 0x1005b0u: goto label_1005b0;
        case 0x1005b4u: goto label_1005b4;
        case 0x1005b8u: goto label_1005b8;
        case 0x1005bcu: goto label_1005bc;
        case 0x1005c0u: goto label_1005c0;
        case 0x1005c4u: goto label_1005c4;
        case 0x1005c8u: goto label_1005c8;
        case 0x1005ccu: goto label_1005cc;
        case 0x1005d0u: goto label_1005d0;
        case 0x1005d4u: goto label_1005d4;
        case 0x1005d8u: goto label_1005d8;
        case 0x1005dcu: goto label_1005dc;
        case 0x1005e0u: goto label_1005e0;
        case 0x1005e4u: goto label_1005e4;
        case 0x1005e8u: goto label_1005e8;
        case 0x1005ecu: goto label_1005ec;
        case 0x1005f0u: goto label_1005f0;
        case 0x1005f4u: goto label_1005f4;
        case 0x1005f8u: goto label_1005f8;
        case 0x1005fcu: goto label_1005fc;
        case 0x100600u: goto label_100600;
        case 0x100604u: goto label_100604;
        case 0x100608u: goto label_100608;
        case 0x10060cu: goto label_10060c;
        case 0x100610u: goto label_100610;
        case 0x100614u: goto label_100614;
        case 0x100618u: goto label_100618;
        case 0x10061cu: goto label_10061c;
        case 0x100620u: goto label_100620;
        case 0x100624u: goto label_100624;
        case 0x100628u: goto label_100628;
        case 0x10062cu: goto label_10062c;
        case 0x100630u: goto label_100630;
        case 0x100634u: goto label_100634;
        case 0x100638u: goto label_100638;
        case 0x10063cu: goto label_10063c;
        case 0x100640u: goto label_100640;
        case 0x100644u: goto label_100644;
        case 0x100648u: goto label_100648;
        case 0x10064cu: goto label_10064c;
        case 0x100650u: goto label_100650;
        case 0x100654u: goto label_100654;
        case 0x100658u: goto label_100658;
        case 0x10065cu: goto label_10065c;
        case 0x100660u: goto label_100660;
        case 0x100664u: goto label_100664;
        case 0x100668u: goto label_100668;
        case 0x10066cu: goto label_10066c;
        case 0x100670u: goto label_100670;
        case 0x100674u: goto label_100674;
        case 0x100678u: goto label_100678;
        case 0x10067cu: goto label_10067c;
        case 0x100680u: goto label_100680;
        case 0x100684u: goto label_100684;
        case 0x100688u: goto label_100688;
        case 0x10068cu: goto label_10068c;
        case 0x100690u: goto label_100690;
        case 0x100694u: goto label_100694;
        case 0x100698u: goto label_100698;
        case 0x10069cu: goto label_10069c;
        case 0x1006a0u: goto label_1006a0;
        case 0x1006a4u: goto label_1006a4;
        case 0x1006a8u: goto label_1006a8;
        case 0x1006acu: goto label_1006ac;
        case 0x1006b0u: goto label_1006b0;
        case 0x1006b4u: goto label_1006b4;
        case 0x1006b8u: goto label_1006b8;
        case 0x1006bcu: goto label_1006bc;
        case 0x1006c0u: goto label_1006c0;
        case 0x1006c4u: goto label_1006c4;
        case 0x1006c8u: goto label_1006c8;
        case 0x1006ccu: goto label_1006cc;
        case 0x1006d0u: goto label_1006d0;
        case 0x1006d4u: goto label_1006d4;
        case 0x1006d8u: goto label_1006d8;
        case 0x1006dcu: goto label_1006dc;
        default: break;
    }

    ctx->pc = 0x100490u;

label_100490:
    // 0x100490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_100494:
    // 0x100494: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_100498:
    // 0x100498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10049c:
    // 0x10049c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1004a0:
    // 0x1004a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1004a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1004a4:
    // 0x1004a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1004a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1004a8:
    // 0x1004a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1004a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1004ac:
    // 0x1004ac: 0xc119b68  jal         func_466DA0
label_1004b0:
    if (ctx->pc == 0x1004B0u) {
        ctx->pc = 0x1004B4u;
        goto label_1004b4;
    }
    ctx->pc = 0x1004ACu;
    SET_GPR_U32(ctx, 31, 0x1004B4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1004ACu, 0x1004B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004B4u;
label_1004b4:
    // 0x1004b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1004b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1004b8:
    // 0x1004b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1004b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1004bc:
    // 0x1004bc: 0xc0400e0  jal         func_100380
label_1004c0:
    if (ctx->pc == 0x1004C0u) {
        ctx->pc = 0x1004C4u;
        goto label_1004c4;
    }
    ctx->pc = 0x1004BCu;
    SET_GPR_U32(ctx, 31, 0x1004C4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1004BCu, 0x1004C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004C4u;
label_1004c4:
    // 0x1004c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1004c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1004c8:
    // 0x1004c8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1004cc:
    if (ctx->pc == 0x1004CCu) {
        ctx->pc = 0x1004D0u;
        goto label_1004d0;
    }
    ctx->pc = 0x1004C8u;
    {
        const bool branch_taken_0x1004c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1004c8) {
            ctx->pc = 0x1004E0u;
            goto label_1004e0;
        }
    }
    ctx->pc = 0x1004D0u;
label_1004d0:
    // 0x1004d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1004d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1004d4:
    // 0x1004d4: 0xc0404b0  jal         func_1012C0
label_1004d8:
    if (ctx->pc == 0x1004D8u) {
        ctx->pc = 0x1004DCu;
        goto label_1004dc;
    }
    ctx->pc = 0x1004D4u;
    SET_GPR_U32(ctx, 31, 0x1004DCu);
    ctx->pc = 0x1012C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012C0u, 0x1004D4u, 0x1004DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004DCu;
label_1004dc:
    // 0x1004dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1004dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1004e0:
    // 0x1004e0: 0xaf91b990  sw          $s1, -0x4670($gp)
    ctx->pc = 0x1004e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949264), GPR_U32(ctx, 17));
label_1004e4:
    // 0x1004e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1004e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1004e8:
    // 0x1004e8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1004e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1004ec:
    // 0x1004ec: 0x8f84b990  lw          $a0, -0x4670($gp)
    ctx->pc = 0x1004ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_1004f0:
    // 0x1004f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1004f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1004f4:
    // 0x1004f4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1004f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1004f8:
    // 0x1004f8: 0x320f809  jalr        $t9
label_1004fc:
    if (ctx->pc == 0x1004FCu) {
        ctx->pc = 0x100500u;
        goto label_100500;
    }
    ctx->pc = 0x1004F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1004F8u, 0x100500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100500u;
label_100500:
    // 0x100500: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x100500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100504:
    // 0x100504: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x100504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_100508:
    // 0x100508: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x100508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10050c:
    // 0x10050c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10050cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_100510:
    // 0x100510: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100514:
    // 0x100514: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100518:
    // 0x100518: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x100518u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10051c:
    // 0x10051c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x10051cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_100520:
    // 0x100520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100524:
    // 0x100524: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_100528:
    if (ctx->pc == 0x100528u) {
        ctx->pc = 0x10052Cu;
        goto label_10052c;
    }
    ctx->pc = 0x100524u;
    {
        const bool branch_taken_0x100524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100524) {
            ctx->pc = 0x10055Cu;
            goto label_10055c;
        }
    }
    ctx->pc = 0x10052Cu;
label_10052c:
    // 0x10052c: 0x8f84b990  lw          $a0, -0x4670($gp)
    ctx->pc = 0x10052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_100530:
    // 0x100530: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x100530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100534:
    // 0x100534: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x100534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_100538:
    // 0x100538: 0x320f809  jalr        $t9
label_10053c:
    if (ctx->pc == 0x10053Cu) {
        ctx->pc = 0x100540u;
        goto label_100540;
    }
    ctx->pc = 0x100538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100540u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100538u, 0x100540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100540u;
label_100540:
    // 0x100540: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x100540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100544:
    // 0x100544: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x100544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_100548:
    // 0x100548: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x100548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10054c:
    // 0x10054c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10054cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_100550:
    // 0x100550: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100554:
    // 0x100554: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100558:
    // 0x100558: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x100558u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10055c:
    // 0x10055c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x10055cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_100560:
    // 0x100560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100564:
    // 0x100564: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_100568:
    if (ctx->pc == 0x100568u) {
        ctx->pc = 0x10056Cu;
        goto label_10056c;
    }
    ctx->pc = 0x100564u;
    {
        const bool branch_taken_0x100564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100564) {
            ctx->pc = 0x10059Cu;
            goto label_10059c;
        }
    }
    ctx->pc = 0x10056Cu;
label_10056c:
    // 0x10056c: 0x8f84b990  lw          $a0, -0x4670($gp)
    ctx->pc = 0x10056cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_100570:
    // 0x100570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x100570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100574:
    // 0x100574: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x100574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_100578:
    // 0x100578: 0x320f809  jalr        $t9
label_10057c:
    if (ctx->pc == 0x10057Cu) {
        ctx->pc = 0x100580u;
        goto label_100580;
    }
    ctx->pc = 0x100578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100580u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100578u, 0x100580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100580u;
label_100580:
    // 0x100580: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x100580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100584:
    // 0x100584: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x100584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_100588:
    // 0x100588: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x100588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10058c:
    // 0x10058c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10058cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_100590:
    // 0x100590: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100594:
    // 0x100594: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100598:
    // 0x100598: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x100598u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10059c:
    // 0x10059c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x10059cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1005a0:
    // 0x1005a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1005a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1005a4:
    // 0x1005a4: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_1005a8:
    if (ctx->pc == 0x1005A8u) {
        ctx->pc = 0x1005ACu;
        goto label_1005ac;
    }
    ctx->pc = 0x1005A4u;
    {
        const bool branch_taken_0x1005a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1005a4) {
            ctx->pc = 0x100658u;
            goto label_100658;
        }
    }
    ctx->pc = 0x1005ACu;
label_1005ac:
    // 0x1005ac: 0x10000025  b           . + 4 + (0x25 << 2)
label_1005b0:
    if (ctx->pc == 0x1005B0u) {
        ctx->pc = 0x1005B4u;
        goto label_1005b4;
    }
    ctx->pc = 0x1005ACu;
    {
        const bool branch_taken_0x1005ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005ac) {
            ctx->pc = 0x100644u;
            goto label_100644;
        }
    }
    ctx->pc = 0x1005B4u;
label_1005b4:
    // 0x1005b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1005b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1005b8:
    // 0x1005b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1005b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1005bc:
    // 0x1005bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1005bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1005c0:
    // 0x1005c0: 0xc116d44  jal         func_45B510
label_1005c4:
    if (ctx->pc == 0x1005C4u) {
        ctx->pc = 0x1005C8u;
        goto label_1005c8;
    }
    ctx->pc = 0x1005C0u;
    SET_GPR_U32(ctx, 31, 0x1005C8u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x1005C0u, 0x1005C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005C8u;
label_1005c8:
    // 0x1005c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1005cc:
    if (ctx->pc == 0x1005CCu) {
        ctx->pc = 0x1005D0u;
        goto label_1005d0;
    }
    ctx->pc = 0x1005C8u;
    {
        const bool branch_taken_0x1005c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005c8) {
            ctx->pc = 0x1005ECu;
            goto label_1005ec;
        }
    }
    ctx->pc = 0x1005D0u;
label_1005d0:
    // 0x1005d0: 0x93828494  lbu         $v0, -0x7B6C($gp)
    ctx->pc = 0x1005d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935700)));
label_1005d4:
    // 0x1005d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1005d8:
    if (ctx->pc == 0x1005D8u) {
        ctx->pc = 0x1005DCu;
        goto label_1005dc;
    }
    ctx->pc = 0x1005D4u;
    {
        const bool branch_taken_0x1005d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005d4) {
            ctx->pc = 0x1005ECu;
            goto label_1005ec;
        }
    }
    ctx->pc = 0x1005DCu;
label_1005dc:
    // 0x1005dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1005dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1005e0:
    // 0x1005e0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1005e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1005e4:
    // 0x1005e4: 0xc04043c  jal         func_1010F0
label_1005e8:
    if (ctx->pc == 0x1005E8u) {
        ctx->pc = 0x1005ECu;
        goto label_1005ec;
    }
    ctx->pc = 0x1005E4u;
    SET_GPR_U32(ctx, 31, 0x1005ECu);
    ctx->pc = 0x1010F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010F0u, 0x1005E4u, 0x1005ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005ECu;
label_1005ec:
    // 0x1005ec: 0xc0f0c7e  jal         func_3C31F8
label_1005f0:
    if (ctx->pc == 0x1005F0u) {
        ctx->pc = 0x1005F4u;
        goto label_1005f4;
    }
    ctx->pc = 0x1005ECu;
    SET_GPR_U32(ctx, 31, 0x1005F4u);
    ctx->pc = 0x3C31F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C31F8u, 0x1005ECu, 0x1005F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005F4u;
label_1005f4:
    // 0x1005f4: 0xc122430  jal         func_4890C0
label_1005f8:
    if (ctx->pc == 0x1005F8u) {
        ctx->pc = 0x1005FCu;
        goto label_1005fc;
    }
    ctx->pc = 0x1005F4u;
    SET_GPR_U32(ctx, 31, 0x1005FCu);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x1005F4u, 0x1005FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005FCu;
label_1005fc:
    // 0x1005fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1005fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100600:
    // 0x100600: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x100600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_100604:
    // 0x100604: 0xc120fb0  jal         func_483EC0
label_100608:
    if (ctx->pc == 0x100608u) {
        ctx->pc = 0x10060Cu;
        goto label_10060c;
    }
    ctx->pc = 0x100604u;
    SET_GPR_U32(ctx, 31, 0x10060Cu);
    ctx->pc = 0x483EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483EC0u, 0x100604u, 0x10060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10060Cu;
label_10060c:
    // 0x10060c: 0x8f84b990  lw          $a0, -0x4670($gp)
    ctx->pc = 0x10060cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_100610:
    // 0x100610: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x100610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100614:
    // 0x100614: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x100614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_100618:
    // 0x100618: 0x320f809  jalr        $t9
label_10061c:
    if (ctx->pc == 0x10061Cu) {
        ctx->pc = 0x100620u;
        goto label_100620;
    }
    ctx->pc = 0x100618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100620u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100618u, 0x100620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100620u;
label_100620:
    // 0x100620: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_100624:
    if (ctx->pc == 0x100624u) {
        ctx->pc = 0x100628u;
        goto label_100628;
    }
    ctx->pc = 0x100620u;
    {
        const bool branch_taken_0x100620 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x100620) {
            ctx->pc = 0x100644u;
            goto label_100644;
        }
    }
    ctx->pc = 0x100628u;
label_100628:
    // 0x100628: 0x93828494  lbu         $v0, -0x7B6C($gp)
    ctx->pc = 0x100628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935700)));
label_10062c:
    // 0x10062c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_100630:
    if (ctx->pc == 0x100630u) {
        ctx->pc = 0x100634u;
        goto label_100634;
    }
    ctx->pc = 0x10062Cu;
    {
        const bool branch_taken_0x10062c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10062c) {
            ctx->pc = 0x100644u;
            goto label_100644;
        }
    }
    ctx->pc = 0x100634u;
label_100634:
    // 0x100634: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x100634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100638:
    // 0x100638: 0xa3808494  sb          $zero, -0x7B6C($gp)
    ctx->pc = 0x100638u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935700), (uint8_t)GPR_U32(ctx, 0));
label_10063c:
    // 0x10063c: 0xc040440  jal         func_101100
label_100640:
    if (ctx->pc == 0x100640u) {
        ctx->pc = 0x100644u;
        goto label_100644;
    }
    ctx->pc = 0x10063Cu;
    SET_GPR_U32(ctx, 31, 0x100644u);
    ctx->pc = 0x101100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101100u, 0x10063Cu, 0x100644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100644u;
label_100644:
    // 0x100644: 0x93828490  lbu         $v0, -0x7B70($gp)
    ctx->pc = 0x100644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_100648:
    // 0x100648: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x100648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10064c:
    // 0x10064c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100650:
    // 0x100650: 0x1062ffd8  beq         $v1, $v0, . + 4 + (-0x28 << 2)
label_100654:
    if (ctx->pc == 0x100654u) {
        ctx->pc = 0x100658u;
        goto label_100658;
    }
    ctx->pc = 0x100650u;
    {
        const bool branch_taken_0x100650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x100650) {
            ctx->pc = 0x1005B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1005b4;
        }
    }
    ctx->pc = 0x100658u;
label_100658:
    // 0x100658: 0x8f84b990  lw          $a0, -0x4670($gp)
    ctx->pc = 0x100658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_10065c:
    // 0x10065c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10065cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100660:
    // 0x100660: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x100660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_100664:
    // 0x100664: 0x320f809  jalr        $t9
label_100668:
    if (ctx->pc == 0x100668u) {
        ctx->pc = 0x10066Cu;
        goto label_10066c;
    }
    ctx->pc = 0x100664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10066Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100664u, 0x10066Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10066Cu;
label_10066c:
    // 0x10066c: 0x8f84b990  lw          $a0, -0x4670($gp)
    ctx->pc = 0x10066cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_100670:
    // 0x100670: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x100670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100674:
    // 0x100674: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x100674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_100678:
    // 0x100678: 0x320f809  jalr        $t9
label_10067c:
    if (ctx->pc == 0x10067Cu) {
        ctx->pc = 0x100680u;
        goto label_100680;
    }
    ctx->pc = 0x100678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100680u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100678u, 0x100680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100680u;
label_100680:
    // 0x100680: 0x8f84b990  lw          $a0, -0x4670($gp)
    ctx->pc = 0x100680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_100684:
    // 0x100684: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x100684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100688:
    // 0x100688: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x100688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_10068c:
    // 0x10068c: 0x320f809  jalr        $t9
label_100690:
    if (ctx->pc == 0x100690u) {
        ctx->pc = 0x100694u;
        goto label_100694;
    }
    ctx->pc = 0x10068Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100694u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10068Cu, 0x100694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100694u;
label_100694:
    // 0x100694: 0x8f82b990  lw          $v0, -0x4670($gp)
    ctx->pc = 0x100694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_100698:
    // 0x100698: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10069c:
    if (ctx->pc == 0x10069Cu) {
        ctx->pc = 0x1006A0u;
        goto label_1006a0;
    }
    ctx->pc = 0x100698u;
    {
        const bool branch_taken_0x100698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100698) {
            ctx->pc = 0x1006BCu;
            goto label_1006bc;
        }
    }
    ctx->pc = 0x1006A0u;
label_1006a0:
    // 0x1006a0: 0x8f84b990  lw          $a0, -0x4670($gp)
    ctx->pc = 0x1006a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_1006a4:
    // 0x1006a4: 0xc0401b8  jal         func_1006E0
label_1006a8:
    if (ctx->pc == 0x1006A8u) {
        ctx->pc = 0x1006ACu;
        goto label_1006ac;
    }
    ctx->pc = 0x1006A4u;
    SET_GPR_U32(ctx, 31, 0x1006ACu);
    ctx->pc = 0x1006E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006E0u, 0x1006A4u, 0x1006ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1006ACu;
label_1006ac:
    // 0x1006ac: 0x8f84b990  lw          $a0, -0x4670($gp)
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
label_1006b0:
    // 0x1006b0: 0xc119c5c  jal         func_467170
label_1006b4:
    if (ctx->pc == 0x1006B4u) {
        ctx->pc = 0x1006B8u;
        goto label_1006b8;
    }
    ctx->pc = 0x1006B0u;
    SET_GPR_U32(ctx, 31, 0x1006B8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1006B0u, 0x1006B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1006B8u;
label_1006b8:
    // 0x1006b8: 0xaf80b990  sw          $zero, -0x4670($gp)
    ctx->pc = 0x1006b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949264), GPR_U32(ctx, 0));
label_1006bc:
    // 0x1006bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1006bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1006c0:
    // 0x1006c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1006c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1006c4:
    // 0x1006c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1006c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1006c8:
    // 0x1006c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1006c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1006cc:
    // 0x1006cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1006ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1006d0:
    // 0x1006d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1006d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1006d4:
    // 0x1006d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1006d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1006d8:
    // 0x1006d8: 0x3e00008  jr          $ra
label_1006dc:
    if (ctx->pc == 0x1006DCu) {
        ctx->pc = 0x1006E0u;
        goto label_fallthrough_0x1006d8;
    }
    ctx->pc = 0x1006D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1006D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1006d8:
    ctx->pc = 0x1006E0u;
}
