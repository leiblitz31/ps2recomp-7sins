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

// Function: sub_003E4388
// Address: 0x3e4388 - 0x3e4fd8
void sub_003E4388_0x3e4388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4388_0x3e4388");
#endif

    switch (ctx->pc) {
        case 0x3e43bcu: goto label_3e43bc;
        case 0x3e43ccu: goto label_3e43cc;
        case 0x3e43d8u: goto label_3e43d8;
        case 0x3e43e4u: goto label_3e43e4;
        case 0x3e43f0u: goto label_3e43f0;
        case 0x3e43fcu: goto label_3e43fc;
        case 0x3e4408u: goto label_3e4408;
        case 0x3e4414u: goto label_3e4414;
        case 0x3e4420u: goto label_3e4420;
        case 0x3e442cu: goto label_3e442c;
        case 0x3e4448u: goto label_3e4448;
        case 0x3e446cu: goto label_3e446c;
        case 0x3e4490u: goto label_3e4490;
        case 0x3e4508u: goto label_3e4508;
        case 0x3e4524u: goto label_3e4524;
        case 0x3e4540u: goto label_3e4540;
        case 0x3e454cu: goto label_3e454c;
        case 0x3e4560u: goto label_3e4560;
        case 0x3e4574u: goto label_3e4574;
        case 0x3e4588u: goto label_3e4588;
        case 0x3e45a0u: goto label_3e45a0;
        case 0x3e45b0u: goto label_3e45b0;
        case 0x3e460cu: goto label_3e460c;
        case 0x3e4628u: goto label_3e4628;
        case 0x3e4644u: goto label_3e4644;
        case 0x3e4650u: goto label_3e4650;
        case 0x3e4664u: goto label_3e4664;
        case 0x3e4678u: goto label_3e4678;
        case 0x3e468cu: goto label_3e468c;
        case 0x3e46a4u: goto label_3e46a4;
        case 0x3e46b4u: goto label_3e46b4;
        case 0x3e4710u: goto label_3e4710;
        case 0x3e472cu: goto label_3e472c;
        case 0x3e4748u: goto label_3e4748;
        case 0x3e4750u: goto label_3e4750;
        case 0x3e4764u: goto label_3e4764;
        case 0x3e4778u: goto label_3e4778;
        case 0x3e478cu: goto label_3e478c;
        case 0x3e47a4u: goto label_3e47a4;
        case 0x3e47b4u: goto label_3e47b4;
        case 0x3e47bcu: goto label_3e47bc;
        case 0x3e47c4u: goto label_3e47c4;
        case 0x3e4808u: goto label_3e4808;
        case 0x3e4820u: goto label_3e4820;
        case 0x3e48b0u: goto label_3e48b0;
        case 0x3e48bcu: goto label_3e48bc;
        case 0x3e48d0u: goto label_3e48d0;
        case 0x3e48e4u: goto label_3e48e4;
        case 0x3e48f8u: goto label_3e48f8;
        case 0x3e492cu: goto label_3e492c;
        case 0x3e493cu: goto label_3e493c;
        case 0x3e4950u: goto label_3e4950;
        case 0x3e4968u: goto label_3e4968;
        case 0x3e497cu: goto label_3e497c;
        case 0x3e4988u: goto label_3e4988;
        case 0x3e499cu: goto label_3e499c;
        case 0x3e49b0u: goto label_3e49b0;
        case 0x3e49c4u: goto label_3e49c4;
        case 0x3e49dcu: goto label_3e49dc;
        case 0x3e49f0u: goto label_3e49f0;
        case 0x3e49fcu: goto label_3e49fc;
        case 0x3e4a10u: goto label_3e4a10;
        case 0x3e4a30u: goto label_3e4a30;
        case 0x3e4a50u: goto label_3e4a50;
        case 0x3e4a5cu: goto label_3e4a5c;
        case 0x3e4a6cu: goto label_3e4a6c;
        case 0x3e4a94u: goto label_3e4a94;
        case 0x3e4ab0u: goto label_3e4ab0;
        case 0x3e4afcu: goto label_3e4afc;
        case 0x3e4b14u: goto label_3e4b14;
        case 0x3e4b2cu: goto label_3e4b2c;
        case 0x3e4b40u: goto label_3e4b40;
        case 0x3e4b50u: goto label_3e4b50;
        case 0x3e4b60u: goto label_3e4b60;
        case 0x3e4b70u: goto label_3e4b70;
        case 0x3e4b84u: goto label_3e4b84;
        case 0x3e4bbcu: goto label_3e4bbc;
        case 0x3e4bf0u: goto label_3e4bf0;
        case 0x3e4c08u: goto label_3e4c08;
        case 0x3e4c38u: goto label_3e4c38;
        case 0x3e4c74u: goto label_3e4c74;
        case 0x3e4c8cu: goto label_3e4c8c;
        case 0x3e4c98u: goto label_3e4c98;
        case 0x3e4d3cu: goto label_3e4d3c;
        case 0x3e4d58u: goto label_3e4d58;
        case 0x3e4d74u: goto label_3e4d74;
        case 0x3e4d90u: goto label_3e4d90;
        case 0x3e4da0u: goto label_3e4da0;
        case 0x3e4db0u: goto label_3e4db0;
        case 0x3e4dc0u: goto label_3e4dc0;
        case 0x3e4dd8u: goto label_3e4dd8;
        case 0x3e4e34u: goto label_3e4e34;
        case 0x3e4e4cu: goto label_3e4e4c;
        case 0x3e4e64u: goto label_3e4e64;
        case 0x3e4e78u: goto label_3e4e78;
        case 0x3e4e88u: goto label_3e4e88;
        case 0x3e4e98u: goto label_3e4e98;
        case 0x3e4ea8u: goto label_3e4ea8;
        case 0x3e4ebcu: goto label_3e4ebc;
        case 0x3e4f20u: goto label_3e4f20;
        case 0x3e4f38u: goto label_3e4f38;
        case 0x3e4f50u: goto label_3e4f50;
        case 0x3e4f60u: goto label_3e4f60;
        case 0x3e4f70u: goto label_3e4f70;
        case 0x3e4f80u: goto label_3e4f80;
        case 0x3e4f90u: goto label_3e4f90;
        case 0x3e4fa4u: goto label_3e4fa4;
        default: break;
    }

    ctx->pc = 0x3e4388u;

    // 0x3e4388: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3e4388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3e438c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x3e438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x3e4390: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x3e4390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x3e4394: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e4394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4398: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x3e4398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x3e439c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3e439cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e43a0: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x3e43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x3e43a4: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x3e43a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x3e43a8: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x3e43a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x3e43ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E43ACu;
    {
        const bool branch_taken_0x3e43ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43ACu;
        // 0x3e43b0: 0xffbf00d0  sd          $ra, 0xD0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e43ac) {
            ctx->pc = 0x3E43BCu;
            goto label_3e43bc;
        }
    }
    ctx->pc = 0x3E43B4u;
    // 0x3e43b4: 0xc0f8590  jal         func_3E1640
    ctx->pc = 0x3E43B4u;
    SET_GPR_U32(ctx, 31, 0x3E43BCu);
    ctx->pc = 0x3E1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1640u, 0x3E43B4u, 0x3E43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E43BCu;
label_3e43bc:
    // 0x3e43bc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E43BCu;
    {
        const bool branch_taken_0x3e43bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43BCu;
        // 0x3e43c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e43bc) {
            ctx->pc = 0x3E43CCu;
            goto label_3e43cc;
        }
    }
    ctx->pc = 0x3E43C4u;
    // 0x3e43c4: 0xc0f8590  jal         func_3E1640
    ctx->pc = 0x3E43C4u;
    SET_GPR_U32(ctx, 31, 0x3E43CCu);
    ctx->pc = 0x3E43C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E43C4u;
    // 0x3e43c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1640u, 0x3E43C4u, 0x3E43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E43CCu;
label_3e43cc:
    // 0x3e43cc: 0x8e850158  lw          $a1, 0x158($s4)
    ctx->pc = 0x3e43ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x3e43d0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E43D0u;
    SET_GPR_U32(ctx, 31, 0x3E43D8u);
    ctx->pc = 0x3E43D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E43D0u;
    // 0x3e43d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E43D0u, 0x3E43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E43D8u;
label_3e43d8:
    // 0x3e43d8: 0x8e8501bc  lw          $a1, 0x1BC($s4)
    ctx->pc = 0x3e43d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x3e43dc: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E43DCu;
    SET_GPR_U32(ctx, 31, 0x3E43E4u);
    ctx->pc = 0x3E43E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E43DCu;
    // 0x3e43e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E43DCu, 0x3E43E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E43E4u;
label_3e43e4:
    // 0x3e43e4: 0x8e8501b8  lw          $a1, 0x1B8($s4)
    ctx->pc = 0x3e43e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x3e43e8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E43E8u;
    SET_GPR_U32(ctx, 31, 0x3E43F0u);
    ctx->pc = 0x3E43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E43E8u;
    // 0x3e43ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E43E8u, 0x3E43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E43F0u;
label_3e43f0:
    // 0x3e43f0: 0x8e850290  lw          $a1, 0x290($s4)
    ctx->pc = 0x3e43f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 656)));
    // 0x3e43f4: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E43F4u;
    SET_GPR_U32(ctx, 31, 0x3E43FCu);
    ctx->pc = 0x3E43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E43F4u;
    // 0x3e43f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E43F4u, 0x3E43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E43FCu;
label_3e43fc:
    // 0x3e43fc: 0x8e850294  lw          $a1, 0x294($s4)
    ctx->pc = 0x3e43fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 660)));
    // 0x3e4400: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4400u;
    SET_GPR_U32(ctx, 31, 0x3E4408u);
    ctx->pc = 0x3E4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4400u;
    // 0x3e4404: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4400u, 0x3E4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4408u;
label_3e4408:
    // 0x3e4408: 0x8e850254  lw          $a1, 0x254($s4)
    ctx->pc = 0x3e4408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 596)));
    // 0x3e440c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E440Cu;
    SET_GPR_U32(ctx, 31, 0x3E4414u);
    ctx->pc = 0x3E4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E440Cu;
    // 0x3e4410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E440Cu, 0x3E4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4414u;
label_3e4414:
    // 0x3e4414: 0x8e850258  lw          $a1, 0x258($s4)
    ctx->pc = 0x3e4414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 600)));
    // 0x3e4418: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4418u;
    SET_GPR_U32(ctx, 31, 0x3E4420u);
    ctx->pc = 0x3E441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4418u;
    // 0x3e441c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4418u, 0x3E4420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4420u;
label_3e4420:
    // 0x3e4420: 0x8e85025c  lw          $a1, 0x25C($s4)
    ctx->pc = 0x3e4420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 604)));
    // 0x3e4424: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4424u;
    SET_GPR_U32(ctx, 31, 0x3E442Cu);
    ctx->pc = 0x3E4428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4424u;
    // 0x3e4428: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4424u, 0x3E442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E442Cu;
label_3e442c:
    // 0x3e442c: 0xde8202b8  ld          $v0, 0x2B8($s4)
    ctx->pc = 0x3e442cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 696)));
    // 0x3e4430: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3e4430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3e4434: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E4434u;
    {
        const bool branch_taken_0x3e4434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4434) {
            ctx->pc = 0x3E4438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4434u;
            // 0x3e4438: 0xde8302b8  ld          $v1, 0x2B8($s4) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E444Cu;
            goto label_3e444c;
        }
    }
    ctx->pc = 0x3E443Cu;
    // 0x3e443c: 0x8e8501f8  lw          $a1, 0x1F8($s4)
    ctx->pc = 0x3e443cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
    // 0x3e4440: 0xc0f85d6  jal         func_3E1758
    ctx->pc = 0x3E4440u;
    SET_GPR_U32(ctx, 31, 0x3E4448u);
    ctx->pc = 0x3E4444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4440u;
    // 0x3e4444: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1758u, 0x3E4440u, 0x3E4448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4448u;
label_3e4448:
    // 0x3e4448: 0xde8302b8  ld          $v1, 0x2B8($s4)
    ctx->pc = 0x3e4448u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 696)));
label_3e444c:
    // 0x3e444c: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x3e444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3e4450: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e4450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e4454: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3e4454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3e4458: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E4458u;
    {
        const bool branch_taken_0x3e4458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4458u;
        // 0x3e445c: 0xfe8202b8  sd          $v0, 0x2B8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 696), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4458) {
            ctx->pc = 0x3E446Cu;
            goto label_3e446c;
        }
    }
    ctx->pc = 0x3E4460u;
    // 0x3e4460: 0x8e850278  lw          $a1, 0x278($s4)
    ctx->pc = 0x3e4460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x3e4464: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4464u;
    SET_GPR_U32(ctx, 31, 0x3E446Cu);
    ctx->pc = 0x3E4468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4464u;
    // 0x3e4468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4464u, 0x3E446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E446Cu;
label_3e446c:
    // 0x3e446c: 0xde8302b8  ld          $v1, 0x2B8($s4)
    ctx->pc = 0x3e446cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 696)));
    // 0x3e4470: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x3e4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x3e4474: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e4474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e4478: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3e4478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3e447c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E447Cu;
    {
        const bool branch_taken_0x3e447c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E447Cu;
        // 0x3e4480: 0xfe8202b8  sd          $v0, 0x2B8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 696), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e447c) {
            ctx->pc = 0x3E4490u;
            goto label_3e4490;
        }
    }
    ctx->pc = 0x3E4484u;
    // 0x3e4484: 0x8e850298  lw          $a1, 0x298($s4)
    ctx->pc = 0x3e4484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 664)));
    // 0x3e4488: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4488u;
    SET_GPR_U32(ctx, 31, 0x3E4490u);
    ctx->pc = 0x3E448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4488u;
    // 0x3e448c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4488u, 0x3E4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4490u;
label_3e4490:
    // 0x3e4490: 0xde8202b8  ld          $v0, 0x2B8($s4)
    ctx->pc = 0x3e4490u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 696)));
    // 0x3e4494: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3e4494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3e4498: 0x8e850260  lw          $a1, 0x260($s4)
    ctx->pc = 0x3e4498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3e449c: 0x26920110  addiu       $s2, $s4, 0x110
    ctx->pc = 0x3e449cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x3e44a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e44a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e44a4: 0x269300c0  addiu       $s3, $s4, 0xC0
    ctx->pc = 0x3e44a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x3e44a8: 0xfe8202b8  sd          $v0, 0x2B8($s4)
    ctx->pc = 0x3e44a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 696), GPR_U64(ctx, 2));
    // 0x3e44ac: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3E44ACu;
    {
        const bool branch_taken_0x3e44ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E44ACu;
        // 0x3e44b0: 0x27b500c0  addiu       $s5, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e44ac) {
            ctx->pc = 0x3E45B0u;
            goto label_3e45b0;
        }
    }
    ctx->pc = 0x3E44B4u;
    // 0x3e44b4: 0x8e820248  lw          $v0, 0x248($s4)
    ctx->pc = 0x3e44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 584)));
    // 0x3e44b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e44bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e44c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3e44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e44c4: 0x641004  sllv        $v0, $a0, $v1
    ctx->pc = 0x3e44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e44c8: 0x58400037  blezl       $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3E44C8u;
    {
        const bool branch_taken_0x3e44c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e44c8) {
            ctx->pc = 0x3E44CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E44C8u;
            // 0x3e44cc: 0x8e850260  lw          $a1, 0x260($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E45A8u;
            goto label_3e45a8;
        }
    }
    ctx->pc = 0x3E44D0u;
    // 0x3e44d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e44d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e44d4: 0x101023  negu        $v0, $s0
    ctx->pc = 0x3e44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x3e44d8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e44d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e44dc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E44DCu;
    {
        const bool branch_taken_0x3e44dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E44DCu;
        // 0x3e44e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e44dc) {
            ctx->pc = 0x3E4548u;
            goto label_3e4548;
        }
    }
    ctx->pc = 0x3E44E4u;
    // 0x3e44e4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e44e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e44e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E44E8u;
    {
        const bool branch_taken_0x3e44e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E44E8u;
        // 0x3e44ec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e44e8) {
            ctx->pc = 0x3E4524u;
            goto label_3e4524;
        }
    }
    ctx->pc = 0x3E44F0u;
    // 0x3e44f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E44F0u;
    {
        const bool branch_taken_0x3e44f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E44F0u;
        // 0x3e44f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e44f0) {
            ctx->pc = 0x3E4508u;
            goto label_3e4508;
        }
    }
    ctx->pc = 0x3E44F8u;
    // 0x3e44f8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e44f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e44fc: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x3e44fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e4500: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4500u;
    SET_GPR_U32(ctx, 31, 0x3E4508u);
    ctx->pc = 0x3E4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4500u;
    // 0x3e4504: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4500u, 0x3E4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4508u;
label_3e4508:
    // 0x3e4508: 0x8e850260  lw          $a1, 0x260($s4)
    ctx->pc = 0x3e4508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3e450c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4510: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3e4510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3e4514: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4518: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e4518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e451c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E451Cu;
    SET_GPR_U32(ctx, 31, 0x3E4524u);
    ctx->pc = 0x3E4520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E451Cu;
    // 0x3e4520: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E451Cu, 0x3E4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4524u;
label_3e4524:
    // 0x3e4524: 0x8e850260  lw          $a1, 0x260($s4)
    ctx->pc = 0x3e4524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3e4528: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e452c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3e452cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3e4530: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4534: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e4534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e4538: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4538u;
    SET_GPR_U32(ctx, 31, 0x3E4540u);
    ctx->pc = 0x3E453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4538u;
    // 0x3e453c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4538u, 0x3E4540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4540u;
label_3e4540:
    // 0x3e4540: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E4540u;
    {
        const bool branch_taken_0x3e4540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4540) {
            ctx->pc = 0x3E4544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4540u;
            // 0x3e4544: 0x8e850260  lw          $a1, 0x260($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E45A8u;
            goto label_3e45a8;
        }
    }
    ctx->pc = 0x3E4548u;
label_3e4548:
    // 0x3e4548: 0x8e850260  lw          $a1, 0x260($s4)
    ctx->pc = 0x3e4548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
label_3e454c:
    // 0x3e454c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4550: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x3e4550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x3e4554: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4558: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4558u;
    SET_GPR_U32(ctx, 31, 0x3E4560u);
    ctx->pc = 0x3E455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4558u;
    // 0x3e455c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4558u, 0x3E4560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4560u;
label_3e4560:
    // 0x3e4560: 0x8e850260  lw          $a1, 0x260($s4)
    ctx->pc = 0x3e4560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3e4564: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4568: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e456c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E456Cu;
    SET_GPR_U32(ctx, 31, 0x3E4574u);
    ctx->pc = 0x3E4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E456Cu;
    // 0x3e4570: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E456Cu, 0x3E4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4574u;
label_3e4574:
    // 0x3e4574: 0x8e850260  lw          $a1, 0x260($s4)
    ctx->pc = 0x3e4574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3e4578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e457c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e457cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4580: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4580u;
    SET_GPR_U32(ctx, 31, 0x3E4588u);
    ctx->pc = 0x3E4584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4580u;
    // 0x3e4584: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4580u, 0x3E4588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4588u;
label_3e4588:
    // 0x3e4588: 0x8e850260  lw          $a1, 0x260($s4)
    ctx->pc = 0x3e4588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3e458c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e458cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4590: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4594: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x3e4594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3e4598: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4598u;
    SET_GPR_U32(ctx, 31, 0x3E45A0u);
    ctx->pc = 0x3E459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4598u;
    // 0x3e459c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4598u, 0x3E45A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E45A0u;
label_3e45a0:
    // 0x3e45a0: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3E45A0u;
    {
        const bool branch_taken_0x3e45a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45A0u;
        // 0x3e45a4: 0x8e850260  lw          $a1, 0x260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e45a0) {
            ctx->pc = 0x3E454Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e454c;
        }
    }
    ctx->pc = 0x3E45A8u;
label_3e45a8:
    // 0x3e45a8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E45A8u;
    SET_GPR_U32(ctx, 31, 0x3E45B0u);
    ctx->pc = 0x3E45ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E45A8u;
    // 0x3e45ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E45A8u, 0x3E45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E45B0u;
label_3e45b0:
    // 0x3e45b0: 0x8e850264  lw          $a1, 0x264($s4)
    ctx->pc = 0x3e45b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
    // 0x3e45b4: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3E45B4u;
    {
        const bool branch_taken_0x3e45b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45B4u;
        // 0x3e45b8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e45b4) {
            ctx->pc = 0x3E46B4u;
            goto label_3e46b4;
        }
    }
    ctx->pc = 0x3E45BCu;
    // 0x3e45bc: 0x8e820248  lw          $v0, 0x248($s4)
    ctx->pc = 0x3e45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 584)));
    // 0x3e45c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e45c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3e45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e45c8: 0x641004  sllv        $v0, $a0, $v1
    ctx->pc = 0x3e45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e45cc: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3E45CCu;
    {
        const bool branch_taken_0x3e45cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e45cc) {
            ctx->pc = 0x3E46ACu;
            goto label_3e46ac;
        }
    }
    ctx->pc = 0x3E45D4u;
    // 0x3e45d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e45d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e45d8: 0x101023  negu        $v0, $s0
    ctx->pc = 0x3e45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x3e45dc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e45dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e45e0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E45E0u;
    {
        const bool branch_taken_0x3e45e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45E0u;
        // 0x3e45e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e45e0) {
            ctx->pc = 0x3E4650u;
            goto label_3e4650;
        }
    }
    ctx->pc = 0x3E45E8u;
    // 0x3e45e8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e45e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e45ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3E45ECu;
    {
        const bool branch_taken_0x3e45ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E45F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45ECu;
        // 0x3e45f0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e45ec) {
            ctx->pc = 0x3E462Cu;
            goto label_3e462c;
        }
    }
    ctx->pc = 0x3E45F4u;
    // 0x3e45f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E45F4u;
    {
        const bool branch_taken_0x3e45f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45F4u;
        // 0x3e45f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e45f4) {
            ctx->pc = 0x3E4610u;
            goto label_3e4610;
        }
    }
    ctx->pc = 0x3E45FCu;
    // 0x3e45fc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e45fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e4600: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x3e4600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e4604: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4604u;
    SET_GPR_U32(ctx, 31, 0x3E460Cu);
    ctx->pc = 0x3E4608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4604u;
    // 0x3e4608: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4604u, 0x3E460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E460Cu;
label_3e460c:
    // 0x3e460c: 0x8e850264  lw          $a1, 0x264($s4)
    ctx->pc = 0x3e460cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
label_3e4610:
    // 0x3e4610: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4614: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3e4614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3e4618: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e461c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e461cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e4620: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4620u;
    SET_GPR_U32(ctx, 31, 0x3E4628u);
    ctx->pc = 0x3E4624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4620u;
    // 0x3e4624: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4620u, 0x3E4628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4628u;
label_3e4628:
    // 0x3e4628: 0x8e850264  lw          $a1, 0x264($s4)
    ctx->pc = 0x3e4628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
label_3e462c:
    // 0x3e462c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4630: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3e4630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3e4634: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4638: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e4638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e463c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E463Cu;
    SET_GPR_U32(ctx, 31, 0x3E4644u);
    ctx->pc = 0x3E4640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E463Cu;
    // 0x3e4640: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E463Cu, 0x3E4644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4644u;
label_3e4644:
    // 0x3e4644: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E4644u;
    {
        const bool branch_taken_0x3e4644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4644u;
        // 0x3e4648: 0x8e850264  lw          $a1, 0x264($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4644) {
            ctx->pc = 0x3E46ACu;
            goto label_3e46ac;
        }
    }
    ctx->pc = 0x3E464Cu;
    // 0x3e464c: 0x0  nop
    ctx->pc = 0x3e464cu;
    // NOP
label_3e4650:
    // 0x3e4650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4654: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x3e4654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x3e4658: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e465c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E465Cu;
    SET_GPR_U32(ctx, 31, 0x3E4664u);
    ctx->pc = 0x3E4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E465Cu;
    // 0x3e4660: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E465Cu, 0x3E4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4664u;
label_3e4664:
    // 0x3e4664: 0x8e850264  lw          $a1, 0x264($s4)
    ctx->pc = 0x3e4664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
    // 0x3e4668: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e466c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e466cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4670: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4670u;
    SET_GPR_U32(ctx, 31, 0x3E4678u);
    ctx->pc = 0x3E4674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4670u;
    // 0x3e4674: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4670u, 0x3E4678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4678u;
label_3e4678:
    // 0x3e4678: 0x8e850264  lw          $a1, 0x264($s4)
    ctx->pc = 0x3e4678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
    // 0x3e467c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e467cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4680: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4684: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4684u;
    SET_GPR_U32(ctx, 31, 0x3E468Cu);
    ctx->pc = 0x3E4688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4684u;
    // 0x3e4688: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4684u, 0x3E468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E468Cu;
label_3e468c:
    // 0x3e468c: 0x8e850264  lw          $a1, 0x264($s4)
    ctx->pc = 0x3e468cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
    // 0x3e4690: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4694: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4698: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x3e4698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3e469c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E469Cu;
    SET_GPR_U32(ctx, 31, 0x3E46A4u);
    ctx->pc = 0x3E46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E469Cu;
    // 0x3e46a0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E469Cu, 0x3E46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E46A4u;
label_3e46a4:
    // 0x3e46a4: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3E46A4u;
    {
        const bool branch_taken_0x3e46a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E46A4u;
        // 0x3e46a8: 0x8e850264  lw          $a1, 0x264($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e46a4) {
            ctx->pc = 0x3E4650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4650;
        }
    }
    ctx->pc = 0x3E46ACu;
label_3e46ac:
    // 0x3e46ac: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E46ACu;
    SET_GPR_U32(ctx, 31, 0x3E46B4u);
    ctx->pc = 0x3E46B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E46ACu;
    // 0x3e46b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E46ACu, 0x3E46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E46B4u;
label_3e46b4:
    // 0x3e46b4: 0x8e850268  lw          $a1, 0x268($s4)
    ctx->pc = 0x3e46b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
    // 0x3e46b8: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x3E46B8u;
    {
        const bool branch_taken_0x3e46b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E46B8u;
        // 0x3e46bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e46b8) {
            ctx->pc = 0x3E47B4u;
            goto label_3e47b4;
        }
    }
    ctx->pc = 0x3E46C0u;
    // 0x3e46c0: 0x8e820248  lw          $v0, 0x248($s4)
    ctx->pc = 0x3e46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 584)));
    // 0x3e46c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e46c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3e46c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e46cc: 0x641004  sllv        $v0, $a0, $v1
    ctx->pc = 0x3e46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e46d0: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3E46D0u;
    {
        const bool branch_taken_0x3e46d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e46d0) {
            ctx->pc = 0x3E47ACu;
            goto label_3e47ac;
        }
    }
    ctx->pc = 0x3E46D8u;
    // 0x3e46d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e46d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e46dc: 0x101023  negu        $v0, $s0
    ctx->pc = 0x3e46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x3e46e0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e46e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e46e4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E46E4u;
    {
        const bool branch_taken_0x3e46e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E46E4u;
        // 0x3e46e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e46e4) {
            ctx->pc = 0x3E4750u;
            goto label_3e4750;
        }
    }
    ctx->pc = 0x3E46ECu;
    // 0x3e46ec: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e46ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e46f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3E46F0u;
    {
        const bool branch_taken_0x3e46f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E46F0u;
        // 0x3e46f4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e46f0) {
            ctx->pc = 0x3E4730u;
            goto label_3e4730;
        }
    }
    ctx->pc = 0x3E46F8u;
    // 0x3e46f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E46F8u;
    {
        const bool branch_taken_0x3e46f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E46F8u;
        // 0x3e46fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e46f8) {
            ctx->pc = 0x3E4714u;
            goto label_3e4714;
        }
    }
    ctx->pc = 0x3E4700u;
    // 0x3e4700: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e4700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e4704: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x3e4704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e4708: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4708u;
    SET_GPR_U32(ctx, 31, 0x3E4710u);
    ctx->pc = 0x3E470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4708u;
    // 0x3e470c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4708u, 0x3E4710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4710u;
label_3e4710:
    // 0x3e4710: 0x8e850268  lw          $a1, 0x268($s4)
    ctx->pc = 0x3e4710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
label_3e4714:
    // 0x3e4714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4718: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3e4718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3e471c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4720: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e4720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e4724: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4724u;
    SET_GPR_U32(ctx, 31, 0x3E472Cu);
    ctx->pc = 0x3E4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4724u;
    // 0x3e4728: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4724u, 0x3E472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E472Cu;
label_3e472c:
    // 0x3e472c: 0x8e850268  lw          $a1, 0x268($s4)
    ctx->pc = 0x3e472cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
label_3e4730:
    // 0x3e4730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4734: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3e4734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3e4738: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e473c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e473cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e4740: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4740u;
    SET_GPR_U32(ctx, 31, 0x3E4748u);
    ctx->pc = 0x3E4744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4740u;
    // 0x3e4744: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4740u, 0x3E4748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4748u;
label_3e4748:
    // 0x3e4748: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E4748u;
    {
        const bool branch_taken_0x3e4748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4748u;
        // 0x3e474c: 0x8e850268  lw          $a1, 0x268($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4748) {
            ctx->pc = 0x3E47ACu;
            goto label_3e47ac;
        }
    }
    ctx->pc = 0x3E4750u;
label_3e4750:
    // 0x3e4750: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4754: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x3e4754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x3e4758: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e475c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E475Cu;
    SET_GPR_U32(ctx, 31, 0x3E4764u);
    ctx->pc = 0x3E4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E475Cu;
    // 0x3e4760: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E475Cu, 0x3E4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4764u;
label_3e4764:
    // 0x3e4764: 0x8e850268  lw          $a1, 0x268($s4)
    ctx->pc = 0x3e4764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
    // 0x3e4768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e476c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e476cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4770: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4770u;
    SET_GPR_U32(ctx, 31, 0x3E4778u);
    ctx->pc = 0x3E4774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4770u;
    // 0x3e4774: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4770u, 0x3E4778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4778u;
label_3e4778:
    // 0x3e4778: 0x8e850268  lw          $a1, 0x268($s4)
    ctx->pc = 0x3e4778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
    // 0x3e477c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4780: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4784: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E4784u;
    SET_GPR_U32(ctx, 31, 0x3E478Cu);
    ctx->pc = 0x3E4788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4784u;
    // 0x3e4788: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E4784u, 0x3E478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E478Cu;
label_3e478c:
    // 0x3e478c: 0x8e850268  lw          $a1, 0x268($s4)
    ctx->pc = 0x3e478cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
    // 0x3e4790: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4794: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3e4794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3e4798: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x3e4798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3e479c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E479Cu;
    SET_GPR_U32(ctx, 31, 0x3E47A4u);
    ctx->pc = 0x3E47A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E479Cu;
    // 0x3e47a0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E479Cu, 0x3E47A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E47A4u;
label_3e47a4:
    // 0x3e47a4: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3E47A4u;
    {
        const bool branch_taken_0x3e47a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E47A4u;
        // 0x3e47a8: 0x8e850268  lw          $a1, 0x268($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e47a4) {
            ctx->pc = 0x3E4750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4750;
        }
    }
    ctx->pc = 0x3E47ACu;
label_3e47ac:
    // 0x3e47ac: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E47ACu;
    SET_GPR_U32(ctx, 31, 0x3E47B4u);
    ctx->pc = 0x3E47B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E47ACu;
    // 0x3e47b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E47ACu, 0x3E47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E47B4u;
label_3e47b4:
    // 0x3e47b4: 0xc0f738a  jal         func_3DCE28
    ctx->pc = 0x3E47B4u;
    SET_GPR_U32(ctx, 31, 0x3E47BCu);
    ctx->pc = 0x3E47B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E47B4u;
    // 0x3e47b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCE28u, 0x3E47B4u, 0x3E47BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E47BCu;
label_3e47bc:
    // 0x3e47bc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3e47bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e47c0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e47c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e47c4:
    // 0x3e47c4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3e47c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e47c8: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x3e47c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3e47cc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3e47ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3e47d0: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x3e47d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x3e47d4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3e47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3e47d8: 0x1453fffa  bne         $v0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E47D8u;
    {
        const bool branch_taken_0x3e47d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3E47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E47D8u;
        // 0x3e47dc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e47d8) {
            ctx->pc = 0x3E47C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e47c4;
        }
    }
    ctx->pc = 0x3E47E0u;
    // 0x3e47e0: 0x8e9100d0  lw          $s1, 0xD0($s4)
    ctx->pc = 0x3e47e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x3e47e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e47e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e47e8: 0x8e9200d4  lw          $s2, 0xD4($s4)
    ctx->pc = 0x3e47e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x3e47ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e47ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e47f0: 0x8e9300d8  lw          $s3, 0xD8($s4)
    ctx->pc = 0x3e47f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x3e47f4: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x3e47f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x3e47f8: 0x8e9002f0  lw          $s0, 0x2F0($s4)
    ctx->pc = 0x3e47f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 752)));
    // 0x3e47fc: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3e47fcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e4800: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3E4800u;
    SET_GPR_U32(ctx, 31, 0x3E4808u);
    ctx->pc = 0x3E4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4800u;
    // 0x3e4804: 0x7c680000  sq          $t0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E4800u, 0x3E4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4808u;
label_3e4808:
    // 0x3e4808: 0xae9100d0  sw          $s1, 0xD0($s4)
    ctx->pc = 0x3e4808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 17));
    // 0x3e480c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x3e480cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4810: 0xae9200d4  sw          $s2, 0xD4($s4)
    ctx->pc = 0x3e4810u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 18));
    // 0x3e4814: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3e4814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4818: 0xae9300d8  sw          $s3, 0xD8($s4)
    ctx->pc = 0x3e4818u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 19));
    // 0x3e481c: 0xae9002f0  sw          $s0, 0x2F0($s4)
    ctx->pc = 0x3e481cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 752), GPR_U32(ctx, 16));
label_3e4820:
    // 0x3e4820: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3e4820u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e4824: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x3e4824u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3e4828: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x3e4828u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x3e482c: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x3e482cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x3e4830: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3e4830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3e4834: 0x1455fffa  bne         $v0, $s5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E4834u;
    {
        const bool branch_taken_0x3e4834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x3E4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4834u;
        // 0x3e4838: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4834) {
            ctx->pc = 0x3E4820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4820;
        }
    }
    ctx->pc = 0x3E483Cu;
    // 0x3e483c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3e483cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e4840: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3e4840u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3e4844: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x3e4844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3e4848: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x3e4848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3e484c: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3e484cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e4850: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3e4850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3e4854: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3e4854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3e4858: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x3e4858u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3e485c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3e485cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3e4860: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4860u;
        // 0x3e4864: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4868u;
    // 0x3e4868: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3e4868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3e486c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3e486cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3e4870: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3e4870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3e4874: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e4874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4878: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e4878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3e487c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e487cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4880: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3e4880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3e4884: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3e4884u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4888: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3e4888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3e488c: 0x32020400  andi        $v0, $s0, 0x400
    ctx->pc = 0x3e488cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
    // 0x3e4890: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3e4890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3e4894: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3e4894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3e4898: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3e4898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3e489c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3e489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3e48a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E48A0u;
    {
        const bool branch_taken_0x3e48a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48A0u;
        // 0x3e48a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e48a0) {
            ctx->pc = 0x3E48B0u;
            goto label_3e48b0;
        }
    }
    ctx->pc = 0x3E48A8u;
    // 0x3e48a8: 0xc0ff36c  jal         func_3FCDB0
    ctx->pc = 0x3E48A8u;
    SET_GPR_U32(ctx, 31, 0x3E48B0u);
    ctx->pc = 0x3FCDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCDB0u, 0x3E48A8u, 0x3E48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48B0u;
label_3e48b0:
    // 0x3e48b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e48b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e48b4: 0xc0f8cdc  jal         func_3E3370
    ctx->pc = 0x3E48B4u;
    SET_GPR_U32(ctx, 31, 0x3E48BCu);
    ctx->pc = 0x3E48B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E48B4u;
    // 0x3e48b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3370u, 0x3E48B4u, 0x3E48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48BCu;
label_3e48bc:
    // 0x3e48bc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3e48bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e48c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E48C0u;
    {
        const bool branch_taken_0x3e48c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48C0u;
        // 0x3e48c4: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e48c0) {
            ctx->pc = 0x3E48D4u;
            goto label_3e48d4;
        }
    }
    ctx->pc = 0x3E48C8u;
    // 0x3e48c8: 0xc0fc7be  jal         func_3F1EF8
    ctx->pc = 0x3E48C8u;
    SET_GPR_U32(ctx, 31, 0x3E48D0u);
    ctx->pc = 0x3E48CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E48C8u;
    // 0x3e48cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1EF8u, 0x3E48C8u, 0x3E48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48D0u;
label_3e48d0:
    // 0x3e48d0: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x3e48d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_3e48d4:
    // 0x3e48d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E48D4u;
    {
        const bool branch_taken_0x3e48d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48D4u;
        // 0x3e48d8: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e48d4) {
            ctx->pc = 0x3E48E8u;
            goto label_3e48e8;
        }
    }
    ctx->pc = 0x3E48DCu;
    // 0x3e48dc: 0xc0fc77a  jal         func_3F1DE8
    ctx->pc = 0x3E48DCu;
    SET_GPR_U32(ctx, 31, 0x3E48E4u);
    ctx->pc = 0x3E48E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E48DCu;
    // 0x3e48e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1DE8u, 0x3E48DCu, 0x3E48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48E4u;
label_3e48e4:
    // 0x3e48e4: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x3e48e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_3e48e8:
    // 0x3e48e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E48E8u;
    {
        const bool branch_taken_0x3e48e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48E8u;
        // 0x3e48ec: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e48e8) {
            ctx->pc = 0x3E48FCu;
            goto label_3e48fc;
        }
    }
    ctx->pc = 0x3E48F0u;
    // 0x3e48f0: 0xc0ff3a8  jal         func_3FCEA0
    ctx->pc = 0x3E48F0u;
    SET_GPR_U32(ctx, 31, 0x3E48F8u);
    ctx->pc = 0x3E48F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E48F0u;
    // 0x3e48f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCEA0u, 0x3E48F0u, 0x3E48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48F8u;
label_3e48f8:
    // 0x3e48f8: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x3e48f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_3e48fc:
    // 0x3e48fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E48FCu;
    {
        const bool branch_taken_0x3e48fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48FCu;
        // 0x3e4900: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e48fc) {
            ctx->pc = 0x3E4940u;
            goto label_3e4940;
        }
    }
    ctx->pc = 0x3E4904u;
    // 0x3e4904: 0x9262020b  lbu         $v0, 0x20B($s3)
    ctx->pc = 0x3e4904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 523)));
    // 0x3e4908: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3e4908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e490c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E490Cu;
    {
        const bool branch_taken_0x3e490c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E490Cu;
        // 0x3e4910: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e490c) {
            ctx->pc = 0x3E4934u;
            goto label_3e4934;
        }
    }
    ctx->pc = 0x3E4914u;
    // 0x3e4914: 0x9263020a  lbu         $v1, 0x20A($s3)
    ctx->pc = 0x3e4914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 522)));
    // 0x3e4918: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E4918u;
    {
        const bool branch_taken_0x3e4918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4918u;
        // 0x3e491c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4918) {
            ctx->pc = 0x3E4934u;
            goto label_3e4934;
        }
    }
    ctx->pc = 0x3E4920u;
    // 0x3e4920: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e4920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4924: 0xc0f87ba  jal         func_3E1EE8
    ctx->pc = 0x3E4924u;
    SET_GPR_U32(ctx, 31, 0x3E492Cu);
    ctx->pc = 0x3E4928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4924u;
    // 0x3e4928: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1EE8u, 0x3E4924u, 0x3E492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E492Cu;
label_3e492c:
    // 0x3e492c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E492Cu;
    {
        const bool branch_taken_0x3e492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E492Cu;
        // 0x3e4930: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e492c) {
            ctx->pc = 0x3E4940u;
            goto label_3e4940;
        }
    }
    ctx->pc = 0x3E4934u;
label_3e4934:
    // 0x3e4934: 0xc0fc68a  jal         func_3F1A28
    ctx->pc = 0x3E4934u;
    SET_GPR_U32(ctx, 31, 0x3E493Cu);
    ctx->pc = 0x3E4938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4934u;
    // 0x3e4938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1A28u, 0x3E4934u, 0x3E493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E493Cu;
label_3e493c:
    // 0x3e493c: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x3e493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
label_3e4940:
    // 0x3e4940: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E4940u;
    {
        const bool branch_taken_0x3e4940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4940u;
        // 0x3e4944: 0x32020040  andi        $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4940) {
            ctx->pc = 0x3E4954u;
            goto label_3e4954;
        }
    }
    ctx->pc = 0x3E4948u;
    // 0x3e4948: 0xc0ff3ca  jal         func_3FCF28
    ctx->pc = 0x3E4948u;
    SET_GPR_U32(ctx, 31, 0x3E4950u);
    ctx->pc = 0x3E494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4948u;
    // 0x3e494c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCF28u, 0x3E4948u, 0x3E4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4950u;
label_3e4950:
    // 0x3e4950: 0x32020040  andi        $v0, $s0, 0x40
    ctx->pc = 0x3e4950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_3e4954:
    // 0x3e4954: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E4954u;
    {
        const bool branch_taken_0x3e4954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4954u;
        // 0x3e4958: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4954) {
            ctx->pc = 0x3E4988u;
            goto label_3e4988;
        }
    }
    ctx->pc = 0x3E495Cu;
    // 0x3e495c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e495cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4960: 0xc0f87ba  jal         func_3E1EE8
    ctx->pc = 0x3E4960u;
    SET_GPR_U32(ctx, 31, 0x3E4968u);
    ctx->pc = 0x3E4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4960u;
    // 0x3e4964: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1EE8u, 0x3E4960u, 0x3E4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4968u;
label_3e4968:
    // 0x3e4968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E4968u;
    {
        const bool branch_taken_0x3e4968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4968u;
        // 0x3e496c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4968) {
            ctx->pc = 0x3E4988u;
            goto label_3e4988;
        }
    }
    ctx->pc = 0x3E4970u;
    // 0x3e4970: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4974: 0xc0f8a34  jal         func_3E28D0
    ctx->pc = 0x3E4974u;
    SET_GPR_U32(ctx, 31, 0x3E497Cu);
    ctx->pc = 0x3E4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4974u;
    // 0x3e4978: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E28D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E28D0u, 0x3E4974u, 0x3E497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E497Cu;
label_3e497c:
    // 0x3e497c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3e497cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e4980: 0xc0ff3b2  jal         func_3FCEC8
    ctx->pc = 0x3E4980u;
    SET_GPR_U32(ctx, 31, 0x3E4988u);
    ctx->pc = 0x3E4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4980u;
    // 0x3e4984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCEC8u, 0x3E4980u, 0x3E4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4988u;
label_3e4988:
    // 0x3e4988: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x3e4988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x3e498c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E498Cu;
    {
        const bool branch_taken_0x3e498c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E498Cu;
        // 0x3e4990: 0x32020100  andi        $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e498c) {
            ctx->pc = 0x3E49A0u;
            goto label_3e49a0;
        }
    }
    ctx->pc = 0x3E4994u;
    // 0x3e4994: 0xc0ff360  jal         func_3FCD80
    ctx->pc = 0x3E4994u;
    SET_GPR_U32(ctx, 31, 0x3E499Cu);
    ctx->pc = 0x3E4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4994u;
    // 0x3e4998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCD80u, 0x3E4994u, 0x3E499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E499Cu;
label_3e499c:
    // 0x3e499c: 0x32020100  andi        $v0, $s0, 0x100
    ctx->pc = 0x3e499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
label_3e49a0:
    // 0x3e49a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E49A0u;
    {
        const bool branch_taken_0x3e49a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49A0u;
        // 0x3e49a4: 0x32020200  andi        $v0, $s0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e49a0) {
            ctx->pc = 0x3E49B4u;
            goto label_3e49b4;
        }
    }
    ctx->pc = 0x3E49A8u;
    // 0x3e49a8: 0xc0ff366  jal         func_3FCD98
    ctx->pc = 0x3E49A8u;
    SET_GPR_U32(ctx, 31, 0x3E49B0u);
    ctx->pc = 0x3E49ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E49A8u;
    // 0x3e49ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCD98u, 0x3E49A8u, 0x3E49B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E49B0u;
label_3e49b0:
    // 0x3e49b0: 0x32020200  andi        $v0, $s0, 0x200
    ctx->pc = 0x3e49b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
label_3e49b4:
    // 0x3e49b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E49B4u;
    {
        const bool branch_taken_0x3e49b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e49b4) {
            ctx->pc = 0x3E49B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E49B4u;
            // 0x3e49b8: 0xde620100  ld          $v0, 0x100($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E49C8u;
            goto label_3e49c8;
        }
    }
    ctx->pc = 0x3E49BCu;
    // 0x3e49bc: 0xc0ff392  jal         func_3FCE48
    ctx->pc = 0x3E49BCu;
    SET_GPR_U32(ctx, 31, 0x3E49C4u);
    ctx->pc = 0x3E49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E49BCu;
    // 0x3e49c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCE48u, 0x3E49BCu, 0x3E49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E49C4u;
label_3e49c4:
    // 0x3e49c4: 0xde620100  ld          $v0, 0x100($s3)
    ctx->pc = 0x3e49c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
label_3e49c8:
    // 0x3e49c8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e49c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3e49cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E49CCu;
    {
        const bool branch_taken_0x3e49cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49CCu;
        // 0x3e49d0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e49cc) {
            ctx->pc = 0x3E49E4u;
            goto label_3e49e4;
        }
    }
    ctx->pc = 0x3E49D4u;
    // 0x3e49d4: 0xc0fe630  jal         func_3F98C0
    ctx->pc = 0x3E49D4u;
    SET_GPR_U32(ctx, 31, 0x3E49DCu);
    ctx->pc = 0x3E49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E49D4u;
    // 0x3e49d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F98C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F98C0u, 0x3E49D4u, 0x3E49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E49DCu;
label_3e49dc:
    // 0x3e49dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E49DCu;
    {
        const bool branch_taken_0x3e49dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49DCu;
        // 0x3e49e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e49dc) {
            ctx->pc = 0x3E49F4u;
            goto label_3e49f4;
        }
    }
    ctx->pc = 0x3E49E4u;
label_3e49e4:
    // 0x3e49e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e49e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e49e8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3E49E8u;
    SET_GPR_U32(ctx, 31, 0x3E49F0u);
    ctx->pc = 0x3E49ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E49E8u;
    // 0x3e49ec: 0x24a5e5c0  addiu       $a1, $a1, -0x1A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3E49E8u, 0x3E49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E49F0u;
label_3e49f0:
    // 0x3e49f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e49f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e49f4:
    // 0x3e49f4: 0xc0f9e16  jal         func_3E7858
    ctx->pc = 0x3E49F4u;
    SET_GPR_U32(ctx, 31, 0x3E49FCu);
    ctx->pc = 0x3E49F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E49F4u;
    // 0x3e49f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7858u, 0x3E49F4u, 0x3E49FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E49FCu;
label_3e49fc:
    // 0x3e49fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e49fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4a00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e4a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4a04: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3e4a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3e4a08: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3E4A08u;
    SET_GPR_U32(ctx, 31, 0x3E4A10u);
    ctx->pc = 0x3E4A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4A08u;
    // 0x3e4a0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3E4A08u, 0x3E4A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4A10u;
label_3e4a10:
    // 0x3e4a10: 0x8ea20140  lw          $v0, 0x140($s5)
    ctx->pc = 0x3e4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x3e4a14: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E4A14u;
    {
        const bool branch_taken_0x3e4a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4a14) {
            ctx->pc = 0x3E4A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4A14u;
            // 0x3e4a18: 0x8ebe0140  lw          $fp, 0x140($s5) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4A8Cu;
            goto label_3e4a8c;
        }
    }
    ctx->pc = 0x3E4A1Cu;
    // 0x3e4a1c: 0xdea50008  ld          $a1, 0x8($s5)
    ctx->pc = 0x3e4a1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3e4a20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4a24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e4a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4a28: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3E4A28u;
    SET_GPR_U32(ctx, 31, 0x3E4A30u);
    ctx->pc = 0x3E4A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4A28u;
    // 0x3e4a2c: 0x528b8  dsll        $a1, $a1, 2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E4A28u, 0x3E4A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4A30u;
label_3e4a30:
    // 0x3e4a30: 0xdea300f0  ld          $v1, 0xF0($s5)
    ctx->pc = 0x3e4a30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x3e4a34: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3e4a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3e4a38: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x3e4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3e4a3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3e4a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3e4a40: 0xaea20140  sw          $v0, 0x140($s5)
    ctx->pc = 0x3e4a40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 320), GPR_U32(ctx, 2));
    // 0x3e4a44: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E4A44u;
    {
        const bool branch_taken_0x3e4a44 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3E4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4A44u;
        // 0x3e4a48: 0xfea300f0  sd          $v1, 0xF0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4a44) {
            ctx->pc = 0x3E4A88u;
            goto label_3e4a88;
        }
    }
    ctx->pc = 0x3E4A4Cu;
    // 0x3e4a4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e4a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4a50:
    // 0x3e4a50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4a54: 0xc0f87c4  jal         func_3E1F10
    ctx->pc = 0x3E4A54u;
    SET_GPR_U32(ctx, 31, 0x3E4A5Cu);
    ctx->pc = 0x3E4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4A54u;
    // 0x3e4a58: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1F10u, 0x3E4A54u, 0x3E4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4A5Cu;
label_3e4a5c:
    // 0x3e4a5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e4a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3e4a60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e4a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4a64: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3E4A64u;
    SET_GPR_U32(ctx, 31, 0x3E4A6Cu);
    ctx->pc = 0x3E4A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4A64u;
    // 0x3e4a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E4A64u, 0x3E4A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4A6Cu;
label_3e4a6c:
    // 0x3e4a6c: 0x8ea30140  lw          $v1, 0x140($s5)
    ctx->pc = 0x3e4a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x3e4a70: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3e4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3e4a74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3e4a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3e4a78: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3e4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3e4a7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3e4a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e4a80: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3E4A80u;
    {
        const bool branch_taken_0x3e4a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4A80u;
        // 0x3e4a84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4a80) {
            ctx->pc = 0x3E4A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4a50;
        }
    }
    ctx->pc = 0x3E4A88u;
label_3e4a88:
    // 0x3e4a88: 0x8ebe0140  lw          $fp, 0x140($s5)
    ctx->pc = 0x3e4a88u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
label_3e4a8c:
    // 0x3e4a8c: 0xc0ff3be  jal         func_3FCEF8
    ctx->pc = 0x3E4A8Cu;
    SET_GPR_U32(ctx, 31, 0x3E4A94u);
    ctx->pc = 0x3E4A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4A8Cu;
    // 0x3e4a90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCEF8u, 0x3E4A8Cu, 0x3E4A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4A94u;
label_3e4a94:
    // 0x3e4a94: 0xde740180  ld          $s4, 0x180($s3)
    ctx->pc = 0x3e4a94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 19), 384)));
    // 0x3e4a98: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3e4a98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4a9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e4a9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4aa0: 0x1ae0003f  blez        $s7, . + 4 + (0x3F << 2)
    ctx->pc = 0x3E4AA0u;
    {
        const bool branch_taken_0x3e4aa0 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3E4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4AA0u;
        // 0x3e4aa4: 0xfe740188  sd          $s4, 0x188($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 392), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4aa0) {
            ctx->pc = 0x3E4BA0u;
            goto label_3e4ba0;
        }
    }
    ctx->pc = 0x3E4AA8u;
    // 0x3e4aa8: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x3e4aa8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e4aac: 0x0  nop
    ctx->pc = 0x3e4aacu;
    // NOP
label_3e4ab0:
    // 0x3e4ab0: 0x12800037  beqz        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x3E4AB0u;
    {
        const bool branch_taken_0x3e4ab0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4AB0u;
        // 0x3e4ab4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ab0) {
            ctx->pc = 0x3E4B90u;
            goto label_3e4b90;
        }
    }
    ctx->pc = 0x3E4AB8u;
    // 0x3e4ab8: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x3e4ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4abc: 0x32830003  andi        $v1, $s4, 0x3
    ctx->pc = 0x3e4abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x3e4ac0: 0x1a800015  blez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E4AC0u;
    {
        const bool branch_taken_0x3e4ac0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3E4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4AC0u;
        // 0x3e4ac4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ac0) {
            ctx->pc = 0x3E4B18u;
            goto label_3e4b18;
        }
    }
    ctx->pc = 0x3E4AC8u;
    // 0x3e4ac8: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E4AC8u;
    {
        const bool branch_taken_0x3e4ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ac8) {
            ctx->pc = 0x3E4ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4AC8u;
            // 0x3e4acc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4B40u;
            goto label_3e4b40;
        }
    }
    ctx->pc = 0x3E4AD0u;
    // 0x3e4ad0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3e4ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e4ad4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E4AD4u;
    {
        const bool branch_taken_0x3e4ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ad4) {
            ctx->pc = 0x3E4AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4AD4u;
            // 0x3e4ad8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4B1Cu;
            goto label_3e4b1c;
        }
    }
    ctx->pc = 0x3E4ADCu;
    // 0x3e4adc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e4adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e4ae0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E4AE0u;
    {
        const bool branch_taken_0x3e4ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ae0) {
            ctx->pc = 0x3E4AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4AE0u;
            // 0x3e4ae4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4B04u;
            goto label_3e4b04;
        }
    }
    ctx->pc = 0x3E4AE8u;
    // 0x3e4ae8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e4ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3e4aec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4af0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4af4: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4AF4u;
    SET_GPR_U32(ctx, 31, 0x3E4AFCu);
    ctx->pc = 0x3E4AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4AF4u;
    // 0x3e4af8: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4AF4u, 0x3E4AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4AFCu;
label_3e4afc:
    // 0x3e4afc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3e4afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e4b00: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e4b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e4b04:
    // 0x3e4b04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b0c: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4B0Cu;
    SET_GPR_U32(ctx, 31, 0x3E4B14u);
    ctx->pc = 0x3E4B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B0Cu;
    // 0x3e4b10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4B0Cu, 0x3E4B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B14u;
label_3e4b14:
    // 0x3e4b14: 0x66310001  daddiu      $s1, $s1, 0x1
    ctx->pc = 0x3e4b14u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
label_3e4b18:
    // 0x3e4b18: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e4b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e4b1c:
    // 0x3e4b1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b24: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4B24u;
    SET_GPR_U32(ctx, 31, 0x3E4B2Cu);
    ctx->pc = 0x3E4B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B24u;
    // 0x3e4b28: 0x66310001  daddiu      $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4B24u, 0x3E4B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B2Cu;
label_3e4b2c:
    // 0x3e4b2c: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x3e4b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3e4b30: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E4B30u;
    {
        const bool branch_taken_0x3e4b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B30u;
        // 0x3e4b34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4b30) {
            ctx->pc = 0x3E4B90u;
            goto label_3e4b90;
        }
    }
    ctx->pc = 0x3E4B38u;
    // 0x3e4b38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e4b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e4b3c: 0x0  nop
    ctx->pc = 0x3e4b3cu;
    // NOP
label_3e4b40:
    // 0x3e4b40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b48: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4B48u;
    SET_GPR_U32(ctx, 31, 0x3E4B50u);
    ctx->pc = 0x3E4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B48u;
    // 0x3e4b4c: 0x66310004  daddiu      $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4B48u, 0x3E4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B50u;
label_3e4b50:
    // 0x3e4b50: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3e4b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e4b54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b58: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4B58u;
    SET_GPR_U32(ctx, 31, 0x3E4B60u);
    ctx->pc = 0x3E4B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B58u;
    // 0x3e4b5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4B58u, 0x3E4B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B60u;
label_3e4b60:
    // 0x3e4b60: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3e4b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e4b64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b68: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4B68u;
    SET_GPR_U32(ctx, 31, 0x3E4B70u);
    ctx->pc = 0x3E4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B68u;
    // 0x3e4b6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4B68u, 0x3E4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B70u;
label_3e4b70:
    // 0x3e4b70: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3e4b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3e4b74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b7c: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4B7Cu;
    SET_GPR_U32(ctx, 31, 0x3E4B84u);
    ctx->pc = 0x3E4B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B7Cu;
    // 0x3e4b80: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4B7Cu, 0x3E4B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B84u;
label_3e4b84:
    // 0x3e4b84: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x3e4b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3e4b88: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3E4B88u;
    {
        const bool branch_taken_0x3e4b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4b88) {
            ctx->pc = 0x3E4B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4B88u;
            // 0x3e4b8c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4b40;
        }
    }
    ctx->pc = 0x3E4B90u;
label_3e4b90:
    // 0x3e4b90: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x3e4b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b94: 0x77102a  slt         $v0, $v1, $s7
    ctx->pc = 0x3e4b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x3e4b98: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3E4B98u;
    {
        const bool branch_taken_0x3e4b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B98u;
        // 0x3e4b9c: 0x24760001  addiu       $s6, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4b98) {
            ctx->pc = 0x3E4AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4ab0;
        }
    }
    ctx->pc = 0x3E4BA0u;
label_3e4ba0:
    // 0x3e4ba0: 0xdea20010  ld          $v0, 0x10($s5)
    ctx->pc = 0x3e4ba0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x3e4ba4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3e4ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3e4ba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4bac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e4bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4bb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e4bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3e4bb4: 0xc0f8fae  jal         func_3E3EB8
    ctx->pc = 0x3E4BB4u;
    SET_GPR_U32(ctx, 31, 0x3E4BBCu);
    ctx->pc = 0x3E4BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4BB4u;
    // 0x3e4bb8: 0xfea20010  sd          $v0, 0x10($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3EB8u, 0x3E4BB4u, 0x3E4BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4BBCu;
label_3e4bbc:
    // 0x3e4bbc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3e4bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3e4bc0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3e4bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3e4bc4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3e4bc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e4bc8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3e4bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e4bcc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3e4bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e4bd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e4bd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e4bd4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3e4bd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e4bd8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3e4bd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e4bdc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3e4bdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e4be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e4be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e4be4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4BE4u;
        // 0x3e4be8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4BECu;
    // 0x3e4bec: 0x0  nop
    ctx->pc = 0x3e4becu;
    // NOP
label_3e4bf0:
    // 0x3e4bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e4bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e4bf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e4bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e4bfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4bfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c00: 0xc0f8bae  jal         func_3E2EB8
    ctx->pc = 0x3E4C00u;
    SET_GPR_U32(ctx, 31, 0x3E4C08u);
    ctx->pc = 0x3E4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C00u;
    // 0x3e4c04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2EB8u, 0x3E4C00u, 0x3E4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C08u;
label_3e4c08:
    // 0x3e4c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e4c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e4c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C0Cu;
        // 0x3e4c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4C14u;
    // 0x3e4c14: 0x0  nop
    ctx->pc = 0x3e4c14u;
    // NOP
    // 0x3e4c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e4c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e4c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e4c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e4c20: 0xdc820100  ld          $v0, 0x100($a0)
    ctx->pc = 0x3e4c20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3e4c24: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e4c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3e4c28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E4C28u;
    {
        const bool branch_taken_0x3e4c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C28u;
        // 0x3e4c2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4c28) {
            ctx->pc = 0x3E4C3Cu;
            goto label_3e4c3c;
        }
    }
    ctx->pc = 0x3E4C30u;
    // 0x3e4c30: 0xc0fe630  jal         func_3F98C0
    ctx->pc = 0x3E4C30u;
    SET_GPR_U32(ctx, 31, 0x3E4C38u);
    ctx->pc = 0x3F98C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F98C0u, 0x3E4C30u, 0x3E4C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C38u;
label_3e4c38:
    // 0x3e4c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e4c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e4c3c:
    // 0x3e4c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C3Cu;
        // 0x3e4c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4C44u;
    // 0x3e4c44: 0x0  nop
    ctx->pc = 0x3e4c44u;
    // NOP
    // 0x3e4c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e4c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e4c4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3e4c50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e4c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e4c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e4c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e4c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e4c5c: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3e4c5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3e4c60: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e4c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3e4c64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E4C64u;
    {
        const bool branch_taken_0x3e4c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C64u;
        // 0x3e4c68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4c64) {
            ctx->pc = 0x3E4C7Cu;
            goto label_3e4c7c;
        }
    }
    ctx->pc = 0x3E4C6Cu;
    // 0x3e4c6c: 0xc0fe630  jal         func_3F98C0
    ctx->pc = 0x3E4C6Cu;
    SET_GPR_U32(ctx, 31, 0x3E4C74u);
    ctx->pc = 0x3F98C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F98C0u, 0x3E4C6Cu, 0x3E4C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C74u;
label_3e4c74:
    // 0x3e4c74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E4C74u;
    {
        const bool branch_taken_0x3e4c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C74u;
        // 0x3e4c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4c74) {
            ctx->pc = 0x3E4C90u;
            goto label_3e4c90;
        }
    }
    ctx->pc = 0x3E4C7Cu;
label_3e4c7c:
    // 0x3e4c7c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e4c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e4c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c84: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3E4C84u;
    SET_GPR_U32(ctx, 31, 0x3E4C8Cu);
    ctx->pc = 0x3E4C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C84u;
    // 0x3e4c88: 0x24a5e5c0  addiu       $a1, $a1, -0x1A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3E4C84u, 0x3E4C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C8Cu;
label_3e4c8c:
    // 0x3e4c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4c90:
    // 0x3e4c90: 0xc0f9e16  jal         func_3E7858
    ctx->pc = 0x3E4C90u;
    SET_GPR_U32(ctx, 31, 0x3E4C98u);
    ctx->pc = 0x3E4C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C90u;
    // 0x3e4c94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7858u, 0x3E4C90u, 0x3E4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C98u;
label_3e4c98:
    // 0x3e4c98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e4c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e4c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e4c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e4ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e4ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e4ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4CA4u;
        // 0x3e4ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4CACu;
    // 0x3e4cac: 0x0  nop
    ctx->pc = 0x3e4cacu;
    // NOP
    // 0x3e4cb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3e4cb4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e4cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3e4cb8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e4cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3e4cbc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3e4cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4cc0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3e4cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3e4cc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e4cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4cc8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3e4cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3e4ccc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3e4cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4cd0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e4cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3e4cd4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3e4cd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4cd8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e4cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3e4cdc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3e4cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3e4ce0: 0x12a0007b  beqz        $s5, . + 4 + (0x7B << 2)
    ctx->pc = 0x3E4CE0u;
    {
        const bool branch_taken_0x3e4ce0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4CE0u;
        // 0x3e4ce4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ce0) {
            ctx->pc = 0x3E4ED0u;
            goto label_3e4ed0;
        }
    }
    ctx->pc = 0x3E4CE8u;
    // 0x3e4ce8: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3E4CE8u;
    {
        const bool branch_taken_0x3e4ce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ce8) {
            ctx->pc = 0x3E4DECu;
            goto label_3e4dec;
        }
    }
    ctx->pc = 0x3E4CF0u;
    // 0x3e4cf0: 0x12c000af  beqz        $s6, . + 4 + (0xAF << 2)
    ctx->pc = 0x3E4CF0u;
    {
        const bool branch_taken_0x3e4cf0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4CF0u;
        // 0x3e4cf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4cf0) {
            ctx->pc = 0x3E4FB0u;
            goto label_3e4fb0;
        }
    }
    ctx->pc = 0x3E4CF8u;
    // 0x3e4cf8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3e4cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4cfc: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x3e4cfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4d00: 0x1ac00015  blez        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E4D00u;
    {
        const bool branch_taken_0x3e4d00 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3E4D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D00u;
        // 0x3e4d04: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4d00) {
            ctx->pc = 0x3E4D58u;
            goto label_3e4d58;
        }
    }
    ctx->pc = 0x3E4D08u;
    // 0x3e4d08: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E4D08u;
    {
        const bool branch_taken_0x3e4d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D08u;
        // 0x3e4d0c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4d08) {
            ctx->pc = 0x3E4D80u;
            goto label_3e4d80;
        }
    }
    ctx->pc = 0x3E4D10u;
    // 0x3e4d10: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E4D10u;
    {
        const bool branch_taken_0x3e4d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4d10) {
            ctx->pc = 0x3E4D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4D10u;
            // 0x3e4d14: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4D5Cu;
            goto label_3e4d5c;
        }
    }
    ctx->pc = 0x3E4D18u;
    // 0x3e4d18: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e4d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e4d1c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E4D1Cu;
    {
        const bool branch_taken_0x3e4d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4d1c) {
            ctx->pc = 0x3E4D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4D1Cu;
            // 0x3e4d20: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4D40u;
            goto label_3e4d40;
        }
    }
    ctx->pc = 0x3E4D24u;
    // 0x3e4d24: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x3e4d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3e4d28: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3e4d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e4d2c: 0x26b40004  addiu       $s4, $s5, 0x4
    ctx->pc = 0x3e4d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x3e4d30: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x3e4d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3e4d34: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4D34u;
    SET_GPR_U32(ctx, 31, 0x3E4D3Cu);
    ctx->pc = 0x3E4D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4D34u;
    // 0x3e4d38: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4D34u, 0x3E4D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4D3Cu;
label_3e4d3c:
    // 0x3e4d3c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3e4d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3e4d40:
    // 0x3e4d40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4d44: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3e4d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e4d48: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3e4d48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3e4d4c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3e4d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3e4d50: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4D50u;
    SET_GPR_U32(ctx, 31, 0x3E4D58u);
    ctx->pc = 0x3E4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4D50u;
    // 0x3e4d54: 0x66520001  daddiu      $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4D50u, 0x3E4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4D58u;
label_3e4d58:
    // 0x3e4d58: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3e4d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3e4d5c:
    // 0x3e4d5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4d60: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3e4d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e4d64: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x3e4d64u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    // 0x3e4d68: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3e4d68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3e4d6c: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4D6Cu;
    SET_GPR_U32(ctx, 31, 0x3E4D74u);
    ctx->pc = 0x3E4D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4D6Cu;
    // 0x3e4d70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4D6Cu, 0x3E4D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4D74u;
label_3e4d74:
    // 0x3e4d74: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x3e4d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3e4d78: 0x5040008e  beql        $v0, $zero, . + 4 + (0x8E << 2)
    ctx->pc = 0x3E4D78u;
    {
        const bool branch_taken_0x3e4d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4d78) {
            ctx->pc = 0x3E4D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4D78u;
            // 0x3e4d7c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4FB4u;
            goto label_3e4fb4;
        }
    }
    ctx->pc = 0x3E4D80u;
label_3e4d80:
    // 0x3e4d80: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3e4d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4d84: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e4d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4d88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e4d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e4d8c: 0x0  nop
    ctx->pc = 0x3e4d8cu;
    // NOP
label_3e4d90:
    // 0x3e4d90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4d94: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3e4d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e4d98: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4D98u;
    SET_GPR_U32(ctx, 31, 0x3E4DA0u);
    ctx->pc = 0x3E4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4D98u;
    // 0x3e4d9c: 0x66520004  daddiu      $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4D98u, 0x3E4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4DA0u;
label_3e4da0:
    // 0x3e4da0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3e4da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e4da4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4da8: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4DA8u;
    SET_GPR_U32(ctx, 31, 0x3E4DB0u);
    ctx->pc = 0x3E4DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4DA8u;
    // 0x3e4dac: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4DA8u, 0x3E4DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4DB0u;
label_3e4db0:
    // 0x3e4db0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3e4db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e4db4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4db8: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4DB8u;
    SET_GPR_U32(ctx, 31, 0x3E4DC0u);
    ctx->pc = 0x3E4DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4DB8u;
    // 0x3e4dbc: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4DB8u, 0x3E4DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4DC0u;
label_3e4dc0:
    // 0x3e4dc0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3e4dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3e4dc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4dc8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3e4dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3e4dcc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3e4dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3e4dd0: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4DD0u;
    SET_GPR_U32(ctx, 31, 0x3E4DD8u);
    ctx->pc = 0x3E4DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4DD0u;
    // 0x3e4dd4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4DD0u, 0x3E4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4DD8u;
label_3e4dd8:
    // 0x3e4dd8: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x3e4dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3e4ddc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3E4DDCu;
    {
        const bool branch_taken_0x3e4ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ddc) {
            ctx->pc = 0x3E4DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4DDCu;
            // 0x3e4de0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4d90;
        }
    }
    ctx->pc = 0x3E4DE4u;
    // 0x3e4de4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x3E4DE4u;
    {
        const bool branch_taken_0x3e4de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DE4u;
        // 0x3e4de8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4de4) {
            ctx->pc = 0x3E4FB4u;
            goto label_3e4fb4;
        }
    }
    ctx->pc = 0x3E4DECu;
label_3e4dec:
    // 0x3e4dec: 0x12c00070  beqz        $s6, . + 4 + (0x70 << 2)
    ctx->pc = 0x3E4DECu;
    {
        const bool branch_taken_0x3e4dec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DECu;
        // 0x3e4df0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4dec) {
            ctx->pc = 0x3E4FB0u;
            goto label_3e4fb0;
        }
    }
    ctx->pc = 0x3E4DF4u;
    // 0x3e4df4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3e4df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4df8: 0x1ac00015  blez        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E4DF8u;
    {
        const bool branch_taken_0x3e4df8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3E4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DF8u;
        // 0x3e4dfc: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4df8) {
            ctx->pc = 0x3E4E50u;
            goto label_3e4e50;
        }
    }
    ctx->pc = 0x3E4E00u;
    // 0x3e4e00: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E4E00u;
    {
        const bool branch_taken_0x3e4e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e00) {
            ctx->pc = 0x3E4E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4E00u;
            // 0x3e4e04: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4E78u;
            goto label_3e4e78;
        }
    }
    ctx->pc = 0x3E4E08u;
    // 0x3e4e08: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3e4e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e4e0c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E4E0Cu;
    {
        const bool branch_taken_0x3e4e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e0c) {
            ctx->pc = 0x3E4E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4E0Cu;
            // 0x3e4e10: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4E54u;
            goto label_3e4e54;
        }
    }
    ctx->pc = 0x3E4E14u;
    // 0x3e4e14: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e4e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e4e18: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E4E18u;
    {
        const bool branch_taken_0x3e4e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e18) {
            ctx->pc = 0x3E4E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4E18u;
            // 0x3e4e1c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4E3Cu;
            goto label_3e4e3c;
        }
    }
    ctx->pc = 0x3E4E20u;
    // 0x3e4e20: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x3e4e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3e4e24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e2c: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4E2Cu;
    SET_GPR_U32(ctx, 31, 0x3E4E34u);
    ctx->pc = 0x3E4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E2Cu;
    // 0x3e4e30: 0x26b00004  addiu       $s0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4E2Cu, 0x3E4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E34u;
label_3e4e34:
    // 0x3e4e34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3e4e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e4e38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e4e3c:
    // 0x3e4e3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e44: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4E44u;
    SET_GPR_U32(ctx, 31, 0x3E4E4Cu);
    ctx->pc = 0x3E4E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E44u;
    // 0x3e4e48: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4E44u, 0x3E4E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E4Cu;
label_3e4e4c:
    // 0x3e4e4c: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x3e4e4cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
label_3e4e50:
    // 0x3e4e50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e4e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e4e54:
    // 0x3e4e54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e5c: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4E5Cu;
    SET_GPR_U32(ctx, 31, 0x3E4E64u);
    ctx->pc = 0x3E4E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E5Cu;
    // 0x3e4e60: 0x66520001  daddiu      $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4E5Cu, 0x3E4E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E64u;
label_3e4e64:
    // 0x3e4e64: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x3e4e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3e4e68: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3E4E68u;
    {
        const bool branch_taken_0x3e4e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E68u;
        // 0x3e4e6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e68) {
            ctx->pc = 0x3E4FB0u;
            goto label_3e4fb0;
        }
    }
    ctx->pc = 0x3E4E70u;
    // 0x3e4e70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e4e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e4e74: 0x0  nop
    ctx->pc = 0x3e4e74u;
    // NOP
label_3e4e78:
    // 0x3e4e78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e80: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4E80u;
    SET_GPR_U32(ctx, 31, 0x3E4E88u);
    ctx->pc = 0x3E4E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E80u;
    // 0x3e4e84: 0x66520004  daddiu      $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4E80u, 0x3E4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E88u;
label_3e4e88:
    // 0x3e4e88: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3e4e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e4e8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e90: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4E90u;
    SET_GPR_U32(ctx, 31, 0x3E4E98u);
    ctx->pc = 0x3E4E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4E90u;
    // 0x3e4e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4E90u, 0x3E4E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4E98u;
label_3e4e98:
    // 0x3e4e98: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3e4e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e4e9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ea0: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4EA0u;
    SET_GPR_U32(ctx, 31, 0x3E4EA8u);
    ctx->pc = 0x3E4EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4EA0u;
    // 0x3e4ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4EA0u, 0x3E4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4EA8u;
label_3e4ea8:
    // 0x3e4ea8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3e4ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3e4eac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4eb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4eb4: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4EB4u;
    SET_GPR_U32(ctx, 31, 0x3E4EBCu);
    ctx->pc = 0x3E4EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4EB4u;
    // 0x3e4eb8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4EB4u, 0x3E4EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4EBCu;
label_3e4ebc:
    // 0x3e4ebc: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x3e4ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3e4ec0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3E4EC0u;
    {
        const bool branch_taken_0x3e4ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ec0) {
            ctx->pc = 0x3E4EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4EC0u;
            // 0x3e4ec4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4e78;
        }
    }
    ctx->pc = 0x3E4EC8u;
    // 0x3e4ec8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3E4EC8u;
    {
        const bool branch_taken_0x3e4ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EC8u;
        // 0x3e4ecc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ec8) {
            ctx->pc = 0x3E4FB4u;
            goto label_3e4fb4;
        }
    }
    ctx->pc = 0x3E4ED0u;
label_3e4ed0:
    // 0x3e4ed0: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3E4ED0u;
    {
        const bool branch_taken_0x3e4ed0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4ED0u;
        // 0x3e4ed4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ed0) {
            ctx->pc = 0x3E4FB4u;
            goto label_3e4fb4;
        }
    }
    ctx->pc = 0x3E4ED8u;
    // 0x3e4ed8: 0x12c00036  beqz        $s6, . + 4 + (0x36 << 2)
    ctx->pc = 0x3E4ED8u;
    {
        const bool branch_taken_0x3e4ed8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4ED8u;
        // 0x3e4edc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ed8) {
            ctx->pc = 0x3E4FB4u;
            goto label_3e4fb4;
        }
    }
    ctx->pc = 0x3E4EE0u;
    // 0x3e4ee0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3e4ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ee4: 0x1ac00015  blez        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E4EE4u;
    {
        const bool branch_taken_0x3e4ee4 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3E4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EE4u;
        // 0x3e4ee8: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ee4) {
            ctx->pc = 0x3E4F3Cu;
            goto label_3e4f3c;
        }
    }
    ctx->pc = 0x3E4EECu;
    // 0x3e4eec: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E4EECu;
    {
        const bool branch_taken_0x3e4eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4eec) {
            ctx->pc = 0x3E4EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4EECu;
            // 0x3e4ef0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4F60u;
            goto label_3e4f60;
        }
    }
    ctx->pc = 0x3E4EF4u;
    // 0x3e4ef4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3e4ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e4ef8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E4EF8u;
    {
        const bool branch_taken_0x3e4ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ef8) {
            ctx->pc = 0x3E4EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4EF8u;
            // 0x3e4efc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4F40u;
            goto label_3e4f40;
        }
    }
    ctx->pc = 0x3E4F00u;
    // 0x3e4f00: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e4f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e4f04: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E4F04u;
    {
        const bool branch_taken_0x3e4f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4f04) {
            ctx->pc = 0x3E4F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4F04u;
            // 0x3e4f08: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4F28u;
            goto label_3e4f28;
        }
    }
    ctx->pc = 0x3E4F0Cu;
    // 0x3e4f0c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3e4f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e4f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f18: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4F18u;
    SET_GPR_U32(ctx, 31, 0x3E4F20u);
    ctx->pc = 0x3E4F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F18u;
    // 0x3e4f1c: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4F18u, 0x3E4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F20u;
label_3e4f20:
    // 0x3e4f20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3e4f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e4f24: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3e4f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e4f28:
    // 0x3e4f28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f30: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4F30u;
    SET_GPR_U32(ctx, 31, 0x3E4F38u);
    ctx->pc = 0x3E4F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F30u;
    // 0x3e4f34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4F30u, 0x3E4F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F38u;
label_3e4f38:
    // 0x3e4f38: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x3e4f38u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
label_3e4f3c:
    // 0x3e4f3c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3e4f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e4f40:
    // 0x3e4f40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f48: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4F48u;
    SET_GPR_U32(ctx, 31, 0x3E4F50u);
    ctx->pc = 0x3E4F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F48u;
    // 0x3e4f4c: 0x66520001  daddiu      $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4F48u, 0x3E4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F50u;
label_3e4f50:
    // 0x3e4f50: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x3e4f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3e4f54: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E4F54u;
    {
        const bool branch_taken_0x3e4f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F54u;
        // 0x3e4f58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f54) {
            ctx->pc = 0x3E4FB0u;
            goto label_3e4fb0;
        }
    }
    ctx->pc = 0x3E4F5Cu;
    // 0x3e4f5c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3e4f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e4f60:
    // 0x3e4f60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f68: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4F68u;
    SET_GPR_U32(ctx, 31, 0x3E4F70u);
    ctx->pc = 0x3E4F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F68u;
    // 0x3e4f6c: 0x66520004  daddiu      $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4F68u, 0x3E4F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F70u;
label_3e4f70:
    // 0x3e4f70: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3e4f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e4f74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f78: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4F78u;
    SET_GPR_U32(ctx, 31, 0x3E4F80u);
    ctx->pc = 0x3E4F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F78u;
    // 0x3e4f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4F78u, 0x3E4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F80u;
label_3e4f80:
    // 0x3e4f80: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3e4f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e4f84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f88: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4F88u;
    SET_GPR_U32(ctx, 31, 0x3E4F90u);
    ctx->pc = 0x3E4F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F88u;
    // 0x3e4f8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4F88u, 0x3E4F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F90u;
label_3e4f90:
    // 0x3e4f90: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x3e4f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3e4f94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f9c: 0xc0f8e4a  jal         func_3E3928
    ctx->pc = 0x3E4F9Cu;
    SET_GPR_U32(ctx, 31, 0x3E4FA4u);
    ctx->pc = 0x3E4FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F9Cu;
    // 0x3e4fa0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3928u, 0x3E4F9Cu, 0x3E4FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4FA4u;
label_3e4fa4:
    // 0x3e4fa4: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x3e4fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3e4fa8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3E4FA8u;
    {
        const bool branch_taken_0x3e4fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4fa8) {
            ctx->pc = 0x3E4FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4FA8u;
            // 0x3e4fac: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4f60;
        }
    }
    ctx->pc = 0x3E4FB0u;
label_3e4fb0:
    // 0x3e4fb0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e4fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e4fb4:
    // 0x3e4fb4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e4fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e4fb8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e4fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e4fbc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e4fbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e4fc0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3e4fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e4fc4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3e4fc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e4fc8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3e4fc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e4fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e4fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e4fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4FD0u;
        // 0x3e4fd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4FD8u;
}
