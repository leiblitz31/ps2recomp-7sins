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

// Function: sub_003434A8
// Address: 0x3434a8 - 0x3436b8
void sub_003434A8_0x3434a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003434A8_0x3434a8");
#endif

    switch (ctx->pc) {
        case 0x3434a8u: goto label_3434a8;
        case 0x3434acu: goto label_3434ac;
        case 0x3434b0u: goto label_3434b0;
        case 0x3434b4u: goto label_3434b4;
        case 0x3434b8u: goto label_3434b8;
        case 0x3434bcu: goto label_3434bc;
        case 0x3434c0u: goto label_3434c0;
        case 0x3434c4u: goto label_3434c4;
        case 0x3434c8u: goto label_3434c8;
        case 0x3434ccu: goto label_3434cc;
        case 0x3434d0u: goto label_3434d0;
        case 0x3434d4u: goto label_3434d4;
        case 0x3434d8u: goto label_3434d8;
        case 0x3434dcu: goto label_3434dc;
        case 0x3434e0u: goto label_3434e0;
        case 0x3434e4u: goto label_3434e4;
        case 0x3434e8u: goto label_3434e8;
        case 0x3434ecu: goto label_3434ec;
        case 0x3434f0u: goto label_3434f0;
        case 0x3434f4u: goto label_3434f4;
        case 0x3434f8u: goto label_3434f8;
        case 0x3434fcu: goto label_3434fc;
        case 0x343500u: goto label_343500;
        case 0x343504u: goto label_343504;
        case 0x343508u: goto label_343508;
        case 0x34350cu: goto label_34350c;
        case 0x343510u: goto label_343510;
        case 0x343514u: goto label_343514;
        case 0x343518u: goto label_343518;
        case 0x34351cu: goto label_34351c;
        case 0x343520u: goto label_343520;
        case 0x343524u: goto label_343524;
        case 0x343528u: goto label_343528;
        case 0x34352cu: goto label_34352c;
        case 0x343530u: goto label_343530;
        case 0x343534u: goto label_343534;
        case 0x343538u: goto label_343538;
        case 0x34353cu: goto label_34353c;
        case 0x343540u: goto label_343540;
        case 0x343544u: goto label_343544;
        case 0x343548u: goto label_343548;
        case 0x34354cu: goto label_34354c;
        case 0x343550u: goto label_343550;
        case 0x343554u: goto label_343554;
        case 0x343558u: goto label_343558;
        case 0x34355cu: goto label_34355c;
        case 0x343560u: goto label_343560;
        case 0x343564u: goto label_343564;
        case 0x343568u: goto label_343568;
        case 0x34356cu: goto label_34356c;
        case 0x343570u: goto label_343570;
        case 0x343574u: goto label_343574;
        case 0x343578u: goto label_343578;
        case 0x34357cu: goto label_34357c;
        case 0x343580u: goto label_343580;
        case 0x343584u: goto label_343584;
        case 0x343588u: goto label_343588;
        case 0x34358cu: goto label_34358c;
        case 0x343590u: goto label_343590;
        case 0x343594u: goto label_343594;
        case 0x343598u: goto label_343598;
        case 0x34359cu: goto label_34359c;
        case 0x3435a0u: goto label_3435a0;
        case 0x3435a4u: goto label_3435a4;
        case 0x3435a8u: goto label_3435a8;
        case 0x3435acu: goto label_3435ac;
        case 0x3435b0u: goto label_3435b0;
        case 0x3435b4u: goto label_3435b4;
        case 0x3435b8u: goto label_3435b8;
        case 0x3435bcu: goto label_3435bc;
        case 0x3435c0u: goto label_3435c0;
        case 0x3435c4u: goto label_3435c4;
        case 0x3435c8u: goto label_3435c8;
        case 0x3435ccu: goto label_3435cc;
        case 0x3435d0u: goto label_3435d0;
        case 0x3435d4u: goto label_3435d4;
        case 0x3435d8u: goto label_3435d8;
        case 0x3435dcu: goto label_3435dc;
        case 0x3435e0u: goto label_3435e0;
        case 0x3435e4u: goto label_3435e4;
        case 0x3435e8u: goto label_3435e8;
        case 0x3435ecu: goto label_3435ec;
        case 0x3435f0u: goto label_3435f0;
        case 0x3435f4u: goto label_3435f4;
        case 0x3435f8u: goto label_3435f8;
        case 0x3435fcu: goto label_3435fc;
        case 0x343600u: goto label_343600;
        case 0x343604u: goto label_343604;
        case 0x343608u: goto label_343608;
        case 0x34360cu: goto label_34360c;
        case 0x343610u: goto label_343610;
        case 0x343614u: goto label_343614;
        case 0x343618u: goto label_343618;
        case 0x34361cu: goto label_34361c;
        case 0x343620u: goto label_343620;
        case 0x343624u: goto label_343624;
        case 0x343628u: goto label_343628;
        case 0x34362cu: goto label_34362c;
        case 0x343630u: goto label_343630;
        case 0x343634u: goto label_343634;
        case 0x343638u: goto label_343638;
        case 0x34363cu: goto label_34363c;
        case 0x343640u: goto label_343640;
        case 0x343644u: goto label_343644;
        case 0x343648u: goto label_343648;
        case 0x34364cu: goto label_34364c;
        case 0x343650u: goto label_343650;
        case 0x343654u: goto label_343654;
        case 0x343658u: goto label_343658;
        case 0x34365cu: goto label_34365c;
        case 0x343660u: goto label_343660;
        case 0x343664u: goto label_343664;
        case 0x343668u: goto label_343668;
        case 0x34366cu: goto label_34366c;
        case 0x343670u: goto label_343670;
        case 0x343674u: goto label_343674;
        case 0x343678u: goto label_343678;
        case 0x34367cu: goto label_34367c;
        case 0x343680u: goto label_343680;
        case 0x343684u: goto label_343684;
        case 0x343688u: goto label_343688;
        case 0x34368cu: goto label_34368c;
        case 0x343690u: goto label_343690;
        case 0x343694u: goto label_343694;
        case 0x343698u: goto label_343698;
        case 0x34369cu: goto label_34369c;
        case 0x3436a0u: goto label_3436a0;
        case 0x3436a4u: goto label_3436a4;
        case 0x3436a8u: goto label_3436a8;
        case 0x3436acu: goto label_3436ac;
        case 0x3436b0u: goto label_3436b0;
        case 0x3436b4u: goto label_3436b4;
        default: break;
    }

    ctx->pc = 0x3434a8u;

label_3434a8:
    // 0x3434a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3434a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3434ac:
    // 0x3434ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3434acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3434b0:
    // 0x3434b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3434b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3434b4:
    // 0x3434b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3434b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3434b8:
    // 0x3434b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3434b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3434bc:
    // 0x3434bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3434bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3434c0:
    // 0x3434c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3434c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3434c4:
    // 0x3434c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3434c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3434c8:
    // 0x3434c8: 0xc103468  jal         func_40D1A0
label_3434cc:
    if (ctx->pc == 0x3434CCu) {
        ctx->pc = 0x3434CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434C8u;
        // 0x3434cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3434D0u;
        goto label_3434d0;
    }
    ctx->pc = 0x3434C8u;
    SET_GPR_U32(ctx, 31, 0x3434D0u);
    ctx->pc = 0x3434CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434C8u;
    // 0x3434cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3434C8u, 0x3434D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434D0u;
label_3434d0:
    // 0x3434d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3434d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3434d4:
    // 0x3434d4: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x3434d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_3434d8:
    // 0x3434d8: 0xc103468  jal         func_40D1A0
label_3434dc:
    if (ctx->pc == 0x3434DCu) {
        ctx->pc = 0x3434DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434D8u;
        // 0x3434dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3434E0u;
        goto label_3434e0;
    }
    ctx->pc = 0x3434D8u;
    SET_GPR_U32(ctx, 31, 0x3434E0u);
    ctx->pc = 0x3434DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434D8u;
    // 0x3434dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3434D8u, 0x3434E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434E0u;
label_3434e0:
    // 0x3434e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3434e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3434e4:
    // 0x3434e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3434e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3434e8:
    // 0x3434e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3434e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3434ec:
    // 0x3434ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3434ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3434f0:
    // 0x3434f0: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x3434f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_3434f4:
    // 0x3434f4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x3434f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_3434f8:
    // 0x3434f8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3434fc:
    if (ctx->pc == 0x3434FCu) {
        ctx->pc = 0x3434FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434F8u;
        // 0x3434fc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343500u;
        goto label_343500;
    }
    ctx->pc = 0x3434F8u;
    {
        const bool branch_taken_0x3434f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3434FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434F8u;
        // 0x3434fc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434f8) {
            ctx->pc = 0x34351Cu;
            goto label_34351c;
        }
    }
    ctx->pc = 0x343500u;
label_343500:
    // 0x343500: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343504:
    // 0x343504: 0x0  nop
    ctx->pc = 0x343504u;
    // NOP
label_343508:
    // 0x343508: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
label_34350c:
    if (ctx->pc == 0x34350Cu) {
        ctx->pc = 0x34350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343508u;
        // 0x34350c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343510u;
        goto label_343510;
    }
    ctx->pc = 0x343508u;
    {
        const bool branch_taken_0x343508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x343508) {
            ctx->pc = 0x34350Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343508u;
            // 0x34350c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34351Cu;
            goto label_34351c;
        }
    }
    ctx->pc = 0x343510u;
label_343510:
    // 0x343510: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x343510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_343514:
    // 0x343514: 0x5464fffc  bnel        $v1, $a0, . + 4 + (-0x4 << 2)
label_343518:
    if (ctx->pc == 0x343518u) {
        ctx->pc = 0x343518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343514u;
        // 0x343518: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34351Cu;
        goto label_34351c;
    }
    ctx->pc = 0x343514u;
    {
        const bool branch_taken_0x343514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x343514) {
            ctx->pc = 0x343518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343514u;
            // 0x343518: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343508;
        }
    }
    ctx->pc = 0x34351Cu;
label_34351c:
    // 0x34351c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34351cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_343520:
    // 0x343520: 0x5640005b  bnel        $s2, $zero, . + 4 + (0x5B << 2)
label_343524:
    if (ctx->pc == 0x343524u) {
        ctx->pc = 0x343524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343520u;
        // 0x343524: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343528u;
        goto label_343528;
    }
    ctx->pc = 0x343520u;
    {
        const bool branch_taken_0x343520 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x343520) {
            ctx->pc = 0x343524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343520u;
            // 0x343524: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343690u;
            goto label_343690;
        }
    }
    ctx->pc = 0x343528u;
label_343528:
    // 0x343528: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x343528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_34352c:
    // 0x34352c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x34352cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_343530:
    // 0x343530: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x343530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_343534:
    // 0x343534: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x343534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_343538:
    // 0x343538: 0x40f809  jalr        $v0
label_34353c:
    if (ctx->pc == 0x34353Cu) {
        ctx->pc = 0x34353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343538u;
        // 0x34353c: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x343540u;
        goto label_343540;
    }
    ctx->pc = 0x343538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343540u);
        ctx->pc = 0x34353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343538u;
        // 0x34353c: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343538u, 0x343540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343540u;
label_343540:
    // 0x343540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343544:
    // 0x343544: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_343548:
    if (ctx->pc == 0x343548u) {
        ctx->pc = 0x343548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343544u;
        // 0x343548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34354Cu;
        goto label_34354c;
    }
    ctx->pc = 0x343544u;
    {
        const bool branch_taken_0x343544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x343548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343544u;
        // 0x343548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343544) {
            ctx->pc = 0x343590u;
            goto label_343590;
        }
    }
    ctx->pc = 0x34354Cu;
label_34354c:
    // 0x34354c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34354cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343550:
    // 0x343550: 0xc0bb7e6  jal         func_2EDF98
label_343554:
    if (ctx->pc == 0x343554u) {
        ctx->pc = 0x343554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343550u;
        // 0x343554: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343558u;
        goto label_343558;
    }
    ctx->pc = 0x343550u;
    SET_GPR_U32(ctx, 31, 0x343558u);
    ctx->pc = 0x343554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343550u;
    // 0x343554: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x343550u, 0x343558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343558u;
label_343558:
    // 0x343558: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x343558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_34355c:
    // 0x34355c: 0x2662c2c8  addiu       $v0, $s3, -0x3D38
    ctx->pc = 0x34355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
label_343560:
    // 0x343560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343564:
    // 0x343564: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x343564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
label_343568:
    // 0x343568: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x343568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_34356c:
    // 0x34356c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_343570:
    if (ctx->pc == 0x343570u) {
        ctx->pc = 0x343570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34356Cu;
        // 0x343570: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343574u;
        goto label_343574;
    }
    ctx->pc = 0x34356Cu;
    {
        const bool branch_taken_0x34356c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x343570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34356Cu;
        // 0x343570: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34356c) {
            ctx->pc = 0x34357Cu;
            goto label_34357c;
        }
    }
    ctx->pc = 0x343574u;
label_343574:
    // 0x343574: 0x10000006  b           . + 4 + (0x6 << 2)
label_343578:
    if (ctx->pc == 0x343578u) {
        ctx->pc = 0x343578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343574u;
        // 0x343578: 0xac500064  sw          $s0, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34357Cu;
        goto label_34357c;
    }
    ctx->pc = 0x343574u;
    {
        const bool branch_taken_0x343574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343574u;
        // 0x343578: 0xac500064  sw          $s0, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343574) {
            ctx->pc = 0x343590u;
            goto label_343590;
        }
    }
    ctx->pc = 0x34357Cu;
label_34357c:
    // 0x34357c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_343580:
    // 0x343580: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x343580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_343584:
    // 0x343584: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x343584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_343588:
    // 0x343588: 0x2662c2c8  addiu       $v0, $s3, -0x3D38
    ctx->pc = 0x343588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
label_34358c:
    // 0x34358c: 0xac500064  sw          $s0, 0x64($v0)
    ctx->pc = 0x34358cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
label_343590:
    // 0x343590: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x343590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343594:
    // 0x343594: 0x12400041  beqz        $s2, . + 4 + (0x41 << 2)
label_343598:
    if (ctx->pc == 0x343598u) {
        ctx->pc = 0x343598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343594u;
        // 0x343598: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34359Cu;
        goto label_34359c;
    }
    ctx->pc = 0x343594u;
    {
        const bool branch_taken_0x343594 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x343598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343594u;
        // 0x343598: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343594) {
            ctx->pc = 0x34369Cu;
            goto label_34369c;
        }
    }
    ctx->pc = 0x34359Cu;
label_34359c:
    // 0x34359c: 0xc0d123e  jal         func_3448F8
label_3435a0:
    if (ctx->pc == 0x3435A0u) {
        ctx->pc = 0x3435A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34359Cu;
        // 0x3435a0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3435A4u;
        goto label_3435a4;
    }
    ctx->pc = 0x34359Cu;
    SET_GPR_U32(ctx, 31, 0x3435A4u);
    ctx->pc = 0x3435A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34359Cu;
    // 0x3435a0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448F8u, 0x34359Cu, 0x3435A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435A4u;
label_3435a4:
    // 0x3435a4: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3435a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3435a8:
    // 0x3435a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3435ac:
    if (ctx->pc == 0x3435ACu) {
        ctx->pc = 0x3435ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435A8u;
        // 0x3435ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3435B0u;
        goto label_3435b0;
    }
    ctx->pc = 0x3435A8u;
    {
        const bool branch_taken_0x3435a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3435ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435A8u;
        // 0x3435ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435a8) {
            ctx->pc = 0x3435B8u;
            goto label_3435b8;
        }
    }
    ctx->pc = 0x3435B0u;
label_3435b0:
    // 0x3435b0: 0xc0d1054  jal         func_344150
label_3435b4:
    if (ctx->pc == 0x3435B4u) {
        ctx->pc = 0x3435B8u;
        goto label_3435b8;
    }
    ctx->pc = 0x3435B0u;
    SET_GPR_U32(ctx, 31, 0x3435B8u);
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x3435B0u, 0x3435B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435B8u;
label_3435b8:
    // 0x3435b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3435b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3435bc:
    // 0x3435bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3435bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3435c0:
    // 0x3435c0: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x3435c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_3435c4:
    // 0x3435c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3435c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3435c8:
    // 0x3435c8: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_3435cc:
    if (ctx->pc == 0x3435CCu) {
        ctx->pc = 0x3435CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435C8u;
        // 0x3435cc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3435D0u;
        goto label_3435d0;
    }
    ctx->pc = 0x3435C8u;
    {
        const bool branch_taken_0x3435c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3435CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435C8u;
        // 0x3435cc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435c8) {
            ctx->pc = 0x343664u;
            goto label_343664;
        }
    }
    ctx->pc = 0x3435D0u;
label_3435d0:
    // 0x3435d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3435d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3435d4:
    // 0x3435d4: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_3435d8:
    if (ctx->pc == 0x3435D8u) {
        ctx->pc = 0x3435D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435D4u;
        // 0x3435d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3435DCu;
        goto label_3435dc;
    }
    ctx->pc = 0x3435D4u;
    {
        const bool branch_taken_0x3435d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3435D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435D4u;
        // 0x3435d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435d4) {
            ctx->pc = 0x343664u;
            goto label_343664;
        }
    }
    ctx->pc = 0x3435DCu;
label_3435dc:
    // 0x3435dc: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3435dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3435e0:
    // 0x3435e0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3435e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3435e4:
    // 0x3435e4: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x3435e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3435e8:
    // 0x3435e8: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_3435ec:
    if (ctx->pc == 0x3435ECu) {
        ctx->pc = 0x3435ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435E8u;
        // 0x3435ec: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3435F0u;
        goto label_3435f0;
    }
    ctx->pc = 0x3435E8u;
    {
        const bool branch_taken_0x3435e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3435ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435E8u;
        // 0x3435ec: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435e8) {
            ctx->pc = 0x343638u;
            goto label_343638;
        }
    }
    ctx->pc = 0x3435F0u;
label_3435f0:
    // 0x3435f0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3435f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_3435f4:
    // 0x3435f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3435f8:
    if (ctx->pc == 0x3435F8u) {
        ctx->pc = 0x3435F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435F4u;
        // 0x3435f8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3435FCu;
        goto label_3435fc;
    }
    ctx->pc = 0x3435F4u;
    {
        const bool branch_taken_0x3435f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3435F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435F4u;
        // 0x3435f8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435f4) {
            ctx->pc = 0x343620u;
            goto label_343620;
        }
    }
    ctx->pc = 0x3435FCu;
label_3435fc:
    // 0x3435fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_343600:
    if (ctx->pc == 0x343600u) {
        ctx->pc = 0x343600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435FCu;
        // 0x343600: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343604u;
        goto label_343604;
    }
    ctx->pc = 0x3435FCu;
    {
        const bool branch_taken_0x3435fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3435fc) {
            ctx->pc = 0x343600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3435FCu;
            // 0x343600: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343614u;
            goto label_343614;
        }
    }
    ctx->pc = 0x343604u;
label_343604:
    // 0x343604: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x343604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_343608:
    // 0x343608: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x343608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_34360c:
    // 0x34360c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x34360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_343610:
    // 0x343610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_343614:
    // 0x343614: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x343614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_343618:
    // 0x343618: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x343618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_34361c:
    // 0x34361c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x34361cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_343620:
    // 0x343620: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_343624:
    // 0x343624: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x343624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_343628:
    // 0x343628: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x343628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_34362c:
    // 0x34362c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_343630:
    if (ctx->pc == 0x343630u) {
        ctx->pc = 0x343630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34362Cu;
        // 0x343630: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343634u;
        goto label_343634;
    }
    ctx->pc = 0x34362Cu;
    {
        const bool branch_taken_0x34362c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x343630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34362Cu;
        // 0x343630: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34362c) {
            ctx->pc = 0x343664u;
            goto label_343664;
        }
    }
    ctx->pc = 0x343634u;
label_343634:
    // 0x343634: 0x0  nop
    ctx->pc = 0x343634u;
    // NOP
label_343638:
    // 0x343638: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34363c:
    // 0x34363c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x34363cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_343640:
    // 0x343640: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x343640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_343644:
    // 0x343644: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343648:
    // 0x343648: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x343648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_34364c:
    // 0x34364c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x34364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_343650:
    // 0x343650: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x343650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_343654:
    // 0x343654: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x343654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_343658:
    // 0x343658: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x343658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_34365c:
    // 0x34365c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_343660:
    if (ctx->pc == 0x343660u) {
        ctx->pc = 0x343660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34365Cu;
        // 0x343660: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343664u;
        goto label_343664;
    }
    ctx->pc = 0x34365Cu;
    {
        const bool branch_taken_0x34365c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x343660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34365Cu;
        // 0x343660: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34365c) {
            ctx->pc = 0x343638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343638;
        }
    }
    ctx->pc = 0x343664u;
label_343664:
    // 0x343664: 0x2663c2c8  addiu       $v1, $s3, -0x3D38
    ctx->pc = 0x343664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
label_343668:
    // 0x343668: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x343668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_34366c:
    // 0x34366c: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x34366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_343670:
    // 0x343670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x343670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343674:
    // 0x343674: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x343674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_343678:
    // 0x343678: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x343678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_34367c:
    // 0x34367c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x34367cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_343680:
    // 0x343680: 0x40f809  jalr        $v0
label_343684:
    if (ctx->pc == 0x343684u) {
        ctx->pc = 0x343684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343680u;
        // 0x343684: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343688u;
        goto label_343688;
    }
    ctx->pc = 0x343680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343688u);
        ctx->pc = 0x343684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343680u;
        // 0x343684: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343680u, 0x343688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343688u;
label_343688:
    // 0x343688: 0x10000004  b           . + 4 + (0x4 << 2)
label_34368c:
    if (ctx->pc == 0x34368Cu) {
        ctx->pc = 0x34368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343688u;
        // 0x34368c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343690u;
        goto label_343690;
    }
    ctx->pc = 0x343688u;
    {
        const bool branch_taken_0x343688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343688u;
        // 0x34368c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343688) {
            ctx->pc = 0x34369Cu;
            goto label_34369c;
        }
    }
    ctx->pc = 0x343690u;
label_343690:
    // 0x343690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x343690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_343694:
    // 0x343694: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x343694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_343698:
    // 0x343698: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x343698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34369c:
    // 0x34369c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x34369cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3436a0:
    // 0x3436a0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3436a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3436a4:
    // 0x3436a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3436a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3436a8:
    // 0x3436a8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3436a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3436ac:
    // 0x3436ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3436acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3436b0:
    // 0x3436b0: 0x3e00008  jr          $ra
label_3436b4:
    if (ctx->pc == 0x3436B4u) {
        ctx->pc = 0x3436B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436B0u;
        // 0x3436b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436B8u;
        goto label_fallthrough_0x3436b0;
    }
    ctx->pc = 0x3436B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3436B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436B0u;
        // 0x3436b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3436B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3436b0:
    ctx->pc = 0x3436B8u;
}
