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

// Function: sub_0010C4B0
// Address: 0x10c4b0 - 0x10c6b0
void sub_0010C4B0_0x10c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C4B0_0x10c4b0");
#endif

    switch (ctx->pc) {
        case 0x10c4b0u: goto label_10c4b0;
        case 0x10c4b4u: goto label_10c4b4;
        case 0x10c4b8u: goto label_10c4b8;
        case 0x10c4bcu: goto label_10c4bc;
        case 0x10c4c0u: goto label_10c4c0;
        case 0x10c4c4u: goto label_10c4c4;
        case 0x10c4c8u: goto label_10c4c8;
        case 0x10c4ccu: goto label_10c4cc;
        case 0x10c4d0u: goto label_10c4d0;
        case 0x10c4d4u: goto label_10c4d4;
        case 0x10c4d8u: goto label_10c4d8;
        case 0x10c4dcu: goto label_10c4dc;
        case 0x10c4e0u: goto label_10c4e0;
        case 0x10c4e4u: goto label_10c4e4;
        case 0x10c4e8u: goto label_10c4e8;
        case 0x10c4ecu: goto label_10c4ec;
        case 0x10c4f0u: goto label_10c4f0;
        case 0x10c4f4u: goto label_10c4f4;
        case 0x10c4f8u: goto label_10c4f8;
        case 0x10c4fcu: goto label_10c4fc;
        case 0x10c500u: goto label_10c500;
        case 0x10c504u: goto label_10c504;
        case 0x10c508u: goto label_10c508;
        case 0x10c50cu: goto label_10c50c;
        case 0x10c510u: goto label_10c510;
        case 0x10c514u: goto label_10c514;
        case 0x10c518u: goto label_10c518;
        case 0x10c51cu: goto label_10c51c;
        case 0x10c520u: goto label_10c520;
        case 0x10c524u: goto label_10c524;
        case 0x10c528u: goto label_10c528;
        case 0x10c52cu: goto label_10c52c;
        case 0x10c530u: goto label_10c530;
        case 0x10c534u: goto label_10c534;
        case 0x10c538u: goto label_10c538;
        case 0x10c53cu: goto label_10c53c;
        case 0x10c540u: goto label_10c540;
        case 0x10c544u: goto label_10c544;
        case 0x10c548u: goto label_10c548;
        case 0x10c54cu: goto label_10c54c;
        case 0x10c550u: goto label_10c550;
        case 0x10c554u: goto label_10c554;
        case 0x10c558u: goto label_10c558;
        case 0x10c55cu: goto label_10c55c;
        case 0x10c560u: goto label_10c560;
        case 0x10c564u: goto label_10c564;
        case 0x10c568u: goto label_10c568;
        case 0x10c56cu: goto label_10c56c;
        case 0x10c570u: goto label_10c570;
        case 0x10c574u: goto label_10c574;
        case 0x10c578u: goto label_10c578;
        case 0x10c57cu: goto label_10c57c;
        case 0x10c580u: goto label_10c580;
        case 0x10c584u: goto label_10c584;
        case 0x10c588u: goto label_10c588;
        case 0x10c58cu: goto label_10c58c;
        case 0x10c590u: goto label_10c590;
        case 0x10c594u: goto label_10c594;
        case 0x10c598u: goto label_10c598;
        case 0x10c59cu: goto label_10c59c;
        case 0x10c5a0u: goto label_10c5a0;
        case 0x10c5a4u: goto label_10c5a4;
        case 0x10c5a8u: goto label_10c5a8;
        case 0x10c5acu: goto label_10c5ac;
        case 0x10c5b0u: goto label_10c5b0;
        case 0x10c5b4u: goto label_10c5b4;
        case 0x10c5b8u: goto label_10c5b8;
        case 0x10c5bcu: goto label_10c5bc;
        case 0x10c5c0u: goto label_10c5c0;
        case 0x10c5c4u: goto label_10c5c4;
        case 0x10c5c8u: goto label_10c5c8;
        case 0x10c5ccu: goto label_10c5cc;
        case 0x10c5d0u: goto label_10c5d0;
        case 0x10c5d4u: goto label_10c5d4;
        case 0x10c5d8u: goto label_10c5d8;
        case 0x10c5dcu: goto label_10c5dc;
        case 0x10c5e0u: goto label_10c5e0;
        case 0x10c5e4u: goto label_10c5e4;
        case 0x10c5e8u: goto label_10c5e8;
        case 0x10c5ecu: goto label_10c5ec;
        case 0x10c5f0u: goto label_10c5f0;
        case 0x10c5f4u: goto label_10c5f4;
        case 0x10c5f8u: goto label_10c5f8;
        case 0x10c5fcu: goto label_10c5fc;
        case 0x10c600u: goto label_10c600;
        case 0x10c604u: goto label_10c604;
        case 0x10c608u: goto label_10c608;
        case 0x10c60cu: goto label_10c60c;
        case 0x10c610u: goto label_10c610;
        case 0x10c614u: goto label_10c614;
        case 0x10c618u: goto label_10c618;
        case 0x10c61cu: goto label_10c61c;
        case 0x10c620u: goto label_10c620;
        case 0x10c624u: goto label_10c624;
        case 0x10c628u: goto label_10c628;
        case 0x10c62cu: goto label_10c62c;
        case 0x10c630u: goto label_10c630;
        case 0x10c634u: goto label_10c634;
        case 0x10c638u: goto label_10c638;
        case 0x10c63cu: goto label_10c63c;
        case 0x10c640u: goto label_10c640;
        case 0x10c644u: goto label_10c644;
        case 0x10c648u: goto label_10c648;
        case 0x10c64cu: goto label_10c64c;
        case 0x10c650u: goto label_10c650;
        case 0x10c654u: goto label_10c654;
        case 0x10c658u: goto label_10c658;
        case 0x10c65cu: goto label_10c65c;
        case 0x10c660u: goto label_10c660;
        case 0x10c664u: goto label_10c664;
        case 0x10c668u: goto label_10c668;
        case 0x10c66cu: goto label_10c66c;
        case 0x10c670u: goto label_10c670;
        case 0x10c674u: goto label_10c674;
        case 0x10c678u: goto label_10c678;
        case 0x10c67cu: goto label_10c67c;
        case 0x10c680u: goto label_10c680;
        case 0x10c684u: goto label_10c684;
        case 0x10c688u: goto label_10c688;
        case 0x10c68cu: goto label_10c68c;
        case 0x10c690u: goto label_10c690;
        case 0x10c694u: goto label_10c694;
        case 0x10c698u: goto label_10c698;
        case 0x10c69cu: goto label_10c69c;
        case 0x10c6a0u: goto label_10c6a0;
        case 0x10c6a4u: goto label_10c6a4;
        case 0x10c6a8u: goto label_10c6a8;
        case 0x10c6acu: goto label_10c6ac;
        default: break;
    }

    ctx->pc = 0x10c4b0u;

label_10c4b0:
    // 0x10c4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10c4b4:
    // 0x10c4b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_10c4b8:
    // 0x10c4b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10c4bc:
    // 0x10c4bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10c4c0:
    // 0x10c4c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10c4c4:
    // 0x10c4c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10c4c8:
    // 0x10c4c8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x10c4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_10c4cc:
    // 0x10c4cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10c4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10c4d0:
    // 0x10c4d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_10c4d4:
    // 0x10c4d4: 0x3e00008  jr          $ra
label_10c4d8:
    if (ctx->pc == 0x10C4D8u) {
        ctx->pc = 0x10C4DCu;
        goto label_10c4dc;
    }
    ctx->pc = 0x10C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C4DCu;
label_10c4dc:
    // 0x10c4dc: 0x0  nop
    ctx->pc = 0x10c4dcu;
    // NOP
label_10c4e0:
    // 0x10c4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10c4e4:
    // 0x10c4e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10c4e8:
    // 0x10c4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c4ec:
    // 0x10c4ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_10c4f0:
    // 0x10c4f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_10c4f4:
    // 0x10c4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c4f8:
    // 0x10c4f8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c4f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c4fc:
    // 0x10c4fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c500:
    // 0x10c500: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10c500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10c504:
    // 0x10c504: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10c504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10c508:
    // 0x10c508: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c50c:
    // 0x10c50c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x10c50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_10c510:
    // 0x10c510: 0x320f809  jalr        $t9
label_10c514:
    if (ctx->pc == 0x10C514u) {
        ctx->pc = 0x10C518u;
        goto label_10c518;
    }
    ctx->pc = 0x10C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C518u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C510u, 0x10C518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C518u;
label_10c518:
    // 0x10c518: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10c518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c51c:
    // 0x10c51c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10c520:
    // 0x10c520: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10c524:
    // 0x10c524: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10c524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10c528:
    // 0x10c528: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c52c:
    // 0x10c52c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c530:
    // 0x10c530: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c530u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c534:
    // 0x10c534: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c538:
    // 0x10c538: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10c538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10c53c:
    // 0x10c53c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10c53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10c540:
    // 0x10c540: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c544:
    // 0x10c544: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x10c544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_10c548:
    // 0x10c548: 0x320f809  jalr        $t9
label_10c54c:
    if (ctx->pc == 0x10C54Cu) {
        ctx->pc = 0x10C550u;
        goto label_10c550;
    }
    ctx->pc = 0x10C548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C550u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C548u, 0x10C550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C550u;
label_10c550:
    // 0x10c550: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10c550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c554:
    // 0x10c554: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10c554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10c558:
    // 0x10c558: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10c55c:
    // 0x10c55c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10c55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10c560:
    // 0x10c560: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c564:
    // 0x10c564: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c568:
    // 0x10c568: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c568u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c56c:
    // 0x10c56c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c570:
    // 0x10c570: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10c570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10c574:
    // 0x10c574: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10c574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10c578:
    // 0x10c578: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c57c:
    // 0x10c57c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x10c57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_10c580:
    // 0x10c580: 0x320f809  jalr        $t9
label_10c584:
    if (ctx->pc == 0x10C584u) {
        ctx->pc = 0x10C588u;
        goto label_10c588;
    }
    ctx->pc = 0x10C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C588u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C580u, 0x10C588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C588u;
label_10c588:
    // 0x10c588: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10c588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c58c:
    // 0x10c58c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10c590:
    // 0x10c590: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10c594:
    // 0x10c594: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10c594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10c598:
    // 0x10c598: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c59c:
    // 0x10c59c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c5a0:
    // 0x10c5a0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c5a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c5a4:
    // 0x10c5a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c5a8:
    // 0x10c5a8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10c5ac:
    // 0x10c5ac: 0xc08ec68  jal         func_23B1A0
label_10c5b0:
    if (ctx->pc == 0x10C5B0u) {
        ctx->pc = 0x10C5B4u;
        goto label_10c5b4;
    }
    ctx->pc = 0x10C5ACu;
    SET_GPR_U32(ctx, 31, 0x10C5B4u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x10C5ACu, 0x10C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5B4u;
label_10c5b4:
    // 0x10c5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10c5b8:
    // 0x10c5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10c5bc:
    // 0x10c5bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10c5bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10c5c0:
    // 0x10c5c0: 0x3e00008  jr          $ra
label_10c5c4:
    if (ctx->pc == 0x10C5C4u) {
        ctx->pc = 0x10C5C8u;
        goto label_10c5c8;
    }
    ctx->pc = 0x10C5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C5C8u;
label_10c5c8:
    // 0x10c5c8: 0x0  nop
    ctx->pc = 0x10c5c8u;
    // NOP
label_10c5cc:
    // 0x10c5cc: 0x0  nop
    ctx->pc = 0x10c5ccu;
    // NOP
label_10c5d0:
    // 0x10c5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10c5d4:
    // 0x10c5d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10c5d8:
    // 0x10c5d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c5dc:
    // 0x10c5dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_10c5e0:
    // 0x10c5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c5e4:
    // 0x10c5e4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c5e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c5e8:
    // 0x10c5e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c5ec:
    // 0x10c5ec: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10c5f0:
    // 0x10c5f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c5f4:
    // 0x10c5f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10c5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10c5f8:
    // 0x10c5f8: 0x320f809  jalr        $t9
label_10c5fc:
    if (ctx->pc == 0x10C5FCu) {
        ctx->pc = 0x10C600u;
        goto label_10c600;
    }
    ctx->pc = 0x10C5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C600u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C5F8u, 0x10C600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C600u;
label_10c600:
    // 0x10c600: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10c600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c604:
    // 0x10c604: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10c604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10c608:
    // 0x10c608: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10c60c:
    // 0x10c60c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10c60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10c610:
    // 0x10c610: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c614:
    // 0x10c614: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c618:
    // 0x10c618: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c618u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c61c:
    // 0x10c61c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c620:
    // 0x10c620: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10c620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10c624:
    // 0x10c624: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c628:
    // 0x10c628: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10c628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10c62c:
    // 0x10c62c: 0x320f809  jalr        $t9
label_10c630:
    if (ctx->pc == 0x10C630u) {
        ctx->pc = 0x10C634u;
        goto label_10c634;
    }
    ctx->pc = 0x10C62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C634u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C62Cu, 0x10C634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C634u;
label_10c634:
    // 0x10c634: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10c634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c638:
    // 0x10c638: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10c63c:
    // 0x10c63c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10c640:
    // 0x10c640: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10c640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10c644:
    // 0x10c644: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c648:
    // 0x10c648: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c64c:
    // 0x10c64c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c64cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c650:
    // 0x10c650: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c654:
    // 0x10c654: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10c654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10c658:
    // 0x10c658: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c65c:
    // 0x10c65c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10c65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10c660:
    // 0x10c660: 0x320f809  jalr        $t9
label_10c664:
    if (ctx->pc == 0x10C664u) {
        ctx->pc = 0x10C668u;
        goto label_10c668;
    }
    ctx->pc = 0x10C660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C660u, 0x10C668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C668u;
label_10c668:
    // 0x10c668: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c66c:
    // 0x10c66c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10c66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10c670:
    // 0x10c670: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10c674:
    // 0x10c674: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10c674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10c678:
    // 0x10c678: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c67c:
    // 0x10c67c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c680:
    // 0x10c680: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c680u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c684:
    // 0x10c684: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c688:
    // 0x10c688: 0xc08ec70  jal         func_23B1C0
label_10c68c:
    if (ctx->pc == 0x10C68Cu) {
        ctx->pc = 0x10C690u;
        goto label_10c690;
    }
    ctx->pc = 0x10C688u;
    SET_GPR_U32(ctx, 31, 0x10C690u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x10C688u, 0x10C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C690u;
label_10c690:
    // 0x10c690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10c694:
    // 0x10c694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10c698:
    // 0x10c698: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10c698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_10c69c:
    // 0x10c69c: 0x3e00008  jr          $ra
label_10c6a0:
    if (ctx->pc == 0x10C6A0u) {
        ctx->pc = 0x10C6A4u;
        goto label_10c6a4;
    }
    ctx->pc = 0x10C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C6A4u;
label_10c6a4:
    // 0x10c6a4: 0x0  nop
    ctx->pc = 0x10c6a4u;
    // NOP
label_10c6a8:
    // 0x10c6a8: 0x0  nop
    ctx->pc = 0x10c6a8u;
    // NOP
label_10c6ac:
    // 0x10c6ac: 0x0  nop
    ctx->pc = 0x10c6acu;
    // NOP
    ctx->pc = 0x10c6b0u;
}
