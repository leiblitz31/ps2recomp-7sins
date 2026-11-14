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

// Function: sub_004854C0
// Address: 0x4854c0 - 0x485670
void sub_004854C0_0x4854c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004854C0_0x4854c0");
#endif

    switch (ctx->pc) {
        case 0x4854fcu: goto label_4854fc;
        case 0x485520u: goto label_485520;
        case 0x48554cu: goto label_48554c;
        case 0x485564u: goto label_485564;
        case 0x485570u: goto label_485570;
        case 0x485584u: goto label_485584;
        case 0x485590u: goto label_485590;
        case 0x4855a4u: goto label_4855a4;
        case 0x4855c0u: goto label_4855c0;
        case 0x4855d4u: goto label_4855d4;
        case 0x4855ecu: goto label_4855ec;
        case 0x485604u: goto label_485604;
        case 0x485634u: goto label_485634;
        case 0x485644u: goto label_485644;
        default: break;
    }

    ctx->pc = 0x4854c0u;

    // 0x4854c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4854c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4854c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4854c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4854c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4854c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4854cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4854ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4854d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4854d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4854d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4854d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4854d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4854d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4854dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4854dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4854e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4854e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4854e4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x4854e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x4854e8: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x4854e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x4854ec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4854ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4854f0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4854f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4854f4: 0xc04e50c  jal         func_139430
    ctx->pc = 0x4854F4u;
    SET_GPR_U32(ctx, 31, 0x4854FCu);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x4854F4u, 0x4854FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4854FCu;
label_4854fc:
    // 0x4854fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4854fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485500: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x485500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x485504: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x485504u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x485508: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x485508u;
    {
        const bool branch_taken_0x485508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x485508) {
            ctx->pc = 0x485644u;
            goto label_485644;
        }
    }
    ctx->pc = 0x485510u;
    // 0x485510: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x485510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x485514: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x485514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x485518: 0xc1208fc  jal         func_4823F0
    ctx->pc = 0x485518u;
    SET_GPR_U32(ctx, 31, 0x485520u);
    ctx->pc = 0x4823F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4823F0u, 0x485518u, 0x485520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485520u;
label_485520:
    // 0x485520: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x485520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485524: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x485524u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x485528: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x485528u;
    {
        const bool branch_taken_0x485528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x485528) {
            ctx->pc = 0x485644u;
            goto label_485644;
        }
    }
    ctx->pc = 0x485530u;
    // 0x485530: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x485530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x485534: 0x27b5009c  addiu       $s5, $sp, 0x9C
    ctx->pc = 0x485534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x485538: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x485538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48553c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x48553cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x485540: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x485540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x485544: 0xc04f590  jal         func_13D640
    ctx->pc = 0x485544u;
    SET_GPR_U32(ctx, 31, 0x48554Cu);
    ctx->pc = 0x13D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D640u, 0x485544u, 0x48554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48554Cu;
label_48554c:
    // 0x48554c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x48554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x485550: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x485550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485554: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x485554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485558: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x485558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x48555c: 0xc04f550  jal         func_13D540
    ctx->pc = 0x48555Cu;
    SET_GPR_U32(ctx, 31, 0x485564u);
    ctx->pc = 0x13D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D540u, 0x48555Cu, 0x485564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485564u;
label_485564:
    // 0x485564: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x485564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485568: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x485568u;
    {
        const bool branch_taken_0x485568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485568) {
            ctx->pc = 0x485614u;
            goto label_485614;
        }
    }
    ctx->pc = 0x485570u;
label_485570:
    // 0x485570: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x485570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x485574: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x485574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x485578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x485578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48557c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x48557Cu;
    SET_GPR_U32(ctx, 31, 0x485584u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x48557Cu, 0x485584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485584u;
label_485584:
    // 0x485584: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x485584u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x485588: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x485588u;
    {
        const bool branch_taken_0x485588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485588) {
            ctx->pc = 0x485608u;
            goto label_485608;
        }
    }
    ctx->pc = 0x485590u;
label_485590:
    // 0x485590: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x485590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x485594: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x485594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x485598: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x485598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48559c: 0xc12159c  jal         func_485670
    ctx->pc = 0x48559Cu;
    SET_GPR_U32(ctx, 31, 0x4855A4u);
    ctx->pc = 0x485670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485670u, 0x48559Cu, 0x4855A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4855A4u;
label_4855a4:
    // 0x4855a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4855a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4855a8: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x4855a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4855ac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4855acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4855b0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4855b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4855b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4855b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4855b8: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4855B8u;
    SET_GPR_U32(ctx, 31, 0x4855C0u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4855B8u, 0x4855C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4855C0u;
label_4855c0:
    // 0x4855c0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x4855c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x4855c4: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x4855c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x4855c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4855c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4855cc: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4855CCu;
    SET_GPR_U32(ctx, 31, 0x4855D4u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4855CCu, 0x4855D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4855D4u;
label_4855d4:
    // 0x4855d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4855d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4855d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4855d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4855dc: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x4855dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x4855e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4855e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4855e4: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4855E4u;
    SET_GPR_U32(ctx, 31, 0x4855ECu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4855E4u, 0x4855ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4855ECu;
label_4855ec:
    // 0x4855ec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x4855ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x4855f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4855f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4855f4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4855f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4855f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4855f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4855fc: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4855FCu;
    SET_GPR_U32(ctx, 31, 0x485604u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4855FCu, 0x485604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485604u;
label_485604:
    // 0x485604: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x485604u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_485608:
    // 0x485608: 0x1600ffe1  bnez        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x485608u;
    {
        const bool branch_taken_0x485608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x485608) {
            ctx->pc = 0x485590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485590;
        }
    }
    ctx->pc = 0x485610u;
    // 0x485610: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x485610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_485614:
    // 0x485614: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x485614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x485618: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x485618u;
    {
        const bool branch_taken_0x485618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x485618) {
            ctx->pc = 0x485570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485570;
        }
    }
    ctx->pc = 0x485620u;
    // 0x485620: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x485620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x485624: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x485624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x485628: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x485628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x48562c: 0xc04f4d0  jal         func_13D340
    ctx->pc = 0x48562Cu;
    SET_GPR_U32(ctx, 31, 0x485634u);
    ctx->pc = 0x13D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D340u, 0x48562Cu, 0x485634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485634u;
label_485634:
    // 0x485634: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x485634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x485638: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x485638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48563c: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x48563Cu;
    SET_GPR_U32(ctx, 31, 0x485644u);
    ctx->pc = 0x137F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F50u, 0x48563Cu, 0x485644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485644u;
label_485644:
    // 0x485644: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x485644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x485648: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x485648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48564c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48564cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x485650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x485650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x485654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x485654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x485658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48565c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48565cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485664: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x485664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x485668: 0x3e00008  jr          $ra
    ctx->pc = 0x485668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485670u;
}
