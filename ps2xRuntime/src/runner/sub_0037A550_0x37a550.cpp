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

// Function: sub_0037A550
// Address: 0x37a550 - 0x37a788
void sub_0037A550_0x37a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A550_0x37a550");
#endif

    switch (ctx->pc) {
        case 0x37a550u: goto label_37a550;
        case 0x37a554u: goto label_37a554;
        case 0x37a558u: goto label_37a558;
        case 0x37a55cu: goto label_37a55c;
        case 0x37a560u: goto label_37a560;
        case 0x37a564u: goto label_37a564;
        case 0x37a568u: goto label_37a568;
        case 0x37a56cu: goto label_37a56c;
        case 0x37a570u: goto label_37a570;
        case 0x37a574u: goto label_37a574;
        case 0x37a578u: goto label_37a578;
        case 0x37a57cu: goto label_37a57c;
        case 0x37a580u: goto label_37a580;
        case 0x37a584u: goto label_37a584;
        case 0x37a588u: goto label_37a588;
        case 0x37a58cu: goto label_37a58c;
        case 0x37a590u: goto label_37a590;
        case 0x37a594u: goto label_37a594;
        case 0x37a598u: goto label_37a598;
        case 0x37a59cu: goto label_37a59c;
        case 0x37a5a0u: goto label_37a5a0;
        case 0x37a5a4u: goto label_37a5a4;
        case 0x37a5a8u: goto label_37a5a8;
        case 0x37a5acu: goto label_37a5ac;
        case 0x37a5b0u: goto label_37a5b0;
        case 0x37a5b4u: goto label_37a5b4;
        case 0x37a5b8u: goto label_37a5b8;
        case 0x37a5bcu: goto label_37a5bc;
        case 0x37a5c0u: goto label_37a5c0;
        case 0x37a5c4u: goto label_37a5c4;
        case 0x37a5c8u: goto label_37a5c8;
        case 0x37a5ccu: goto label_37a5cc;
        case 0x37a5d0u: goto label_37a5d0;
        case 0x37a5d4u: goto label_37a5d4;
        case 0x37a5d8u: goto label_37a5d8;
        case 0x37a5dcu: goto label_37a5dc;
        case 0x37a5e0u: goto label_37a5e0;
        case 0x37a5e4u: goto label_37a5e4;
        case 0x37a5e8u: goto label_37a5e8;
        case 0x37a5ecu: goto label_37a5ec;
        case 0x37a5f0u: goto label_37a5f0;
        case 0x37a5f4u: goto label_37a5f4;
        case 0x37a5f8u: goto label_37a5f8;
        case 0x37a5fcu: goto label_37a5fc;
        case 0x37a600u: goto label_37a600;
        case 0x37a604u: goto label_37a604;
        case 0x37a608u: goto label_37a608;
        case 0x37a60cu: goto label_37a60c;
        case 0x37a610u: goto label_37a610;
        case 0x37a614u: goto label_37a614;
        case 0x37a618u: goto label_37a618;
        case 0x37a61cu: goto label_37a61c;
        case 0x37a620u: goto label_37a620;
        case 0x37a624u: goto label_37a624;
        case 0x37a628u: goto label_37a628;
        case 0x37a62cu: goto label_37a62c;
        case 0x37a630u: goto label_37a630;
        case 0x37a634u: goto label_37a634;
        case 0x37a638u: goto label_37a638;
        case 0x37a63cu: goto label_37a63c;
        case 0x37a640u: goto label_37a640;
        case 0x37a644u: goto label_37a644;
        case 0x37a648u: goto label_37a648;
        case 0x37a64cu: goto label_37a64c;
        case 0x37a650u: goto label_37a650;
        case 0x37a654u: goto label_37a654;
        case 0x37a658u: goto label_37a658;
        case 0x37a65cu: goto label_37a65c;
        case 0x37a660u: goto label_37a660;
        case 0x37a664u: goto label_37a664;
        case 0x37a668u: goto label_37a668;
        case 0x37a66cu: goto label_37a66c;
        case 0x37a670u: goto label_37a670;
        case 0x37a674u: goto label_37a674;
        case 0x37a678u: goto label_37a678;
        case 0x37a67cu: goto label_37a67c;
        case 0x37a680u: goto label_37a680;
        case 0x37a684u: goto label_37a684;
        case 0x37a688u: goto label_37a688;
        case 0x37a68cu: goto label_37a68c;
        case 0x37a690u: goto label_37a690;
        case 0x37a694u: goto label_37a694;
        case 0x37a698u: goto label_37a698;
        case 0x37a69cu: goto label_37a69c;
        case 0x37a6a0u: goto label_37a6a0;
        case 0x37a6a4u: goto label_37a6a4;
        case 0x37a6a8u: goto label_37a6a8;
        case 0x37a6acu: goto label_37a6ac;
        case 0x37a6b0u: goto label_37a6b0;
        case 0x37a6b4u: goto label_37a6b4;
        case 0x37a6b8u: goto label_37a6b8;
        case 0x37a6bcu: goto label_37a6bc;
        case 0x37a6c0u: goto label_37a6c0;
        case 0x37a6c4u: goto label_37a6c4;
        case 0x37a6c8u: goto label_37a6c8;
        case 0x37a6ccu: goto label_37a6cc;
        case 0x37a6d0u: goto label_37a6d0;
        case 0x37a6d4u: goto label_37a6d4;
        case 0x37a6d8u: goto label_37a6d8;
        case 0x37a6dcu: goto label_37a6dc;
        case 0x37a6e0u: goto label_37a6e0;
        case 0x37a6e4u: goto label_37a6e4;
        case 0x37a6e8u: goto label_37a6e8;
        case 0x37a6ecu: goto label_37a6ec;
        case 0x37a6f0u: goto label_37a6f0;
        case 0x37a6f4u: goto label_37a6f4;
        case 0x37a6f8u: goto label_37a6f8;
        case 0x37a6fcu: goto label_37a6fc;
        case 0x37a700u: goto label_37a700;
        case 0x37a704u: goto label_37a704;
        case 0x37a708u: goto label_37a708;
        case 0x37a70cu: goto label_37a70c;
        case 0x37a710u: goto label_37a710;
        case 0x37a714u: goto label_37a714;
        case 0x37a718u: goto label_37a718;
        case 0x37a71cu: goto label_37a71c;
        case 0x37a720u: goto label_37a720;
        case 0x37a724u: goto label_37a724;
        case 0x37a728u: goto label_37a728;
        case 0x37a72cu: goto label_37a72c;
        case 0x37a730u: goto label_37a730;
        case 0x37a734u: goto label_37a734;
        case 0x37a738u: goto label_37a738;
        case 0x37a73cu: goto label_37a73c;
        case 0x37a740u: goto label_37a740;
        case 0x37a744u: goto label_37a744;
        case 0x37a748u: goto label_37a748;
        case 0x37a74cu: goto label_37a74c;
        case 0x37a750u: goto label_37a750;
        case 0x37a754u: goto label_37a754;
        case 0x37a758u: goto label_37a758;
        case 0x37a75cu: goto label_37a75c;
        case 0x37a760u: goto label_37a760;
        case 0x37a764u: goto label_37a764;
        case 0x37a768u: goto label_37a768;
        case 0x37a76cu: goto label_37a76c;
        case 0x37a770u: goto label_37a770;
        case 0x37a774u: goto label_37a774;
        case 0x37a778u: goto label_37a778;
        case 0x37a77cu: goto label_37a77c;
        case 0x37a780u: goto label_37a780;
        case 0x37a784u: goto label_37a784;
        default: break;
    }

    ctx->pc = 0x37a550u;

label_37a550:
    // 0x37a550: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37a550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37a554:
    // 0x37a554: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37a558:
    // 0x37a558: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x37a558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_37a55c:
    // 0x37a55c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x37a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_37a560:
    // 0x37a560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37a564:
    // 0x37a564: 0x24043030  addiu       $a0, $zero, 0x3030
    ctx->pc = 0x37a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12336));
label_37a568:
    // 0x37a568: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x37a568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_37a56c:
    // 0x37a56c: 0x40f809  jalr        $v0
label_37a570:
    if (ctx->pc == 0x37A570u) {
        ctx->pc = 0x37A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A56Cu;
        // 0x37a570: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A574u;
        goto label_37a574;
    }
    ctx->pc = 0x37A56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37A574u);
        ctx->pc = 0x37A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A56Cu;
        // 0x37a570: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A56Cu, 0x37A574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A574u;
label_37a574:
    // 0x37a574: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x37a574u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a578:
    // 0x37a578: 0x11a00073  beqz        $t5, . + 4 + (0x73 << 2)
label_37a57c:
    if (ctx->pc == 0x37A57Cu) {
        ctx->pc = 0x37A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A578u;
        // 0x37a57c: 0xaf8da8bc  sw          $t5, -0x5744($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944956), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A580u;
        goto label_37a580;
    }
    ctx->pc = 0x37A578u;
    {
        const bool branch_taken_0x37a578 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A578u;
        // 0x37a57c: 0xaf8da8bc  sw          $t5, -0x5744($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944956), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a578) {
            ctx->pc = 0x37A748u;
            goto label_37a748;
        }
    }
    ctx->pc = 0x37A580u;
label_37a580:
    // 0x37a580: 0x25a20404  addiu       $v0, $t5, 0x404
    ctx->pc = 0x37a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1028));
label_37a584:
    // 0x37a584: 0x25a30808  addiu       $v1, $t5, 0x808
    ctx->pc = 0x37a584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 2056));
label_37a588:
    // 0x37a588: 0x25a40c0c  addiu       $a0, $t5, 0xC0C
    ctx->pc = 0x37a588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 3084));
label_37a58c:
    // 0x37a58c: 0x25a51010  addiu       $a1, $t5, 0x1010
    ctx->pc = 0x37a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4112));
label_37a590:
    // 0x37a590: 0x25a61414  addiu       $a2, $t5, 0x1414
    ctx->pc = 0x37a590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 5140));
label_37a594:
    // 0x37a594: 0x25a71818  addiu       $a3, $t5, 0x1818
    ctx->pc = 0x37a594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 6168));
label_37a598:
    // 0x37a598: 0x25a81c1c  addiu       $t0, $t5, 0x1C1C
    ctx->pc = 0x37a598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 7196));
label_37a59c:
    // 0x37a59c: 0x25a92020  addiu       $t1, $t5, 0x2020
    ctx->pc = 0x37a59cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 8224));
label_37a5a0:
    // 0x37a5a0: 0x25aa2424  addiu       $t2, $t5, 0x2424
    ctx->pc = 0x37a5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 9252));
label_37a5a4:
    // 0x37a5a4: 0x25ab2828  addiu       $t3, $t5, 0x2828
    ctx->pc = 0x37a5a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 10280));
label_37a5a8:
    // 0x37a5a8: 0x25ac2c2c  addiu       $t4, $t5, 0x2C2C
    ctx->pc = 0x37a5a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 11308));
label_37a5ac:
    // 0x37a5ac: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x37a5acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_37a5b0:
    // 0x37a5b0: 0xaf82a8c0  sw          $v0, -0x5740($gp)
    ctx->pc = 0x37a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944960), GPR_U32(ctx, 2));
label_37a5b4:
    // 0x37a5b4: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x37a5b4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a5b8:
    // 0x37a5b8: 0xaf83a8c4  sw          $v1, -0x573C($gp)
    ctx->pc = 0x37a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944964), GPR_U32(ctx, 3));
label_37a5bc:
    // 0x37a5bc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x37a5bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a5c0:
    // 0x37a5c0: 0xaf84a8c8  sw          $a0, -0x5738($gp)
    ctx->pc = 0x37a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944968), GPR_U32(ctx, 4));
label_37a5c4:
    // 0x37a5c4: 0xaf85a8cc  sw          $a1, -0x5734($gp)
    ctx->pc = 0x37a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944972), GPR_U32(ctx, 5));
label_37a5c8:
    // 0x37a5c8: 0xaf86a8d0  sw          $a2, -0x5730($gp)
    ctx->pc = 0x37a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944976), GPR_U32(ctx, 6));
label_37a5cc:
    // 0x37a5cc: 0xaf87a8d4  sw          $a3, -0x572C($gp)
    ctx->pc = 0x37a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944980), GPR_U32(ctx, 7));
label_37a5d0:
    // 0x37a5d0: 0xaf88a8d8  sw          $t0, -0x5728($gp)
    ctx->pc = 0x37a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944984), GPR_U32(ctx, 8));
label_37a5d4:
    // 0x37a5d4: 0xaf89a8dc  sw          $t1, -0x5724($gp)
    ctx->pc = 0x37a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944988), GPR_U32(ctx, 9));
label_37a5d8:
    // 0x37a5d8: 0xaf8aa8e0  sw          $t2, -0x5720($gp)
    ctx->pc = 0x37a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944992), GPR_U32(ctx, 10));
label_37a5dc:
    // 0x37a5dc: 0xaf8ba8e4  sw          $t3, -0x571C($gp)
    ctx->pc = 0x37a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944996), GPR_U32(ctx, 11));
label_37a5e0:
    // 0x37a5e0: 0xaf8ca8e8  sw          $t4, -0x5718($gp)
    ctx->pc = 0x37a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945000), GPR_U32(ctx, 12));
label_37a5e4:
    // 0x37a5e4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x37a5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_37a5e8:
    // 0x37a5e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x37a5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_37a5ec:
    // 0x37a5ec: 0xc78e80dc  lwc1        $f14, -0x7F24($gp)
    ctx->pc = 0x37a5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37a5f0:
    // 0x37a5f0: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x37a5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_37a5f4:
    // 0x37a5f4: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x37a5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_37a5f8:
    // 0x37a5f8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x37a5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_37a5fc:
    // 0x37a5fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x37a5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37a600:
    // 0x37a600: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37a600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37a604:
    // 0x37a604: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x37a604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_37a608:
    // 0x37a608: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x37a608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_37a60c:
    // 0x37a60c: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x37a60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37a610:
    // 0x37a610: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x37a610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_37a614:
    // 0x37a614: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x37a614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_37a618:
    // 0x37a618: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x37a618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_37a61c:
    // 0x37a61c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x37a61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_37a620:
    // 0x37a620: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x37a620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_37a624:
    // 0x37a624: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x37a624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37a628:
    // 0x37a628: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x37a628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
label_37a62c:
    // 0x37a62c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x37a62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_37a630:
    // 0x37a630: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x37a630u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37a634:
    // 0x37a634: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37a634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_37a638:
    // 0x37a638: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x37a638u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_37a63c:
    // 0x37a63c: 0x29a20101  slti        $v0, $t5, 0x101
    ctx->pc = 0x37a63cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)257) ? 1 : 0);
label_37a640:
    // 0x37a640: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x37a640u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_37a644:
    // 0x37a644: 0x46131182  mul.s       $f6, $f2, $f19
    ctx->pc = 0x37a644u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[19]);
label_37a648:
    // 0x37a648: 0x460c11c2  mul.s       $f7, $f2, $f12
    ctx->pc = 0x37a648u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_37a64c:
    // 0x37a64c: 0x46001207  neg.s       $f8, $f2
    ctx->pc = 0x37a64cu;
    ctx->f[8] = FPU_NEG_S(ctx->f[2]);
label_37a650:
    // 0x37a650: 0x460c3000  add.s       $f0, $f6, $f12
    ctx->pc = 0x37a650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[12]);
label_37a654:
    // 0x37a654: 0x46021242  mul.s       $f9, $f2, $f2
    ctx->pc = 0x37a654u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_37a658:
    // 0x37a658: 0x461238c1  sub.s       $f3, $f7, $f18
    ctx->pc = 0x37a658u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[18]);
label_37a65c:
    // 0x37a65c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37a65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_37a660:
    // 0x37a660: 0x46024902  mul.s       $f4, $f9, $f2
    ctx->pc = 0x37a660u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_37a664:
    // 0x37a664: 0x460c4040  add.s       $f1, $f8, $f12
    ctx->pc = 0x37a664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
label_37a668:
    // 0x37a668: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x37a668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_37a66c:
    // 0x37a66c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x37a66cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37a670:
    // 0x37a670: 0x460e2282  mul.s       $f10, $f4, $f14
    ctx->pc = 0x37a670u;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
label_37a674:
    // 0x37a674: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37a674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_37a678:
    // 0x37a678: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37a678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_37a67c:
    // 0x37a67c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x37a67cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37a680:
    // 0x37a680: 0xe5ea0000  swc1        $f10, 0x0($t7)
    ctx->pc = 0x37a680u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_37a684:
    // 0x37a684: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x37a684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
label_37a688:
    // 0x37a688: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x37a688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_37a68c:
    // 0x37a68c: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x37a68cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_37a690:
    // 0x37a690: 0x461118c0  add.s       $f3, $f3, $f17
    ctx->pc = 0x37a690u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[17]);
label_37a694:
    // 0x37a694: 0x460e0282  mul.s       $f10, $f0, $f14
    ctx->pc = 0x37a694u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_37a698:
    // 0x37a698: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37a698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_37a69c:
    // 0x37a69c: 0x460f3100  add.s       $f4, $f6, $f15
    ctx->pc = 0x37a69cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[15]);
label_37a6a0:
    // 0x37a6a0: 0xe5ca0000  swc1        $f10, 0x0($t6)
    ctx->pc = 0x37a6a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_37a6a4:
    // 0x37a6a4: 0x46103940  add.s       $f5, $f7, $f16
    ctx->pc = 0x37a6a4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[16]);
label_37a6a8:
    // 0x37a6a8: 0x460e1a82  mul.s       $f10, $f3, $f14
    ctx->pc = 0x37a6a8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
label_37a6ac:
    // 0x37a6ac: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x37a6acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_37a6b0:
    // 0x37a6b0: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x37a6b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
label_37a6b4:
    // 0x37a6b4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x37a6b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_37a6b8:
    // 0x37a6b8: 0xe46a0000  swc1        $f10, 0x0($v1)
    ctx->pc = 0x37a6b8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_37a6bc:
    // 0x37a6bc: 0x460f4000  add.s       $f0, $f8, $f15
    ctx->pc = 0x37a6bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[15]);
label_37a6c0:
    // 0x37a6c0: 0x460e0a82  mul.s       $f10, $f1, $f14
    ctx->pc = 0x37a6c0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
label_37a6c4:
    // 0x37a6c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x37a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_37a6c8:
    // 0x37a6c8: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x37a6c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
label_37a6cc:
    // 0x37a6cc: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x37a6ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_37a6d0:
    // 0x37a6d0: 0xe48a0000  swc1        $f10, 0x0($a0)
    ctx->pc = 0x37a6d0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_37a6d4:
    // 0x37a6d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37a6d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_37a6d8:
    // 0x37a6d8: 0x460d4a82  mul.s       $f10, $f9, $f13
    ctx->pc = 0x37a6d8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
label_37a6dc:
    // 0x37a6dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x37a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_37a6e0:
    // 0x37a6e0: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x37a6e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
label_37a6e4:
    // 0x37a6e4: 0xe4aa0000  swc1        $f10, 0x0($a1)
    ctx->pc = 0x37a6e4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_37a6e8:
    // 0x37a6e8: 0x460d2282  mul.s       $f10, $f4, $f13
    ctx->pc = 0x37a6e8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
label_37a6ec:
    // 0x37a6ec: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x37a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_37a6f0:
    // 0x37a6f0: 0xe4ca0000  swc1        $f10, 0x0($a2)
    ctx->pc = 0x37a6f0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_37a6f4:
    // 0x37a6f4: 0x460d2a82  mul.s       $f10, $f5, $f13
    ctx->pc = 0x37a6f4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
label_37a6f8:
    // 0x37a6f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x37a6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_37a6fc:
    // 0x37a6fc: 0xe4ea0000  swc1        $f10, 0x0($a3)
    ctx->pc = 0x37a6fcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_37a700:
    // 0x37a700: 0x460d0282  mul.s       $f10, $f0, $f13
    ctx->pc = 0x37a700u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_37a704:
    // 0x37a704: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x37a704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_37a708:
    // 0x37a708: 0xe50a0000  swc1        $f10, 0x0($t0)
    ctx->pc = 0x37a708u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_37a70c:
    // 0x37a70c: 0x460b3280  add.s       $f10, $f6, $f11
    ctx->pc = 0x37a70cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
label_37a710:
    // 0x37a710: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x37a710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_37a714:
    // 0x37a714: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x37a714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_37a718:
    // 0x37a718: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x37a718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_37a71c:
    // 0x37a71c: 0xe54a0000  swc1        $f10, 0x0($t2)
    ctx->pc = 0x37a71cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_37a720:
    // 0x37a720: 0x460f3a81  sub.s       $f10, $f7, $f15
    ctx->pc = 0x37a720u;
    ctx->f[10] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
label_37a724:
    // 0x37a724: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x37a724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_37a728:
    // 0x37a728: 0xe56a0000  swc1        $f10, 0x0($t3)
    ctx->pc = 0x37a728u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_37a72c:
    // 0x37a72c: 0x460b4280  add.s       $f10, $f8, $f11
    ctx->pc = 0x37a72cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
label_37a730:
    // 0x37a730: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x37a730u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_37a734:
    // 0x37a734: 0xe58a0000  swc1        $f10, 0x0($t4)
    ctx->pc = 0x37a734u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_37a738:
    // 0x37a738: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_37a73c:
    if (ctx->pc == 0x37A73Cu) {
        ctx->pc = 0x37A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A738u;
        // 0x37a73c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A740u;
        goto label_37a740;
    }
    ctx->pc = 0x37A738u;
    {
        const bool branch_taken_0x37a738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A738u;
        // 0x37a73c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a738) {
            ctx->pc = 0x37A630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a630;
        }
    }
    ctx->pc = 0x37A740u;
label_37a740:
    // 0x37a740: 0x1000000b  b           . + 4 + (0xB << 2)
label_37a744:
    if (ctx->pc == 0x37A744u) {
        ctx->pc = 0x37A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A740u;
        // 0x37a744: 0x8f82a8bc  lw          $v0, -0x5744($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944956)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A748u;
        goto label_37a748;
    }
    ctx->pc = 0x37A740u;
    {
        const bool branch_taken_0x37a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A740u;
        // 0x37a744: 0x8f82a8bc  lw          $v0, -0x5744($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a740) {
            ctx->pc = 0x37A770u;
            goto label_37a770;
        }
    }
    ctx->pc = 0x37A748u;
label_37a748:
    // 0x37a748: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37a74c:
    // 0x37a74c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37a750:
    // 0x37a750: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x37a750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_37a754:
    // 0x37a754: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37a754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_37a758:
    // 0x37a758: 0xc1035f6  jal         func_40D7D8
label_37a75c:
    if (ctx->pc == 0x37A75Cu) {
        ctx->pc = 0x37A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A758u;
        // 0x37a75c: 0x24053030  addiu       $a1, $zero, 0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A760u;
        goto label_37a760;
    }
    ctx->pc = 0x37A758u;
    SET_GPR_U32(ctx, 31, 0x37A760u);
    ctx->pc = 0x37A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A758u;
    // 0x37a75c: 0x24053030  addiu       $a1, $zero, 0x3030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37A758u, 0x37A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A760u;
label_37a760:
    // 0x37a760: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37a760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37a764:
    // 0x37a764: 0xc103628  jal         func_40D8A0
label_37a768:
    if (ctx->pc == 0x37A768u) {
        ctx->pc = 0x37A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A764u;
        // 0x37a768: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A76Cu;
        goto label_37a76c;
    }
    ctx->pc = 0x37A764u;
    SET_GPR_U32(ctx, 31, 0x37A76Cu);
    ctx->pc = 0x37A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A764u;
    // 0x37a768: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37A764u, 0x37A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A76Cu;
label_37a76c:
    // 0x37a76c: 0x8f82a8bc  lw          $v0, -0x5744($gp)
    ctx->pc = 0x37a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944956)));
label_37a770:
    // 0x37a770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37a774:
    // 0x37a774: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x37a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37a778:
    // 0x37a778: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x37a778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37a77c:
    // 0x37a77c: 0x3e00008  jr          $ra
label_37a780:
    if (ctx->pc == 0x37A780u) {
        ctx->pc = 0x37A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A77Cu;
        // 0x37a780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A784u;
        goto label_37a784;
    }
    ctx->pc = 0x37A77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A77Cu;
        // 0x37a780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A784u;
label_37a784:
    // 0x37a784: 0x0  nop
    ctx->pc = 0x37a784u;
    // NOP
    ctx->pc = 0x37a788u;
}
