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

// Function: sub_003994F0
// Address: 0x3994f0 - 0x399758
void sub_003994F0_0x3994f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003994F0_0x3994f0");
#endif

    switch (ctx->pc) {
        case 0x3994f0u: goto label_3994f0;
        case 0x3994f4u: goto label_3994f4;
        case 0x3994f8u: goto label_3994f8;
        case 0x3994fcu: goto label_3994fc;
        case 0x399500u: goto label_399500;
        case 0x399504u: goto label_399504;
        case 0x399508u: goto label_399508;
        case 0x39950cu: goto label_39950c;
        case 0x399510u: goto label_399510;
        case 0x399514u: goto label_399514;
        case 0x399518u: goto label_399518;
        case 0x39951cu: goto label_39951c;
        case 0x399520u: goto label_399520;
        case 0x399524u: goto label_399524;
        case 0x399528u: goto label_399528;
        case 0x39952cu: goto label_39952c;
        case 0x399530u: goto label_399530;
        case 0x399534u: goto label_399534;
        case 0x399538u: goto label_399538;
        case 0x39953cu: goto label_39953c;
        case 0x399540u: goto label_399540;
        case 0x399544u: goto label_399544;
        case 0x399548u: goto label_399548;
        case 0x39954cu: goto label_39954c;
        case 0x399550u: goto label_399550;
        case 0x399554u: goto label_399554;
        case 0x399558u: goto label_399558;
        case 0x39955cu: goto label_39955c;
        case 0x399560u: goto label_399560;
        case 0x399564u: goto label_399564;
        case 0x399568u: goto label_399568;
        case 0x39956cu: goto label_39956c;
        case 0x399570u: goto label_399570;
        case 0x399574u: goto label_399574;
        case 0x399578u: goto label_399578;
        case 0x39957cu: goto label_39957c;
        case 0x399580u: goto label_399580;
        case 0x399584u: goto label_399584;
        case 0x399588u: goto label_399588;
        case 0x39958cu: goto label_39958c;
        case 0x399590u: goto label_399590;
        case 0x399594u: goto label_399594;
        case 0x399598u: goto label_399598;
        case 0x39959cu: goto label_39959c;
        case 0x3995a0u: goto label_3995a0;
        case 0x3995a4u: goto label_3995a4;
        case 0x3995a8u: goto label_3995a8;
        case 0x3995acu: goto label_3995ac;
        case 0x3995b0u: goto label_3995b0;
        case 0x3995b4u: goto label_3995b4;
        case 0x3995b8u: goto label_3995b8;
        case 0x3995bcu: goto label_3995bc;
        case 0x3995c0u: goto label_3995c0;
        case 0x3995c4u: goto label_3995c4;
        case 0x3995c8u: goto label_3995c8;
        case 0x3995ccu: goto label_3995cc;
        case 0x3995d0u: goto label_3995d0;
        case 0x3995d4u: goto label_3995d4;
        case 0x3995d8u: goto label_3995d8;
        case 0x3995dcu: goto label_3995dc;
        case 0x3995e0u: goto label_3995e0;
        case 0x3995e4u: goto label_3995e4;
        case 0x3995e8u: goto label_3995e8;
        case 0x3995ecu: goto label_3995ec;
        case 0x3995f0u: goto label_3995f0;
        case 0x3995f4u: goto label_3995f4;
        case 0x3995f8u: goto label_3995f8;
        case 0x3995fcu: goto label_3995fc;
        case 0x399600u: goto label_399600;
        case 0x399604u: goto label_399604;
        case 0x399608u: goto label_399608;
        case 0x39960cu: goto label_39960c;
        case 0x399610u: goto label_399610;
        case 0x399614u: goto label_399614;
        case 0x399618u: goto label_399618;
        case 0x39961cu: goto label_39961c;
        case 0x399620u: goto label_399620;
        case 0x399624u: goto label_399624;
        case 0x399628u: goto label_399628;
        case 0x39962cu: goto label_39962c;
        case 0x399630u: goto label_399630;
        case 0x399634u: goto label_399634;
        case 0x399638u: goto label_399638;
        case 0x39963cu: goto label_39963c;
        case 0x399640u: goto label_399640;
        case 0x399644u: goto label_399644;
        case 0x399648u: goto label_399648;
        case 0x39964cu: goto label_39964c;
        case 0x399650u: goto label_399650;
        case 0x399654u: goto label_399654;
        case 0x399658u: goto label_399658;
        case 0x39965cu: goto label_39965c;
        case 0x399660u: goto label_399660;
        case 0x399664u: goto label_399664;
        case 0x399668u: goto label_399668;
        case 0x39966cu: goto label_39966c;
        case 0x399670u: goto label_399670;
        case 0x399674u: goto label_399674;
        case 0x399678u: goto label_399678;
        case 0x39967cu: goto label_39967c;
        case 0x399680u: goto label_399680;
        case 0x399684u: goto label_399684;
        case 0x399688u: goto label_399688;
        case 0x39968cu: goto label_39968c;
        case 0x399690u: goto label_399690;
        case 0x399694u: goto label_399694;
        case 0x399698u: goto label_399698;
        case 0x39969cu: goto label_39969c;
        case 0x3996a0u: goto label_3996a0;
        case 0x3996a4u: goto label_3996a4;
        case 0x3996a8u: goto label_3996a8;
        case 0x3996acu: goto label_3996ac;
        case 0x3996b0u: goto label_3996b0;
        case 0x3996b4u: goto label_3996b4;
        case 0x3996b8u: goto label_3996b8;
        case 0x3996bcu: goto label_3996bc;
        case 0x3996c0u: goto label_3996c0;
        case 0x3996c4u: goto label_3996c4;
        case 0x3996c8u: goto label_3996c8;
        case 0x3996ccu: goto label_3996cc;
        case 0x3996d0u: goto label_3996d0;
        case 0x3996d4u: goto label_3996d4;
        case 0x3996d8u: goto label_3996d8;
        case 0x3996dcu: goto label_3996dc;
        case 0x3996e0u: goto label_3996e0;
        case 0x3996e4u: goto label_3996e4;
        case 0x3996e8u: goto label_3996e8;
        case 0x3996ecu: goto label_3996ec;
        case 0x3996f0u: goto label_3996f0;
        case 0x3996f4u: goto label_3996f4;
        case 0x3996f8u: goto label_3996f8;
        case 0x3996fcu: goto label_3996fc;
        case 0x399700u: goto label_399700;
        case 0x399704u: goto label_399704;
        case 0x399708u: goto label_399708;
        case 0x39970cu: goto label_39970c;
        case 0x399710u: goto label_399710;
        case 0x399714u: goto label_399714;
        case 0x399718u: goto label_399718;
        case 0x39971cu: goto label_39971c;
        case 0x399720u: goto label_399720;
        case 0x399724u: goto label_399724;
        case 0x399728u: goto label_399728;
        case 0x39972cu: goto label_39972c;
        case 0x399730u: goto label_399730;
        case 0x399734u: goto label_399734;
        case 0x399738u: goto label_399738;
        case 0x39973cu: goto label_39973c;
        case 0x399740u: goto label_399740;
        case 0x399744u: goto label_399744;
        case 0x399748u: goto label_399748;
        case 0x39974cu: goto label_39974c;
        case 0x399750u: goto label_399750;
        case 0x399754u: goto label_399754;
        default: break;
    }

    ctx->pc = 0x3994f0u;

label_3994f0:
    // 0x3994f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3994f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3994f4:
    // 0x3994f4: 0x8f83bd60  lw          $v1, -0x42A0($gp)
    ctx->pc = 0x3994f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
label_3994f8:
    // 0x3994f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3994f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3994fc:
    // 0x3994fc: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x3994fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_399500:
    // 0x399500: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x399500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_399504:
    // 0x399504: 0x2442e884  addiu       $v0, $v0, -0x177C
    ctx->pc = 0x399504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961284));
label_399508:
    // 0x399508: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x399508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
label_39950c:
    // 0x39950c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39950cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399510:
    // 0x399510: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x399510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_399514:
    // 0x399514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x399514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_399518:
    // 0x399518: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x399518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_39951c:
    // 0x39951c: 0x3c150062  lui         $s5, 0x62
    ctx->pc = 0x39951cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
label_399520:
    // 0x399520: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x399520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_399524:
    // 0x399524: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x399524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_399528:
    // 0x399528: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x399528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_39952c:
    // 0x39952c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39952cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_399530:
    // 0x399530: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_399534:
    if (ctx->pc == 0x399534u) {
        ctx->pc = 0x399534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399530u;
        // 0x399534: 0x3c16005e  lui         $s6, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399538u;
        goto label_399538;
    }
    ctx->pc = 0x399530u;
    {
        const bool branch_taken_0x399530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x399534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399530u;
        // 0x399534: 0x3c16005e  lui         $s6, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399530) {
            ctx->pc = 0x399554u;
            goto label_399554;
        }
    }
    ctx->pc = 0x399538u;
label_399538:
    // 0x399538: 0x8c82fff8  lw          $v0, -0x8($a0)
    ctx->pc = 0x399538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_39953c:
    // 0x39953c: 0x0  nop
    ctx->pc = 0x39953cu;
    // NOP
label_399540:
    // 0x399540: 0x1054004e  beq         $v0, $s4, . + 4 + (0x4E << 2)
label_399544:
    if (ctx->pc == 0x399544u) {
        ctx->pc = 0x399544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399540u;
        // 0x399544: 0x2488fff8  addiu       $t0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399548u;
        goto label_399548;
    }
    ctx->pc = 0x399540u;
    {
        const bool branch_taken_0x399540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x399544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399540u;
        // 0x399544: 0x2488fff8  addiu       $t0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399540) {
            ctx->pc = 0x39967Cu;
            goto label_39967c;
        }
    }
    ctx->pc = 0x399548u;
label_399548:
    // 0x399548: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x399548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39954c:
    // 0x39954c: 0x5483fffc  bnel        $a0, $v1, . + 4 + (-0x4 << 2)
label_399550:
    if (ctx->pc == 0x399550u) {
        ctx->pc = 0x399550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39954Cu;
        // 0x399550: 0x8c82fff8  lw          $v0, -0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399554u;
        goto label_399554;
    }
    ctx->pc = 0x39954Cu;
    {
        const bool branch_taken_0x39954c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39954c) {
            ctx->pc = 0x399550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39954Cu;
            // 0x399550: 0x8c82fff8  lw          $v0, -0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399540;
        }
    }
    ctx->pc = 0x399554u;
label_399554:
    // 0x399554: 0x8e90001c  lw          $s0, 0x1C($s4)
    ctx->pc = 0x399554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_399558:
    // 0x399558: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x399558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39955c:
    // 0x39955c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_399560:
    if (ctx->pc == 0x399560u) {
        ctx->pc = 0x399560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39955Cu;
        // 0x399560: 0x26930010  addiu       $s3, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399564u;
        goto label_399564;
    }
    ctx->pc = 0x39955Cu;
    {
        const bool branch_taken_0x39955c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x399560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39955Cu;
        // 0x399560: 0x26930010  addiu       $s3, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39955c) {
            ctx->pc = 0x3995BCu;
            goto label_3995bc;
        }
    }
    ctx->pc = 0x399564u;
label_399564:
    // 0x399564: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x399564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_399568:
    // 0x399568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x399568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39956c:
    // 0x39956c: 0x0  nop
    ctx->pc = 0x39956cu;
    // NOP
label_399570:
    // 0x399570: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
label_399574:
    if (ctx->pc == 0x399574u) {
        ctx->pc = 0x399574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399570u;
        // 0x399574: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399578u;
        goto label_399578;
    }
    ctx->pc = 0x399570u;
    {
        const bool branch_taken_0x399570 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x399574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399570u;
        // 0x399574: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399570) {
            ctx->pc = 0x3995A0u;
            goto label_3995a0;
        }
    }
    ctx->pc = 0x399578u;
label_399578:
    // 0x399578: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x399578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_39957c:
    // 0x39957c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_399580:
    if (ctx->pc == 0x399580u) {
        ctx->pc = 0x399580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39957Cu;
        // 0x399580: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399584u;
        goto label_399584;
    }
    ctx->pc = 0x39957Cu;
    {
        const bool branch_taken_0x39957c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39957c) {
            ctx->pc = 0x399580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39957Cu;
            // 0x399580: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399594u;
            goto label_399594;
        }
    }
    ctx->pc = 0x399584u;
label_399584:
    // 0x399584: 0xc0e4052  jal         func_390148
label_399588:
    if (ctx->pc == 0x399588u) {
        ctx->pc = 0x39958Cu;
        goto label_39958c;
    }
    ctx->pc = 0x399584u;
    SET_GPR_U32(ctx, 31, 0x39958Cu);
    ctx->pc = 0x390148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390148u, 0x399584u, 0x39958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39958Cu;
label_39958c:
    // 0x39958c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x39958cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_399590:
    // 0x399590: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x399590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399594:
    // 0x399594: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x399594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_399598:
    // 0x399598: 0x10000006  b           . + 4 + (0x6 << 2)
label_39959c:
    if (ctx->pc == 0x39959Cu) {
        ctx->pc = 0x39959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399598u;
        // 0x39959c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995A0u;
        goto label_3995a0;
    }
    ctx->pc = 0x399598u;
    {
        const bool branch_taken_0x399598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399598u;
        // 0x39959c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399598) {
            ctx->pc = 0x3995B4u;
            goto label_3995b4;
        }
    }
    ctx->pc = 0x3995A0u;
label_3995a0:
    // 0x3995a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3995a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3995a4:
    // 0x3995a4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3995a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3995a8:
    // 0x3995a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3995a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3995ac:
    // 0x3995ac: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x3995acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3995b0:
    // 0x3995b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3995b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3995b4:
    // 0x3995b4: 0x643ffee  bgezl       $s2, . + 4 + (-0x12 << 2)
label_3995b8:
    if (ctx->pc == 0x3995B8u) {
        ctx->pc = 0x3995B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995B4u;
        // 0x3995b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995BCu;
        goto label_3995bc;
    }
    ctx->pc = 0x3995B4u;
    {
        const bool branch_taken_0x3995b4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x3995b4) {
            ctx->pc = 0x3995B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3995B4u;
            // 0x3995b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399570;
        }
    }
    ctx->pc = 0x3995BCu;
label_3995bc:
    // 0x3995bc: 0xc0e3da0  jal         func_38F680
label_3995c0:
    if (ctx->pc == 0x3995C0u) {
        ctx->pc = 0x3995C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995BCu;
        // 0x3995c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995C4u;
        goto label_3995c4;
    }
    ctx->pc = 0x3995BCu;
    SET_GPR_U32(ctx, 31, 0x3995C4u);
    ctx->pc = 0x3995C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3995BCu;
    // 0x3995c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x3995BCu, 0x3995C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3995C4u;
label_3995c4:
    // 0x3995c4: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x3995c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_3995c8:
    // 0x3995c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3995c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3995cc:
    // 0x3995cc: 0x5060004c  beql        $v1, $zero, . + 4 + (0x4C << 2)
label_3995d0:
    if (ctx->pc == 0x3995D0u) {
        ctx->pc = 0x3995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995CCu;
        // 0x3995d0: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995D4u;
        goto label_3995d4;
    }
    ctx->pc = 0x3995CCu;
    {
        const bool branch_taken_0x3995cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3995cc) {
            ctx->pc = 0x3995D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3995CCu;
            // 0x3995d0: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399700u;
            goto label_399700;
        }
    }
    ctx->pc = 0x3995D4u;
label_3995d4:
    // 0x3995d4: 0x8e91001c  lw          $s1, 0x1C($s4)
    ctx->pc = 0x3995d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3995d8:
    // 0x3995d8: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_3995dc:
    if (ctx->pc == 0x3995DCu) {
        ctx->pc = 0x3995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995D8u;
        // 0x3995dc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995E0u;
        goto label_3995e0;
    }
    ctx->pc = 0x3995D8u;
    {
        const bool branch_taken_0x3995d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995D8u;
        // 0x3995dc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3995d8) {
            ctx->pc = 0x3996DCu;
            goto label_3996dc;
        }
    }
    ctx->pc = 0x3995E0u;
label_3995e0:
    // 0x3995e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3995e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3995e4:
    // 0x3995e4: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_3995e8:
    if (ctx->pc == 0x3995E8u) {
        ctx->pc = 0x3995E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995E4u;
        // 0x3995e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995ECu;
        goto label_3995ec;
    }
    ctx->pc = 0x3995E4u;
    {
        const bool branch_taken_0x3995e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3995E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995E4u;
        // 0x3995e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3995e4) {
            ctx->pc = 0x3996DCu;
            goto label_3996dc;
        }
    }
    ctx->pc = 0x3995ECu;
label_3995ec:
    // 0x3995ec: 0x54620032  bnel        $v1, $v0, . + 4 + (0x32 << 2)
label_3995f0:
    if (ctx->pc == 0x3995F0u) {
        ctx->pc = 0x3995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995ECu;
        // 0x3995f0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995F4u;
        goto label_3995f4;
    }
    ctx->pc = 0x3995ECu;
    {
        const bool branch_taken_0x3995ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3995ec) {
            ctx->pc = 0x3995F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3995ECu;
            // 0x3995f0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3996B8u;
            goto label_3996b8;
        }
    }
    ctx->pc = 0x3995F4u;
label_3995f4:
    // 0x3995f4: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3995f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3995f8:
    // 0x3995f8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3995fc:
    if (ctx->pc == 0x3995FCu) {
        ctx->pc = 0x3995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995F8u;
        // 0x3995fc: 0x8e300038  lw          $s0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399600u;
        goto label_399600;
    }
    ctx->pc = 0x3995F8u;
    {
        const bool branch_taken_0x3995f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3995f8) {
            ctx->pc = 0x3995FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3995F8u;
            // 0x3995fc: 0x8e300038  lw          $s0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39960Cu;
            goto label_39960c;
        }
    }
    ctx->pc = 0x399600u;
label_399600:
    // 0x399600: 0xc104702  jal         func_411C08
label_399604:
    if (ctx->pc == 0x399604u) {
        ctx->pc = 0x399608u;
        goto label_399608;
    }
    ctx->pc = 0x399600u;
    SET_GPR_U32(ctx, 31, 0x399608u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x399600u, 0x399608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399608u;
label_399608:
    // 0x399608: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x399608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_39960c:
    // 0x39960c: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x39960cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_399610:
    // 0x399610: 0x12120007  beq         $s0, $s2, . + 4 + (0x7 << 2)
label_399614:
    if (ctx->pc == 0x399614u) {
        ctx->pc = 0x399614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399610u;
        // 0x399614: 0x26330040  addiu       $s3, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399618u;
        goto label_399618;
    }
    ctx->pc = 0x399610u;
    {
        const bool branch_taken_0x399610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x399614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399610u;
        // 0x399614: 0x26330040  addiu       $s3, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399610) {
            ctx->pc = 0x399630u;
            goto label_399630;
        }
    }
    ctx->pc = 0x399618u;
label_399618:
    // 0x399618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39961c:
    // 0x39961c: 0x0  nop
    ctx->pc = 0x39961cu;
    // NOP
label_399620:
    // 0x399620: 0xc0e7172  jal         func_39C5C8
label_399624:
    if (ctx->pc == 0x399624u) {
        ctx->pc = 0x399624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399620u;
        // 0x399624: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399628u;
        goto label_399628;
    }
    ctx->pc = 0x399620u;
    SET_GPR_U32(ctx, 31, 0x399628u);
    ctx->pc = 0x399624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399620u;
    // 0x399624: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C5C8u, 0x399620u, 0x399628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399628u;
label_399628:
    // 0x399628: 0x1612fffd  bne         $s0, $s2, . + 4 + (-0x3 << 2)
label_39962c:
    if (ctx->pc == 0x39962Cu) {
        ctx->pc = 0x39962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399628u;
        // 0x39962c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399630u;
        goto label_399630;
    }
    ctx->pc = 0x399628u;
    {
        const bool branch_taken_0x399628 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x39962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399628u;
        // 0x39962c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399628) {
            ctx->pc = 0x399620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399620;
        }
    }
    ctx->pc = 0x399630u;
label_399630:
    // 0x399630: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x399630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_399634:
    // 0x399634: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
label_399638:
    if (ctx->pc == 0x399638u) {
        ctx->pc = 0x399638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399634u;
        // 0x399638: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39963Cu;
        goto label_39963c;
    }
    ctx->pc = 0x399634u;
    {
        const bool branch_taken_0x399634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x399638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399634u;
        // 0x399638: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399634) {
            ctx->pc = 0x399654u;
            goto label_399654;
        }
    }
    ctx->pc = 0x39963Cu;
label_39963c:
    // 0x39963c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399640:
    // 0x399640: 0xc0e7192  jal         func_39C648
label_399644:
    if (ctx->pc == 0x399644u) {
        ctx->pc = 0x399644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399640u;
        // 0x399644: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399648u;
        goto label_399648;
    }
    ctx->pc = 0x399640u;
    SET_GPR_U32(ctx, 31, 0x399648u);
    ctx->pc = 0x399644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399640u;
    // 0x399644: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C648u, 0x399640u, 0x399648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399648u;
label_399648:
    // 0x399648: 0x5613fffd  bnel        $s0, $s3, . + 4 + (-0x3 << 2)
label_39964c:
    if (ctx->pc == 0x39964Cu) {
        ctx->pc = 0x39964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399648u;
        // 0x39964c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399650u;
        goto label_399650;
    }
    ctx->pc = 0x399648u;
    {
        const bool branch_taken_0x399648 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x399648) {
            ctx->pc = 0x39964Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399648u;
            // 0x39964c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399640;
        }
    }
    ctx->pc = 0x399650u;
label_399650:
    // 0x399650: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x399650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_399654:
    // 0x399654: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x399654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_399658:
    // 0x399658: 0xc104ca6  jal         func_413298
label_39965c:
    if (ctx->pc == 0x39965Cu) {
        ctx->pc = 0x39965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399658u;
        // 0x39965c: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399660u;
        goto label_399660;
    }
    ctx->pc = 0x399658u;
    SET_GPR_U32(ctx, 31, 0x399660u);
    ctx->pc = 0x39965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399658u;
    // 0x39965c: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x399658u, 0x399660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399660u;
label_399660:
    // 0x399660: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x399660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_399664:
    // 0x399664: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
label_399668:
    if (ctx->pc == 0x399668u) {
        ctx->pc = 0x399668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399664u;
        // 0x399668: 0x26c4ae58  addiu       $a0, $s6, -0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39966Cu;
        goto label_39966c;
    }
    ctx->pc = 0x399664u;
    {
        const bool branch_taken_0x399664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399664) {
            ctx->pc = 0x399668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399664u;
            // 0x399668: 0x26c4ae58  addiu       $a0, $s6, -0x51A8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946392));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3996E0u;
            goto label_3996e0;
        }
    }
    ctx->pc = 0x39966Cu;
label_39966c:
    // 0x39966c: 0xc0e4052  jal         func_390148
label_399670:
    if (ctx->pc == 0x399670u) {
        ctx->pc = 0x399674u;
        goto label_399674;
    }
    ctx->pc = 0x39966Cu;
    SET_GPR_U32(ctx, 31, 0x399674u);
    ctx->pc = 0x390148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390148u, 0x39966Cu, 0x399674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399674u;
label_399674:
    // 0x399674: 0x10000019  b           . + 4 + (0x19 << 2)
label_399678:
    if (ctx->pc == 0x399678u) {
        ctx->pc = 0x399678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399674u;
        // 0x399678: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39967Cu;
        goto label_39967c;
    }
    ctx->pc = 0x399674u;
    {
        const bool branch_taken_0x399674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399674u;
        // 0x399678: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399674) {
            ctx->pc = 0x3996DCu;
            goto label_3996dc;
        }
    }
    ctx->pc = 0x39967Cu;
label_39967c:
    // 0x39967c: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x39967cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_399680:
    // 0x399680: 0x26a4e880  addiu       $a0, $s5, -0x1780
    ctx->pc = 0x399680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_399684:
    // 0x399684: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x399684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_399688:
    // 0x399688: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x399688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39968c:
    // 0x39968c: 0x8f83bd60  lw          $v1, -0x42A0($gp)
    ctx->pc = 0x39968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
label_399690:
    // 0x399690: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x399690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_399694:
    // 0x399694: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x399694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_399698:
    // 0x399698: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x399698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_39969c:
    // 0x39969c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x39969cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3996a0:
    // 0x3996a0: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x3996a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3996a4:
    // 0x3996a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3996a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3996a8:
    // 0x3996a8: 0x40f809  jalr        $v0
label_3996ac:
    if (ctx->pc == 0x3996ACu) {
        ctx->pc = 0x3996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996A8u;
        // 0x3996ac: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996B0u;
        goto label_3996b0;
    }
    ctx->pc = 0x3996A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3996B0u);
        ctx->pc = 0x3996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996A8u;
        // 0x3996ac: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3996A8u, 0x3996B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3996B0u;
label_3996b0:
    // 0x3996b0: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
label_3996b4:
    if (ctx->pc == 0x3996B4u) {
        ctx->pc = 0x3996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996B0u;
        // 0x3996b4: 0x8e90001c  lw          $s0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996B8u;
        goto label_3996b8;
    }
    ctx->pc = 0x3996B0u;
    {
        const bool branch_taken_0x3996b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996B0u;
        // 0x3996b4: 0x8e90001c  lw          $s0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3996b0) {
            ctx->pc = 0x399558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399558;
        }
    }
    ctx->pc = 0x3996B8u;
label_3996b8:
    // 0x3996b8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3996bc:
    if (ctx->pc == 0x3996BCu) {
        ctx->pc = 0x3996BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996B8u;
        // 0x3996bc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996C0u;
        goto label_3996c0;
    }
    ctx->pc = 0x3996B8u;
    {
        const bool branch_taken_0x3996b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3996b8) {
            ctx->pc = 0x3996BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3996B8u;
            // 0x3996bc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3996CCu;
            goto label_3996cc;
        }
    }
    ctx->pc = 0x3996C0u;
label_3996c0:
    // 0x3996c0: 0xc0e6796  jal         func_399E58
label_3996c4:
    if (ctx->pc == 0x3996C4u) {
        ctx->pc = 0x3996C8u;
        goto label_3996c8;
    }
    ctx->pc = 0x3996C0u;
    SET_GPR_U32(ctx, 31, 0x3996C8u);
    ctx->pc = 0x399E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E58u, 0x3996C0u, 0x3996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996C8u;
label_3996c8:
    // 0x3996c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3996c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3996cc:
    // 0x3996cc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3996d0:
    if (ctx->pc == 0x3996D0u) {
        ctx->pc = 0x3996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996CCu;
        // 0x3996d0: 0x26c4ae58  addiu       $a0, $s6, -0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996D4u;
        goto label_3996d4;
    }
    ctx->pc = 0x3996CCu;
    {
        const bool branch_taken_0x3996cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3996cc) {
            ctx->pc = 0x3996D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3996CCu;
            // 0x3996d0: 0x26c4ae58  addiu       $a0, $s6, -0x51A8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946392));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3996E0u;
            goto label_3996e0;
        }
    }
    ctx->pc = 0x3996D4u;
label_3996d4:
    // 0x3996d4: 0xc0e6796  jal         func_399E58
label_3996d8:
    if (ctx->pc == 0x3996D8u) {
        ctx->pc = 0x3996DCu;
        goto label_3996dc;
    }
    ctx->pc = 0x3996D4u;
    SET_GPR_U32(ctx, 31, 0x3996DCu);
    ctx->pc = 0x399E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E58u, 0x3996D4u, 0x3996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996DCu;
label_3996dc:
    // 0x3996dc: 0x26c4ae58  addiu       $a0, $s6, -0x51A8
    ctx->pc = 0x3996dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946392));
label_3996e0:
    // 0x3996e0: 0xc104ca6  jal         func_413298
label_3996e4:
    if (ctx->pc == 0x3996E4u) {
        ctx->pc = 0x3996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996E0u;
        // 0x3996e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996E8u;
        goto label_3996e8;
    }
    ctx->pc = 0x3996E0u;
    SET_GPR_U32(ctx, 31, 0x3996E8u);
    ctx->pc = 0x3996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3996E0u;
    // 0x3996e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x3996E0u, 0x3996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996E8u;
label_3996e8:
    // 0x3996e8: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x3996e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_3996ec:
    // 0x3996ec: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3996ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3996f0:
    // 0x3996f0: 0x40f809  jalr        $v0
label_3996f4:
    if (ctx->pc == 0x3996F4u) {
        ctx->pc = 0x3996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996F0u;
        // 0x3996f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996F8u;
        goto label_3996f8;
    }
    ctx->pc = 0x3996F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3996F8u);
        ctx->pc = 0x3996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996F0u;
        // 0x3996f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3996F0u, 0x3996F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3996F8u;
label_3996f8:
    // 0x3996f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_3996fc:
    if (ctx->pc == 0x3996FCu) {
        ctx->pc = 0x3996FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996F8u;
        // 0x3996fc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399700u;
        goto label_399700;
    }
    ctx->pc = 0x3996F8u;
    {
        const bool branch_taken_0x3996f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3996FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996F8u;
        // 0x3996fc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3996f8) {
            ctx->pc = 0x399730u;
            goto label_399730;
        }
    }
    ctx->pc = 0x399700u;
label_399700:
    // 0x399700: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_399704:
    if (ctx->pc == 0x399704u) {
        ctx->pc = 0x399704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399700u;
        // 0x399704: 0x26c4ae58  addiu       $a0, $s6, -0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399708u;
        goto label_399708;
    }
    ctx->pc = 0x399700u;
    {
        const bool branch_taken_0x399700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399700) {
            ctx->pc = 0x399704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399700u;
            // 0x399704: 0x26c4ae58  addiu       $a0, $s6, -0x51A8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946392));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399714u;
            goto label_399714;
        }
    }
    ctx->pc = 0x399708u;
label_399708:
    // 0x399708: 0xc0e6490  jal         func_399240
label_39970c:
    if (ctx->pc == 0x39970Cu) {
        ctx->pc = 0x399710u;
        goto label_399710;
    }
    ctx->pc = 0x399708u;
    SET_GPR_U32(ctx, 31, 0x399710u);
    ctx->pc = 0x399240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399240u, 0x399708u, 0x399710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399710u;
label_399710:
    // 0x399710: 0x26c4ae58  addiu       $a0, $s6, -0x51A8
    ctx->pc = 0x399710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946392));
label_399714:
    // 0x399714: 0xc104ca6  jal         func_413298
label_399718:
    if (ctx->pc == 0x399718u) {
        ctx->pc = 0x399718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399714u;
        // 0x399718: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39971Cu;
        goto label_39971c;
    }
    ctx->pc = 0x399714u;
    SET_GPR_U32(ctx, 31, 0x39971Cu);
    ctx->pc = 0x399718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399714u;
    // 0x399718: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x399714u, 0x39971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39971Cu;
label_39971c:
    // 0x39971c: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x39971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_399720:
    // 0x399720: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x399720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_399724:
    // 0x399724: 0x40f809  jalr        $v0
label_399728:
    if (ctx->pc == 0x399728u) {
        ctx->pc = 0x399728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399724u;
        // 0x399728: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39972Cu;
        goto label_39972c;
    }
    ctx->pc = 0x399724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39972Cu);
        ctx->pc = 0x399728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399724u;
        // 0x399728: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399724u, 0x39972Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39972Cu;
label_39972c:
    // 0x39972c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x39972cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_399730:
    // 0x399730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399734:
    // 0x399734: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x399734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_399738:
    // 0x399738: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x399738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_39973c:
    // 0x39973c: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x39973cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_399740:
    // 0x399740: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x399740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_399744:
    // 0x399744: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x399744u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_399748:
    // 0x399748: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x399748u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_39974c:
    // 0x39974c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x39974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_399750:
    // 0x399750: 0x3e00008  jr          $ra
label_399754:
    if (ctx->pc == 0x399754u) {
        ctx->pc = 0x399754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399750u;
        // 0x399754: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399758u;
        goto label_fallthrough_0x399750;
    }
    ctx->pc = 0x399750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399750u;
        // 0x399754: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x399750:
    ctx->pc = 0x399758u;
}
