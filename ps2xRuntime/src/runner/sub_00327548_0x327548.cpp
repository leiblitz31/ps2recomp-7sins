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

// Function: sub_00327548
// Address: 0x327548 - 0x327860
void sub_00327548_0x327548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327548_0x327548");
#endif

    switch (ctx->pc) {
        case 0x327548u: goto label_327548;
        case 0x32754cu: goto label_32754c;
        case 0x327550u: goto label_327550;
        case 0x327554u: goto label_327554;
        case 0x327558u: goto label_327558;
        case 0x32755cu: goto label_32755c;
        case 0x327560u: goto label_327560;
        case 0x327564u: goto label_327564;
        case 0x327568u: goto label_327568;
        case 0x32756cu: goto label_32756c;
        case 0x327570u: goto label_327570;
        case 0x327574u: goto label_327574;
        case 0x327578u: goto label_327578;
        case 0x32757cu: goto label_32757c;
        case 0x327580u: goto label_327580;
        case 0x327584u: goto label_327584;
        case 0x327588u: goto label_327588;
        case 0x32758cu: goto label_32758c;
        case 0x327590u: goto label_327590;
        case 0x327594u: goto label_327594;
        case 0x327598u: goto label_327598;
        case 0x32759cu: goto label_32759c;
        case 0x3275a0u: goto label_3275a0;
        case 0x3275a4u: goto label_3275a4;
        case 0x3275a8u: goto label_3275a8;
        case 0x3275acu: goto label_3275ac;
        case 0x3275b0u: goto label_3275b0;
        case 0x3275b4u: goto label_3275b4;
        case 0x3275b8u: goto label_3275b8;
        case 0x3275bcu: goto label_3275bc;
        case 0x3275c0u: goto label_3275c0;
        case 0x3275c4u: goto label_3275c4;
        case 0x3275c8u: goto label_3275c8;
        case 0x3275ccu: goto label_3275cc;
        case 0x3275d0u: goto label_3275d0;
        case 0x3275d4u: goto label_3275d4;
        case 0x3275d8u: goto label_3275d8;
        case 0x3275dcu: goto label_3275dc;
        case 0x3275e0u: goto label_3275e0;
        case 0x3275e4u: goto label_3275e4;
        case 0x3275e8u: goto label_3275e8;
        case 0x3275ecu: goto label_3275ec;
        case 0x3275f0u: goto label_3275f0;
        case 0x3275f4u: goto label_3275f4;
        case 0x3275f8u: goto label_3275f8;
        case 0x3275fcu: goto label_3275fc;
        case 0x327600u: goto label_327600;
        case 0x327604u: goto label_327604;
        case 0x327608u: goto label_327608;
        case 0x32760cu: goto label_32760c;
        case 0x327610u: goto label_327610;
        case 0x327614u: goto label_327614;
        case 0x327618u: goto label_327618;
        case 0x32761cu: goto label_32761c;
        case 0x327620u: goto label_327620;
        case 0x327624u: goto label_327624;
        case 0x327628u: goto label_327628;
        case 0x32762cu: goto label_32762c;
        case 0x327630u: goto label_327630;
        case 0x327634u: goto label_327634;
        case 0x327638u: goto label_327638;
        case 0x32763cu: goto label_32763c;
        case 0x327640u: goto label_327640;
        case 0x327644u: goto label_327644;
        case 0x327648u: goto label_327648;
        case 0x32764cu: goto label_32764c;
        case 0x327650u: goto label_327650;
        case 0x327654u: goto label_327654;
        case 0x327658u: goto label_327658;
        case 0x32765cu: goto label_32765c;
        case 0x327660u: goto label_327660;
        case 0x327664u: goto label_327664;
        case 0x327668u: goto label_327668;
        case 0x32766cu: goto label_32766c;
        case 0x327670u: goto label_327670;
        case 0x327674u: goto label_327674;
        case 0x327678u: goto label_327678;
        case 0x32767cu: goto label_32767c;
        case 0x327680u: goto label_327680;
        case 0x327684u: goto label_327684;
        case 0x327688u: goto label_327688;
        case 0x32768cu: goto label_32768c;
        case 0x327690u: goto label_327690;
        case 0x327694u: goto label_327694;
        case 0x327698u: goto label_327698;
        case 0x32769cu: goto label_32769c;
        case 0x3276a0u: goto label_3276a0;
        case 0x3276a4u: goto label_3276a4;
        case 0x3276a8u: goto label_3276a8;
        case 0x3276acu: goto label_3276ac;
        case 0x3276b0u: goto label_3276b0;
        case 0x3276b4u: goto label_3276b4;
        case 0x3276b8u: goto label_3276b8;
        case 0x3276bcu: goto label_3276bc;
        case 0x3276c0u: goto label_3276c0;
        case 0x3276c4u: goto label_3276c4;
        case 0x3276c8u: goto label_3276c8;
        case 0x3276ccu: goto label_3276cc;
        case 0x3276d0u: goto label_3276d0;
        case 0x3276d4u: goto label_3276d4;
        case 0x3276d8u: goto label_3276d8;
        case 0x3276dcu: goto label_3276dc;
        case 0x3276e0u: goto label_3276e0;
        case 0x3276e4u: goto label_3276e4;
        case 0x3276e8u: goto label_3276e8;
        case 0x3276ecu: goto label_3276ec;
        case 0x3276f0u: goto label_3276f0;
        case 0x3276f4u: goto label_3276f4;
        case 0x3276f8u: goto label_3276f8;
        case 0x3276fcu: goto label_3276fc;
        case 0x327700u: goto label_327700;
        case 0x327704u: goto label_327704;
        case 0x327708u: goto label_327708;
        case 0x32770cu: goto label_32770c;
        case 0x327710u: goto label_327710;
        case 0x327714u: goto label_327714;
        case 0x327718u: goto label_327718;
        case 0x32771cu: goto label_32771c;
        case 0x327720u: goto label_327720;
        case 0x327724u: goto label_327724;
        case 0x327728u: goto label_327728;
        case 0x32772cu: goto label_32772c;
        case 0x327730u: goto label_327730;
        case 0x327734u: goto label_327734;
        case 0x327738u: goto label_327738;
        case 0x32773cu: goto label_32773c;
        case 0x327740u: goto label_327740;
        case 0x327744u: goto label_327744;
        case 0x327748u: goto label_327748;
        case 0x32774cu: goto label_32774c;
        case 0x327750u: goto label_327750;
        case 0x327754u: goto label_327754;
        case 0x327758u: goto label_327758;
        case 0x32775cu: goto label_32775c;
        case 0x327760u: goto label_327760;
        case 0x327764u: goto label_327764;
        case 0x327768u: goto label_327768;
        case 0x32776cu: goto label_32776c;
        case 0x327770u: goto label_327770;
        case 0x327774u: goto label_327774;
        case 0x327778u: goto label_327778;
        case 0x32777cu: goto label_32777c;
        case 0x327780u: goto label_327780;
        case 0x327784u: goto label_327784;
        case 0x327788u: goto label_327788;
        case 0x32778cu: goto label_32778c;
        case 0x327790u: goto label_327790;
        case 0x327794u: goto label_327794;
        case 0x327798u: goto label_327798;
        case 0x32779cu: goto label_32779c;
        case 0x3277a0u: goto label_3277a0;
        case 0x3277a4u: goto label_3277a4;
        case 0x3277a8u: goto label_3277a8;
        case 0x3277acu: goto label_3277ac;
        case 0x3277b0u: goto label_3277b0;
        case 0x3277b4u: goto label_3277b4;
        case 0x3277b8u: goto label_3277b8;
        case 0x3277bcu: goto label_3277bc;
        case 0x3277c0u: goto label_3277c0;
        case 0x3277c4u: goto label_3277c4;
        case 0x3277c8u: goto label_3277c8;
        case 0x3277ccu: goto label_3277cc;
        case 0x3277d0u: goto label_3277d0;
        case 0x3277d4u: goto label_3277d4;
        case 0x3277d8u: goto label_3277d8;
        case 0x3277dcu: goto label_3277dc;
        case 0x3277e0u: goto label_3277e0;
        case 0x3277e4u: goto label_3277e4;
        case 0x3277e8u: goto label_3277e8;
        case 0x3277ecu: goto label_3277ec;
        case 0x3277f0u: goto label_3277f0;
        case 0x3277f4u: goto label_3277f4;
        case 0x3277f8u: goto label_3277f8;
        case 0x3277fcu: goto label_3277fc;
        case 0x327800u: goto label_327800;
        case 0x327804u: goto label_327804;
        case 0x327808u: goto label_327808;
        case 0x32780cu: goto label_32780c;
        case 0x327810u: goto label_327810;
        case 0x327814u: goto label_327814;
        case 0x327818u: goto label_327818;
        case 0x32781cu: goto label_32781c;
        case 0x327820u: goto label_327820;
        case 0x327824u: goto label_327824;
        case 0x327828u: goto label_327828;
        case 0x32782cu: goto label_32782c;
        case 0x327830u: goto label_327830;
        case 0x327834u: goto label_327834;
        case 0x327838u: goto label_327838;
        case 0x32783cu: goto label_32783c;
        case 0x327840u: goto label_327840;
        case 0x327844u: goto label_327844;
        case 0x327848u: goto label_327848;
        case 0x32784cu: goto label_32784c;
        case 0x327850u: goto label_327850;
        case 0x327854u: goto label_327854;
        case 0x327858u: goto label_327858;
        case 0x32785cu: goto label_32785c;
        default: break;
    }

    ctx->pc = 0x327548u;

label_327548:
    // 0x327548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x327548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32754c:
    // 0x32754c: 0x8f82a654  lw          $v0, -0x59AC($gp)
    ctx->pc = 0x32754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_327550:
    // 0x327550: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x327550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_327554:
    // 0x327554: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x327554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_327558:
    // 0x327558: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x327558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32755c:
    // 0x32755c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_327560:
    // 0x327560: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x327560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_327564:
    // 0x327564: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_327568:
    // 0x327568: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x327568u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_32756c:
    // 0x32756c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_327570:
    // 0x327570: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x327570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_327574:
    // 0x327574: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_327578:
    if (ctx->pc == 0x327578u) {
        ctx->pc = 0x327578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327574u;
        // 0x327578: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32757Cu;
        goto label_32757c;
    }
    ctx->pc = 0x327574u;
    {
        const bool branch_taken_0x327574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x327578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327574u;
        // 0x327578: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327574) {
            ctx->pc = 0x327594u;
            goto label_327594;
        }
    }
    ctx->pc = 0x32757Cu;
label_32757c:
    // 0x32757c: 0x2622e880  addiu       $v0, $s1, -0x1780
    ctx->pc = 0x32757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_327580:
    // 0x327580: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x327580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_327584:
    // 0x327584: 0x60f809  jalr        $v1
label_327588:
    if (ctx->pc == 0x327588u) {
        ctx->pc = 0x32758Cu;
        goto label_32758c;
    }
    ctx->pc = 0x327584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32758Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327584u, 0x32758Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32758Cu;
label_32758c:
    // 0x32758c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32758cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_327590:
    // 0x327590: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x327590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_327594:
    // 0x327594: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x327594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_327598:
    // 0x327598: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x327598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32759c:
    // 0x32759c: 0x2428818  mult        $s1, $s2, $v0
    ctx->pc = 0x32759cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3275a0:
    // 0x3275a0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3275a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3275a4:
    // 0x3275a4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3275a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3275a8:
    // 0x3275a8: 0x34a50105  ori         $a1, $a1, 0x105
    ctx->pc = 0x3275a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)261);
label_3275ac:
    // 0x3275ac: 0x40f809  jalr        $v0
label_3275b0:
    if (ctx->pc == 0x3275B0u) {
        ctx->pc = 0x3275B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275ACu;
        // 0x3275b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3275B4u;
        goto label_3275b4;
    }
    ctx->pc = 0x3275ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3275B4u);
        ctx->pc = 0x3275B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275ACu;
        // 0x3275b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3275ACu, 0x3275B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3275B4u;
label_3275b4:
    // 0x3275b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3275b8:
    if (ctx->pc == 0x3275B8u) {
        ctx->pc = 0x3275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275B4u;
        // 0x3275b8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3275BCu;
        goto label_3275bc;
    }
    ctx->pc = 0x3275B4u;
    {
        const bool branch_taken_0x3275b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275B4u;
        // 0x3275b8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275b4) {
            ctx->pc = 0x3275D8u;
            goto label_3275d8;
        }
    }
    ctx->pc = 0x3275BCu;
label_3275bc:
    // 0x3275bc: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x3275bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_3275c0:
    // 0x3275c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3275c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3275c4:
    // 0x3275c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3275c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3275c8:
    // 0x3275c8: 0xc0bb7e6  jal         func_2EDF98
label_3275cc:
    if (ctx->pc == 0x3275CCu) {
        ctx->pc = 0x3275CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275C8u;
        // 0x3275cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3275D0u;
        goto label_3275d0;
    }
    ctx->pc = 0x3275C8u;
    SET_GPR_U32(ctx, 31, 0x3275D0u);
    ctx->pc = 0x3275CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275C8u;
    // 0x3275cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3275C8u, 0x3275D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3275D0u;
label_3275d0:
    // 0x3275d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3275d4:
    if (ctx->pc == 0x3275D4u) {
        ctx->pc = 0x3275D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275D0u;
        // 0x3275d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3275D8u;
        goto label_3275d8;
    }
    ctx->pc = 0x3275D0u;
    {
        const bool branch_taken_0x3275d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3275D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275D0u;
        // 0x3275d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275d0) {
            ctx->pc = 0x3275DCu;
            goto label_3275dc;
        }
    }
    ctx->pc = 0x3275D8u;
label_3275d8:
    // 0x3275d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3275d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3275dc:
    // 0x3275dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3275dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3275e0:
    // 0x3275e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3275e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3275e4:
    // 0x3275e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3275e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3275e8:
    // 0x3275e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3275e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3275ec:
    // 0x3275ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3275ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3275f0:
    // 0x3275f0: 0x3e00008  jr          $ra
label_3275f4:
    if (ctx->pc == 0x3275F4u) {
        ctx->pc = 0x3275F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275F0u;
        // 0x3275f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3275F8u;
        goto label_3275f8;
    }
    ctx->pc = 0x3275F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3275F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275F0u;
        // 0x3275f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3275F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3275F8u;
label_3275f8:
    // 0x3275f8: 0x8f83a654  lw          $v1, -0x59AC($gp)
    ctx->pc = 0x3275f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_3275fc:
    // 0x3275fc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3275fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_327600:
    // 0x327600: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x327600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_327604:
    // 0x327604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x327604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_327608:
    // 0x327608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x327608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32760c:
    // 0x32760c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_327610:
    // 0x327610: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x327610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_327614:
    // 0x327614: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x327614u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_327618:
    // 0x327618: 0x1224021  addu        $t0, $t1, $v0
    ctx->pc = 0x327618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_32761c:
    // 0x32761c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x32761cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_327620:
    // 0x327620: 0xa5060004  sh          $a2, 0x4($t0)
    ctx->pc = 0x327620u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 6));
label_327624:
    // 0x327624: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x327624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_327628:
    // 0x327628: 0xa5070006  sh          $a3, 0x6($t0)
    ctx->pc = 0x327628u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 7));
label_32762c:
    // 0x32762c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_327630:
    // 0x327630: 0xe50c0008  swc1        $f12, 0x8($t0)
    ctx->pc = 0x327630u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_327634:
    // 0x327634: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_327638:
    if (ctx->pc == 0x327638u) {
        ctx->pc = 0x327638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327634u;
        // 0x327638: 0xe500000c  swc1        $f0, 0xC($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32763Cu;
        goto label_32763c;
    }
    ctx->pc = 0x327634u;
    {
        const bool branch_taken_0x327634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x327638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327634u;
        // 0x327638: 0xe500000c  swc1        $f0, 0xC($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327634) {
            ctx->pc = 0x327644u;
            goto label_327644;
        }
    }
    ctx->pc = 0x32763Cu;
label_32763c:
    // 0x32763c: 0x10000003  b           . + 4 + (0x3 << 2)
label_327640:
    if (ctx->pc == 0x327640u) {
        ctx->pc = 0x327640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32763Cu;
        // 0x327640: 0xad090010  sw          $t1, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327644u;
        goto label_327644;
    }
    ctx->pc = 0x32763Cu;
    {
        const bool branch_taken_0x32763c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32763Cu;
        // 0x327640: 0xad090010  sw          $t1, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32763c) {
            ctx->pc = 0x32764Cu;
            goto label_32764c;
        }
    }
    ctx->pc = 0x327644u;
label_327644:
    // 0x327644: 0x25020014  addiu       $v0, $t0, 0x14
    ctx->pc = 0x327644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
label_327648:
    // 0x327648: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x327648u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
label_32764c:
    // 0x32764c: 0x3e00008  jr          $ra
label_327650:
    if (ctx->pc == 0x327650u) {
        ctx->pc = 0x327650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32764Cu;
        // 0x327650: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327654u;
        goto label_327654;
    }
    ctx->pc = 0x32764Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32764Cu;
        // 0x327650: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32764Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327654u;
label_327654:
    // 0x327654: 0x0  nop
    ctx->pc = 0x327654u;
    // NOP
label_327658:
    // 0x327658: 0x8f83a654  lw          $v1, -0x59AC($gp)
    ctx->pc = 0x327658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_32765c:
    // 0x32765c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32765cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327660:
    // 0x327660: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_327664:
    // 0x327664: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x327664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_327668:
    // 0x327668: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x327668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_32766c:
    // 0x32766c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x32766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_327670:
    // 0x327670: 0xc72018  mult        $a0, $a2, $a3
    ctx->pc = 0x327670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_327674:
    // 0x327674: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x327674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_327678:
    // 0x327678: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x327678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_32767c:
    // 0x32767c: 0x3e00008  jr          $ra
label_327680:
    if (ctx->pc == 0x327680u) {
        ctx->pc = 0x327680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32767Cu;
        // 0x327680: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327684u;
        goto label_327684;
    }
    ctx->pc = 0x32767Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32767Cu;
        // 0x327680: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32767Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327684u;
label_327684:
    // 0x327684: 0x0  nop
    ctx->pc = 0x327684u;
    // NOP
label_327688:
    // 0x327688: 0x8f83a654  lw          $v1, -0x59AC($gp)
    ctx->pc = 0x327688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_32768c:
    // 0x32768c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32768cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327690:
    // 0x327690: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x327690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_327694:
    // 0x327694: 0x3e00008  jr          $ra
label_327698:
    if (ctx->pc == 0x327698u) {
        ctx->pc = 0x327698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327694u;
        // 0x327698: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32769Cu;
        goto label_32769c;
    }
    ctx->pc = 0x327694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327694u;
        // 0x327698: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32769Cu;
label_32769c:
    // 0x32769c: 0x0  nop
    ctx->pc = 0x32769cu;
    // NOP
label_3276a0:
    // 0x3276a0: 0x8f82a654  lw          $v0, -0x59AC($gp)
    ctx->pc = 0x3276a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_3276a4:
    // 0x3276a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3276a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3276a8:
    // 0x3276a8: 0x3e00008  jr          $ra
label_3276ac:
    if (ctx->pc == 0x3276ACu) {
        ctx->pc = 0x3276ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276A8u;
        // 0x3276ac: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3276B0u;
        goto label_3276b0;
    }
    ctx->pc = 0x3276A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3276ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276A8u;
        // 0x3276ac: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3276A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3276B0u;
label_3276b0:
    // 0x3276b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3276b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3276b4:
    // 0x3276b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3276b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3276b8:
    // 0x3276b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x3276b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3276bc:
    // 0x3276bc: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
label_3276c0:
    if (ctx->pc == 0x3276C0u) {
        ctx->pc = 0x3276C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276BCu;
        // 0x3276c0: 0x8f82a654  lw          $v0, -0x59AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3276C4u;
        goto label_3276c4;
    }
    ctx->pc = 0x3276BCu;
    {
        const bool branch_taken_0x3276bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276BCu;
        // 0x3276c0: 0x8f82a654  lw          $v0, -0x59AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276bc) {
            ctx->pc = 0x327780u;
            goto label_327780;
        }
    }
    ctx->pc = 0x3276C4u;
label_3276c4:
    // 0x3276c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3276c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3276c8:
    // 0x3276c8: 0x8f83a650  lw          $v1, -0x59B0($gp)
    ctx->pc = 0x3276c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
label_3276cc:
    // 0x3276cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3276ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3276d0:
    // 0x3276d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3276d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3276d4:
    // 0x3276d4: 0x18c00032  blez        $a2, . + 4 + (0x32 << 2)
label_3276d8:
    if (ctx->pc == 0x3276D8u) {
        ctx->pc = 0x3276D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276D4u;
        // 0x3276d8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3276DCu;
        goto label_3276dc;
    }
    ctx->pc = 0x3276D4u;
    {
        const bool branch_taken_0x3276d4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3276D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276D4u;
        // 0x3276d8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276d4) {
            ctx->pc = 0x3277A0u;
            goto label_3277a0;
        }
    }
    ctx->pc = 0x3276DCu;
label_3276dc:
    // 0x3276dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3276dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3276e0:
    // 0x3276e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3276e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3276e4:
    // 0x3276e4: 0x30e60003  andi        $a2, $a3, 0x3
    ctx->pc = 0x3276e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_3276e8:
    // 0x3276e8: 0x18e0000d  blez        $a3, . + 4 + (0xD << 2)
label_3276ec:
    if (ctx->pc == 0x3276ECu) {
        ctx->pc = 0x3276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276E8u;
        // 0x3276ec: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3276F0u;
        goto label_3276f0;
    }
    ctx->pc = 0x3276E8u;
    {
        const bool branch_taken_0x3276e8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276E8u;
        // 0x3276ec: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276e8) {
            ctx->pc = 0x327720u;
            goto label_327720;
        }
    }
    ctx->pc = 0x3276F0u;
label_3276f0:
    // 0x3276f0: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_3276f4:
    if (ctx->pc == 0x3276F4u) {
        ctx->pc = 0x3276F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276F0u;
        // 0x3276f4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3276F8u;
        goto label_3276f8;
    }
    ctx->pc = 0x3276F0u;
    {
        const bool branch_taken_0x3276f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276F0u;
        // 0x3276f4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276f0) {
            ctx->pc = 0x327738u;
            goto label_327738;
        }
    }
    ctx->pc = 0x3276F8u;
label_3276f8:
    // 0x3276f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3276fc:
    if (ctx->pc == 0x3276FCu) {
        ctx->pc = 0x3276FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276F8u;
        // 0x3276fc: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x327700u;
        goto label_327700;
    }
    ctx->pc = 0x3276F8u;
    {
        const bool branch_taken_0x3276f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3276FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276F8u;
        // 0x3276fc: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276f8) {
            ctx->pc = 0x327720u;
            goto label_327720;
        }
    }
    ctx->pc = 0x327700u;
label_327700:
    // 0x327700: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_327704:
    if (ctx->pc == 0x327704u) {
        ctx->pc = 0x327708u;
        goto label_327708;
    }
    ctx->pc = 0x327700u;
    {
        const bool branch_taken_0x327700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327700) {
            ctx->pc = 0x327714u;
            goto label_327714;
        }
    }
    ctx->pc = 0x327708u;
label_327708:
    // 0x327708: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_32770c:
    if (ctx->pc == 0x32770Cu) {
        ctx->pc = 0x32770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327708u;
        // 0x32770c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327710u;
        goto label_327710;
    }
    ctx->pc = 0x327708u;
    {
        const bool branch_taken_0x327708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327708u;
        // 0x32770c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327708) {
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x327710u;
label_327710:
    // 0x327710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x327710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327714:
    // 0x327714: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_327718:
    if (ctx->pc == 0x327718u) {
        ctx->pc = 0x327718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327714u;
        // 0x327718: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32771Cu;
        goto label_32771c;
    }
    ctx->pc = 0x327714u;
    {
        const bool branch_taken_0x327714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x327718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327714u;
        // 0x327718: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327714) {
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x32771Cu;
label_32771c:
    // 0x32771c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_327720:
    // 0x327720: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_327724:
    if (ctx->pc == 0x327724u) {
        ctx->pc = 0x327724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327720u;
        // 0x327724: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327728u;
        goto label_327728;
    }
    ctx->pc = 0x327720u;
    {
        const bool branch_taken_0x327720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x327724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327720u;
        // 0x327724: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327720) {
            ctx->pc = 0x3277A4u;
            goto label_3277a4;
        }
    }
    ctx->pc = 0x327728u;
label_327728:
    // 0x327728: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x327728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32772c:
    // 0x32772c: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x32772cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_327730:
    // 0x327730: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_327734:
    if (ctx->pc == 0x327734u) {
        ctx->pc = 0x327734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327730u;
        // 0x327734: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327738u;
        goto label_327738;
    }
    ctx->pc = 0x327730u;
    {
        const bool branch_taken_0x327730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327730u;
        // 0x327734: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327730) {
            ctx->pc = 0x3277A0u;
            goto label_3277a0;
        }
    }
    ctx->pc = 0x327738u;
label_327738:
    // 0x327738: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_32773c:
    if (ctx->pc == 0x32773Cu) {
        ctx->pc = 0x32773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327738u;
        // 0x32773c: 0x24620014  addiu       $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327740u;
        goto label_327740;
    }
    ctx->pc = 0x327738u;
    {
        const bool branch_taken_0x327738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327738u;
        // 0x32773c: 0x24620014  addiu       $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327738) {
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x327740u;
label_327740:
    // 0x327740: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_327744:
    if (ctx->pc == 0x327744u) {
        ctx->pc = 0x327744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327740u;
        // 0x327744: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327748u;
        goto label_327748;
    }
    ctx->pc = 0x327740u;
    {
        const bool branch_taken_0x327740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x327744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327740u;
        // 0x327744: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327740) {
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x327748u;
label_327748:
    // 0x327748: 0x24620028  addiu       $v0, $v1, 0x28
    ctx->pc = 0x327748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_32774c:
    // 0x32774c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_327750:
    if (ctx->pc == 0x327750u) {
        ctx->pc = 0x327750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32774Cu;
        // 0x327750: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327754u;
        goto label_327754;
    }
    ctx->pc = 0x32774Cu;
    {
        const bool branch_taken_0x32774c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x327750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32774Cu;
        // 0x327750: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32774c) {
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x327754u;
label_327754:
    // 0x327754: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x327754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_327758:
    // 0x327758: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_32775c:
    if (ctx->pc == 0x32775Cu) {
        ctx->pc = 0x32775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327758u;
        // 0x32775c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327760u;
        goto label_327760;
    }
    ctx->pc = 0x327758u;
    {
        const bool branch_taken_0x327758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327758u;
        // 0x32775c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327758) {
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x327760u;
label_327760:
    // 0x327760: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x327760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_327764:
    // 0x327764: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x327764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_327768:
    // 0x327768: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_32776c:
    if (ctx->pc == 0x32776Cu) {
        ctx->pc = 0x32776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327768u;
        // 0x32776c: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327770u;
        goto label_327770;
    }
    ctx->pc = 0x327768u;
    {
        const bool branch_taken_0x327768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327768u;
        // 0x32776c: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327768) {
            ctx->pc = 0x327738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327738;
        }
    }
    ctx->pc = 0x327770u;
label_327770:
    // 0x327770: 0x1000000c  b           . + 4 + (0xC << 2)
label_327774:
    if (ctx->pc == 0x327774u) {
        ctx->pc = 0x327774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327770u;
        // 0x327774: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327778u;
        goto label_327778;
    }
    ctx->pc = 0x327770u;
    {
        const bool branch_taken_0x327770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327770u;
        // 0x327774: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327770) {
            ctx->pc = 0x3277A4u;
            goto label_3277a4;
        }
    }
    ctx->pc = 0x327778u;
label_327778:
    // 0x327778: 0x1000000a  b           . + 4 + (0xA << 2)
label_32777c:
    if (ctx->pc == 0x32777Cu) {
        ctx->pc = 0x32777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327778u;
        // 0x32777c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327780u;
        goto label_327780;
    }
    ctx->pc = 0x327778u;
    {
        const bool branch_taken_0x327778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327778u;
        // 0x32777c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327778) {
            ctx->pc = 0x3277A4u;
            goto label_3277a4;
        }
    }
    ctx->pc = 0x327780u;
label_327780:
    // 0x327780: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x327780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_327784:
    // 0x327784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x327784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327788:
    // 0x327788: 0xc1035f6  jal         func_40D7D8
label_32778c:
    if (ctx->pc == 0x32778Cu) {
        ctx->pc = 0x32778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327788u;
        // 0x32778c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327790u;
        goto label_327790;
    }
    ctx->pc = 0x327788u;
    SET_GPR_U32(ctx, 31, 0x327790u);
    ctx->pc = 0x32778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327788u;
    // 0x32778c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x327788u, 0x327790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327790u;
label_327790:
    // 0x327790: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x327790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327794:
    // 0x327794: 0xc103628  jal         func_40D8A0
label_327798:
    if (ctx->pc == 0x327798u) {
        ctx->pc = 0x327798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327794u;
        // 0x327798: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32779Cu;
        goto label_32779c;
    }
    ctx->pc = 0x327794u;
    SET_GPR_U32(ctx, 31, 0x32779Cu);
    ctx->pc = 0x327798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327794u;
    // 0x327798: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x327794u, 0x32779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32779Cu;
label_32779c:
    // 0x32779c: 0x0  nop
    ctx->pc = 0x32779cu;
    // NOP
label_3277a0:
    // 0x3277a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3277a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3277a4:
    // 0x3277a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3277a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3277a8:
    // 0x3277a8: 0x3e00008  jr          $ra
label_3277ac:
    if (ctx->pc == 0x3277ACu) {
        ctx->pc = 0x3277ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277A8u;
        // 0x3277ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277B0u;
        goto label_3277b0;
    }
    ctx->pc = 0x3277A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3277ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277A8u;
        // 0x3277ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3277A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3277B0u;
label_3277b0:
    // 0x3277b0: 0x8f82a654  lw          $v0, -0x59AC($gp)
    ctx->pc = 0x3277b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_3277b4:
    // 0x3277b4: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_3277b8:
    if (ctx->pc == 0x3277B8u) {
        ctx->pc = 0x3277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277B4u;
        // 0x3277b8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277BCu;
        goto label_3277bc;
    }
    ctx->pc = 0x3277B4u;
    {
        const bool branch_taken_0x3277b4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277B4u;
        // 0x3277b8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277b4) {
            ctx->pc = 0x3277DCu;
            goto label_3277dc;
        }
    }
    ctx->pc = 0x3277BCu;
label_3277bc:
    // 0x3277bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3277bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3277c0:
    // 0x3277c0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3277c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3277c4:
    // 0x3277c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3277c8:
    if (ctx->pc == 0x3277C8u) {
        ctx->pc = 0x3277C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277C4u;
        // 0x3277c8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277CCu;
        goto label_3277cc;
    }
    ctx->pc = 0x3277C4u;
    {
        const bool branch_taken_0x3277c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277C4u;
        // 0x3277c8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277c4) {
            ctx->pc = 0x3277DCu;
            goto label_3277dc;
        }
    }
    ctx->pc = 0x3277CCu;
label_3277cc:
    // 0x3277cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3277ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3277d0:
    // 0x3277d0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x3277d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3277d4:
    // 0x3277d4: 0x3e00008  jr          $ra
label_3277d8:
    if (ctx->pc == 0x3277D8u) {
        ctx->pc = 0x3277D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277D4u;
        // 0x3277d8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277DCu;
        goto label_3277dc;
    }
    ctx->pc = 0x3277D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3277D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277D4u;
        // 0x3277d8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3277D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3277DCu;
label_3277dc:
    // 0x3277dc: 0x3e00008  jr          $ra
label_3277e0:
    if (ctx->pc == 0x3277E0u) {
        ctx->pc = 0x3277E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277DCu;
        // 0x3277e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277E4u;
        goto label_3277e4;
    }
    ctx->pc = 0x3277DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3277E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277DCu;
        // 0x3277e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3277DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3277E4u;
label_3277e4:
    // 0x3277e4: 0x0  nop
    ctx->pc = 0x3277e4u;
    // NOP
label_3277e8:
    // 0x3277e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3277e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3277ec:
    // 0x3277ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3277ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3277f0:
    // 0x3277f0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3277f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3277f4:
    // 0x3277f4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3277f8:
    if (ctx->pc == 0x3277F8u) {
        ctx->pc = 0x3277F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277F4u;
        // 0x3277f8: 0x8f82a654  lw          $v0, -0x59AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277FCu;
        goto label_3277fc;
    }
    ctx->pc = 0x3277F4u;
    {
        const bool branch_taken_0x3277f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277F4u;
        // 0x3277f8: 0x8f82a654  lw          $v0, -0x59AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277f4) {
            ctx->pc = 0x32782Cu;
            goto label_32782c;
        }
    }
    ctx->pc = 0x3277FCu;
label_3277fc:
    // 0x3277fc: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_327800:
    if (ctx->pc == 0x327800u) {
        ctx->pc = 0x327800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277FCu;
        // 0x327800: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327804u;
        goto label_327804;
    }
    ctx->pc = 0x3277FCu;
    {
        const bool branch_taken_0x3277fc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x327800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277FCu;
        // 0x327800: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277fc) {
            ctx->pc = 0x327824u;
            goto label_327824;
        }
    }
    ctx->pc = 0x327804u;
label_327804:
    // 0x327804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x327804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_327808:
    // 0x327808: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x327808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32780c:
    // 0x32780c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_327810:
    if (ctx->pc == 0x327810u) {
        ctx->pc = 0x327810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32780Cu;
        // 0x327810: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327814u;
        goto label_327814;
    }
    ctx->pc = 0x32780Cu;
    {
        const bool branch_taken_0x32780c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32780Cu;
        // 0x327810: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32780c) {
            ctx->pc = 0x327824u;
            goto label_327824;
        }
    }
    ctx->pc = 0x327814u;
label_327814:
    // 0x327814: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x327814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_327818:
    // 0x327818: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x327818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_32781c:
    // 0x32781c: 0x1000000c  b           . + 4 + (0xC << 2)
label_327820:
    if (ctx->pc == 0x327820u) {
        ctx->pc = 0x327820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32781Cu;
        // 0x327820: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327824u;
        goto label_327824;
    }
    ctx->pc = 0x32781Cu;
    {
        const bool branch_taken_0x32781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32781Cu;
        // 0x327820: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32781c) {
            ctx->pc = 0x327850u;
            goto label_327850;
        }
    }
    ctx->pc = 0x327824u;
label_327824:
    // 0x327824: 0x1000000a  b           . + 4 + (0xA << 2)
label_327828:
    if (ctx->pc == 0x327828u) {
        ctx->pc = 0x327828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327824u;
        // 0x327828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32782Cu;
        goto label_32782c;
    }
    ctx->pc = 0x327824u;
    {
        const bool branch_taken_0x327824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327824u;
        // 0x327828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327824) {
            ctx->pc = 0x327850u;
            goto label_327850;
        }
    }
    ctx->pc = 0x32782Cu;
label_32782c:
    // 0x32782c: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x32782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_327830:
    // 0x327830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x327830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327834:
    // 0x327834: 0xc1035f6  jal         func_40D7D8
label_327838:
    if (ctx->pc == 0x327838u) {
        ctx->pc = 0x327838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327834u;
        // 0x327838: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32783Cu;
        goto label_32783c;
    }
    ctx->pc = 0x327834u;
    SET_GPR_U32(ctx, 31, 0x32783Cu);
    ctx->pc = 0x327838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327834u;
    // 0x327838: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x327834u, 0x32783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32783Cu;
label_32783c:
    // 0x32783c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32783cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327840:
    // 0x327840: 0xc103628  jal         func_40D8A0
label_327844:
    if (ctx->pc == 0x327844u) {
        ctx->pc = 0x327844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327840u;
        // 0x327844: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327848u;
        goto label_327848;
    }
    ctx->pc = 0x327840u;
    SET_GPR_U32(ctx, 31, 0x327848u);
    ctx->pc = 0x327844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327840u;
    // 0x327844: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x327840u, 0x327848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327848u;
label_327848:
    // 0x327848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32784c:
    // 0x32784c: 0x0  nop
    ctx->pc = 0x32784cu;
    // NOP
label_327850:
    // 0x327850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327854:
    // 0x327854: 0x3e00008  jr          $ra
label_327858:
    if (ctx->pc == 0x327858u) {
        ctx->pc = 0x327858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327854u;
        // 0x327858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32785Cu;
        goto label_32785c;
    }
    ctx->pc = 0x327854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327854u;
        // 0x327858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32785Cu;
label_32785c:
    // 0x32785c: 0x0  nop
    ctx->pc = 0x32785cu;
    // NOP
    ctx->pc = 0x327860u;
}
