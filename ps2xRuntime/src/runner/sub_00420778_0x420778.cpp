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

// Function: sub_00420778
// Address: 0x420778 - 0x420828
void sub_00420778_0x420778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420778_0x420778");
#endif

    switch (ctx->pc) {
        case 0x420778u: goto label_420778;
        case 0x42077cu: goto label_42077c;
        case 0x420780u: goto label_420780;
        case 0x420784u: goto label_420784;
        case 0x420788u: goto label_420788;
        case 0x42078cu: goto label_42078c;
        case 0x420790u: goto label_420790;
        case 0x420794u: goto label_420794;
        case 0x420798u: goto label_420798;
        case 0x42079cu: goto label_42079c;
        case 0x4207a0u: goto label_4207a0;
        case 0x4207a4u: goto label_4207a4;
        case 0x4207a8u: goto label_4207a8;
        case 0x4207acu: goto label_4207ac;
        case 0x4207b0u: goto label_4207b0;
        case 0x4207b4u: goto label_4207b4;
        case 0x4207b8u: goto label_4207b8;
        case 0x4207bcu: goto label_4207bc;
        case 0x4207c0u: goto label_4207c0;
        case 0x4207c4u: goto label_4207c4;
        case 0x4207c8u: goto label_4207c8;
        case 0x4207ccu: goto label_4207cc;
        case 0x4207d0u: goto label_4207d0;
        case 0x4207d4u: goto label_4207d4;
        case 0x4207d8u: goto label_4207d8;
        case 0x4207dcu: goto label_4207dc;
        case 0x4207e0u: goto label_4207e0;
        case 0x4207e4u: goto label_4207e4;
        case 0x4207e8u: goto label_4207e8;
        case 0x4207ecu: goto label_4207ec;
        case 0x4207f0u: goto label_4207f0;
        case 0x4207f4u: goto label_4207f4;
        case 0x4207f8u: goto label_4207f8;
        case 0x4207fcu: goto label_4207fc;
        case 0x420800u: goto label_420800;
        case 0x420804u: goto label_420804;
        case 0x420808u: goto label_420808;
        case 0x42080cu: goto label_42080c;
        case 0x420810u: goto label_420810;
        case 0x420814u: goto label_420814;
        case 0x420818u: goto label_420818;
        case 0x42081cu: goto label_42081c;
        case 0x420820u: goto label_420820;
        case 0x420824u: goto label_420824;
        default: break;
    }

    ctx->pc = 0x420778u;

label_420778:
    // 0x420778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x420778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42077c:
    // 0x42077c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x42077cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_420780:
    // 0x420780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x420780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_420784:
    // 0x420784: 0x8f82be18  lw          $v0, -0x41E8($gp)
    ctx->pc = 0x420784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420788:
    // 0x420788: 0x2471e880  addiu       $s1, $v1, -0x1780
    ctx->pc = 0x420788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_42078c:
    // 0x42078c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_420790:
    // 0x420790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_420794:
    // 0x420794: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x420794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_420798:
    // 0x420798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x420798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42079c:
    // 0x42079c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x42079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4207a0:
    // 0x4207a0: 0x50700001  beql        $v1, $s0, . + 4 + (0x1 << 2)
label_4207a4:
    if (ctx->pc == 0x4207A4u) {
        ctx->pc = 0x4207A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207A0u;
        // 0x4207a4: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4207A8u;
        goto label_4207a8;
    }
    ctx->pc = 0x4207A0u;
    {
        const bool branch_taken_0x4207a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x4207a0) {
            ctx->pc = 0x4207A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4207A0u;
            // 0x4207a4: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4207A8u;
            goto label_4207a8;
        }
    }
    ctx->pc = 0x4207A8u;
label_4207a8:
    // 0x4207a8: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x4207a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_4207ac:
    // 0x4207ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4207acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4207b0:
    // 0x4207b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4207b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4207b4:
    // 0x4207b4: 0xc1082d8  jal         func_420B60
label_4207b8:
    if (ctx->pc == 0x4207B8u) {
        ctx->pc = 0x4207B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207B4u;
        // 0x4207b8: 0x24a508b0  addiu       $a1, $a1, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4207BCu;
        goto label_4207bc;
    }
    ctx->pc = 0x4207B4u;
    SET_GPR_U32(ctx, 31, 0x4207BCu);
    ctx->pc = 0x4207B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4207B4u;
    // 0x4207b8: 0x24a508b0  addiu       $a1, $a1, 0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x4207B4u, 0x4207BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4207BCu;
label_4207bc:
    // 0x4207bc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4207bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_4207c0:
    // 0x4207c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4207c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4207c4:
    // 0x4207c4: 0xc104ca6  jal         func_413298
label_4207c8:
    if (ctx->pc == 0x4207C8u) {
        ctx->pc = 0x4207C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207C4u;
        // 0x4207c8: 0x2484ca28  addiu       $a0, $a0, -0x35D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4207CCu;
        goto label_4207cc;
    }
    ctx->pc = 0x4207C4u;
    SET_GPR_U32(ctx, 31, 0x4207CCu);
    ctx->pc = 0x4207C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4207C4u;
    // 0x4207c8: 0x2484ca28  addiu       $a0, $a0, -0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x4207C4u, 0x4207CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4207CCu;
label_4207cc:
    // 0x4207cc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4207ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4207d0:
    // 0x4207d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4207d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4207d4:
    // 0x4207d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4207d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4207d8:
    // 0x4207d8: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x4207d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_4207dc:
    // 0x4207dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4207dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4207e0:
    // 0x4207e0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4207e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4207e4:
    // 0x4207e4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x4207e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_4207e8:
    // 0x4207e8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x4207e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4207ec:
    // 0x4207ec: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4207ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4207f0:
    // 0x4207f0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x4207f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4207f4:
    // 0x4207f4: 0x40f809  jalr        $v0
label_4207f8:
    if (ctx->pc == 0x4207F8u) {
        ctx->pc = 0x4207F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207F4u;
        // 0x4207f8: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4207FCu;
        goto label_4207fc;
    }
    ctx->pc = 0x4207F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4207FCu);
        ctx->pc = 0x4207F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207F4u;
        // 0x4207f8: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4207F4u, 0x4207FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4207FCu;
label_4207fc:
    // 0x4207fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4207fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420800:
    // 0x420800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420804:
    // 0x420804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x420804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420808:
    // 0x420808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42080c:
    // 0x42080c: 0x3e00008  jr          $ra
label_420810:
    if (ctx->pc == 0x420810u) {
        ctx->pc = 0x420810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42080Cu;
        // 0x420810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420814u;
        goto label_420814;
    }
    ctx->pc = 0x42080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42080Cu;
        // 0x420810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420814u;
label_420814:
    // 0x420814: 0x0  nop
    ctx->pc = 0x420814u;
    // NOP
label_420818:
    // 0x420818: 0xaf84adc0  sw          $a0, -0x5240($gp)
    ctx->pc = 0x420818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946240), GPR_U32(ctx, 4));
label_42081c:
    // 0x42081c: 0x3e00008  jr          $ra
label_420820:
    if (ctx->pc == 0x420820u) {
        ctx->pc = 0x420820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42081Cu;
        // 0x420820: 0xaf85adc4  sw          $a1, -0x523C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946244), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420824u;
        goto label_420824;
    }
    ctx->pc = 0x42081Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42081Cu;
        // 0x420820: 0xaf85adc4  sw          $a1, -0x523C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946244), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42081Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420824u;
label_420824:
    // 0x420824: 0x0  nop
    ctx->pc = 0x420824u;
    // NOP
    ctx->pc = 0x420828u;
}
