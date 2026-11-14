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

// Function: sub_003A0628
// Address: 0x3a0628 - 0x3a0900
void sub_003A0628_0x3a0628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0628_0x3a0628");
#endif

    switch (ctx->pc) {
        case 0x3a0628u: goto label_3a0628;
        case 0x3a062cu: goto label_3a062c;
        case 0x3a0630u: goto label_3a0630;
        case 0x3a0634u: goto label_3a0634;
        case 0x3a0638u: goto label_3a0638;
        case 0x3a063cu: goto label_3a063c;
        case 0x3a0640u: goto label_3a0640;
        case 0x3a0644u: goto label_3a0644;
        case 0x3a0648u: goto label_3a0648;
        case 0x3a064cu: goto label_3a064c;
        case 0x3a0650u: goto label_3a0650;
        case 0x3a0654u: goto label_3a0654;
        case 0x3a0658u: goto label_3a0658;
        case 0x3a065cu: goto label_3a065c;
        case 0x3a0660u: goto label_3a0660;
        case 0x3a0664u: goto label_3a0664;
        case 0x3a0668u: goto label_3a0668;
        case 0x3a066cu: goto label_3a066c;
        case 0x3a0670u: goto label_3a0670;
        case 0x3a0674u: goto label_3a0674;
        case 0x3a0678u: goto label_3a0678;
        case 0x3a067cu: goto label_3a067c;
        case 0x3a0680u: goto label_3a0680;
        case 0x3a0684u: goto label_3a0684;
        case 0x3a0688u: goto label_3a0688;
        case 0x3a068cu: goto label_3a068c;
        case 0x3a0690u: goto label_3a0690;
        case 0x3a0694u: goto label_3a0694;
        case 0x3a0698u: goto label_3a0698;
        case 0x3a069cu: goto label_3a069c;
        case 0x3a06a0u: goto label_3a06a0;
        case 0x3a06a4u: goto label_3a06a4;
        case 0x3a06a8u: goto label_3a06a8;
        case 0x3a06acu: goto label_3a06ac;
        case 0x3a06b0u: goto label_3a06b0;
        case 0x3a06b4u: goto label_3a06b4;
        case 0x3a06b8u: goto label_3a06b8;
        case 0x3a06bcu: goto label_3a06bc;
        case 0x3a06c0u: goto label_3a06c0;
        case 0x3a06c4u: goto label_3a06c4;
        case 0x3a06c8u: goto label_3a06c8;
        case 0x3a06ccu: goto label_3a06cc;
        case 0x3a06d0u: goto label_3a06d0;
        case 0x3a06d4u: goto label_3a06d4;
        case 0x3a06d8u: goto label_3a06d8;
        case 0x3a06dcu: goto label_3a06dc;
        case 0x3a06e0u: goto label_3a06e0;
        case 0x3a06e4u: goto label_3a06e4;
        case 0x3a06e8u: goto label_3a06e8;
        case 0x3a06ecu: goto label_3a06ec;
        case 0x3a06f0u: goto label_3a06f0;
        case 0x3a06f4u: goto label_3a06f4;
        case 0x3a06f8u: goto label_3a06f8;
        case 0x3a06fcu: goto label_3a06fc;
        case 0x3a0700u: goto label_3a0700;
        case 0x3a0704u: goto label_3a0704;
        case 0x3a0708u: goto label_3a0708;
        case 0x3a070cu: goto label_3a070c;
        case 0x3a0710u: goto label_3a0710;
        case 0x3a0714u: goto label_3a0714;
        case 0x3a0718u: goto label_3a0718;
        case 0x3a071cu: goto label_3a071c;
        case 0x3a0720u: goto label_3a0720;
        case 0x3a0724u: goto label_3a0724;
        case 0x3a0728u: goto label_3a0728;
        case 0x3a072cu: goto label_3a072c;
        case 0x3a0730u: goto label_3a0730;
        case 0x3a0734u: goto label_3a0734;
        case 0x3a0738u: goto label_3a0738;
        case 0x3a073cu: goto label_3a073c;
        case 0x3a0740u: goto label_3a0740;
        case 0x3a0744u: goto label_3a0744;
        case 0x3a0748u: goto label_3a0748;
        case 0x3a074cu: goto label_3a074c;
        case 0x3a0750u: goto label_3a0750;
        case 0x3a0754u: goto label_3a0754;
        case 0x3a0758u: goto label_3a0758;
        case 0x3a075cu: goto label_3a075c;
        case 0x3a0760u: goto label_3a0760;
        case 0x3a0764u: goto label_3a0764;
        case 0x3a0768u: goto label_3a0768;
        case 0x3a076cu: goto label_3a076c;
        case 0x3a0770u: goto label_3a0770;
        case 0x3a0774u: goto label_3a0774;
        case 0x3a0778u: goto label_3a0778;
        case 0x3a077cu: goto label_3a077c;
        case 0x3a0780u: goto label_3a0780;
        case 0x3a0784u: goto label_3a0784;
        case 0x3a0788u: goto label_3a0788;
        case 0x3a078cu: goto label_3a078c;
        case 0x3a0790u: goto label_3a0790;
        case 0x3a0794u: goto label_3a0794;
        case 0x3a0798u: goto label_3a0798;
        case 0x3a079cu: goto label_3a079c;
        case 0x3a07a0u: goto label_3a07a0;
        case 0x3a07a4u: goto label_3a07a4;
        case 0x3a07a8u: goto label_3a07a8;
        case 0x3a07acu: goto label_3a07ac;
        case 0x3a07b0u: goto label_3a07b0;
        case 0x3a07b4u: goto label_3a07b4;
        case 0x3a07b8u: goto label_3a07b8;
        case 0x3a07bcu: goto label_3a07bc;
        case 0x3a07c0u: goto label_3a07c0;
        case 0x3a07c4u: goto label_3a07c4;
        case 0x3a07c8u: goto label_3a07c8;
        case 0x3a07ccu: goto label_3a07cc;
        case 0x3a07d0u: goto label_3a07d0;
        case 0x3a07d4u: goto label_3a07d4;
        case 0x3a07d8u: goto label_3a07d8;
        case 0x3a07dcu: goto label_3a07dc;
        case 0x3a07e0u: goto label_3a07e0;
        case 0x3a07e4u: goto label_3a07e4;
        case 0x3a07e8u: goto label_3a07e8;
        case 0x3a07ecu: goto label_3a07ec;
        case 0x3a07f0u: goto label_3a07f0;
        case 0x3a07f4u: goto label_3a07f4;
        case 0x3a07f8u: goto label_3a07f8;
        case 0x3a07fcu: goto label_3a07fc;
        case 0x3a0800u: goto label_3a0800;
        case 0x3a0804u: goto label_3a0804;
        case 0x3a0808u: goto label_3a0808;
        case 0x3a080cu: goto label_3a080c;
        case 0x3a0810u: goto label_3a0810;
        case 0x3a0814u: goto label_3a0814;
        case 0x3a0818u: goto label_3a0818;
        case 0x3a081cu: goto label_3a081c;
        case 0x3a0820u: goto label_3a0820;
        case 0x3a0824u: goto label_3a0824;
        case 0x3a0828u: goto label_3a0828;
        case 0x3a082cu: goto label_3a082c;
        case 0x3a0830u: goto label_3a0830;
        case 0x3a0834u: goto label_3a0834;
        case 0x3a0838u: goto label_3a0838;
        case 0x3a083cu: goto label_3a083c;
        case 0x3a0840u: goto label_3a0840;
        case 0x3a0844u: goto label_3a0844;
        case 0x3a0848u: goto label_3a0848;
        case 0x3a084cu: goto label_3a084c;
        case 0x3a0850u: goto label_3a0850;
        case 0x3a0854u: goto label_3a0854;
        case 0x3a0858u: goto label_3a0858;
        case 0x3a085cu: goto label_3a085c;
        case 0x3a0860u: goto label_3a0860;
        case 0x3a0864u: goto label_3a0864;
        case 0x3a0868u: goto label_3a0868;
        case 0x3a086cu: goto label_3a086c;
        case 0x3a0870u: goto label_3a0870;
        case 0x3a0874u: goto label_3a0874;
        case 0x3a0878u: goto label_3a0878;
        case 0x3a087cu: goto label_3a087c;
        case 0x3a0880u: goto label_3a0880;
        case 0x3a0884u: goto label_3a0884;
        case 0x3a0888u: goto label_3a0888;
        case 0x3a088cu: goto label_3a088c;
        case 0x3a0890u: goto label_3a0890;
        case 0x3a0894u: goto label_3a0894;
        case 0x3a0898u: goto label_3a0898;
        case 0x3a089cu: goto label_3a089c;
        case 0x3a08a0u: goto label_3a08a0;
        case 0x3a08a4u: goto label_3a08a4;
        case 0x3a08a8u: goto label_3a08a8;
        case 0x3a08acu: goto label_3a08ac;
        case 0x3a08b0u: goto label_3a08b0;
        case 0x3a08b4u: goto label_3a08b4;
        case 0x3a08b8u: goto label_3a08b8;
        case 0x3a08bcu: goto label_3a08bc;
        case 0x3a08c0u: goto label_3a08c0;
        case 0x3a08c4u: goto label_3a08c4;
        case 0x3a08c8u: goto label_3a08c8;
        case 0x3a08ccu: goto label_3a08cc;
        case 0x3a08d0u: goto label_3a08d0;
        case 0x3a08d4u: goto label_3a08d4;
        case 0x3a08d8u: goto label_3a08d8;
        case 0x3a08dcu: goto label_3a08dc;
        case 0x3a08e0u: goto label_3a08e0;
        case 0x3a08e4u: goto label_3a08e4;
        case 0x3a08e8u: goto label_3a08e8;
        case 0x3a08ecu: goto label_3a08ec;
        case 0x3a08f0u: goto label_3a08f0;
        case 0x3a08f4u: goto label_3a08f4;
        case 0x3a08f8u: goto label_3a08f8;
        case 0x3a08fcu: goto label_3a08fc;
        default: break;
    }

    ctx->pc = 0x3a0628u;

label_3a0628:
    // 0x3a0628: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3a0628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3a062c:
    // 0x3a062c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3a0630:
    // 0x3a0630: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3a0630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3a0634:
    // 0x3a0634: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a0634u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0638:
    // 0x3a0638: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3a0638u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a063c:
    // 0x3a063c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3a063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3a0640:
    // 0x3a0640: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3a0640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3a0644:
    // 0x3a0644: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3a0644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3a0648:
    // 0x3a0648: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3a0648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3a064c:
    // 0x3a064c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3a064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3a0650:
    // 0x3a0650: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3a0650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3a0654:
    // 0x3a0654: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3a0654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3a0658:
    // 0x3a0658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a065c:
    // 0x3a065c: 0xc0e69e4  jal         func_39A790
label_3a0660:
    if (ctx->pc == 0x3A0660u) {
        ctx->pc = 0x3A0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A065Cu;
        // 0x3a0660: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0664u;
        goto label_3a0664;
    }
    ctx->pc = 0x3A065Cu;
    SET_GPR_U32(ctx, 31, 0x3A0664u);
    ctx->pc = 0x3A0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A065Cu;
    // 0x3a0660: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x3A065Cu, 0x3A0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0664u;
label_3a0664:
    // 0x3a0664: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a0664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a0668:
    // 0x3a0668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a0668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a066c:
    // 0x3a066c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a066cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0670:
    // 0x3a0670: 0xc103322  jal         func_40CC88
label_3a0674:
    if (ctx->pc == 0x3A0674u) {
        ctx->pc = 0x3A0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0670u;
        // 0x3a0674: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0678u;
        goto label_3a0678;
    }
    ctx->pc = 0x3A0670u;
    SET_GPR_U32(ctx, 31, 0x3A0678u);
    ctx->pc = 0x3A0674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0670u;
    // 0x3a0674: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3A0670u, 0x3A0678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0678u;
label_3a0678:
    // 0x3a0678: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3a067c:
    if (ctx->pc == 0x3A067Cu) {
        ctx->pc = 0x3A067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0678u;
        // 0x3a067c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0680u;
        goto label_3a0680;
    }
    ctx->pc = 0x3A0678u;
    {
        const bool branch_taken_0x3a0678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0678u;
        // 0x3a067c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0678) {
            ctx->pc = 0x3A06B8u;
            goto label_3a06b8;
        }
    }
    ctx->pc = 0x3A0680u;
label_3a0680:
    // 0x3a0680: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x3a0680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_3a0684:
    // 0x3a0684: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x3a0684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_3a0688:
    // 0x3a0688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a068c:
    // 0x3a068c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x3a068cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_3a0690:
    // 0x3a0690: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_3a0694:
    if (ctx->pc == 0x3A0694u) {
        ctx->pc = 0x3A0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0690u;
        // 0x3a0694: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0698u;
        goto label_3a0698;
    }
    ctx->pc = 0x3A0690u;
    {
        const bool branch_taken_0x3a0690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0690u;
        // 0x3a0694: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0690) {
            ctx->pc = 0x3A06C0u;
            goto label_3a06c0;
        }
    }
    ctx->pc = 0x3A0698u;
label_3a0698:
    // 0x3a0698: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a0698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a069c:
    // 0x3a069c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3a069cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3a06a0:
    // 0x3a06a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3a06a4:
    // 0x3a06a4: 0xc1035f6  jal         func_40D7D8
label_3a06a8:
    if (ctx->pc == 0x3A06A8u) {
        ctx->pc = 0x3A06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06A4u;
        // 0x3a06a8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A06ACu;
        goto label_3a06ac;
    }
    ctx->pc = 0x3A06A4u;
    SET_GPR_U32(ctx, 31, 0x3A06ACu);
    ctx->pc = 0x3A06A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A06A4u;
    // 0x3a06a8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3A06A4u, 0x3A06ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A06ACu;
label_3a06ac:
    // 0x3a06ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a06acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a06b0:
    // 0x3a06b0: 0xc103628  jal         func_40D8A0
label_3a06b4:
    if (ctx->pc == 0x3A06B4u) {
        ctx->pc = 0x3A06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06B0u;
        // 0x3a06b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A06B8u;
        goto label_3a06b8;
    }
    ctx->pc = 0x3A06B0u;
    SET_GPR_U32(ctx, 31, 0x3A06B8u);
    ctx->pc = 0x3A06B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A06B0u;
    // 0x3a06b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3A06B0u, 0x3A06B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A06B8u;
label_3a06b8:
    // 0x3a06b8: 0x10000085  b           . + 4 + (0x85 << 2)
label_3a06bc:
    if (ctx->pc == 0x3A06BCu) {
        ctx->pc = 0x3A06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06B8u;
        // 0x3a06bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A06C0u;
        goto label_3a06c0;
    }
    ctx->pc = 0x3A06B8u;
    {
        const bool branch_taken_0x3a06b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06B8u;
        // 0x3a06bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06b8) {
            ctx->pc = 0x3A08D0u;
            goto label_3a08d0;
        }
    }
    ctx->pc = 0x3A06C0u;
label_3a06c0:
    // 0x3a06c0: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x3a06c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_3a06c4:
    // 0x3a06c4: 0xc10480a  jal         func_412028
label_3a06c8:
    if (ctx->pc == 0x3A06C8u) {
        ctx->pc = 0x3A06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06C4u;
        // 0x3a06c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A06CCu;
        goto label_3a06cc;
    }
    ctx->pc = 0x3A06C4u;
    SET_GPR_U32(ctx, 31, 0x3A06CCu);
    ctx->pc = 0x3A06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A06C4u;
    // 0x3a06c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A06C4u, 0x3A06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A06CCu;
label_3a06cc:
    // 0x3a06cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a06ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a06d0:
    // 0x3a06d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a06d4:
    // 0x3a06d4: 0x1462007e  bne         $v1, $v0, . + 4 + (0x7E << 2)
label_3a06d8:
    if (ctx->pc == 0x3A06D8u) {
        ctx->pc = 0x3A06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06D4u;
        // 0x3a06d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A06DCu;
        goto label_3a06dc;
    }
    ctx->pc = 0x3A06D4u;
    {
        const bool branch_taken_0x3a06d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06D4u;
        // 0x3a06d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06d4) {
            ctx->pc = 0x3A08D0u;
            goto label_3a08d0;
        }
    }
    ctx->pc = 0x3A06DCu;
label_3a06dc:
    // 0x3a06dc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3a06e0:
    // 0x3a06e0: 0x1443007b  bne         $v0, $v1, . + 4 + (0x7B << 2)
label_3a06e4:
    if (ctx->pc == 0x3A06E4u) {
        ctx->pc = 0x3A06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06E0u;
        // 0x3a06e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A06E8u;
        goto label_3a06e8;
    }
    ctx->pc = 0x3A06E0u;
    {
        const bool branch_taken_0x3a06e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06E0u;
        // 0x3a06e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06e0) {
            ctx->pc = 0x3A08D0u;
            goto label_3a08d0;
        }
    }
    ctx->pc = 0x3A06E8u;
label_3a06e8:
    // 0x3a06e8: 0x8f82bd80  lw          $v0, -0x4280($gp)
    ctx->pc = 0x3a06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
label_3a06ec:
    // 0x3a06ec: 0x8ec50078  lw          $a1, 0x78($s6)
    ctx->pc = 0x3a06ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
label_3a06f0:
    // 0x3a06f0: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x3a06f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3a06f4:
    // 0x3a06f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a06f8:
    // 0x3a06f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3a06fc:
    if (ctx->pc == 0x3A06FCu) {
        ctx->pc = 0x3A06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06F8u;
        // 0x3a06fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0700u;
        goto label_3a0700;
    }
    ctx->pc = 0x3A06F8u;
    {
        const bool branch_taken_0x3a06f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06F8u;
        // 0x3a06fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06f8) {
            ctx->pc = 0x3A0718u;
            goto label_3a0718;
        }
    }
    ctx->pc = 0x3A0700u;
label_3a0700:
    // 0x3a0700: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a0700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a0704:
    // 0x3a0704: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x3a0704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_3a0708:
    // 0x3a0708: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3a070c:
    if (ctx->pc == 0x3A070Cu) {
        ctx->pc = 0x3A070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0708u;
        // 0x3a070c: 0x94a50004  lhu         $a1, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0710u;
        goto label_3a0710;
    }
    ctx->pc = 0x3A0708u;
    {
        const bool branch_taken_0x3a0708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a0708) {
            ctx->pc = 0x3A070Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0708u;
            // 0x3a070c: 0x94a50004  lhu         $a1, 0x4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A071Cu;
            goto label_3a071c;
        }
    }
    ctx->pc = 0x3A0710u;
label_3a0710:
    // 0x3a0710: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a0714:
    if (ctx->pc == 0x3A0714u) {
        ctx->pc = 0x3A0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0710u;
        // 0x3a0714: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0718u;
        goto label_3a0718;
    }
    ctx->pc = 0x3A0710u;
    {
        const bool branch_taken_0x3a0710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0710u;
        // 0x3a0714: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0710) {
            ctx->pc = 0x3A0724u;
            goto label_3a0724;
        }
    }
    ctx->pc = 0x3A0718u;
label_3a0718:
    // 0x3a0718: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x3a0718u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_3a071c:
    // 0x3a071c: 0xc0e7eec  jal         func_39FBB0
label_3a0720:
    if (ctx->pc == 0x3A0720u) {
        ctx->pc = 0x3A0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A071Cu;
        // 0x3a0720: 0x2c62021  addu        $a0, $s6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0724u;
        goto label_3a0724;
    }
    ctx->pc = 0x3A071Cu;
    SET_GPR_U32(ctx, 31, 0x3A0724u);
    ctx->pc = 0x3A0720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A071Cu;
    // 0x3a0720: 0x2c62021  addu        $a0, $s6, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A071Cu, 0x3A0724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0724u;
label_3a0724:
    // 0x3a0724: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x3a0724u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a0728:
    // 0x3a0728: 0x8fd70000  lw          $s7, 0x0($fp)
    ctx->pc = 0x3a0728u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3a072c:
    // 0x3a072c: 0x1ae00067  blez        $s7, . + 4 + (0x67 << 2)
label_3a0730:
    if (ctx->pc == 0x3A0730u) {
        ctx->pc = 0x3A0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A072Cu;
        // 0x3a0730: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0734u;
        goto label_3a0734;
    }
    ctx->pc = 0x3A072Cu;
    {
        const bool branch_taken_0x3a072c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3A0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A072Cu;
        // 0x3a0730: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a072c) {
            ctx->pc = 0x3A08CCu;
            goto label_3a08cc;
        }
    }
    ctx->pc = 0x3A0734u;
label_3a0734:
    // 0x3a0734: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a0734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a0738:
    // 0x3a0738: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x3a0738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_3a073c:
    // 0x3a073c: 0xc10480a  jal         func_412028
label_3a0740:
    if (ctx->pc == 0x3A0740u) {
        ctx->pc = 0x3A0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A073Cu;
        // 0x3a0740: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0744u;
        goto label_3a0744;
    }
    ctx->pc = 0x3A073Cu;
    SET_GPR_U32(ctx, 31, 0x3A0744u);
    ctx->pc = 0x3A0740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A073Cu;
    // 0x3a0740: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A073Cu, 0x3A0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0744u;
label_3a0744:
    // 0x3a0744: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a0744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0748:
    // 0x3a0748: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a0748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a074c:
    // 0x3a074c: 0x1642ffda  bne         $s2, $v0, . + 4 + (-0x26 << 2)
label_3a0750:
    if (ctx->pc == 0x3A0750u) {
        ctx->pc = 0x3A0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A074Cu;
        // 0x3a0750: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0754u;
        goto label_3a0754;
    }
    ctx->pc = 0x3A074Cu;
    {
        const bool branch_taken_0x3a074c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A074Cu;
        // 0x3a0750: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a074c) {
            ctx->pc = 0x3A06B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a06b8;
        }
    }
    ctx->pc = 0x3A0754u;
label_3a0754:
    // 0x3a0754: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3a0754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3a0758:
    // 0x3a0758: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a0758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3a075c:
    // 0x3a075c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a075cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a0760:
    // 0x3a0760: 0x3c2a021  addu        $s4, $fp, $v0
    ctx->pc = 0x3a0760u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3a0764:
    // 0x3a0764: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3a0764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3a0768:
    // 0x3a0768: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3a0768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3a076c:
    // 0x3a076c: 0x24840247  addiu       $a0, $a0, 0x247
    ctx->pc = 0x3a076cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 583));
label_3a0770:
    // 0x3a0770: 0x40f809  jalr        $v0
label_3a0774:
    if (ctx->pc == 0x3A0774u) {
        ctx->pc = 0x3A0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0770u;
        // 0x3a0774: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0778u;
        goto label_3a0778;
    }
    ctx->pc = 0x3A0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A0778u);
        ctx->pc = 0x3A0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0770u;
        // 0x3a0774: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0770u, 0x3A0778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A0778u;
label_3a0778:
    // 0x3a0778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a0778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a077c:
    // 0x3a077c: 0x1200ffce  beqz        $s0, . + 4 + (-0x32 << 2)
label_3a0780:
    if (ctx->pc == 0x3A0780u) {
        ctx->pc = 0x3A0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A077Cu;
        // 0x3a0780: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0784u;
        goto label_3a0784;
    }
    ctx->pc = 0x3A077Cu;
    {
        const bool branch_taken_0x3a077c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A077Cu;
        // 0x3a0780: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a077c) {
            ctx->pc = 0x3A06B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a06b8;
        }
    }
    ctx->pc = 0x3A0784u;
label_3a0784:
    // 0x3a0784: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3a0784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3a0788:
    // 0x3a0788: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3a0788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_3a078c:
    // 0x3a078c: 0x2463fb80  addiu       $v1, $v1, -0x480
    ctx->pc = 0x3a078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966144));
label_3a0790:
    // 0x3a0790: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3a0790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3a0794:
    // 0x3a0794: 0x2442022f  addiu       $v0, $v0, 0x22F
    ctx->pc = 0x3a0794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 559));
label_3a0798:
    // 0x3a0798: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3a0798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3a079c:
    // 0x3a079c: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x3a079cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
label_3a07a0:
    // 0x3a07a0: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x3a07a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3a07a4:
    // 0x3a07a4: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x3a07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_3a07a8:
    // 0x3a07a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a07a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a07ac:
    // 0x3a07ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3a07acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3a07b0:
    // 0x3a07b0: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x3a07b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_3a07b4:
    // 0x3a07b4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3a07b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_3a07b8:
    // 0x3a07b8: 0xc10480a  jal         func_412028
label_3a07bc:
    if (ctx->pc == 0x3A07BCu) {
        ctx->pc = 0x3A07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07B8u;
        // 0x3a07bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A07C0u;
        goto label_3a07c0;
    }
    ctx->pc = 0x3A07B8u;
    SET_GPR_U32(ctx, 31, 0x3A07C0u);
    ctx->pc = 0x3A07BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A07B8u;
    // 0x3a07bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A07B8u, 0x3A07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A07C0u;
label_3a07c0:
    // 0x3a07c0: 0x1452ffbd  bne         $v0, $s2, . + 4 + (-0x43 << 2)
label_3a07c4:
    if (ctx->pc == 0x3A07C4u) {
        ctx->pc = 0x3A07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07C0u;
        // 0x3a07c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A07C8u;
        goto label_3a07c8;
    }
    ctx->pc = 0x3A07C0u;
    {
        const bool branch_taken_0x3a07c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3A07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07C0u;
        // 0x3a07c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a07c0) {
            ctx->pc = 0x3A06B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a06b8;
        }
    }
    ctx->pc = 0x3A07C8u;
label_3a07c8:
    // 0x3a07c8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3a07c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3a07cc:
    // 0x3a07cc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3a07ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3a07d0:
    // 0x3a07d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a07d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a07d4:
    // 0x3a07d4: 0xc0bb7e6  jal         func_2EDF98
label_3a07d8:
    if (ctx->pc == 0x3A07D8u) {
        ctx->pc = 0x3A07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07D4u;
        // 0x3a07d8: 0x240601b0  addiu       $a2, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A07DCu;
        goto label_3a07dc;
    }
    ctx->pc = 0x3A07D4u;
    SET_GPR_U32(ctx, 31, 0x3A07DCu);
    ctx->pc = 0x3A07D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A07D4u;
    // 0x3a07d8: 0x240601b0  addiu       $a2, $zero, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3A07D4u, 0x3A07DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A07DCu;
label_3a07dc:
    // 0x3a07dc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3a07e0:
    // 0x3a07e0: 0x26020207  addiu       $v0, $s0, 0x207
    ctx->pc = 0x3a07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 519));
label_3a07e4:
    // 0x3a07e4: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x3a07e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_3a07e8:
    // 0x3a07e8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3a07e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3a07ec:
    // 0x3a07ec: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3a07ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a07f0:
    // 0x3a07f0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3a07f4:
    if (ctx->pc == 0x3A07F4u) {
        ctx->pc = 0x3A07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07F0u;
        // 0x3a07f4: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A07F8u;
        goto label_3a07f8;
    }
    ctx->pc = 0x3A07F0u;
    {
        const bool branch_taken_0x3a07f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07F0u;
        // 0x3a07f4: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a07f0) {
            ctx->pc = 0x3A080Cu;
            goto label_3a080c;
        }
    }
    ctx->pc = 0x3A07F8u;
label_3a07f8:
    // 0x3a07f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3a07fc:
    // 0x3a07fc: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x3a07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_3a0800:
    // 0x3a0800: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3a0800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_3a0804:
    // 0x3a0804: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a0804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a0808:
    // 0x3a0808: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3a0808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3a080c:
    // 0x3a080c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3a080cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a0810:
    // 0x3a0810: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a0810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a0814:
    // 0x3a0814: 0xc10480a  jal         func_412028
label_3a0818:
    if (ctx->pc == 0x3A0818u) {
        ctx->pc = 0x3A0818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0814u;
        // 0x3a0818: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A081Cu;
        goto label_3a081c;
    }
    ctx->pc = 0x3A0814u;
    SET_GPR_U32(ctx, 31, 0x3A081Cu);
    ctx->pc = 0x3A0818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0814u;
    // 0x3a0818: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A0814u, 0x3A081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A081Cu;
label_3a081c:
    // 0x3a081c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3a081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3a0820:
    // 0x3a0820: 0x1443ffa5  bne         $v0, $v1, . + 4 + (-0x5B << 2)
label_3a0824:
    if (ctx->pc == 0x3A0824u) {
        ctx->pc = 0x3A0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0820u;
        // 0x3a0824: 0x26700001  addiu       $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0828u;
        goto label_3a0828;
    }
    ctx->pc = 0x3A0820u;
    {
        const bool branch_taken_0x3a0820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0820u;
        // 0x3a0824: 0x26700001  addiu       $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0820) {
            ctx->pc = 0x3A06B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a06b8;
        }
    }
    ctx->pc = 0x3A0828u;
label_3a0828:
    // 0x3a0828: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3a0828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a082c:
    // 0x3a082c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a082cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0830:
    // 0x3a0830: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a0830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a0834:
    // 0x3a0834: 0x0  nop
    ctx->pc = 0x3a0834u;
    // NOP
label_3a0838:
    // 0x3a0838: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3a0838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3a083c:
    // 0x3a083c: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x3a083cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
label_3a0840:
    // 0x3a0840: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x3a0840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3a0844:
    // 0x3a0844: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x3a0844u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3a0848:
    // 0x3a0848: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_3a084c:
    if (ctx->pc == 0x3A084Cu) {
        ctx->pc = 0x3A084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0848u;
        // 0x3a084c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0850u;
        goto label_3a0850;
    }
    ctx->pc = 0x3A0848u;
    {
        const bool branch_taken_0x3a0848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0848u;
        // 0x3a084c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0848) {
            ctx->pc = 0x3A089Cu;
            goto label_3a089c;
        }
    }
    ctx->pc = 0x3A0850u;
label_3a0850:
    // 0x3a0850: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a0850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a0854:
    // 0x3a0854: 0x2442bc00  addiu       $v0, $v0, -0x4400
    ctx->pc = 0x3a0854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949888));
label_3a0858:
    // 0x3a0858: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a085c:
    // 0x3a085c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a085cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a0860:
    // 0x3a0860: 0x800008  jr          $a0
label_3a0864:
    if (ctx->pc == 0x3A0864u) {
        ctx->pc = 0x3A0868u;
        goto label_3a0868;
    }
    ctx->pc = 0x3A0860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A0868u: goto label_3a0868;
            case 0x3A0878u: goto label_3a0878;
            case 0x3A0898u: goto label_3a0898;
            case 0x3A089Cu: goto label_3a089c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0860u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A0868u;
label_3a0868:
    // 0x3a0868: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3a0868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3a086c:
    // 0x3a086c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a086cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3a0870:
    // 0x3a0870: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a0874:
    if (ctx->pc == 0x3A0874u) {
        ctx->pc = 0x3A0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0870u;
        // 0x3a0874: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0878u;
        goto label_3a0878;
    }
    ctx->pc = 0x3A0870u;
    {
        const bool branch_taken_0x3a0870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0870u;
        // 0x3a0874: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0870) {
            ctx->pc = 0x3A089Cu;
            goto label_3a089c;
        }
    }
    ctx->pc = 0x3A0878u;
label_3a0878:
    // 0x3a0878: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3a0878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3a087c:
    // 0x3a087c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a087cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a0880:
    // 0x3a0880: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a0884:
    // 0x3a0884: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a0884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3a0888:
    // 0x3a0888: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a088c:
    // 0x3a088c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3a088cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3a0890:
    // 0x3a0890: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a0894:
    if (ctx->pc == 0x3A0894u) {
        ctx->pc = 0x3A0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0890u;
        // 0x3a0894: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0898u;
        goto label_3a0898;
    }
    ctx->pc = 0x3A0890u;
    {
        const bool branch_taken_0x3a0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0890u;
        // 0x3a0894: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0890) {
            ctx->pc = 0x3A089Cu;
            goto label_3a089c;
        }
    }
    ctx->pc = 0x3A0898u;
label_3a0898:
    // 0x3a0898: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a0898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a089c:
    // 0x3a089c: 0x50e0ffe6  beql        $a3, $zero, . + 4 + (-0x1A << 2)
label_3a08a0:
    if (ctx->pc == 0x3A08A0u) {
        ctx->pc = 0x3A08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A089Cu;
        // 0x3a08a0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A08A4u;
        goto label_3a08a4;
    }
    ctx->pc = 0x3A089Cu;
    {
        const bool branch_taken_0x3a089c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a089c) {
            ctx->pc = 0x3A08A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A089Cu;
            // 0x3a08a0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0838;
        }
    }
    ctx->pc = 0x3A08A4u;
label_3a08a4:
    // 0x3a08a4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3a08a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a08a8:
    // 0x3a08a8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3a08a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a08ac:
    // 0x3a08ac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3a08acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3a08b0:
    // 0x3a08b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a08b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a08b4:
    // 0x3a08b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a08b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a08b8:
    // 0x3a08b8: 0xc0bf916  jal         func_2FE458
label_3a08bc:
    if (ctx->pc == 0x3A08BCu) {
        ctx->pc = 0x3A08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08B8u;
        // 0x3a08bc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A08C0u;
        goto label_3a08c0;
    }
    ctx->pc = 0x3A08B8u;
    SET_GPR_U32(ctx, 31, 0x3A08C0u);
    ctx->pc = 0x3A08BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A08B8u;
    // 0x3a08bc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x3A08B8u, 0x3A08C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A08C0u;
label_3a08c0:
    // 0x3a08c0: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x3a08c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3a08c4:
    // 0x3a08c4: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_3a08c8:
    if (ctx->pc == 0x3A08C8u) {
        ctx->pc = 0x3A08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08C4u;
        // 0x3a08c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A08CCu;
        goto label_3a08cc;
    }
    ctx->pc = 0x3A08C4u;
    {
        const bool branch_taken_0x3a08c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08C4u;
        // 0x3a08c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a08c4) {
            ctx->pc = 0x3A0738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0738;
        }
    }
    ctx->pc = 0x3A08CCu;
label_3a08cc:
    // 0x3a08cc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3a08ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a08d0:
    // 0x3a08d0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3a08d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a08d4:
    // 0x3a08d4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3a08d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a08d8:
    // 0x3a08d8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3a08d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a08dc:
    // 0x3a08dc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3a08dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a08e0:
    // 0x3a08e0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3a08e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a08e4:
    // 0x3a08e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a08e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a08e8:
    // 0x3a08e8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3a08e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a08ec:
    // 0x3a08ec: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3a08ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a08f0:
    // 0x3a08f0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3a08f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a08f4:
    // 0x3a08f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a08f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a08f8:
    // 0x3a08f8: 0x3e00008  jr          $ra
label_3a08fc:
    if (ctx->pc == 0x3A08FCu) {
        ctx->pc = 0x3A08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08F8u;
        // 0x3a08fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0900u;
        goto label_fallthrough_0x3a08f8;
    }
    ctx->pc = 0x3A08F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08F8u;
        // 0x3a08fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A08F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a08f8:
    ctx->pc = 0x3A0900u;
}
