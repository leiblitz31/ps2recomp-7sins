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

// Function: sub_004B0578
// Address: 0x4b0578 - 0x4b0878
void sub_004B0578_0x4b0578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0578_0x4b0578");
#endif

    switch (ctx->pc) {
        case 0x4b0578u: goto label_4b0578;
        case 0x4b057cu: goto label_4b057c;
        case 0x4b0580u: goto label_4b0580;
        case 0x4b0584u: goto label_4b0584;
        case 0x4b0588u: goto label_4b0588;
        case 0x4b058cu: goto label_4b058c;
        case 0x4b0590u: goto label_4b0590;
        case 0x4b0594u: goto label_4b0594;
        case 0x4b0598u: goto label_4b0598;
        case 0x4b059cu: goto label_4b059c;
        case 0x4b05a0u: goto label_4b05a0;
        case 0x4b05a4u: goto label_4b05a4;
        case 0x4b05a8u: goto label_4b05a8;
        case 0x4b05acu: goto label_4b05ac;
        case 0x4b05b0u: goto label_4b05b0;
        case 0x4b05b4u: goto label_4b05b4;
        case 0x4b05b8u: goto label_4b05b8;
        case 0x4b05bcu: goto label_4b05bc;
        case 0x4b05c0u: goto label_4b05c0;
        case 0x4b05c4u: goto label_4b05c4;
        case 0x4b05c8u: goto label_4b05c8;
        case 0x4b05ccu: goto label_4b05cc;
        case 0x4b05d0u: goto label_4b05d0;
        case 0x4b05d4u: goto label_4b05d4;
        case 0x4b05d8u: goto label_4b05d8;
        case 0x4b05dcu: goto label_4b05dc;
        case 0x4b05e0u: goto label_4b05e0;
        case 0x4b05e4u: goto label_4b05e4;
        case 0x4b05e8u: goto label_4b05e8;
        case 0x4b05ecu: goto label_4b05ec;
        case 0x4b05f0u: goto label_4b05f0;
        case 0x4b05f4u: goto label_4b05f4;
        case 0x4b05f8u: goto label_4b05f8;
        case 0x4b05fcu: goto label_4b05fc;
        case 0x4b0600u: goto label_4b0600;
        case 0x4b0604u: goto label_4b0604;
        case 0x4b0608u: goto label_4b0608;
        case 0x4b060cu: goto label_4b060c;
        case 0x4b0610u: goto label_4b0610;
        case 0x4b0614u: goto label_4b0614;
        case 0x4b0618u: goto label_4b0618;
        case 0x4b061cu: goto label_4b061c;
        case 0x4b0620u: goto label_4b0620;
        case 0x4b0624u: goto label_4b0624;
        case 0x4b0628u: goto label_4b0628;
        case 0x4b062cu: goto label_4b062c;
        case 0x4b0630u: goto label_4b0630;
        case 0x4b0634u: goto label_4b0634;
        case 0x4b0638u: goto label_4b0638;
        case 0x4b063cu: goto label_4b063c;
        case 0x4b0640u: goto label_4b0640;
        case 0x4b0644u: goto label_4b0644;
        case 0x4b0648u: goto label_4b0648;
        case 0x4b064cu: goto label_4b064c;
        case 0x4b0650u: goto label_4b0650;
        case 0x4b0654u: goto label_4b0654;
        case 0x4b0658u: goto label_4b0658;
        case 0x4b065cu: goto label_4b065c;
        case 0x4b0660u: goto label_4b0660;
        case 0x4b0664u: goto label_4b0664;
        case 0x4b0668u: goto label_4b0668;
        case 0x4b066cu: goto label_4b066c;
        case 0x4b0670u: goto label_4b0670;
        case 0x4b0674u: goto label_4b0674;
        case 0x4b0678u: goto label_4b0678;
        case 0x4b067cu: goto label_4b067c;
        case 0x4b0680u: goto label_4b0680;
        case 0x4b0684u: goto label_4b0684;
        case 0x4b0688u: goto label_4b0688;
        case 0x4b068cu: goto label_4b068c;
        case 0x4b0690u: goto label_4b0690;
        case 0x4b0694u: goto label_4b0694;
        case 0x4b0698u: goto label_4b0698;
        case 0x4b069cu: goto label_4b069c;
        case 0x4b06a0u: goto label_4b06a0;
        case 0x4b06a4u: goto label_4b06a4;
        case 0x4b06a8u: goto label_4b06a8;
        case 0x4b06acu: goto label_4b06ac;
        case 0x4b06b0u: goto label_4b06b0;
        case 0x4b06b4u: goto label_4b06b4;
        case 0x4b06b8u: goto label_4b06b8;
        case 0x4b06bcu: goto label_4b06bc;
        case 0x4b06c0u: goto label_4b06c0;
        case 0x4b06c4u: goto label_4b06c4;
        case 0x4b06c8u: goto label_4b06c8;
        case 0x4b06ccu: goto label_4b06cc;
        case 0x4b06d0u: goto label_4b06d0;
        case 0x4b06d4u: goto label_4b06d4;
        case 0x4b06d8u: goto label_4b06d8;
        case 0x4b06dcu: goto label_4b06dc;
        case 0x4b06e0u: goto label_4b06e0;
        case 0x4b06e4u: goto label_4b06e4;
        case 0x4b06e8u: goto label_4b06e8;
        case 0x4b06ecu: goto label_4b06ec;
        case 0x4b06f0u: goto label_4b06f0;
        case 0x4b06f4u: goto label_4b06f4;
        case 0x4b06f8u: goto label_4b06f8;
        case 0x4b06fcu: goto label_4b06fc;
        case 0x4b0700u: goto label_4b0700;
        case 0x4b0704u: goto label_4b0704;
        case 0x4b0708u: goto label_4b0708;
        case 0x4b070cu: goto label_4b070c;
        case 0x4b0710u: goto label_4b0710;
        case 0x4b0714u: goto label_4b0714;
        case 0x4b0718u: goto label_4b0718;
        case 0x4b071cu: goto label_4b071c;
        case 0x4b0720u: goto label_4b0720;
        case 0x4b0724u: goto label_4b0724;
        case 0x4b0728u: goto label_4b0728;
        case 0x4b072cu: goto label_4b072c;
        case 0x4b0730u: goto label_4b0730;
        case 0x4b0734u: goto label_4b0734;
        case 0x4b0738u: goto label_4b0738;
        case 0x4b073cu: goto label_4b073c;
        case 0x4b0740u: goto label_4b0740;
        case 0x4b0744u: goto label_4b0744;
        case 0x4b0748u: goto label_4b0748;
        case 0x4b074cu: goto label_4b074c;
        case 0x4b0750u: goto label_4b0750;
        case 0x4b0754u: goto label_4b0754;
        case 0x4b0758u: goto label_4b0758;
        case 0x4b075cu: goto label_4b075c;
        case 0x4b0760u: goto label_4b0760;
        case 0x4b0764u: goto label_4b0764;
        case 0x4b0768u: goto label_4b0768;
        case 0x4b076cu: goto label_4b076c;
        case 0x4b0770u: goto label_4b0770;
        case 0x4b0774u: goto label_4b0774;
        case 0x4b0778u: goto label_4b0778;
        case 0x4b077cu: goto label_4b077c;
        case 0x4b0780u: goto label_4b0780;
        case 0x4b0784u: goto label_4b0784;
        case 0x4b0788u: goto label_4b0788;
        case 0x4b078cu: goto label_4b078c;
        case 0x4b0790u: goto label_4b0790;
        case 0x4b0794u: goto label_4b0794;
        case 0x4b0798u: goto label_4b0798;
        case 0x4b079cu: goto label_4b079c;
        case 0x4b07a0u: goto label_4b07a0;
        case 0x4b07a4u: goto label_4b07a4;
        case 0x4b07a8u: goto label_4b07a8;
        case 0x4b07acu: goto label_4b07ac;
        case 0x4b07b0u: goto label_4b07b0;
        case 0x4b07b4u: goto label_4b07b4;
        case 0x4b07b8u: goto label_4b07b8;
        case 0x4b07bcu: goto label_4b07bc;
        case 0x4b07c0u: goto label_4b07c0;
        case 0x4b07c4u: goto label_4b07c4;
        case 0x4b07c8u: goto label_4b07c8;
        case 0x4b07ccu: goto label_4b07cc;
        case 0x4b07d0u: goto label_4b07d0;
        case 0x4b07d4u: goto label_4b07d4;
        case 0x4b07d8u: goto label_4b07d8;
        case 0x4b07dcu: goto label_4b07dc;
        case 0x4b07e0u: goto label_4b07e0;
        case 0x4b07e4u: goto label_4b07e4;
        case 0x4b07e8u: goto label_4b07e8;
        case 0x4b07ecu: goto label_4b07ec;
        case 0x4b07f0u: goto label_4b07f0;
        case 0x4b07f4u: goto label_4b07f4;
        case 0x4b07f8u: goto label_4b07f8;
        case 0x4b07fcu: goto label_4b07fc;
        case 0x4b0800u: goto label_4b0800;
        case 0x4b0804u: goto label_4b0804;
        case 0x4b0808u: goto label_4b0808;
        case 0x4b080cu: goto label_4b080c;
        case 0x4b0810u: goto label_4b0810;
        case 0x4b0814u: goto label_4b0814;
        case 0x4b0818u: goto label_4b0818;
        case 0x4b081cu: goto label_4b081c;
        case 0x4b0820u: goto label_4b0820;
        case 0x4b0824u: goto label_4b0824;
        case 0x4b0828u: goto label_4b0828;
        case 0x4b082cu: goto label_4b082c;
        case 0x4b0830u: goto label_4b0830;
        case 0x4b0834u: goto label_4b0834;
        case 0x4b0838u: goto label_4b0838;
        case 0x4b083cu: goto label_4b083c;
        case 0x4b0840u: goto label_4b0840;
        case 0x4b0844u: goto label_4b0844;
        case 0x4b0848u: goto label_4b0848;
        case 0x4b084cu: goto label_4b084c;
        case 0x4b0850u: goto label_4b0850;
        case 0x4b0854u: goto label_4b0854;
        case 0x4b0858u: goto label_4b0858;
        case 0x4b085cu: goto label_4b085c;
        case 0x4b0860u: goto label_4b0860;
        case 0x4b0864u: goto label_4b0864;
        case 0x4b0868u: goto label_4b0868;
        case 0x4b086cu: goto label_4b086c;
        case 0x4b0870u: goto label_4b0870;
        case 0x4b0874u: goto label_4b0874;
        default: break;
    }

    ctx->pc = 0x4b0578u;

label_4b0578:
    // 0x4b0578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b0578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4b057c:
    // 0x4b057c: 0x24a3ffee  addiu       $v1, $a1, -0x12
    ctx->pc = 0x4b057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967278));
label_4b0580:
    // 0x4b0580: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b0580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b0584:
    // 0x4b0584: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b0584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b0588:
    // 0x4b0588: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4b0588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4b058c:
    // 0x4b058c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4b058cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b0590:
    // 0x4b0590: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4b0590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4b0594:
    // 0x4b0594: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4b0594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4b0598:
    // 0x4b0598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b059c:
    // 0x4b059c: 0x2c620036  sltiu       $v0, $v1, 0x36
    ctx->pc = 0x4b059cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)54) ? 1 : 0);
label_4b05a0:
    // 0x4b05a0: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_4b05a4:
    if (ctx->pc == 0x4B05A4u) {
        ctx->pc = 0x4B05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05A0u;
        // 0x4b05a4: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B05A8u;
        goto label_4b05a8;
    }
    ctx->pc = 0x4B05A0u;
    {
        const bool branch_taken_0x4b05a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05A0u;
        // 0x4b05a4: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b05a0) {
            ctx->pc = 0x4B085Cu;
            goto label_4b085c;
        }
    }
    ctx->pc = 0x4B05A8u;
label_4b05a8:
    // 0x4b05a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4b05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4b05ac:
    // 0x4b05ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b05acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b05b0:
    // 0x4b05b0: 0x24422d70  addiu       $v0, $v0, 0x2D70
    ctx->pc = 0x4b05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11632));
label_4b05b4:
    // 0x4b05b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b05b8:
    // 0x4b05b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b05bc:
    // 0x4b05bc: 0x800008  jr          $a0
label_4b05c0:
    if (ctx->pc == 0x4B05C0u) {
        ctx->pc = 0x4B05C4u;
        goto label_4b05c4;
    }
    ctx->pc = 0x4B05BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B05C4u: goto label_4b05c4;
            case 0x4B05D4u: goto label_4b05d4;
            case 0x4B05E0u: goto label_4b05e0;
            case 0x4B05F0u: goto label_4b05f0;
            case 0x4B05F8u: goto label_4b05f8;
            case 0x4B060Cu: goto label_4b060c;
            case 0x4B0618u: goto label_4b0618;
            case 0x4B0650u: goto label_4b0650;
            case 0x4B06C0u: goto label_4b06c0;
            case 0x4B0704u: goto label_4b0704;
            case 0x4B073Cu: goto label_4b073c;
            case 0x4B078Cu: goto label_4b078c;
            case 0x4B07DCu: goto label_4b07dc;
            case 0x4B0844u: goto label_4b0844;
            case 0x4B085Cu: goto label_4b085c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B05BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B05C4u;
label_4b05c4:
    // 0x4b05c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b05c8:
    // 0x4b05c8: 0xaf82b8f4  sw          $v0, -0x470C($gp)
    ctx->pc = 0x4b05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949108), GPR_U32(ctx, 2));
label_4b05cc:
    // 0x4b05cc: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_4b05d0:
    if (ctx->pc == 0x4B05D0u) {
        ctx->pc = 0x4B05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05CCu;
        // 0x4b05d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B05D4u;
        goto label_4b05d4;
    }
    ctx->pc = 0x4B05CCu;
    {
        const bool branch_taken_0x4b05cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05CCu;
        // 0x4b05d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b05cc) {
            ctx->pc = 0x4B0860u;
            goto label_4b0860;
        }
    }
    ctx->pc = 0x4B05D4u;
label_4b05d4:
    // 0x4b05d4: 0xaf80b8f4  sw          $zero, -0x470C($gp)
    ctx->pc = 0x4b05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949108), GPR_U32(ctx, 0));
label_4b05d8:
    // 0x4b05d8: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_4b05dc:
    if (ctx->pc == 0x4B05DCu) {
        ctx->pc = 0x4B05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05D8u;
        // 0x4b05dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B05E0u;
        goto label_4b05e0;
    }
    ctx->pc = 0x4B05D8u;
    {
        const bool branch_taken_0x4b05d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05D8u;
        // 0x4b05dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b05d8) {
            ctx->pc = 0x4B0860u;
            goto label_4b0860;
        }
    }
    ctx->pc = 0x4B05E0u;
label_4b05e0:
    // 0x4b05e0: 0xaf91b8ec  sw          $s1, -0x4714($gp)
    ctx->pc = 0x4b05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949100), GPR_U32(ctx, 17));
label_4b05e4:
    // 0x4b05e4: 0xaf86b8f0  sw          $a2, -0x4710($gp)
    ctx->pc = 0x4b05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949104), GPR_U32(ctx, 6));
label_4b05e8:
    // 0x4b05e8: 0x1000009d  b           . + 4 + (0x9D << 2)
label_4b05ec:
    if (ctx->pc == 0x4B05ECu) {
        ctx->pc = 0x4B05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05E8u;
        // 0x4b05ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B05F0u;
        goto label_4b05f0;
    }
    ctx->pc = 0x4B05E8u;
    {
        const bool branch_taken_0x4b05e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05E8u;
        // 0x4b05ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b05e8) {
            ctx->pc = 0x4B0860u;
            goto label_4b0860;
        }
    }
    ctx->pc = 0x4B05F0u;
label_4b05f0:
    // 0x4b05f0: 0x1000009a  b           . + 4 + (0x9A << 2)
label_4b05f4:
    if (ctx->pc == 0x4B05F4u) {
        ctx->pc = 0x4B05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05F0u;
        // 0x4b05f4: 0xacb113a4  sw          $s1, 0x13A4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 5028), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B05F8u;
        goto label_4b05f8;
    }
    ctx->pc = 0x4B05F0u;
    {
        const bool branch_taken_0x4b05f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05F0u;
        // 0x4b05f4: 0xacb113a4  sw          $s1, 0x13A4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 5028), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b05f0) {
            ctx->pc = 0x4B085Cu;
            goto label_4b085c;
        }
    }
    ctx->pc = 0x4B05F8u;
label_4b05f8:
    // 0x4b05f8: 0x8f84b90c  lw          $a0, -0x46F4($gp)
    ctx->pc = 0x4b05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
label_4b05fc:
    // 0x4b05fc: 0xc12c908  jal         func_4B2420
label_4b0600:
    if (ctx->pc == 0x4B0600u) {
        ctx->pc = 0x4B0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05FCu;
        // 0x4b0600: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0604u;
        goto label_4b0604;
    }
    ctx->pc = 0x4B05FCu;
    SET_GPR_U32(ctx, 31, 0x4B0604u);
    ctx->pc = 0x4B0600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B05FCu;
    // 0x4b0600: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2420u, 0x4B05FCu, 0x4B0604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0604u;
label_4b0604:
    // 0x4b0604: 0x10000096  b           . + 4 + (0x96 << 2)
label_4b0608:
    if (ctx->pc == 0x4B0608u) {
        ctx->pc = 0x4B0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0604u;
        // 0x4b0608: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B060Cu;
        goto label_4b060c;
    }
    ctx->pc = 0x4B0604u;
    {
        const bool branch_taken_0x4b0604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0604u;
        // 0x4b0608: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0604) {
            ctx->pc = 0x4B0860u;
            goto label_4b0860;
        }
    }
    ctx->pc = 0x4B060Cu;
label_4b060c:
    // 0x4b060c: 0xaf80b8f8  sw          $zero, -0x4708($gp)
    ctx->pc = 0x4b060cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949112), GPR_U32(ctx, 0));
label_4b0610:
    // 0x4b0610: 0x10000093  b           . + 4 + (0x93 << 2)
label_4b0614:
    if (ctx->pc == 0x4B0614u) {
        ctx->pc = 0x4B0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0610u;
        // 0x4b0614: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0618u;
        goto label_4b0618;
    }
    ctx->pc = 0x4B0610u;
    {
        const bool branch_taken_0x4b0610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0610u;
        // 0x4b0614: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0610) {
            ctx->pc = 0x4B0860u;
            goto label_4b0860;
        }
    }
    ctx->pc = 0x4B0618u;
label_4b0618:
    // 0x4b0618: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b0618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b061c:
    // 0x4b061c: 0x2450ec40  addiu       $s0, $v0, -0x13C0
    ctx->pc = 0x4b061cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962240));
label_4b0620:
    // 0x4b0620: 0xac50ec40  sw          $s0, -0x13C0($v0)
    ctx->pc = 0x4b0620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962240), GPR_U32(ctx, 16));
label_4b0624:
    // 0x4b0624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0628:
    // 0x4b0628: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x4b0628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_4b062c:
    // 0x4b062c: 0xc0bf916  jal         func_2FE458
label_4b0630:
    if (ctx->pc == 0x4B0630u) {
        ctx->pc = 0x4B0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B062Cu;
        // 0x4b0630: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0634u;
        goto label_4b0634;
    }
    ctx->pc = 0x4B062Cu;
    SET_GPR_U32(ctx, 31, 0x4B0634u);
    ctx->pc = 0x4B0630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B062Cu;
    // 0x4b0630: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B062Cu, 0x4B0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0634u;
label_4b0634:
    // 0x4b0634: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x4b0634u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0638:
    // 0x4b0638: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x4b0638u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b063c:
    // 0x4b063c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0640:
    // 0x4b0640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b0640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0644:
    // 0x4b0644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b0644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0648:
    // 0x4b0648: 0x1000005f  b           . + 4 + (0x5F << 2)
label_4b064c:
    if (ctx->pc == 0x4B064Cu) {
        ctx->pc = 0x4B064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0648u;
        // 0x4b064c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0650u;
        goto label_4b0650;
    }
    ctx->pc = 0x4B0648u;
    {
        const bool branch_taken_0x4b0648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0648u;
        // 0x4b064c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0648) {
            ctx->pc = 0x4B07C8u;
            goto label_4b07c8;
        }
    }
    ctx->pc = 0x4B0650u;
label_4b0650:
    // 0x4b0650: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b0650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b0654:
    // 0x4b0654: 0x2450ec40  addiu       $s0, $v0, -0x13C0
    ctx->pc = 0x4b0654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962240));
label_4b0658:
    // 0x4b0658: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x4b0658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_4b065c:
    // 0x4b065c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4b065cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4b0660:
    // 0x4b0660: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4b0660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b0664:
    // 0x4b0664: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b0664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0668:
    // 0x4b0668: 0xc12c4d2  jal         func_4B1348
label_4b066c:
    if (ctx->pc == 0x4B066Cu) {
        ctx->pc = 0x4B066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0668u;
        // 0x4b066c: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0670u;
        goto label_4b0670;
    }
    ctx->pc = 0x4B0668u;
    SET_GPR_U32(ctx, 31, 0x4B0670u);
    ctx->pc = 0x4B066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0668u;
    // 0x4b066c: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1348u, 0x4B0668u, 0x4B0670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0670u;
label_4b0670:
    // 0x4b0670: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4b0674:
    if (ctx->pc == 0x4B0674u) {
        ctx->pc = 0x4B0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0670u;
        // 0x4b0674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0678u;
        goto label_4b0678;
    }
    ctx->pc = 0x4B0670u;
    {
        const bool branch_taken_0x4b0670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0670u;
        // 0x4b0674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0670) {
            ctx->pc = 0x4B06A4u;
            goto label_4b06a4;
        }
    }
    ctx->pc = 0x4B0678u;
label_4b0678:
    // 0x4b0678: 0xc12d062  jal         func_4B4188
label_4b067c:
    if (ctx->pc == 0x4B067Cu) {
        ctx->pc = 0x4B067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0678u;
        // 0x4b067c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0680u;
        goto label_4b0680;
    }
    ctx->pc = 0x4B0678u;
    SET_GPR_U32(ctx, 31, 0x4B0680u);
    ctx->pc = 0x4B067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0678u;
    // 0x4b067c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4188u, 0x4B0678u, 0x4B0680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0680u;
label_4b0680:
    // 0x4b0680: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4b0684:
    if (ctx->pc == 0x4B0684u) {
        ctx->pc = 0x4B0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0680u;
        // 0x4b0684: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0688u;
        goto label_4b0688;
    }
    ctx->pc = 0x4B0680u;
    {
        const bool branch_taken_0x4b0680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0680u;
        // 0x4b0684: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0680) {
            ctx->pc = 0x4B0698u;
            goto label_4b0698;
        }
    }
    ctx->pc = 0x4B0688u;
label_4b0688:
    // 0x4b0688: 0xc12d092  jal         func_4B4248
label_4b068c:
    if (ctx->pc == 0x4B068Cu) {
        ctx->pc = 0x4B068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0688u;
        // 0x4b068c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0690u;
        goto label_4b0690;
    }
    ctx->pc = 0x4B0688u;
    SET_GPR_U32(ctx, 31, 0x4B0690u);
    ctx->pc = 0x4B068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0688u;
    // 0x4b068c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4248u, 0x4B0688u, 0x4B0690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0690u;
label_4b0690:
    // 0x4b0690: 0x10000003  b           . + 4 + (0x3 << 2)
label_4b0694:
    if (ctx->pc == 0x4B0694u) {
        ctx->pc = 0x4B0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0690u;
        // 0x4b0694: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0698u;
        goto label_4b0698;
    }
    ctx->pc = 0x4B0690u;
    {
        const bool branch_taken_0x4b0690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0690u;
        // 0x4b0694: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0690) {
            ctx->pc = 0x4B06A0u;
            goto label_4b06a0;
        }
    }
    ctx->pc = 0x4B0698u;
label_4b0698:
    // 0x4b0698: 0xc12c5aa  jal         func_4B16A8
label_4b069c:
    if (ctx->pc == 0x4B069Cu) {
        ctx->pc = 0x4B069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0698u;
        // 0x4b069c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B06A0u;
        goto label_4b06a0;
    }
    ctx->pc = 0x4B0698u;
    SET_GPR_U32(ctx, 31, 0x4B06A0u);
    ctx->pc = 0x4B069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0698u;
    // 0x4b069c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B16A8u, 0x4B0698u, 0x4B06A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B06A0u;
label_4b06a0:
    // 0x4b06a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b06a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b06a4:
    // 0x4b06a4: 0xc0bf916  jal         func_2FE458
label_4b06a8:
    if (ctx->pc == 0x4B06A8u) {
        ctx->pc = 0x4B06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06A4u;
        // 0x4b06a8: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B06ACu;
        goto label_4b06ac;
    }
    ctx->pc = 0x4B06A4u;
    SET_GPR_U32(ctx, 31, 0x4B06ACu);
    ctx->pc = 0x4B06A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B06A4u;
    // 0x4b06a8: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B06A4u, 0x4B06ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B06ACu;
label_4b06ac:
    // 0x4b06ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b06acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b06b0:
    // 0x4b06b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b06b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b06b4:
    // 0x4b06b4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4b06b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4b06b8:
    // 0x4b06b8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_4b06bc:
    if (ctx->pc == 0x4B06BCu) {
        ctx->pc = 0x4B06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06B8u;
        // 0x4b06bc: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B06C0u;
        goto label_4b06c0;
    }
    ctx->pc = 0x4B06B8u;
    {
        const bool branch_taken_0x4b06b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06B8u;
        // 0x4b06bc: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b06b8) {
            ctx->pc = 0x4B0770u;
            goto label_4b0770;
        }
    }
    ctx->pc = 0x4B06C0u;
label_4b06c0:
    // 0x4b06c0: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x4b06c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_4b06c4:
    // 0x4b06c4: 0x2610ec40  addiu       $s0, $s0, -0x13C0
    ctx->pc = 0x4b06c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962240));
label_4b06c8:
    // 0x4b06c8: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x4b06c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b06cc:
    // 0x4b06cc: 0xc12c5aa  jal         func_4B16A8
label_4b06d0:
    if (ctx->pc == 0x4B06D0u) {
        ctx->pc = 0x4B06D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06CCu;
        // 0x4b06d0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B06D4u;
        goto label_4b06d4;
    }
    ctx->pc = 0x4B06CCu;
    SET_GPR_U32(ctx, 31, 0x4B06D4u);
    ctx->pc = 0x4B06D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B06CCu;
    // 0x4b06d0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B16A8u, 0x4B06CCu, 0x4B06D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B06D4u;
label_4b06d4:
    // 0x4b06d4: 0xc12d07c  jal         func_4B41F0
label_4b06d8:
    if (ctx->pc == 0x4B06D8u) {
        ctx->pc = 0x4B06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06D4u;
        // 0x4b06d8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B06DCu;
        goto label_4b06dc;
    }
    ctx->pc = 0x4B06D4u;
    SET_GPR_U32(ctx, 31, 0x4B06DCu);
    ctx->pc = 0x4B06D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B06D4u;
    // 0x4b06d8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B41F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B41F0u, 0x4B06D4u, 0x4B06DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B06DCu;
label_4b06dc:
    // 0x4b06dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b06dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b06e0:
    // 0x4b06e0: 0xc0bf916  jal         func_2FE458
label_4b06e4:
    if (ctx->pc == 0x4B06E4u) {
        ctx->pc = 0x4B06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06E0u;
        // 0x4b06e4: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B06E8u;
        goto label_4b06e8;
    }
    ctx->pc = 0x4B06E0u;
    SET_GPR_U32(ctx, 31, 0x4B06E8u);
    ctx->pc = 0x4B06E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B06E0u;
    // 0x4b06e4: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B06E0u, 0x4B06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B06E8u;
label_4b06e8:
    // 0x4b06e8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x4b06e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b06ec:
    // 0x4b06ec: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x4b06ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b06f0:
    // 0x4b06f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b06f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b06f4:
    // 0x4b06f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b06f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b06f8:
    // 0x4b06f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b06f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b06fc:
    // 0x4b06fc: 0x10000032  b           . + 4 + (0x32 << 2)
label_4b0700:
    if (ctx->pc == 0x4B0700u) {
        ctx->pc = 0x4B0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06FCu;
        // 0x4b0700: 0x24070023  addiu       $a3, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0704u;
        goto label_4b0704;
    }
    ctx->pc = 0x4B06FCu;
    {
        const bool branch_taken_0x4b06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06FCu;
        // 0x4b0700: 0x24070023  addiu       $a3, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b06fc) {
            ctx->pc = 0x4B07C8u;
            goto label_4b07c8;
        }
    }
    ctx->pc = 0x4B0704u;
label_4b0704:
    // 0x4b0704: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b0704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b0708:
    // 0x4b0708: 0x2450ec80  addiu       $s0, $v0, -0x1380
    ctx->pc = 0x4b0708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
label_4b070c:
    // 0x4b070c: 0xac50ec80  sw          $s0, -0x1380($v0)
    ctx->pc = 0x4b070cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962304), GPR_U32(ctx, 16));
label_4b0710:
    // 0x4b0710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0714:
    // 0x4b0714: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x4b0714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_4b0718:
    // 0x4b0718: 0xc0bf916  jal         func_2FE458
label_4b071c:
    if (ctx->pc == 0x4B071Cu) {
        ctx->pc = 0x4B071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0718u;
        // 0x4b071c: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0720u;
        goto label_4b0720;
    }
    ctx->pc = 0x4B0718u;
    SET_GPR_U32(ctx, 31, 0x4B0720u);
    ctx->pc = 0x4B071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0718u;
    // 0x4b071c: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B0718u, 0x4B0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0720u;
label_4b0720:
    // 0x4b0720: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x4b0720u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0724:
    // 0x4b0724: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x4b0724u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0728:
    // 0x4b0728: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b0728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b072c:
    // 0x4b072c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b072cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0730:
    // 0x4b0730: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b0730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0734:
    // 0x4b0734: 0x10000024  b           . + 4 + (0x24 << 2)
label_4b0738:
    if (ctx->pc == 0x4B0738u) {
        ctx->pc = 0x4B0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0734u;
        // 0x4b0738: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B073Cu;
        goto label_4b073c;
    }
    ctx->pc = 0x4B0734u;
    {
        const bool branch_taken_0x4b0734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0734u;
        // 0x4b0738: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0734) {
            ctx->pc = 0x4B07C8u;
            goto label_4b07c8;
        }
    }
    ctx->pc = 0x4B073Cu;
label_4b073c:
    // 0x4b073c: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x4b073cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_4b0740:
    // 0x4b0740: 0x2610ec80  addiu       $s0, $s0, -0x1380
    ctx->pc = 0x4b0740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962304));
label_4b0744:
    // 0x4b0744: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4b0744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b0748:
    // 0x4b0748: 0xc12d0e0  jal         func_4B4380
label_4b074c:
    if (ctx->pc == 0x4B074Cu) {
        ctx->pc = 0x4B074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0748u;
        // 0x4b074c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0750u;
        goto label_4b0750;
    }
    ctx->pc = 0x4B0748u;
    SET_GPR_U32(ctx, 31, 0x4B0750u);
    ctx->pc = 0x4B074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0748u;
    // 0x4b074c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4380u, 0x4B0748u, 0x4B0750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0750u;
label_4b0750:
    // 0x4b0750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0754:
    // 0x4b0754: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x4b0754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_4b0758:
    // 0x4b0758: 0xc0bf916  jal         func_2FE458
label_4b075c:
    if (ctx->pc == 0x4B075Cu) {
        ctx->pc = 0x4B075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0758u;
        // 0x4b075c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0760u;
        goto label_4b0760;
    }
    ctx->pc = 0x4B0758u;
    SET_GPR_U32(ctx, 31, 0x4B0760u);
    ctx->pc = 0x4B075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0758u;
    // 0x4b075c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B0758u, 0x4B0760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0760u;
label_4b0760:
    // 0x4b0760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0764:
    // 0x4b0764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b0764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0768:
    // 0x4b0768: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4b0768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4b076c:
    // 0x4b076c: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x4b076cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_4b0770:
    // 0x4b0770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b0770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0774:
    // 0x4b0774: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b0774u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0778:
    // 0x4b0778: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4b0778u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b077c:
    // 0x4b077c: 0xc12baca  jal         func_4AEB28
label_4b0780:
    if (ctx->pc == 0x4B0780u) {
        ctx->pc = 0x4B0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B077Cu;
        // 0x4b0780: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0784u;
        goto label_4b0784;
    }
    ctx->pc = 0x4B077Cu;
    SET_GPR_U32(ctx, 31, 0x4B0784u);
    ctx->pc = 0x4B0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B077Cu;
    // 0x4b0780: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B077Cu, 0x4B0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0784u;
label_4b0784:
    // 0x4b0784: 0x10000036  b           . + 4 + (0x36 << 2)
label_4b0788:
    if (ctx->pc == 0x4B0788u) {
        ctx->pc = 0x4B0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0784u;
        // 0x4b0788: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B078Cu;
        goto label_4b078c;
    }
    ctx->pc = 0x4B0784u;
    {
        const bool branch_taken_0x4b0784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0784u;
        // 0x4b0788: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0784) {
            ctx->pc = 0x4B0860u;
            goto label_4b0860;
        }
    }
    ctx->pc = 0x4B078Cu;
label_4b078c:
    // 0x4b078c: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x4b078cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_4b0790:
    // 0x4b0790: 0x2610ec80  addiu       $s0, $s0, -0x1380
    ctx->pc = 0x4b0790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962304));
label_4b0794:
    // 0x4b0794: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4b0794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b0798:
    // 0x4b0798: 0xc12d0f0  jal         func_4B43C0
label_4b079c:
    if (ctx->pc == 0x4B079Cu) {
        ctx->pc = 0x4B079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0798u;
        // 0x4b079c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B07A0u;
        goto label_4b07a0;
    }
    ctx->pc = 0x4B0798u;
    SET_GPR_U32(ctx, 31, 0x4B07A0u);
    ctx->pc = 0x4B079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0798u;
    // 0x4b079c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B43C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B43C0u, 0x4B0798u, 0x4B07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B07A0u;
label_4b07a0:
    // 0x4b07a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b07a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b07a4:
    // 0x4b07a4: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x4b07a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_4b07a8:
    // 0x4b07a8: 0xc0bf916  jal         func_2FE458
label_4b07ac:
    if (ctx->pc == 0x4B07ACu) {
        ctx->pc = 0x4B07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07A8u;
        // 0x4b07ac: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B07B0u;
        goto label_4b07b0;
    }
    ctx->pc = 0x4B07A8u;
    SET_GPR_U32(ctx, 31, 0x4B07B0u);
    ctx->pc = 0x4B07ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B07A8u;
    // 0x4b07ac: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B07A8u, 0x4B07B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B07B0u;
label_4b07b0:
    // 0x4b07b0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x4b07b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b07b4:
    // 0x4b07b4: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x4b07b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b07b8:
    // 0x4b07b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b07b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b07bc:
    // 0x4b07bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b07bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b07c0:
    // 0x4b07c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b07c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b07c4:
    // 0x4b07c4: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x4b07c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_4b07c8:
    // 0x4b07c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b07c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b07cc:
    // 0x4b07cc: 0xc12baca  jal         func_4AEB28
label_4b07d0:
    if (ctx->pc == 0x4B07D0u) {
        ctx->pc = 0x4B07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07CCu;
        // 0x4b07d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B07D4u;
        goto label_4b07d4;
    }
    ctx->pc = 0x4B07CCu;
    SET_GPR_U32(ctx, 31, 0x4B07D4u);
    ctx->pc = 0x4B07D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B07CCu;
    // 0x4b07d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B07CCu, 0x4B07D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B07D4u;
label_4b07d4:
    // 0x4b07d4: 0x10000022  b           . + 4 + (0x22 << 2)
label_4b07d8:
    if (ctx->pc == 0x4B07D8u) {
        ctx->pc = 0x4B07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07D4u;
        // 0x4b07d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B07DCu;
        goto label_4b07dc;
    }
    ctx->pc = 0x4B07D4u;
    {
        const bool branch_taken_0x4b07d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07D4u;
        // 0x4b07d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b07d4) {
            ctx->pc = 0x4B0860u;
            goto label_4b0860;
        }
    }
    ctx->pc = 0x4B07DCu;
label_4b07dc:
    // 0x4b07dc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b07e0:
    // 0x4b07e0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4b07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4b07e4:
    // 0x4b07e4: 0x2450eb00  addiu       $s0, $v0, -0x1500
    ctx->pc = 0x4b07e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961920));
label_4b07e8:
    // 0x4b07e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b07e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b07ec:
    // 0x4b07ec: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_4b07f0:
    if (ctx->pc == 0x4B07F0u) {
        ctx->pc = 0x4B07F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07ECu;
        // 0x4b07f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B07F4u;
        goto label_4b07f4;
    }
    ctx->pc = 0x4B07ECu;
    {
        const bool branch_taken_0x4b07ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4B07F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B07ECu;
        // 0x4b07f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b07ec) {
            ctx->pc = 0x4B0810u;
            goto label_4b0810;
        }
    }
    ctx->pc = 0x4B07F4u;
label_4b07f4:
    // 0x4b07f4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4b07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4b07f8:
    // 0x4b07f8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x4b07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4b07fc:
    // 0x4b07fc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x4b07fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b0800:
    // 0x4b0800: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x4b0800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4b0804:
    // 0x4b0804: 0x40f809  jalr        $v0
label_4b0808:
    if (ctx->pc == 0x4B0808u) {
        ctx->pc = 0x4B0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0804u;
        // 0x4b0808: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B080Cu;
        goto label_4b080c;
    }
    ctx->pc = 0x4B0804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B080Cu);
        ctx->pc = 0x4B0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0804u;
        // 0x4b0808: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0804u, 0x4B080Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B080Cu;
label_4b080c:
    // 0x4b080c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0810:
    // 0x4b0810: 0xc0bf916  jal         func_2FE458
label_4b0814:
    if (ctx->pc == 0x4B0814u) {
        ctx->pc = 0x4B0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0810u;
        // 0x4b0814: 0x2605007f  addiu       $a1, $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0818u;
        goto label_4b0818;
    }
    ctx->pc = 0x4B0810u;
    SET_GPR_U32(ctx, 31, 0x4B0818u);
    ctx->pc = 0x4B0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0810u;
    // 0x4b0814: 0x2605007f  addiu       $a1, $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B0810u, 0x4B0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0818u;
label_4b0818:
    // 0x4b0818: 0x8f84b8e4  lw          $a0, -0x471C($gp)
    ctx->pc = 0x4b0818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949092)));
label_4b081c:
    // 0x4b081c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b081cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0820:
    // 0x4b0820: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4b0820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b0824:
    // 0x4b0824: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4b0824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4b0828:
    // 0x4b0828: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x4b0828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4b082c:
    // 0x4b082c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b082cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0830:
    // 0x4b0830: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b0830u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0834:
    // 0x4b0834: 0xc12baca  jal         func_4AEB28
label_4b0838:
    if (ctx->pc == 0x4B0838u) {
        ctx->pc = 0x4B0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0834u;
        // 0x4b0838: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B083Cu;
        goto label_4b083c;
    }
    ctx->pc = 0x4B0834u;
    SET_GPR_U32(ctx, 31, 0x4B083Cu);
    ctx->pc = 0x4B0838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0834u;
    // 0x4b0838: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B0834u, 0x4B083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B083Cu;
label_4b083c:
    // 0x4b083c: 0x10000008  b           . + 4 + (0x8 << 2)
label_4b0840:
    if (ctx->pc == 0x4B0840u) {
        ctx->pc = 0x4B0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B083Cu;
        // 0x4b0840: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0844u;
        goto label_4b0844;
    }
    ctx->pc = 0x4B083Cu;
    {
        const bool branch_taken_0x4b083c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B083Cu;
        // 0x4b0840: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b083c) {
            ctx->pc = 0x4B0860u;
            goto label_4b0860;
        }
    }
    ctx->pc = 0x4B0844u;
label_4b0844:
    // 0x4b0844: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
label_4b0848:
    if (ctx->pc == 0x4B0848u) {
        ctx->pc = 0x4B0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0844u;
        // 0x4b0848: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B084Cu;
        goto label_4b084c;
    }
    ctx->pc = 0x4B0844u;
    {
        const bool branch_taken_0x4b0844 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0844) {
            ctx->pc = 0x4B0848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0844u;
            // 0x4b0848: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B084Cu;
            goto label_4b084c;
        }
    }
    ctx->pc = 0x4B084Cu;
label_4b084c:
    // 0x4b084c: 0x1a400004  blez        $s2, . + 4 + (0x4 << 2)
label_4b0850:
    if (ctx->pc == 0x4B0850u) {
        ctx->pc = 0x4B0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B084Cu;
        // 0x4b0850: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0854u;
        goto label_4b0854;
    }
    ctx->pc = 0x4B084Cu;
    {
        const bool branch_taken_0x4b084c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4B0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B084Cu;
        // 0x4b0850: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b084c) {
            ctx->pc = 0x4B0860u;
            goto label_4b0860;
        }
    }
    ctx->pc = 0x4B0854u;
label_4b0854:
    // 0x4b0854: 0xc0bf6a4  jal         func_2FDA90
label_4b0858:
    if (ctx->pc == 0x4B0858u) {
        ctx->pc = 0x4B0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0854u;
        // 0x4b0858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B085Cu;
        goto label_4b085c;
    }
    ctx->pc = 0x4B0854u;
    SET_GPR_U32(ctx, 31, 0x4B085Cu);
    ctx->pc = 0x4B0858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0854u;
    // 0x4b0858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA90u, 0x4B0854u, 0x4B085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B085Cu;
label_4b085c:
    // 0x4b085c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4b085cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b0860:
    // 0x4b0860: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b0860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b0864:
    // 0x4b0864: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4b0864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b0868:
    // 0x4b0868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b086c:
    // 0x4b086c: 0x3e00008  jr          $ra
label_4b0870:
    if (ctx->pc == 0x4B0870u) {
        ctx->pc = 0x4B0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B086Cu;
        // 0x4b0870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0874u;
        goto label_4b0874;
    }
    ctx->pc = 0x4B086Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B086Cu;
        // 0x4b0870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B086Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0874u;
label_4b0874:
    // 0x4b0874: 0x0  nop
    ctx->pc = 0x4b0874u;
    // NOP
    ctx->pc = 0x4b0878u;
}
