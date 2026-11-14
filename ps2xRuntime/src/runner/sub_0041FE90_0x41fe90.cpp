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

// Function: sub_0041FE90
// Address: 0x41fe90 - 0x41ffd8
void sub_0041FE90_0x41fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FE90_0x41fe90");
#endif

    switch (ctx->pc) {
        case 0x41fe90u: goto label_41fe90;
        case 0x41fe94u: goto label_41fe94;
        case 0x41fe98u: goto label_41fe98;
        case 0x41fe9cu: goto label_41fe9c;
        case 0x41fea0u: goto label_41fea0;
        case 0x41fea4u: goto label_41fea4;
        case 0x41fea8u: goto label_41fea8;
        case 0x41feacu: goto label_41feac;
        case 0x41feb0u: goto label_41feb0;
        case 0x41feb4u: goto label_41feb4;
        case 0x41feb8u: goto label_41feb8;
        case 0x41febcu: goto label_41febc;
        case 0x41fec0u: goto label_41fec0;
        case 0x41fec4u: goto label_41fec4;
        case 0x41fec8u: goto label_41fec8;
        case 0x41feccu: goto label_41fecc;
        case 0x41fed0u: goto label_41fed0;
        case 0x41fed4u: goto label_41fed4;
        case 0x41fed8u: goto label_41fed8;
        case 0x41fedcu: goto label_41fedc;
        case 0x41fee0u: goto label_41fee0;
        case 0x41fee4u: goto label_41fee4;
        case 0x41fee8u: goto label_41fee8;
        case 0x41feecu: goto label_41feec;
        case 0x41fef0u: goto label_41fef0;
        case 0x41fef4u: goto label_41fef4;
        case 0x41fef8u: goto label_41fef8;
        case 0x41fefcu: goto label_41fefc;
        case 0x41ff00u: goto label_41ff00;
        case 0x41ff04u: goto label_41ff04;
        case 0x41ff08u: goto label_41ff08;
        case 0x41ff0cu: goto label_41ff0c;
        case 0x41ff10u: goto label_41ff10;
        case 0x41ff14u: goto label_41ff14;
        case 0x41ff18u: goto label_41ff18;
        case 0x41ff1cu: goto label_41ff1c;
        case 0x41ff20u: goto label_41ff20;
        case 0x41ff24u: goto label_41ff24;
        case 0x41ff28u: goto label_41ff28;
        case 0x41ff2cu: goto label_41ff2c;
        case 0x41ff30u: goto label_41ff30;
        case 0x41ff34u: goto label_41ff34;
        case 0x41ff38u: goto label_41ff38;
        case 0x41ff3cu: goto label_41ff3c;
        case 0x41ff40u: goto label_41ff40;
        case 0x41ff44u: goto label_41ff44;
        case 0x41ff48u: goto label_41ff48;
        case 0x41ff4cu: goto label_41ff4c;
        case 0x41ff50u: goto label_41ff50;
        case 0x41ff54u: goto label_41ff54;
        case 0x41ff58u: goto label_41ff58;
        case 0x41ff5cu: goto label_41ff5c;
        case 0x41ff60u: goto label_41ff60;
        case 0x41ff64u: goto label_41ff64;
        case 0x41ff68u: goto label_41ff68;
        case 0x41ff6cu: goto label_41ff6c;
        case 0x41ff70u: goto label_41ff70;
        case 0x41ff74u: goto label_41ff74;
        case 0x41ff78u: goto label_41ff78;
        case 0x41ff7cu: goto label_41ff7c;
        case 0x41ff80u: goto label_41ff80;
        case 0x41ff84u: goto label_41ff84;
        case 0x41ff88u: goto label_41ff88;
        case 0x41ff8cu: goto label_41ff8c;
        case 0x41ff90u: goto label_41ff90;
        case 0x41ff94u: goto label_41ff94;
        case 0x41ff98u: goto label_41ff98;
        case 0x41ff9cu: goto label_41ff9c;
        case 0x41ffa0u: goto label_41ffa0;
        case 0x41ffa4u: goto label_41ffa4;
        case 0x41ffa8u: goto label_41ffa8;
        case 0x41ffacu: goto label_41ffac;
        case 0x41ffb0u: goto label_41ffb0;
        case 0x41ffb4u: goto label_41ffb4;
        case 0x41ffb8u: goto label_41ffb8;
        case 0x41ffbcu: goto label_41ffbc;
        case 0x41ffc0u: goto label_41ffc0;
        case 0x41ffc4u: goto label_41ffc4;
        case 0x41ffc8u: goto label_41ffc8;
        case 0x41ffccu: goto label_41ffcc;
        case 0x41ffd0u: goto label_41ffd0;
        case 0x41ffd4u: goto label_41ffd4;
        default: break;
    }

    ctx->pc = 0x41fe90u;

label_41fe90:
    // 0x41fe90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41fe94:
    // 0x41fe94: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x41fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_41fe98:
    // 0x41fe98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41fe9c:
    // 0x41fe9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41fea0:
    // 0x41fea0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41fea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41fea4:
    // 0x41fea4: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x41fea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41fea8:
    // 0x41fea8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41feac:
    // 0x41feac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x41feacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_41feb0:
    // 0x41feb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41feb4:
    // 0x41feb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41feb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41feb8:
    // 0x41feb8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x41feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_41febc:
    // 0x41febc: 0x40f809  jalr        $v0
label_41fec0:
    if (ctx->pc == 0x41FEC0u) {
        ctx->pc = 0x41FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEBCu;
        // 0x41fec0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FEC4u;
        goto label_41fec4;
    }
    ctx->pc = 0x41FEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41FEC4u);
        ctx->pc = 0x41FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEBCu;
        // 0x41fec0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FEBCu, 0x41FEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41FEC4u;
label_41fec4:
    // 0x41fec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41fec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41fec8:
    // 0x41fec8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_41fecc:
    if (ctx->pc == 0x41FECCu) {
        ctx->pc = 0x41FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEC8u;
        // 0x41fecc: 0x8f83be18  lw          $v1, -0x41E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FED0u;
        goto label_41fed0;
    }
    ctx->pc = 0x41FEC8u;
    {
        const bool branch_taken_0x41fec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEC8u;
        // 0x41fecc: 0x8f83be18  lw          $v1, -0x41E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fec8) {
            ctx->pc = 0x41FEE0u;
            goto label_41fee0;
        }
    }
    ctx->pc = 0x41FED0u;
label_41fed0:
    // 0x41fed0: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x41fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_41fed4:
    // 0x41fed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x41fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_41fed8:
    // 0x41fed8: 0x10000038  b           . + 4 + (0x38 << 2)
label_41fedc:
    if (ctx->pc == 0x41FEDCu) {
        ctx->pc = 0x41FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FED8u;
        // 0x41fedc: 0xaca30054  sw          $v1, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FEE0u;
        goto label_41fee0;
    }
    ctx->pc = 0x41FED8u;
    {
        const bool branch_taken_0x41fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FED8u;
        // 0x41fedc: 0xaca30054  sw          $v1, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fed8) {
            ctx->pc = 0x41FFBCu;
            goto label_41ffbc;
        }
    }
    ctx->pc = 0x41FEE0u;
label_41fee0:
    // 0x41fee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41fee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41fee4:
    // 0x41fee4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x41fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_41fee8:
    // 0x41fee8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x41fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_41feec:
    // 0x41feec: 0x40f809  jalr        $v0
label_41fef0:
    if (ctx->pc == 0x41FEF0u) {
        ctx->pc = 0x41FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEECu;
        // 0x41fef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FEF4u;
        goto label_41fef4;
    }
    ctx->pc = 0x41FEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41FEF4u);
        ctx->pc = 0x41FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEECu;
        // 0x41fef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FEECu, 0x41FEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41FEF4u;
label_41fef4:
    // 0x41fef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41fef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41fef8:
    // 0x41fef8: 0x54a00019  bnel        $a1, $zero, . + 4 + (0x19 << 2)
label_41fefc:
    if (ctx->pc == 0x41FEFCu) {
        ctx->pc = 0x41FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEF8u;
        // 0x41fefc: 0x8f82be18  lw          $v0, -0x41E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF00u;
        goto label_41ff00;
    }
    ctx->pc = 0x41FEF8u;
    {
        const bool branch_taken_0x41fef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x41fef8) {
            ctx->pc = 0x41FEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FEF8u;
            // 0x41fefc: 0x8f82be18  lw          $v0, -0x41E8($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FF60u;
            goto label_41ff60;
        }
    }
    ctx->pc = 0x41FF00u;
label_41ff00:
    // 0x41ff00: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_41ff04:
    if (ctx->pc == 0x41FF04u) {
        ctx->pc = 0x41FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF00u;
        // 0x41ff04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF08u;
        goto label_41ff08;
    }
    ctx->pc = 0x41FF00u;
    {
        const bool branch_taken_0x41ff00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF00u;
        // 0x41ff04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ff00) {
            ctx->pc = 0x41FF30u;
            goto label_41ff30;
        }
    }
    ctx->pc = 0x41FF08u;
label_41ff08:
    // 0x41ff08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41ff0c:
    // 0x41ff0c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41ff10:
    // 0x41ff10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41ff10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ff14:
    // 0x41ff14: 0xc1035f6  jal         func_40D7D8
label_41ff18:
    if (ctx->pc == 0x41FF18u) {
        ctx->pc = 0x41FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF14u;
        // 0x41ff18: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF1Cu;
        goto label_41ff1c;
    }
    ctx->pc = 0x41FF14u;
    SET_GPR_U32(ctx, 31, 0x41FF1Cu);
    ctx->pc = 0x41FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FF14u;
    // 0x41ff18: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41FF14u, 0x41FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FF1Cu;
label_41ff1c:
    // 0x41ff1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41ff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41ff20:
    // 0x41ff20: 0xc103628  jal         func_40D8A0
label_41ff24:
    if (ctx->pc == 0x41FF24u) {
        ctx->pc = 0x41FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF20u;
        // 0x41ff24: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF28u;
        goto label_41ff28;
    }
    ctx->pc = 0x41FF20u;
    SET_GPR_U32(ctx, 31, 0x41FF28u);
    ctx->pc = 0x41FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FF20u;
    // 0x41ff24: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41FF20u, 0x41FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FF28u;
label_41ff28:
    // 0x41ff28: 0x10000024  b           . + 4 + (0x24 << 2)
label_41ff2c:
    if (ctx->pc == 0x41FF2Cu) {
        ctx->pc = 0x41FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF28u;
        // 0x41ff2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF30u;
        goto label_41ff30;
    }
    ctx->pc = 0x41FF28u;
    {
        const bool branch_taken_0x41ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF28u;
        // 0x41ff2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ff28) {
            ctx->pc = 0x41FFBCu;
            goto label_41ffbc;
        }
    }
    ctx->pc = 0x41FF30u;
label_41ff30:
    // 0x41ff30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41ff34:
    // 0x41ff34: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x41ff34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_41ff38:
    // 0x41ff38: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x41ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_41ff3c:
    // 0x41ff3c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x41ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_41ff40:
    // 0x41ff40: 0xc1035f6  jal         func_40D7D8
label_41ff44:
    if (ctx->pc == 0x41FF44u) {
        ctx->pc = 0x41FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF40u;
        // 0x41ff44: 0x24c69d28  addiu       $a2, $a2, -0x62D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF48u;
        goto label_41ff48;
    }
    ctx->pc = 0x41FF40u;
    SET_GPR_U32(ctx, 31, 0x41FF48u);
    ctx->pc = 0x41FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FF40u;
    // 0x41ff44: 0x24c69d28  addiu       $a2, $a2, -0x62D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41FF40u, 0x41FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FF48u;
label_41ff48:
    // 0x41ff48: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x41ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_41ff4c:
    // 0x41ff4c: 0xc103628  jal         func_40D8A0
label_41ff50:
    if (ctx->pc == 0x41FF50u) {
        ctx->pc = 0x41FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF4Cu;
        // 0x41ff50: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF54u;
        goto label_41ff54;
    }
    ctx->pc = 0x41FF4Cu;
    SET_GPR_U32(ctx, 31, 0x41FF54u);
    ctx->pc = 0x41FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FF4Cu;
    // 0x41ff50: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41FF4Cu, 0x41FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FF54u;
label_41ff54:
    // 0x41ff54: 0x10000019  b           . + 4 + (0x19 << 2)
label_41ff58:
    if (ctx->pc == 0x41FF58u) {
        ctx->pc = 0x41FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF54u;
        // 0x41ff58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF5Cu;
        goto label_41ff5c;
    }
    ctx->pc = 0x41FF54u;
    {
        const bool branch_taken_0x41ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF54u;
        // 0x41ff58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ff54) {
            ctx->pc = 0x41FFBCu;
            goto label_41ffbc;
        }
    }
    ctx->pc = 0x41FF5Cu;
label_41ff5c:
    // 0x41ff5c: 0x0  nop
    ctx->pc = 0x41ff5cu;
    // NOP
label_41ff60:
    // 0x41ff60: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41ff64:
    // 0x41ff64: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x41ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_41ff68:
    // 0x41ff68: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
label_41ff6c:
    if (ctx->pc == 0x41FF6Cu) {
        ctx->pc = 0x41FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF68u;
        // 0x41ff6c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF70u;
        goto label_41ff70;
    }
    ctx->pc = 0x41FF68u;
    {
        const bool branch_taken_0x41ff68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF68u;
        // 0x41ff6c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ff68) {
            ctx->pc = 0x41FFBCu;
            goto label_41ffbc;
        }
    }
    ctx->pc = 0x41FF70u;
label_41ff70:
    // 0x41ff70: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x41ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_41ff74:
    // 0x41ff74: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_41ff78:
    if (ctx->pc == 0x41FF78u) {
        ctx->pc = 0x41FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF74u;
        // 0x41ff78: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FF7Cu;
        goto label_41ff7c;
    }
    ctx->pc = 0x41FF74u;
    {
        const bool branch_taken_0x41ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ff74) {
            ctx->pc = 0x41FF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FF74u;
            // 0x41ff78: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FF98u;
            goto label_41ff98;
        }
    }
    ctx->pc = 0x41FF7Cu;
label_41ff7c:
    // 0x41ff7c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x41ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_41ff80:
    // 0x41ff80: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x41ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_41ff84:
    // 0x41ff84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x41ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_41ff88:
    // 0x41ff88: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x41ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_41ff8c:
    // 0x41ff8c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x41ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_41ff90:
    // 0x41ff90: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x41ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_41ff94:
    // 0x41ff94: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x41ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_41ff98:
    // 0x41ff98: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x41ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_41ff9c:
    // 0x41ff9c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x41ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_41ffa0:
    // 0x41ffa0: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x41ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_41ffa4:
    // 0x41ffa4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x41ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_41ffa8:
    // 0x41ffa8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x41ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_41ffac:
    // 0x41ffac: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x41ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_41ffb0:
    // 0x41ffb0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x41ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_41ffb4:
    // 0x41ffb4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x41ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_41ffb8:
    // 0x41ffb8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x41ffb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41ffbc:
    // 0x41ffbc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41ffbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41ffc0:
    // 0x41ffc0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41ffc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41ffc4:
    // 0x41ffc4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41ffc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41ffc8:
    // 0x41ffc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41ffc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41ffcc:
    // 0x41ffcc: 0x3e00008  jr          $ra
label_41ffd0:
    if (ctx->pc == 0x41FFD0u) {
        ctx->pc = 0x41FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFCCu;
        // 0x41ffd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41FFD4u;
        goto label_41ffd4;
    }
    ctx->pc = 0x41FFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FFCCu;
        // 0x41ffd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FFD4u;
label_41ffd4:
    // 0x41ffd4: 0x0  nop
    ctx->pc = 0x41ffd4u;
    // NOP
    ctx->pc = 0x41ffd8u;
}
