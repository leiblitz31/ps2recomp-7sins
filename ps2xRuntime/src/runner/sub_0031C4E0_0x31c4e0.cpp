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

// Function: sub_0031C4E0
// Address: 0x31c4e0 - 0x31c840
void sub_0031C4E0_0x31c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C4E0_0x31c4e0");
#endif

    switch (ctx->pc) {
        case 0x31c4e0u: goto label_31c4e0;
        case 0x31c4e4u: goto label_31c4e4;
        case 0x31c4e8u: goto label_31c4e8;
        case 0x31c4ecu: goto label_31c4ec;
        case 0x31c4f0u: goto label_31c4f0;
        case 0x31c4f4u: goto label_31c4f4;
        case 0x31c4f8u: goto label_31c4f8;
        case 0x31c4fcu: goto label_31c4fc;
        case 0x31c500u: goto label_31c500;
        case 0x31c504u: goto label_31c504;
        case 0x31c508u: goto label_31c508;
        case 0x31c50cu: goto label_31c50c;
        case 0x31c510u: goto label_31c510;
        case 0x31c514u: goto label_31c514;
        case 0x31c518u: goto label_31c518;
        case 0x31c51cu: goto label_31c51c;
        case 0x31c520u: goto label_31c520;
        case 0x31c524u: goto label_31c524;
        case 0x31c528u: goto label_31c528;
        case 0x31c52cu: goto label_31c52c;
        case 0x31c530u: goto label_31c530;
        case 0x31c534u: goto label_31c534;
        case 0x31c538u: goto label_31c538;
        case 0x31c53cu: goto label_31c53c;
        case 0x31c540u: goto label_31c540;
        case 0x31c544u: goto label_31c544;
        case 0x31c548u: goto label_31c548;
        case 0x31c54cu: goto label_31c54c;
        case 0x31c550u: goto label_31c550;
        case 0x31c554u: goto label_31c554;
        case 0x31c558u: goto label_31c558;
        case 0x31c55cu: goto label_31c55c;
        case 0x31c560u: goto label_31c560;
        case 0x31c564u: goto label_31c564;
        case 0x31c568u: goto label_31c568;
        case 0x31c56cu: goto label_31c56c;
        case 0x31c570u: goto label_31c570;
        case 0x31c574u: goto label_31c574;
        case 0x31c578u: goto label_31c578;
        case 0x31c57cu: goto label_31c57c;
        case 0x31c580u: goto label_31c580;
        case 0x31c584u: goto label_31c584;
        case 0x31c588u: goto label_31c588;
        case 0x31c58cu: goto label_31c58c;
        case 0x31c590u: goto label_31c590;
        case 0x31c594u: goto label_31c594;
        case 0x31c598u: goto label_31c598;
        case 0x31c59cu: goto label_31c59c;
        case 0x31c5a0u: goto label_31c5a0;
        case 0x31c5a4u: goto label_31c5a4;
        case 0x31c5a8u: goto label_31c5a8;
        case 0x31c5acu: goto label_31c5ac;
        case 0x31c5b0u: goto label_31c5b0;
        case 0x31c5b4u: goto label_31c5b4;
        case 0x31c5b8u: goto label_31c5b8;
        case 0x31c5bcu: goto label_31c5bc;
        case 0x31c5c0u: goto label_31c5c0;
        case 0x31c5c4u: goto label_31c5c4;
        case 0x31c5c8u: goto label_31c5c8;
        case 0x31c5ccu: goto label_31c5cc;
        case 0x31c5d0u: goto label_31c5d0;
        case 0x31c5d4u: goto label_31c5d4;
        case 0x31c5d8u: goto label_31c5d8;
        case 0x31c5dcu: goto label_31c5dc;
        case 0x31c5e0u: goto label_31c5e0;
        case 0x31c5e4u: goto label_31c5e4;
        case 0x31c5e8u: goto label_31c5e8;
        case 0x31c5ecu: goto label_31c5ec;
        case 0x31c5f0u: goto label_31c5f0;
        case 0x31c5f4u: goto label_31c5f4;
        case 0x31c5f8u: goto label_31c5f8;
        case 0x31c5fcu: goto label_31c5fc;
        case 0x31c600u: goto label_31c600;
        case 0x31c604u: goto label_31c604;
        case 0x31c608u: goto label_31c608;
        case 0x31c60cu: goto label_31c60c;
        case 0x31c610u: goto label_31c610;
        case 0x31c614u: goto label_31c614;
        case 0x31c618u: goto label_31c618;
        case 0x31c61cu: goto label_31c61c;
        case 0x31c620u: goto label_31c620;
        case 0x31c624u: goto label_31c624;
        case 0x31c628u: goto label_31c628;
        case 0x31c62cu: goto label_31c62c;
        case 0x31c630u: goto label_31c630;
        case 0x31c634u: goto label_31c634;
        case 0x31c638u: goto label_31c638;
        case 0x31c63cu: goto label_31c63c;
        case 0x31c640u: goto label_31c640;
        case 0x31c644u: goto label_31c644;
        case 0x31c648u: goto label_31c648;
        case 0x31c64cu: goto label_31c64c;
        case 0x31c650u: goto label_31c650;
        case 0x31c654u: goto label_31c654;
        case 0x31c658u: goto label_31c658;
        case 0x31c65cu: goto label_31c65c;
        case 0x31c660u: goto label_31c660;
        case 0x31c664u: goto label_31c664;
        case 0x31c668u: goto label_31c668;
        case 0x31c66cu: goto label_31c66c;
        case 0x31c670u: goto label_31c670;
        case 0x31c674u: goto label_31c674;
        case 0x31c678u: goto label_31c678;
        case 0x31c67cu: goto label_31c67c;
        case 0x31c680u: goto label_31c680;
        case 0x31c684u: goto label_31c684;
        case 0x31c688u: goto label_31c688;
        case 0x31c68cu: goto label_31c68c;
        case 0x31c690u: goto label_31c690;
        case 0x31c694u: goto label_31c694;
        case 0x31c698u: goto label_31c698;
        case 0x31c69cu: goto label_31c69c;
        case 0x31c6a0u: goto label_31c6a0;
        case 0x31c6a4u: goto label_31c6a4;
        case 0x31c6a8u: goto label_31c6a8;
        case 0x31c6acu: goto label_31c6ac;
        case 0x31c6b0u: goto label_31c6b0;
        case 0x31c6b4u: goto label_31c6b4;
        case 0x31c6b8u: goto label_31c6b8;
        case 0x31c6bcu: goto label_31c6bc;
        case 0x31c6c0u: goto label_31c6c0;
        case 0x31c6c4u: goto label_31c6c4;
        case 0x31c6c8u: goto label_31c6c8;
        case 0x31c6ccu: goto label_31c6cc;
        case 0x31c6d0u: goto label_31c6d0;
        case 0x31c6d4u: goto label_31c6d4;
        case 0x31c6d8u: goto label_31c6d8;
        case 0x31c6dcu: goto label_31c6dc;
        case 0x31c6e0u: goto label_31c6e0;
        case 0x31c6e4u: goto label_31c6e4;
        case 0x31c6e8u: goto label_31c6e8;
        case 0x31c6ecu: goto label_31c6ec;
        case 0x31c6f0u: goto label_31c6f0;
        case 0x31c6f4u: goto label_31c6f4;
        case 0x31c6f8u: goto label_31c6f8;
        case 0x31c6fcu: goto label_31c6fc;
        case 0x31c700u: goto label_31c700;
        case 0x31c704u: goto label_31c704;
        case 0x31c708u: goto label_31c708;
        case 0x31c70cu: goto label_31c70c;
        case 0x31c710u: goto label_31c710;
        case 0x31c714u: goto label_31c714;
        case 0x31c718u: goto label_31c718;
        case 0x31c71cu: goto label_31c71c;
        case 0x31c720u: goto label_31c720;
        case 0x31c724u: goto label_31c724;
        case 0x31c728u: goto label_31c728;
        case 0x31c72cu: goto label_31c72c;
        case 0x31c730u: goto label_31c730;
        case 0x31c734u: goto label_31c734;
        case 0x31c738u: goto label_31c738;
        case 0x31c73cu: goto label_31c73c;
        case 0x31c740u: goto label_31c740;
        case 0x31c744u: goto label_31c744;
        case 0x31c748u: goto label_31c748;
        case 0x31c74cu: goto label_31c74c;
        case 0x31c750u: goto label_31c750;
        case 0x31c754u: goto label_31c754;
        case 0x31c758u: goto label_31c758;
        case 0x31c75cu: goto label_31c75c;
        case 0x31c760u: goto label_31c760;
        case 0x31c764u: goto label_31c764;
        case 0x31c768u: goto label_31c768;
        case 0x31c76cu: goto label_31c76c;
        case 0x31c770u: goto label_31c770;
        case 0x31c774u: goto label_31c774;
        case 0x31c778u: goto label_31c778;
        case 0x31c77cu: goto label_31c77c;
        case 0x31c780u: goto label_31c780;
        case 0x31c784u: goto label_31c784;
        case 0x31c788u: goto label_31c788;
        case 0x31c78cu: goto label_31c78c;
        case 0x31c790u: goto label_31c790;
        case 0x31c794u: goto label_31c794;
        case 0x31c798u: goto label_31c798;
        case 0x31c79cu: goto label_31c79c;
        case 0x31c7a0u: goto label_31c7a0;
        case 0x31c7a4u: goto label_31c7a4;
        case 0x31c7a8u: goto label_31c7a8;
        case 0x31c7acu: goto label_31c7ac;
        case 0x31c7b0u: goto label_31c7b0;
        case 0x31c7b4u: goto label_31c7b4;
        case 0x31c7b8u: goto label_31c7b8;
        case 0x31c7bcu: goto label_31c7bc;
        case 0x31c7c0u: goto label_31c7c0;
        case 0x31c7c4u: goto label_31c7c4;
        case 0x31c7c8u: goto label_31c7c8;
        case 0x31c7ccu: goto label_31c7cc;
        case 0x31c7d0u: goto label_31c7d0;
        case 0x31c7d4u: goto label_31c7d4;
        case 0x31c7d8u: goto label_31c7d8;
        case 0x31c7dcu: goto label_31c7dc;
        case 0x31c7e0u: goto label_31c7e0;
        case 0x31c7e4u: goto label_31c7e4;
        case 0x31c7e8u: goto label_31c7e8;
        case 0x31c7ecu: goto label_31c7ec;
        case 0x31c7f0u: goto label_31c7f0;
        case 0x31c7f4u: goto label_31c7f4;
        case 0x31c7f8u: goto label_31c7f8;
        case 0x31c7fcu: goto label_31c7fc;
        case 0x31c800u: goto label_31c800;
        case 0x31c804u: goto label_31c804;
        case 0x31c808u: goto label_31c808;
        case 0x31c80cu: goto label_31c80c;
        case 0x31c810u: goto label_31c810;
        case 0x31c814u: goto label_31c814;
        case 0x31c818u: goto label_31c818;
        case 0x31c81cu: goto label_31c81c;
        case 0x31c820u: goto label_31c820;
        case 0x31c824u: goto label_31c824;
        case 0x31c828u: goto label_31c828;
        case 0x31c82cu: goto label_31c82c;
        case 0x31c830u: goto label_31c830;
        case 0x31c834u: goto label_31c834;
        case 0x31c838u: goto label_31c838;
        case 0x31c83cu: goto label_31c83c;
        default: break;
    }

    ctx->pc = 0x31c4e0u;

label_31c4e0:
    // 0x31c4e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x31c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_31c4e4:
    // 0x31c4e4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x31c4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_31c4e8:
    // 0x31c4e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_31c4ec:
    // 0x31c4ec: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x31c4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_31c4f0:
    // 0x31c4f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31c4f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31c4f4:
    // 0x31c4f4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x31c4f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31c4f8:
    // 0x31c4f8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x31c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_31c4fc:
    // 0x31c4fc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x31c4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_31c500:
    // 0x31c500: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x31c500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_31c504:
    // 0x31c504: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x31c504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_31c508:
    // 0x31c508: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x31c508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_31c50c:
    // 0x31c50c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x31c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_31c510:
    // 0x31c510: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31c510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_31c514:
    // 0x31c514: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x31c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_31c518:
    // 0x31c518: 0xc103468  jal         func_40D1A0
label_31c51c:
    if (ctx->pc == 0x31C51Cu) {
        ctx->pc = 0x31C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C518u;
        // 0x31c51c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C520u;
        goto label_31c520;
    }
    ctx->pc = 0x31C518u;
    SET_GPR_U32(ctx, 31, 0x31C520u);
    ctx->pc = 0x31C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C518u;
    // 0x31c51c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31C518u, 0x31C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C520u;
label_31c520:
    // 0x31c520: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_31c524:
    if (ctx->pc == 0x31C524u) {
        ctx->pc = 0x31C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C520u;
        // 0x31c524: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C528u;
        goto label_31c528;
    }
    ctx->pc = 0x31C520u;
    {
        const bool branch_taken_0x31c520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C520u;
        // 0x31c524: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c520) {
            ctx->pc = 0x31C5D0u;
            goto label_31c5d0;
        }
    }
    ctx->pc = 0x31C528u;
label_31c528:
    // 0x31c528: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31c528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31c52c:
    // 0x31c52c: 0xc0c758c  jal         func_31D630
label_31c530:
    if (ctx->pc == 0x31C530u) {
        ctx->pc = 0x31C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C52Cu;
        // 0x31c530: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C534u;
        goto label_31c534;
    }
    ctx->pc = 0x31C52Cu;
    SET_GPR_U32(ctx, 31, 0x31C534u);
    ctx->pc = 0x31C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C52Cu;
    // 0x31c530: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D630u, 0x31C52Cu, 0x31C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C534u;
label_31c534:
    // 0x31c534: 0x8f83a5c0  lw          $v1, -0x5A40($gp)
    ctx->pc = 0x31c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31c538:
    // 0x31c538: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x31c538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_31c53c:
    // 0x31c53c: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x31c53cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31c540:
    // 0x31c540: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x31c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_31c544:
    // 0x31c544: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_31c548:
    if (ctx->pc == 0x31C548u) {
        ctx->pc = 0x31C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C544u;
        // 0x31c548: 0x24150122  addiu       $s5, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C54Cu;
        goto label_31c54c;
    }
    ctx->pc = 0x31C544u;
    {
        const bool branch_taken_0x31c544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C544u;
        // 0x31c548: 0x24150122  addiu       $s5, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c544) {
            ctx->pc = 0x31C808u;
            goto label_31c808;
        }
    }
    ctx->pc = 0x31C54Cu;
label_31c54c:
    // 0x31c54c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x31c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_31c550:
    // 0x31c550: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x31c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_31c554:
    // 0x31c554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31c554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31c558:
    // 0x31c558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31c558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31c55c:
    // 0x31c55c: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x31c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_31c560:
    // 0x31c560: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31c560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31c564:
    // 0x31c564: 0xc103468  jal         func_40D1A0
label_31c568:
    if (ctx->pc == 0x31C568u) {
        ctx->pc = 0x31C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C564u;
        // 0x31c568: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C56Cu;
        goto label_31c56c;
    }
    ctx->pc = 0x31C564u;
    SET_GPR_U32(ctx, 31, 0x31C56Cu);
    ctx->pc = 0x31C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C564u;
    // 0x31c568: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31C564u, 0x31C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C56Cu;
label_31c56c:
    // 0x31c56c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_31c570:
    if (ctx->pc == 0x31C570u) {
        ctx->pc = 0x31C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C56Cu;
        // 0x31c570: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C574u;
        goto label_31c574;
    }
    ctx->pc = 0x31C56Cu;
    {
        const bool branch_taken_0x31c56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C56Cu;
        // 0x31c570: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c56c) {
            ctx->pc = 0x31C5D0u;
            goto label_31c5d0;
        }
    }
    ctx->pc = 0x31C574u;
label_31c574:
    // 0x31c574: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_31c578:
    if (ctx->pc == 0x31C578u) {
        ctx->pc = 0x31C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C574u;
        // 0x31c578: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C57Cu;
        goto label_31c57c;
    }
    ctx->pc = 0x31C574u;
    {
        const bool branch_taken_0x31c574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C574u;
        // 0x31c578: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c574) {
            ctx->pc = 0x31C5D8u;
            goto label_31c5d8;
        }
    }
    ctx->pc = 0x31C57Cu;
label_31c57c:
    // 0x31c57c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31c57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31c580:
    // 0x31c580: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x31c580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_31c584:
    // 0x31c584: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x31c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_31c588:
    // 0x31c588: 0x40f809  jalr        $v0
label_31c58c:
    if (ctx->pc == 0x31C58Cu) {
        ctx->pc = 0x31C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C588u;
        // 0x31c58c: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C590u;
        goto label_31c590;
    }
    ctx->pc = 0x31C588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C590u);
        ctx->pc = 0x31C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C588u;
        // 0x31c58c: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C588u, 0x31C590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C590u;
label_31c590:
    // 0x31c590: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_31c594:
    if (ctx->pc == 0x31C594u) {
        ctx->pc = 0x31C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C590u;
        // 0x31c594: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C598u;
        goto label_31c598;
    }
    ctx->pc = 0x31C590u;
    {
        const bool branch_taken_0x31c590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C590u;
        // 0x31c594: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c590) {
            ctx->pc = 0x31C5B8u;
            goto label_31c5b8;
        }
    }
    ctx->pc = 0x31C598u;
label_31c598:
    // 0x31c598: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x31c598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_31c59c:
    // 0x31c59c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31c5a0:
    // 0x31c5a0: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x31c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
label_31c5a4:
    // 0x31c5a4: 0xc1035f6  jal         func_40D7D8
label_31c5a8:
    if (ctx->pc == 0x31C5A8u) {
        ctx->pc = 0x31C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5A4u;
        // 0x31c5a8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5ACu;
        goto label_31c5ac;
    }
    ctx->pc = 0x31C5A4u;
    SET_GPR_U32(ctx, 31, 0x31C5ACu);
    ctx->pc = 0x31C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5A4u;
    // 0x31c5a8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31C5A4u, 0x31C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5ACu;
label_31c5ac:
    // 0x31c5ac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x31c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_31c5b0:
    // 0x31c5b0: 0x10000051  b           . + 4 + (0x51 << 2)
label_31c5b4:
    if (ctx->pc == 0x31C5B4u) {
        ctx->pc = 0x31C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5B0u;
        // 0x31c5b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5B8u;
        goto label_31c5b8;
    }
    ctx->pc = 0x31C5B0u;
    {
        const bool branch_taken_0x31c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5B0u;
        // 0x31c5b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5b0) {
            ctx->pc = 0x31C6F8u;
            goto label_31c6f8;
        }
    }
    ctx->pc = 0x31C5B8u;
label_31c5b8:
    // 0x31c5b8: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x31c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_31c5bc:
    // 0x31c5bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31c5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31c5c0:
    // 0x31c5c0: 0xc10480a  jal         func_412028
label_31c5c4:
    if (ctx->pc == 0x31C5C4u) {
        ctx->pc = 0x31C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5C0u;
        // 0x31c5c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5C8u;
        goto label_31c5c8;
    }
    ctx->pc = 0x31C5C0u;
    SET_GPR_U32(ctx, 31, 0x31C5C8u);
    ctx->pc = 0x31C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5C0u;
    // 0x31c5c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x31C5C0u, 0x31C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5C8u;
label_31c5c8:
    // 0x31c5c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_31c5cc:
    if (ctx->pc == 0x31C5CCu) {
        ctx->pc = 0x31C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5C8u;
        // 0x31c5cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5D0u;
        goto label_31c5d0;
    }
    ctx->pc = 0x31C5C8u;
    {
        const bool branch_taken_0x31c5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5C8u;
        // 0x31c5cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5c8) {
            ctx->pc = 0x31C5E0u;
            goto label_31c5e0;
        }
    }
    ctx->pc = 0x31C5D0u;
label_31c5d0:
    // 0x31c5d0: 0x1000008e  b           . + 4 + (0x8E << 2)
label_31c5d4:
    if (ctx->pc == 0x31C5D4u) {
        ctx->pc = 0x31C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5D0u;
        // 0x31c5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5D8u;
        goto label_31c5d8;
    }
    ctx->pc = 0x31C5D0u;
    {
        const bool branch_taken_0x31c5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5D0u;
        // 0x31c5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5d0) {
            ctx->pc = 0x31C80Cu;
            goto label_31c80c;
        }
    }
    ctx->pc = 0x31C5D8u;
label_31c5d8:
    // 0x31c5d8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x31c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_31c5dc:
    // 0x31c5dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31c5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31c5e0:
    // 0x31c5e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31c5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31c5e4:
    // 0x31c5e4: 0xc103468  jal         func_40D1A0
label_31c5e8:
    if (ctx->pc == 0x31C5E8u) {
        ctx->pc = 0x31C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5E4u;
        // 0x31c5e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5ECu;
        goto label_31c5ec;
    }
    ctx->pc = 0x31C5E4u;
    SET_GPR_U32(ctx, 31, 0x31C5ECu);
    ctx->pc = 0x31C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5E4u;
    // 0x31c5e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31C5E4u, 0x31C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5ECu;
label_31c5ec:
    // 0x31c5ec: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_31c5f0:
    if (ctx->pc == 0x31C5F0u) {
        ctx->pc = 0x31C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5ECu;
        // 0x31c5f0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5F4u;
        goto label_31c5f4;
    }
    ctx->pc = 0x31C5ECu;
    {
        const bool branch_taken_0x31c5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5ECu;
        // 0x31c5f0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5ec) {
            ctx->pc = 0x31C5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c5d0;
        }
    }
    ctx->pc = 0x31C5F4u;
label_31c5f4:
    // 0x31c5f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_31c5f8:
    // 0x31c5f8: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x31c5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_31c5fc:
    // 0x31c5fc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31c600:
    // 0x31c600: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x31c600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_31c604:
    // 0x31c604: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x31c604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_31c608:
    // 0x31c608: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x31c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_31c60c:
    // 0x31c60c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x31c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31c610:
    // 0x31c610: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x31c610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_31c614:
    // 0x31c614: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x31c614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_31c618:
    // 0x31c618: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x31c618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_31c61c:
    // 0x31c61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31c61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31c620:
    // 0x31c620: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x31c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_31c624:
    // 0x31c624: 0x40f809  jalr        $v0
label_31c628:
    if (ctx->pc == 0x31C628u) {
        ctx->pc = 0x31C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C624u;
        // 0x31c628: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C62Cu;
        goto label_31c62c;
    }
    ctx->pc = 0x31C624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C62Cu);
        ctx->pc = 0x31C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C624u;
        // 0x31c628: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C624u, 0x31C62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C62Cu;
label_31c62c:
    // 0x31c62c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_31c630:
    if (ctx->pc == 0x31C630u) {
        ctx->pc = 0x31C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C62Cu;
        // 0x31c630: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C634u;
        goto label_31c634;
    }
    ctx->pc = 0x31C62Cu;
    {
        const bool branch_taken_0x31c62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C62Cu;
        // 0x31c630: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c62c) {
            ctx->pc = 0x31C658u;
            goto label_31c658;
        }
    }
    ctx->pc = 0x31C634u;
label_31c634:
    // 0x31c634: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31c634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31c638:
    // 0x31c638: 0xafb50020  sw          $s5, 0x20($sp)
    ctx->pc = 0x31c638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
label_31c63c:
    // 0x31c63c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31c63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31c640:
    // 0x31c640: 0xc1035f6  jal         func_40D7D8
label_31c644:
    if (ctx->pc == 0x31C644u) {
        ctx->pc = 0x31C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C640u;
        // 0x31c644: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C648u;
        goto label_31c648;
    }
    ctx->pc = 0x31C640u;
    SET_GPR_U32(ctx, 31, 0x31C648u);
    ctx->pc = 0x31C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C640u;
    // 0x31c644: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31C640u, 0x31C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C648u;
label_31c648:
    // 0x31c648: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x31c648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_31c64c:
    // 0x31c64c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_31c650:
    if (ctx->pc == 0x31C650u) {
        ctx->pc = 0x31C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C64Cu;
        // 0x31c650: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C654u;
        goto label_31c654;
    }
    ctx->pc = 0x31C64Cu;
    {
        const bool branch_taken_0x31c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C64Cu;
        // 0x31c650: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c64c) {
            ctx->pc = 0x31C6F8u;
            goto label_31c6f8;
        }
    }
    ctx->pc = 0x31C654u;
label_31c654:
    // 0x31c654: 0x0  nop
    ctx->pc = 0x31c654u;
    // NOP
label_31c658:
    // 0x31c658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31c658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31c65c:
    // 0x31c65c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31c65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31c660:
    // 0x31c660: 0xc10480a  jal         func_412028
label_31c664:
    if (ctx->pc == 0x31C664u) {
        ctx->pc = 0x31C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C660u;
        // 0x31c664: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C668u;
        goto label_31c668;
    }
    ctx->pc = 0x31C660u;
    SET_GPR_U32(ctx, 31, 0x31C668u);
    ctx->pc = 0x31C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C660u;
    // 0x31c664: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x31C660u, 0x31C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C668u;
label_31c668:
    // 0x31c668: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_31c66c:
    if (ctx->pc == 0x31C66Cu) {
        ctx->pc = 0x31C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C668u;
        // 0x31c66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C670u;
        goto label_31c670;
    }
    ctx->pc = 0x31C668u;
    {
        const bool branch_taken_0x31c668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C668u;
        // 0x31c66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c668) {
            ctx->pc = 0x31C80Cu;
            goto label_31c80c;
        }
    }
    ctx->pc = 0x31C670u;
label_31c670:
    // 0x31c670: 0x8e490018  lw          $t1, 0x18($s2)
    ctx->pc = 0x31c670u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_31c674:
    // 0x31c674: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
label_31c678:
    if (ctx->pc == 0x31C678u) {
        ctx->pc = 0x31C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C674u;
        // 0x31c678: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C67Cu;
        goto label_31c67c;
    }
    ctx->pc = 0x31C674u;
    {
        const bool branch_taken_0x31c674 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c674) {
            ctx->pc = 0x31C678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C674u;
            // 0x31c678: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C684u;
            goto label_31c684;
        }
    }
    ctx->pc = 0x31C67Cu;
label_31c67c:
    // 0x31c67c: 0x10000055  b           . + 4 + (0x55 << 2)
label_31c680:
    if (ctx->pc == 0x31C680u) {
        ctx->pc = 0x31C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C67Cu;
        // 0x31c680: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C684u;
        goto label_31c684;
    }
    ctx->pc = 0x31C67Cu;
    {
        const bool branch_taken_0x31c67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C67Cu;
        // 0x31c680: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c67c) {
            ctx->pc = 0x31C7D4u;
            goto label_31c7d4;
        }
    }
    ctx->pc = 0x31C684u;
label_31c684:
    // 0x31c684: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x31c684u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31c688:
    // 0x31c688: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31c688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31c68c:
    // 0x31c68c: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x31c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_31c690:
    // 0x31c690: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x31c690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_31c694:
    // 0x31c694: 0x30c70010  andi        $a3, $a2, 0x10
    ctx->pc = 0x31c694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_31c698:
    // 0x31c698: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x31c698u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_31c69c:
    // 0x31c69c: 0x30c80008  andi        $t0, $a2, 0x8
    ctx->pc = 0x31c69cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_31c6a0:
    // 0x31c6a0: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x31c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_31c6a4:
    // 0x31c6a4: 0x30c60004  andi        $a2, $a2, 0x4
    ctx->pc = 0x31c6a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_31c6a8:
    // 0x31c6a8: 0xa7200a  movz        $a0, $a1, $a3
    ctx->pc = 0x31c6a8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_31c6ac:
    // 0x31c6ac: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x31c6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_31c6b0:
    // 0x31c6b0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31c6b4:
    // 0x31c6b4: 0x88800a  movz        $s0, $a0, $t0
    ctx->pc = 0x31c6b4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_31c6b8:
    // 0x31c6b8: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x31c6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_31c6bc:
    // 0x31c6bc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x31c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_31c6c0:
    // 0x31c6c0: 0x66800b  movn        $s0, $v1, $a2
    ctx->pc = 0x31c6c0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_31c6c4:
    // 0x31c6c4: 0x2098018  mult        $s0, $s0, $t1
    ctx->pc = 0x31c6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_31c6c8:
    // 0x31c6c8: 0x40f809  jalr        $v0
label_31c6cc:
    if (ctx->pc == 0x31C6CCu) {
        ctx->pc = 0x31C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6C8u;
        // 0x31c6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C6D0u;
        goto label_31c6d0;
    }
    ctx->pc = 0x31C6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C6D0u);
        ctx->pc = 0x31C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6C8u;
        // 0x31c6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C6C8u, 0x31C6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C6D0u;
label_31c6d0:
    // 0x31c6d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31c6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31c6d4:
    // 0x31c6d4: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
label_31c6d8:
    if (ctx->pc == 0x31C6D8u) {
        ctx->pc = 0x31C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6D4u;
        // 0x31c6d8: 0xae45001c  sw          $a1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C6DCu;
        goto label_31c6dc;
    }
    ctx->pc = 0x31C6D4u;
    {
        const bool branch_taken_0x31c6d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6D4u;
        // 0x31c6d8: 0xae45001c  sw          $a1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6d4) {
            ctx->pc = 0x31C708u;
            goto label_31c708;
        }
    }
    ctx->pc = 0x31C6DCu;
label_31c6dc:
    // 0x31c6dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31c6e0:
    // 0x31c6e0: 0xafb50030  sw          $s5, 0x30($sp)
    ctx->pc = 0x31c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
label_31c6e4:
    // 0x31c6e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31c6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31c6e8:
    // 0x31c6e8: 0xc1035f6  jal         func_40D7D8
label_31c6ec:
    if (ctx->pc == 0x31C6ECu) {
        ctx->pc = 0x31C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6E8u;
        // 0x31c6ec: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C6F0u;
        goto label_31c6f0;
    }
    ctx->pc = 0x31C6E8u;
    SET_GPR_U32(ctx, 31, 0x31C6F0u);
    ctx->pc = 0x31C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C6E8u;
    // 0x31c6ec: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31C6E8u, 0x31C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6F0u;
label_31c6f0:
    // 0x31c6f0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x31c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_31c6f4:
    // 0x31c6f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_31c6f8:
    // 0x31c6f8: 0xc103628  jal         func_40D8A0
label_31c6fc:
    if (ctx->pc == 0x31C6FCu) {
        ctx->pc = 0x31C700u;
        goto label_31c700;
    }
    ctx->pc = 0x31C6F8u;
    SET_GPR_U32(ctx, 31, 0x31C700u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31C6F8u, 0x31C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C700u;
label_31c700:
    // 0x31c700: 0x10000042  b           . + 4 + (0x42 << 2)
label_31c704:
    if (ctx->pc == 0x31C704u) {
        ctx->pc = 0x31C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C700u;
        // 0x31c704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C708u;
        goto label_31c708;
    }
    ctx->pc = 0x31C700u;
    {
        const bool branch_taken_0x31c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C700u;
        // 0x31c704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c700) {
            ctx->pc = 0x31C80Cu;
            goto label_31c80c;
        }
    }
    ctx->pc = 0x31C708u;
label_31c708:
    // 0x31c708: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x31c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_31c70c:
    // 0x31c70c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_31c710:
    // 0x31c710: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_31c714:
    if (ctx->pc == 0x31C714u) {
        ctx->pc = 0x31C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C710u;
        // 0x31c714: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C718u;
        goto label_31c718;
    }
    ctx->pc = 0x31C710u;
    {
        const bool branch_taken_0x31c710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C710u;
        // 0x31c714: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c710) {
            ctx->pc = 0x31C73Cu;
            goto label_31c73c;
        }
    }
    ctx->pc = 0x31C718u;
label_31c718:
    // 0x31c718: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x31c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_31c71c:
    // 0x31c71c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31c71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31c720:
    // 0x31c720: 0x548018  mult        $s0, $v0, $s4
    ctx->pc = 0x31c720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_31c724:
    // 0x31c724: 0xc103454  jal         func_40D150
label_31c728:
    if (ctx->pc == 0x31C728u) {
        ctx->pc = 0x31C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C724u;
        // 0x31c728: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C72Cu;
        goto label_31c72c;
    }
    ctx->pc = 0x31C724u;
    SET_GPR_U32(ctx, 31, 0x31C72Cu);
    ctx->pc = 0x31C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C724u;
    // 0x31c728: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x31C724u, 0x31C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C72Cu;
label_31c72c:
    // 0x31c72c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_31c730:
    if (ctx->pc == 0x31C730u) {
        ctx->pc = 0x31C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C72Cu;
        // 0x31c730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C734u;
        goto label_31c734;
    }
    ctx->pc = 0x31C72Cu;
    {
        const bool branch_taken_0x31c72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C72Cu;
        // 0x31c730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c72c) {
            ctx->pc = 0x31C80Cu;
            goto label_31c80c;
        }
    }
    ctx->pc = 0x31C734u;
label_31c734:
    // 0x31c734: 0xae510020  sw          $s1, 0x20($s2)
    ctx->pc = 0x31c734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 17));
label_31c738:
    // 0x31c738: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x31c738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_31c73c:
    // 0x31c73c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x31c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_31c740:
    // 0x31c740: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x31c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_31c744:
    // 0x31c744: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_31c748:
    if (ctx->pc == 0x31C748u) {
        ctx->pc = 0x31C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C744u;
        // 0x31c748: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C74Cu;
        goto label_31c74c;
    }
    ctx->pc = 0x31C744u;
    {
        const bool branch_taken_0x31c744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C744u;
        // 0x31c748: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c744) {
            ctx->pc = 0x31C774u;
            goto label_31c774;
        }
    }
    ctx->pc = 0x31C74Cu;
label_31c74c:
    // 0x31c74c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x31c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_31c750:
    // 0x31c750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31c750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31c754:
    // 0x31c754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c758:
    // 0x31c758: 0x438018  mult        $s0, $v0, $v1
    ctx->pc = 0x31c758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_31c75c:
    // 0x31c75c: 0xc103454  jal         func_40D150
label_31c760:
    if (ctx->pc == 0x31C760u) {
        ctx->pc = 0x31C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C75Cu;
        // 0x31c760: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C764u;
        goto label_31c764;
    }
    ctx->pc = 0x31C75Cu;
    SET_GPR_U32(ctx, 31, 0x31C764u);
    ctx->pc = 0x31C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C75Cu;
    // 0x31c760: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x31C75Cu, 0x31C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C764u;
label_31c764:
    // 0x31c764: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_31c768:
    if (ctx->pc == 0x31C768u) {
        ctx->pc = 0x31C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C764u;
        // 0x31c768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C76Cu;
        goto label_31c76c;
    }
    ctx->pc = 0x31C764u;
    {
        const bool branch_taken_0x31c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C764u;
        // 0x31c768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c764) {
            ctx->pc = 0x31C80Cu;
            goto label_31c80c;
        }
    }
    ctx->pc = 0x31C76Cu;
label_31c76c:
    // 0x31c76c: 0xae510024  sw          $s1, 0x24($s2)
    ctx->pc = 0x31c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
label_31c770:
    // 0x31c770: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x31c770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_31c774:
    // 0x31c774: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x31c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_31c778:
    // 0x31c778: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31c778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_31c77c:
    // 0x31c77c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_31c780:
    if (ctx->pc == 0x31C780u) {
        ctx->pc = 0x31C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C77Cu;
        // 0x31c780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C784u;
        goto label_31c784;
    }
    ctx->pc = 0x31C77Cu;
    {
        const bool branch_taken_0x31c77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C77Cu;
        // 0x31c780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c77c) {
            ctx->pc = 0x31C7A8u;
            goto label_31c7a8;
        }
    }
    ctx->pc = 0x31C784u;
label_31c784:
    // 0x31c784: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x31c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_31c788:
    // 0x31c788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c78c:
    // 0x31c78c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x31c78cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31c790:
    // 0x31c790: 0xc10480a  jal         func_412028
label_31c794:
    if (ctx->pc == 0x31C794u) {
        ctx->pc = 0x31C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C790u;
        // 0x31c794: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C798u;
        goto label_31c798;
    }
    ctx->pc = 0x31C790u;
    SET_GPR_U32(ctx, 31, 0x31C798u);
    ctx->pc = 0x31C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C790u;
    // 0x31c794: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x31C790u, 0x31C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C798u;
label_31c798:
    // 0x31c798: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_31c79c:
    if (ctx->pc == 0x31C79Cu) {
        ctx->pc = 0x31C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C798u;
        // 0x31c79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C7A0u;
        goto label_31c7a0;
    }
    ctx->pc = 0x31C798u;
    {
        const bool branch_taken_0x31c798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C798u;
        // 0x31c79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c798) {
            ctx->pc = 0x31C80Cu;
            goto label_31c80c;
        }
    }
    ctx->pc = 0x31C7A0u;
label_31c7a0:
    // 0x31c7a0: 0xae510028  sw          $s1, 0x28($s2)
    ctx->pc = 0x31c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 17));
label_31c7a4:
    // 0x31c7a4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x31c7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_31c7a8:
    // 0x31c7a8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x31c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_31c7ac:
    // 0x31c7ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x31c7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_31c7b0:
    // 0x31c7b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_31c7b4:
    if (ctx->pc == 0x31C7B4u) {
        ctx->pc = 0x31C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7B0u;
        // 0x31c7b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C7B8u;
        goto label_31c7b8;
    }
    ctx->pc = 0x31C7B0u;
    {
        const bool branch_taken_0x31c7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7B0u;
        // 0x31c7b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7b0) {
            ctx->pc = 0x31C7D4u;
            goto label_31c7d4;
        }
    }
    ctx->pc = 0x31C7B8u;
label_31c7b8:
    // 0x31c7b8: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x31c7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_31c7bc:
    // 0x31c7bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c7c0:
    // 0x31c7c0: 0xc103454  jal         func_40D150
label_31c7c4:
    if (ctx->pc == 0x31C7C4u) {
        ctx->pc = 0x31C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7C0u;
        // 0x31c7c4: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C7C8u;
        goto label_31c7c8;
    }
    ctx->pc = 0x31C7C0u;
    SET_GPR_U32(ctx, 31, 0x31C7C8u);
    ctx->pc = 0x31C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7C0u;
    // 0x31c7c4: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x31C7C0u, 0x31C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7C8u;
label_31c7c8:
    // 0x31c7c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_31c7cc:
    if (ctx->pc == 0x31C7CCu) {
        ctx->pc = 0x31C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7C8u;
        // 0x31c7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C7D0u;
        goto label_31c7d0;
    }
    ctx->pc = 0x31C7C8u;
    {
        const bool branch_taken_0x31c7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7C8u;
        // 0x31c7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7c8) {
            ctx->pc = 0x31C80Cu;
            goto label_31c80c;
        }
    }
    ctx->pc = 0x31C7D0u;
label_31c7d0:
    // 0x31c7d0: 0xae51002c  sw          $s1, 0x2C($s2)
    ctx->pc = 0x31c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 17));
label_31c7d4:
    // 0x31c7d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31c7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31c7d8:
    // 0x31c7d8: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x31c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_31c7dc:
    // 0x31c7dc: 0xc103454  jal         func_40D150
label_31c7e0:
    if (ctx->pc == 0x31C7E0u) {
        ctx->pc = 0x31C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7DCu;
        // 0x31c7e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C7E4u;
        goto label_31c7e4;
    }
    ctx->pc = 0x31C7DCu;
    SET_GPR_U32(ctx, 31, 0x31C7E4u);
    ctx->pc = 0x31C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7DCu;
    // 0x31c7e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x31C7DCu, 0x31C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7E4u;
label_31c7e4:
    // 0x31c7e4: 0x1040ff7a  beqz        $v0, . + 4 + (-0x86 << 2)
label_31c7e8:
    if (ctx->pc == 0x31C7E8u) {
        ctx->pc = 0x31C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7E4u;
        // 0x31c7e8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C7ECu;
        goto label_31c7ec;
    }
    ctx->pc = 0x31C7E4u;
    {
        const bool branch_taken_0x31c7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7E4u;
        // 0x31c7e8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7e4) {
            ctx->pc = 0x31C5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c5d0;
        }
    }
    ctx->pc = 0x31C7ECu;
label_31c7ec:
    // 0x31c7ec: 0xae5e0000  sw          $fp, 0x0($s2)
    ctx->pc = 0x31c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 30));
label_31c7f0:
    // 0x31c7f0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x31c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_31c7f4:
    // 0x31c7f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31c7f8:
    // 0x31c7f8: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x31c7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31c7fc:
    // 0x31c7fc: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x31c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_31c800:
    // 0x31c800: 0x1440ff53  bnez        $v0, . + 4 + (-0xAD << 2)
label_31c804:
    if (ctx->pc == 0x31C804u) {
        ctx->pc = 0x31C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C800u;
        // 0x31c804: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C808u;
        goto label_31c808;
    }
    ctx->pc = 0x31C800u;
    {
        const bool branch_taken_0x31c800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C800u;
        // 0x31c804: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c800) {
            ctx->pc = 0x31C550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c550;
        }
    }
    ctx->pc = 0x31C808u;
label_31c808:
    // 0x31c808: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x31c808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31c80c:
    // 0x31c80c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x31c80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_31c810:
    // 0x31c810: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x31c810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_31c814:
    // 0x31c814: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x31c814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_31c818:
    // 0x31c818: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x31c818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31c81c:
    // 0x31c81c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x31c81cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31c820:
    // 0x31c820: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x31c820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31c824:
    // 0x31c824: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x31c824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31c828:
    // 0x31c828: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31c828u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31c82c:
    // 0x31c82c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x31c82cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31c830:
    // 0x31c830: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31c830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31c834:
    // 0x31c834: 0x3e00008  jr          $ra
label_31c838:
    if (ctx->pc == 0x31C838u) {
        ctx->pc = 0x31C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C834u;
        // 0x31c838: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C83Cu;
        goto label_31c83c;
    }
    ctx->pc = 0x31C834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C834u;
        // 0x31c838: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C83Cu;
label_31c83c:
    // 0x31c83c: 0x0  nop
    ctx->pc = 0x31c83cu;
    // NOP
    ctx->pc = 0x31c840u;
}
