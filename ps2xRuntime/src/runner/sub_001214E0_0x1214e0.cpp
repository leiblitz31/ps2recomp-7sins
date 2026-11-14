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

// Function: sub_001214E0
// Address: 0x1214e0 - 0x121660
void sub_001214E0_0x1214e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001214E0_0x1214e0");
#endif

    switch (ctx->pc) {
        case 0x1214e0u: goto label_1214e0;
        case 0x1214e4u: goto label_1214e4;
        case 0x1214e8u: goto label_1214e8;
        case 0x1214ecu: goto label_1214ec;
        case 0x1214f0u: goto label_1214f0;
        case 0x1214f4u: goto label_1214f4;
        case 0x1214f8u: goto label_1214f8;
        case 0x1214fcu: goto label_1214fc;
        case 0x121500u: goto label_121500;
        case 0x121504u: goto label_121504;
        case 0x121508u: goto label_121508;
        case 0x12150cu: goto label_12150c;
        case 0x121510u: goto label_121510;
        case 0x121514u: goto label_121514;
        case 0x121518u: goto label_121518;
        case 0x12151cu: goto label_12151c;
        case 0x121520u: goto label_121520;
        case 0x121524u: goto label_121524;
        case 0x121528u: goto label_121528;
        case 0x12152cu: goto label_12152c;
        case 0x121530u: goto label_121530;
        case 0x121534u: goto label_121534;
        case 0x121538u: goto label_121538;
        case 0x12153cu: goto label_12153c;
        case 0x121540u: goto label_121540;
        case 0x121544u: goto label_121544;
        case 0x121548u: goto label_121548;
        case 0x12154cu: goto label_12154c;
        case 0x121550u: goto label_121550;
        case 0x121554u: goto label_121554;
        case 0x121558u: goto label_121558;
        case 0x12155cu: goto label_12155c;
        case 0x121560u: goto label_121560;
        case 0x121564u: goto label_121564;
        case 0x121568u: goto label_121568;
        case 0x12156cu: goto label_12156c;
        case 0x121570u: goto label_121570;
        case 0x121574u: goto label_121574;
        case 0x121578u: goto label_121578;
        case 0x12157cu: goto label_12157c;
        case 0x121580u: goto label_121580;
        case 0x121584u: goto label_121584;
        case 0x121588u: goto label_121588;
        case 0x12158cu: goto label_12158c;
        case 0x121590u: goto label_121590;
        case 0x121594u: goto label_121594;
        case 0x121598u: goto label_121598;
        case 0x12159cu: goto label_12159c;
        case 0x1215a0u: goto label_1215a0;
        case 0x1215a4u: goto label_1215a4;
        case 0x1215a8u: goto label_1215a8;
        case 0x1215acu: goto label_1215ac;
        case 0x1215b0u: goto label_1215b0;
        case 0x1215b4u: goto label_1215b4;
        case 0x1215b8u: goto label_1215b8;
        case 0x1215bcu: goto label_1215bc;
        case 0x1215c0u: goto label_1215c0;
        case 0x1215c4u: goto label_1215c4;
        case 0x1215c8u: goto label_1215c8;
        case 0x1215ccu: goto label_1215cc;
        case 0x1215d0u: goto label_1215d0;
        case 0x1215d4u: goto label_1215d4;
        case 0x1215d8u: goto label_1215d8;
        case 0x1215dcu: goto label_1215dc;
        case 0x1215e0u: goto label_1215e0;
        case 0x1215e4u: goto label_1215e4;
        case 0x1215e8u: goto label_1215e8;
        case 0x1215ecu: goto label_1215ec;
        case 0x1215f0u: goto label_1215f0;
        case 0x1215f4u: goto label_1215f4;
        case 0x1215f8u: goto label_1215f8;
        case 0x1215fcu: goto label_1215fc;
        case 0x121600u: goto label_121600;
        case 0x121604u: goto label_121604;
        case 0x121608u: goto label_121608;
        case 0x12160cu: goto label_12160c;
        case 0x121610u: goto label_121610;
        case 0x121614u: goto label_121614;
        case 0x121618u: goto label_121618;
        case 0x12161cu: goto label_12161c;
        case 0x121620u: goto label_121620;
        case 0x121624u: goto label_121624;
        case 0x121628u: goto label_121628;
        case 0x12162cu: goto label_12162c;
        case 0x121630u: goto label_121630;
        case 0x121634u: goto label_121634;
        case 0x121638u: goto label_121638;
        case 0x12163cu: goto label_12163c;
        case 0x121640u: goto label_121640;
        case 0x121644u: goto label_121644;
        case 0x121648u: goto label_121648;
        case 0x12164cu: goto label_12164c;
        case 0x121650u: goto label_121650;
        case 0x121654u: goto label_121654;
        case 0x121658u: goto label_121658;
        case 0x12165cu: goto label_12165c;
        default: break;
    }

    ctx->pc = 0x1214e0u;

label_1214e0:
    // 0x1214e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1214e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1214e4:
    // 0x1214e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1214e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1214e8:
    // 0x1214e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1214e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1214ec:
    // 0x1214ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1214ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1214f0:
    // 0x1214f0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1214f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1214f4:
    // 0x1214f4: 0xc047ae8  jal         func_11EBA0
label_1214f8:
    if (ctx->pc == 0x1214F8u) {
        ctx->pc = 0x1214FCu;
        goto label_1214fc;
    }
    ctx->pc = 0x1214F4u;
    SET_GPR_U32(ctx, 31, 0x1214FCu);
    ctx->pc = 0x11EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBA0u, 0x1214F4u, 0x1214FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214FCu;
label_1214fc:
    // 0x1214fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1214fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_121500:
    // 0x121500: 0x246335f0  addiu       $v1, $v1, 0x35F0
    ctx->pc = 0x121500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13808));
label_121504:
    // 0x121504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121508:
    // 0x121508: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x121508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_12150c:
    // 0x12150c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12150cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121510:
    // 0x121510: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x121510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_121514:
    // 0x121514: 0x24a520e0  addiu       $a1, $a1, 0x20E0
    ctx->pc = 0x121514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8416));
label_121518:
    // 0x121518: 0xc04322c  jal         func_10C8B0
label_12151c:
    if (ctx->pc == 0x12151Cu) {
        ctx->pc = 0x121520u;
        goto label_121520;
    }
    ctx->pc = 0x121518u;
    SET_GPR_U32(ctx, 31, 0x121520u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x121518u, 0x121520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121520u;
label_121520:
    // 0x121520: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121524:
    // 0x121524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121528:
    // 0x121528: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x121528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12152c:
    // 0x12152c: 0x3e00008  jr          $ra
label_121530:
    if (ctx->pc == 0x121530u) {
        ctx->pc = 0x121534u;
        goto label_121534;
    }
    ctx->pc = 0x12152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12152Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121534u;
label_121534:
    // 0x121534: 0x0  nop
    ctx->pc = 0x121534u;
    // NOP
label_121538:
    // 0x121538: 0x0  nop
    ctx->pc = 0x121538u;
    // NOP
label_12153c:
    // 0x12153c: 0x0  nop
    ctx->pc = 0x12153cu;
    // NOP
label_121540:
    // 0x121540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_121544:
    // 0x121544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_121548:
    // 0x121548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x121548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_12154c:
    // 0x12154c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12154cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_121550:
    // 0x121550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121554:
    // 0x121554: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_121558:
    if (ctx->pc == 0x121558u) {
        ctx->pc = 0x12155Cu;
        goto label_12155c;
    }
    ctx->pc = 0x121554u;
    {
        const bool branch_taken_0x121554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121554) {
            ctx->pc = 0x12159Cu;
            goto label_12159c;
        }
    }
    ctx->pc = 0x12155Cu;
label_12155c:
    // 0x12155c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x12155cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_121560:
    // 0x121560: 0x246335f0  addiu       $v1, $v1, 0x35F0
    ctx->pc = 0x121560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13808));
label_121564:
    // 0x121564: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121568:
    // 0x121568: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x121568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_12156c:
    // 0x12156c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121570:
    // 0x121570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121574:
    // 0x121574: 0xc047b00  jal         func_11EC00
label_121578:
    if (ctx->pc == 0x121578u) {
        ctx->pc = 0x12157Cu;
        goto label_12157c;
    }
    ctx->pc = 0x121574u;
    SET_GPR_U32(ctx, 31, 0x12157Cu);
    ctx->pc = 0x11EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC00u, 0x121574u, 0x12157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12157Cu;
label_12157c:
    // 0x12157c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12157cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_121580:
    // 0x121580: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x121580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_121584:
    // 0x121584: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x121584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_121588:
    // 0x121588: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_12158c:
    if (ctx->pc == 0x12158Cu) {
        ctx->pc = 0x121590u;
        goto label_121590;
    }
    ctx->pc = 0x121588u;
    {
        const bool branch_taken_0x121588 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x121588) {
            ctx->pc = 0x12159Cu;
            goto label_12159c;
        }
    }
    ctx->pc = 0x121590u;
label_121590:
    // 0x121590: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x121590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121594:
    // 0x121594: 0xc0ba070  jal         func_2E81C0
label_121598:
    if (ctx->pc == 0x121598u) {
        ctx->pc = 0x12159Cu;
        goto label_12159c;
    }
    ctx->pc = 0x121594u;
    SET_GPR_U32(ctx, 31, 0x12159Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x121594u, 0x12159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12159Cu;
label_12159c:
    // 0x12159c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1215a0:
    // 0x1215a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1215a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1215a4:
    // 0x1215a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1215a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1215a8:
    // 0x1215a8: 0x3e00008  jr          $ra
label_1215ac:
    if (ctx->pc == 0x1215ACu) {
        ctx->pc = 0x1215B0u;
        goto label_1215b0;
    }
    ctx->pc = 0x1215A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1215A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1215B0u;
label_1215b0:
    // 0x1215b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1215b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1215b4:
    // 0x1215b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1215b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1215b8:
    // 0x1215b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1215b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1215bc:
    // 0x1215bc: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1215bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
label_1215c0:
    // 0x1215c0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1215c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_1215c4:
    // 0x1215c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1215c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1215c8:
    // 0x1215c8: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x1215c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_1215cc:
    // 0x1215cc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1215ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_1215d0:
    // 0x1215d0: 0xc048598  jal         func_121660
label_1215d4:
    if (ctx->pc == 0x1215D4u) {
        ctx->pc = 0x1215D8u;
        goto label_1215d8;
    }
    ctx->pc = 0x1215D0u;
    SET_GPR_U32(ctx, 31, 0x1215D8u);
    ctx->pc = 0x121660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121660u, 0x1215D0u, 0x1215D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1215D8u;
label_1215d8:
    // 0x1215d8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1215d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1215dc:
    // 0x1215dc: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x1215dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_1215e0:
    // 0x1215e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1215e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1215e4:
    // 0x1215e4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1215e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1215e8:
    // 0x1215e8: 0x320f809  jalr        $t9
label_1215ec:
    if (ctx->pc == 0x1215ECu) {
        ctx->pc = 0x1215F0u;
        goto label_1215f0;
    }
    ctx->pc = 0x1215E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1215F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1215E8u, 0x1215F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1215F0u;
label_1215f0:
    // 0x1215f0: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x1215f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_1215f4:
    // 0x1215f4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1215f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1215f8:
    // 0x1215f8: 0xc0553d4  jal         func_154F50
label_1215fc:
    if (ctx->pc == 0x1215FCu) {
        ctx->pc = 0x121600u;
        goto label_121600;
    }
    ctx->pc = 0x1215F8u;
    SET_GPR_U32(ctx, 31, 0x121600u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1215F8u, 0x121600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121600u;
label_121600:
    // 0x121600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121604:
    // 0x121604: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x121604u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_121608:
    // 0x121608: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x121608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12160c:
    // 0x12160c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x12160cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_121610:
    // 0x121610: 0x320f809  jalr        $t9
label_121614:
    if (ctx->pc == 0x121614u) {
        ctx->pc = 0x121618u;
        goto label_121618;
    }
    ctx->pc = 0x121610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121618u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121610u, 0x121618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121618u;
label_121618:
    // 0x121618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12161c:
    // 0x12161c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12161cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_121620:
    // 0x121620: 0x3e00008  jr          $ra
label_121624:
    if (ctx->pc == 0x121624u) {
        ctx->pc = 0x121628u;
        goto label_121628;
    }
    ctx->pc = 0x121620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121628u;
label_121628:
    // 0x121628: 0x0  nop
    ctx->pc = 0x121628u;
    // NOP
label_12162c:
    // 0x12162c: 0x0  nop
    ctx->pc = 0x12162cu;
    // NOP
label_121630:
    // 0x121630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_121634:
    // 0x121634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_121638:
    // 0x121638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x121638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_12163c:
    // 0x12163c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12163cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121640:
    // 0x121640: 0xc08edc8  jal         func_23B720
label_121644:
    if (ctx->pc == 0x121644u) {
        ctx->pc = 0x121648u;
        goto label_121648;
    }
    ctx->pc = 0x121640u;
    SET_GPR_U32(ctx, 31, 0x121648u);
    ctx->pc = 0x23B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B720u, 0x121640u, 0x121648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121648u;
label_121648:
    // 0x121648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12164c:
    // 0x12164c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12164cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_121650:
    // 0x121650: 0x3e00008  jr          $ra
label_121654:
    if (ctx->pc == 0x121654u) {
        ctx->pc = 0x121658u;
        goto label_121658;
    }
    ctx->pc = 0x121650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121658u;
label_121658:
    // 0x121658: 0x0  nop
    ctx->pc = 0x121658u;
    // NOP
label_12165c:
    // 0x12165c: 0x0  nop
    ctx->pc = 0x12165cu;
    // NOP
    ctx->pc = 0x121660u;
}
