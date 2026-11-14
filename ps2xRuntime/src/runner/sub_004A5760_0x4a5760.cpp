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

// Function: sub_004A5760
// Address: 0x4a5760 - 0x4a5890
void sub_004A5760_0x4a5760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5760_0x4a5760");
#endif

    switch (ctx->pc) {
        case 0x4a5780u: goto label_4a5780;
        case 0x4a57a0u: goto label_4a57a0;
        case 0x4a57bcu: goto label_4a57bc;
        case 0x4a57d8u: goto label_4a57d8;
        case 0x4a57f4u: goto label_4a57f4;
        case 0x4a5808u: goto label_4a5808;
        case 0x4a5834u: goto label_4a5834;
        default: break;
    }

    ctx->pc = 0x4a5760u;

    // 0x4a5760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a5760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a5764: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a5764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a5768: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a5768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a576c: 0x24a52610  addiu       $a1, $a1, 0x2610
    ctx->pc = 0x4a576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    // 0x4a5770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a5770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a5774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a5774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5778: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5778u;
    SET_GPR_U32(ctx, 31, 0x4A5780u);
    ctx->pc = 0x4A577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5778u;
    // 0x4a577c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5778u, 0x4A5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5780u;
label_4a5780:
    // 0x4a5780: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A5780u;
    {
        const bool branch_taken_0x4a5780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5780u;
        // 0x4a5784: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5780) {
            ctx->pc = 0x4A5794u;
            goto label_4a5794;
        }
    }
    ctx->pc = 0x4A5788u;
    // 0x4a5788: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x4a5788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a578c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x4A578Cu;
    {
        const bool branch_taken_0x4a578c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A578Cu;
        // 0x4a5790: 0x210c2  srl         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a578c) {
            ctx->pc = 0x4A587Cu;
            goto label_4a587c;
        }
    }
    ctx->pc = 0x4A5794u;
label_4a5794:
    // 0x4a5794: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a5794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a5798: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5798u;
    SET_GPR_U32(ctx, 31, 0x4A57A0u);
    ctx->pc = 0x4A579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5798u;
    // 0x4a579c: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5798u, 0x4A57A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A57A0u;
label_4a57a0:
    // 0x4a57a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A57A0u;
    {
        const bool branch_taken_0x4a57a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57A0u;
        // 0x4a57a4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a57a0) {
            ctx->pc = 0x4A57B0u;
            goto label_4a57b0;
        }
    }
    ctx->pc = 0x4A57A8u;
    // 0x4a57a8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x4A57A8u;
    {
        const bool branch_taken_0x4a57a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57A8u;
        // 0x4a57ac: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a57a8) {
            ctx->pc = 0x4A587Cu;
            goto label_4a587c;
        }
    }
    ctx->pc = 0x4A57B0u;
label_4a57b0:
    // 0x4a57b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a57b4: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A57B4u;
    SET_GPR_U32(ctx, 31, 0x4A57BCu);
    ctx->pc = 0x4A57B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A57B4u;
    // 0x4a57b8: 0x24a52620  addiu       $a1, $a1, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A57B4u, 0x4A57BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A57BCu;
label_4a57bc:
    // 0x4a57bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A57BCu;
    {
        const bool branch_taken_0x4a57bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57BCu;
        // 0x4a57c0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a57bc) {
            ctx->pc = 0x4A57CCu;
            goto label_4a57cc;
        }
    }
    ctx->pc = 0x4A57C4u;
    // 0x4a57c4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x4A57C4u;
    {
        const bool branch_taken_0x4a57c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A57C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57C4u;
        // 0x4a57c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a57c4) {
            ctx->pc = 0x4A587Cu;
            goto label_4a587c;
        }
    }
    ctx->pc = 0x4A57CCu;
label_4a57cc:
    // 0x4a57cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a57ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a57d0: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A57D0u;
    SET_GPR_U32(ctx, 31, 0x4A57D8u);
    ctx->pc = 0x4A57D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A57D0u;
    // 0x4a57d4: 0x24a52630  addiu       $a1, $a1, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A57D0u, 0x4A57D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A57D8u;
label_4a57d8:
    // 0x4a57d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A57D8u;
    {
        const bool branch_taken_0x4a57d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57D8u;
        // 0x4a57dc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a57d8) {
            ctx->pc = 0x4A57E8u;
            goto label_4a57e8;
        }
    }
    ctx->pc = 0x4A57E0u;
    // 0x4a57e0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x4A57E0u;
    {
        const bool branch_taken_0x4a57e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57E0u;
        // 0x4a57e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a57e0) {
            ctx->pc = 0x4A587Cu;
            goto label_4a587c;
        }
    }
    ctx->pc = 0x4A57E8u;
label_4a57e8:
    // 0x4a57e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a57e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a57ec: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A57ECu;
    SET_GPR_U32(ctx, 31, 0x4A57F4u);
    ctx->pc = 0x4A57F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A57ECu;
    // 0x4a57f0: 0x24a52640  addiu       $a1, $a1, 0x2640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A57ECu, 0x4A57F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A57F4u;
label_4a57f4:
    // 0x4a57f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A57F4u;
    {
        const bool branch_taken_0x4a57f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57F4u;
        // 0x4a57f8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a57f4) {
            ctx->pc = 0x4A5810u;
            goto label_4a5810;
        }
    }
    ctx->pc = 0x4A57FCu;
    // 0x4a57fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a5800: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5800u;
    SET_GPR_U32(ctx, 31, 0x4A5808u);
    ctx->pc = 0x4A5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5800u;
    // 0x4a5804: 0x24a526a0  addiu       $a1, $a1, 0x26A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5800u, 0x4A5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5808u;
label_4a5808:
    // 0x4a5808: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A5808u;
    {
        const bool branch_taken_0x4a5808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5808u;
        // 0x4a580c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5808) {
            ctx->pc = 0x4A5828u;
            goto label_4a5828;
        }
    }
    ctx->pc = 0x4A5810u;
label_4a5810:
    // 0x4a5810: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x4a5810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x4a5814: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4a5814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a5818: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4a5818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a581c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4a581cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x4a5820: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4A5820u;
    {
        const bool branch_taken_0x4a5820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5820u;
        // 0x4a5824: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5820) {
            ctx->pc = 0x4A587Cu;
            goto label_4a587c;
        }
    }
    ctx->pc = 0x4A5828u;
label_4a5828:
    // 0x4a5828: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a5828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a582c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A582Cu;
    SET_GPR_U32(ctx, 31, 0x4A5834u);
    ctx->pc = 0x4A5830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A582Cu;
    // 0x4a5830: 0x24a52660  addiu       $a1, $a1, 0x2660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A582Cu, 0x4A5834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5834u;
label_4a5834:
    // 0x4a5834: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A5834u;
    {
        const bool branch_taken_0x4a5834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5834u;
        // 0x4a5838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5834) {
            ctx->pc = 0x4A587Cu;
            goto label_4a587c;
        }
    }
    ctx->pc = 0x4A583Cu;
    // 0x4a583c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x4a583cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x4a5840: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4a5840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a5844: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A5844u;
    {
        const bool branch_taken_0x4a5844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5844u;
        // 0x4a5848: 0x3484f400  ori         $a0, $a0, 0xF400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62464);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5844) {
            ctx->pc = 0x4A5850u;
            goto label_4a5850;
        }
    }
    ctx->pc = 0x4A584Cu;
    // 0x4a584c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a584cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a5850:
    // 0x4a5850: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x4a5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x4a5854: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a5854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5858: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x4a5858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a585c: 0x3404bb80  ori         $a0, $zero, 0xBB80
    ctx->pc = 0x4a585cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x4a5860: 0x83180a  movz        $v1, $a0, $v1
    ctx->pc = 0x4a5860u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4a5864: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A5864u;
    {
        const bool branch_taken_0x4a5864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5864) {
            ctx->pc = 0x4A5868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5864u;
            // 0x4a5868: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A586Cu;
            goto label_4a586c;
        }
    }
    ctx->pc = 0x4A586Cu;
label_4a586c:
    // 0x4a586c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4a586cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4a5870: 0x1012  mflo        $v0
    ctx->pc = 0x4a5870u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a5874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A5874u;
    {
        const bool branch_taken_0x4a5874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5874u;
        // 0x4a5878: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5874) {
            ctx->pc = 0x4A5880u;
            goto label_4a5880;
        }
    }
    ctx->pc = 0x4A587Cu;
label_4a587c:
    // 0x4a587c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a587cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a5880:
    // 0x4a5880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5884: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5884u;
        // 0x4a5888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A588Cu;
    // 0x4a588c: 0x0  nop
    ctx->pc = 0x4a588cu;
    // NOP
    ctx->pc = 0x4a5890u;
}
