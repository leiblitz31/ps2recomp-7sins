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

// Function: sub_0041CC70
// Address: 0x41cc70 - 0x41cea0
void sub_0041CC70_0x41cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CC70_0x41cc70");
#endif

    switch (ctx->pc) {
        case 0x41cc70u: goto label_41cc70;
        case 0x41cc74u: goto label_41cc74;
        case 0x41cc78u: goto label_41cc78;
        case 0x41cc7cu: goto label_41cc7c;
        case 0x41cc80u: goto label_41cc80;
        case 0x41cc84u: goto label_41cc84;
        case 0x41cc88u: goto label_41cc88;
        case 0x41cc8cu: goto label_41cc8c;
        case 0x41cc90u: goto label_41cc90;
        case 0x41cc94u: goto label_41cc94;
        case 0x41cc98u: goto label_41cc98;
        case 0x41cc9cu: goto label_41cc9c;
        case 0x41cca0u: goto label_41cca0;
        case 0x41cca4u: goto label_41cca4;
        case 0x41cca8u: goto label_41cca8;
        case 0x41ccacu: goto label_41ccac;
        case 0x41ccb0u: goto label_41ccb0;
        case 0x41ccb4u: goto label_41ccb4;
        case 0x41ccb8u: goto label_41ccb8;
        case 0x41ccbcu: goto label_41ccbc;
        case 0x41ccc0u: goto label_41ccc0;
        case 0x41ccc4u: goto label_41ccc4;
        case 0x41ccc8u: goto label_41ccc8;
        case 0x41ccccu: goto label_41cccc;
        case 0x41ccd0u: goto label_41ccd0;
        case 0x41ccd4u: goto label_41ccd4;
        case 0x41ccd8u: goto label_41ccd8;
        case 0x41ccdcu: goto label_41ccdc;
        case 0x41cce0u: goto label_41cce0;
        case 0x41cce4u: goto label_41cce4;
        case 0x41cce8u: goto label_41cce8;
        case 0x41ccecu: goto label_41ccec;
        case 0x41ccf0u: goto label_41ccf0;
        case 0x41ccf4u: goto label_41ccf4;
        case 0x41ccf8u: goto label_41ccf8;
        case 0x41ccfcu: goto label_41ccfc;
        case 0x41cd00u: goto label_41cd00;
        case 0x41cd04u: goto label_41cd04;
        case 0x41cd08u: goto label_41cd08;
        case 0x41cd0cu: goto label_41cd0c;
        case 0x41cd10u: goto label_41cd10;
        case 0x41cd14u: goto label_41cd14;
        case 0x41cd18u: goto label_41cd18;
        case 0x41cd1cu: goto label_41cd1c;
        case 0x41cd20u: goto label_41cd20;
        case 0x41cd24u: goto label_41cd24;
        case 0x41cd28u: goto label_41cd28;
        case 0x41cd2cu: goto label_41cd2c;
        case 0x41cd30u: goto label_41cd30;
        case 0x41cd34u: goto label_41cd34;
        case 0x41cd38u: goto label_41cd38;
        case 0x41cd3cu: goto label_41cd3c;
        case 0x41cd40u: goto label_41cd40;
        case 0x41cd44u: goto label_41cd44;
        case 0x41cd48u: goto label_41cd48;
        case 0x41cd4cu: goto label_41cd4c;
        case 0x41cd50u: goto label_41cd50;
        case 0x41cd54u: goto label_41cd54;
        case 0x41cd58u: goto label_41cd58;
        case 0x41cd5cu: goto label_41cd5c;
        case 0x41cd60u: goto label_41cd60;
        case 0x41cd64u: goto label_41cd64;
        case 0x41cd68u: goto label_41cd68;
        case 0x41cd6cu: goto label_41cd6c;
        case 0x41cd70u: goto label_41cd70;
        case 0x41cd74u: goto label_41cd74;
        case 0x41cd78u: goto label_41cd78;
        case 0x41cd7cu: goto label_41cd7c;
        case 0x41cd80u: goto label_41cd80;
        case 0x41cd84u: goto label_41cd84;
        case 0x41cd88u: goto label_41cd88;
        case 0x41cd8cu: goto label_41cd8c;
        case 0x41cd90u: goto label_41cd90;
        case 0x41cd94u: goto label_41cd94;
        case 0x41cd98u: goto label_41cd98;
        case 0x41cd9cu: goto label_41cd9c;
        case 0x41cda0u: goto label_41cda0;
        case 0x41cda4u: goto label_41cda4;
        case 0x41cda8u: goto label_41cda8;
        case 0x41cdacu: goto label_41cdac;
        case 0x41cdb0u: goto label_41cdb0;
        case 0x41cdb4u: goto label_41cdb4;
        case 0x41cdb8u: goto label_41cdb8;
        case 0x41cdbcu: goto label_41cdbc;
        case 0x41cdc0u: goto label_41cdc0;
        case 0x41cdc4u: goto label_41cdc4;
        case 0x41cdc8u: goto label_41cdc8;
        case 0x41cdccu: goto label_41cdcc;
        case 0x41cdd0u: goto label_41cdd0;
        case 0x41cdd4u: goto label_41cdd4;
        case 0x41cdd8u: goto label_41cdd8;
        case 0x41cddcu: goto label_41cddc;
        case 0x41cde0u: goto label_41cde0;
        case 0x41cde4u: goto label_41cde4;
        case 0x41cde8u: goto label_41cde8;
        case 0x41cdecu: goto label_41cdec;
        case 0x41cdf0u: goto label_41cdf0;
        case 0x41cdf4u: goto label_41cdf4;
        case 0x41cdf8u: goto label_41cdf8;
        case 0x41cdfcu: goto label_41cdfc;
        case 0x41ce00u: goto label_41ce00;
        case 0x41ce04u: goto label_41ce04;
        case 0x41ce08u: goto label_41ce08;
        case 0x41ce0cu: goto label_41ce0c;
        case 0x41ce10u: goto label_41ce10;
        case 0x41ce14u: goto label_41ce14;
        case 0x41ce18u: goto label_41ce18;
        case 0x41ce1cu: goto label_41ce1c;
        case 0x41ce20u: goto label_41ce20;
        case 0x41ce24u: goto label_41ce24;
        case 0x41ce28u: goto label_41ce28;
        case 0x41ce2cu: goto label_41ce2c;
        case 0x41ce30u: goto label_41ce30;
        case 0x41ce34u: goto label_41ce34;
        case 0x41ce38u: goto label_41ce38;
        case 0x41ce3cu: goto label_41ce3c;
        case 0x41ce40u: goto label_41ce40;
        case 0x41ce44u: goto label_41ce44;
        case 0x41ce48u: goto label_41ce48;
        case 0x41ce4cu: goto label_41ce4c;
        case 0x41ce50u: goto label_41ce50;
        case 0x41ce54u: goto label_41ce54;
        case 0x41ce58u: goto label_41ce58;
        case 0x41ce5cu: goto label_41ce5c;
        case 0x41ce60u: goto label_41ce60;
        case 0x41ce64u: goto label_41ce64;
        case 0x41ce68u: goto label_41ce68;
        case 0x41ce6cu: goto label_41ce6c;
        case 0x41ce70u: goto label_41ce70;
        case 0x41ce74u: goto label_41ce74;
        case 0x41ce78u: goto label_41ce78;
        case 0x41ce7cu: goto label_41ce7c;
        case 0x41ce80u: goto label_41ce80;
        case 0x41ce84u: goto label_41ce84;
        case 0x41ce88u: goto label_41ce88;
        case 0x41ce8cu: goto label_41ce8c;
        case 0x41ce90u: goto label_41ce90;
        case 0x41ce94u: goto label_41ce94;
        case 0x41ce98u: goto label_41ce98;
        case 0x41ce9cu: goto label_41ce9c;
        default: break;
    }

    ctx->pc = 0x41cc70u;

label_41cc70:
    // 0x41cc70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x41cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41cc74:
    // 0x41cc74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41cc78:
    // 0x41cc78: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x41cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_41cc7c:
    // 0x41cc7c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x41cc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_41cc80:
    // 0x41cc80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x41cc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_41cc84:
    // 0x41cc84: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x41cc84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41cc88:
    // 0x41cc88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41cc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41cc8c:
    // 0x41cc8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41cc8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41cc90:
    // 0x41cc90: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x41cc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_41cc94:
    // 0x41cc94: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x41cc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_41cc98:
    // 0x41cc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41cc9c:
    // 0x41cc9c: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x41cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_41cca0:
    // 0x41cca0: 0x40f809  jalr        $v0
label_41cca4:
    if (ctx->pc == 0x41CCA4u) {
        ctx->pc = 0x41CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCA0u;
        // 0x41cca4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CCA8u;
        goto label_41cca8;
    }
    ctx->pc = 0x41CCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CCA8u);
        ctx->pc = 0x41CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCA0u;
        // 0x41cca4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CCA0u, 0x41CCA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CCA8u;
label_41cca8:
    // 0x41cca8: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x41cca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_41ccac:
    // 0x41ccac: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41ccb0:
    // 0x41ccb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x41ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_41ccb4:
    // 0x41ccb4: 0x8c50021c  lw          $s0, 0x21C($v0)
    ctx->pc = 0x41ccb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_41ccb8:
    // 0x41ccb8: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_41ccbc:
    if (ctx->pc == 0x41CCBCu) {
        ctx->pc = 0x41CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCB8u;
        // 0x41ccbc: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CCC0u;
        goto label_41ccc0;
    }
    ctx->pc = 0x41CCB8u;
    {
        const bool branch_taken_0x41ccb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCB8u;
        // 0x41ccbc: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ccb8) {
            ctx->pc = 0x41CD24u;
            goto label_41cd24;
        }
    }
    ctx->pc = 0x41CCC0u;
label_41ccc0:
    // 0x41ccc0: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x41ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_41ccc4:
    // 0x41ccc4: 0x0  nop
    ctx->pc = 0x41ccc4u;
    // NOP
label_41ccc8:
    // 0x41ccc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41ccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41cccc:
    // 0x41cccc: 0x40f809  jalr        $v0
label_41ccd0:
    if (ctx->pc == 0x41CCD0u) {
        ctx->pc = 0x41CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCCCu;
        // 0x41ccd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CCD4u;
        goto label_41ccd4;
    }
    ctx->pc = 0x41CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CCD4u);
        ctx->pc = 0x41CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCCCu;
        // 0x41ccd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CCCCu, 0x41CCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CCD4u;
label_41ccd4:
    // 0x41ccd4: 0xc0f0b92  jal         func_3C2E48
label_41ccd8:
    if (ctx->pc == 0x41CCD8u) {
        ctx->pc = 0x41CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCD4u;
        // 0x41ccd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CCDCu;
        goto label_41ccdc;
    }
    ctx->pc = 0x41CCD4u;
    SET_GPR_U32(ctx, 31, 0x41CCDCu);
    ctx->pc = 0x41CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CCD4u;
    // 0x41ccd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x41CCD4u, 0x41CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CCDCu;
label_41ccdc:
    // 0x41ccdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_41cce0:
    if (ctx->pc == 0x41CCE0u) {
        ctx->pc = 0x41CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCDCu;
        // 0x41cce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CCE4u;
        goto label_41cce4;
    }
    ctx->pc = 0x41CCDCu;
    {
        const bool branch_taken_0x41ccdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCDCu;
        // 0x41cce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ccdc) {
            ctx->pc = 0x41CCECu;
            goto label_41ccec;
        }
    }
    ctx->pc = 0x41CCE4u;
label_41cce4:
    // 0x41cce4: 0x10000010  b           . + 4 + (0x10 << 2)
label_41cce8:
    if (ctx->pc == 0x41CCE8u) {
        ctx->pc = 0x41CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCE4u;
        // 0x41cce8: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CCECu;
        goto label_41ccec;
    }
    ctx->pc = 0x41CCE4u;
    {
        const bool branch_taken_0x41cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCE4u;
        // 0x41cce8: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cce4) {
            ctx->pc = 0x41CD28u;
            goto label_41cd28;
        }
    }
    ctx->pc = 0x41CCECu;
label_41ccec:
    // 0x41ccec: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x41ccecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_41ccf0:
    // 0x41ccf0: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x41ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_41ccf4:
    // 0x41ccf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41ccf8:
    // 0x41ccf8: 0x40f809  jalr        $v0
label_41ccfc:
    if (ctx->pc == 0x41CCFCu) {
        ctx->pc = 0x41CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCF8u;
        // 0x41ccfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CD00u;
        goto label_41cd00;
    }
    ctx->pc = 0x41CCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CD00u);
        ctx->pc = 0x41CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCF8u;
        // 0x41ccfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CCF8u, 0x41CD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CD00u;
label_41cd00:
    // 0x41cd00: 0xc0f0b92  jal         func_3C2E48
label_41cd04:
    if (ctx->pc == 0x41CD04u) {
        ctx->pc = 0x41CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD00u;
        // 0x41cd04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CD08u;
        goto label_41cd08;
    }
    ctx->pc = 0x41CD00u;
    SET_GPR_U32(ctx, 31, 0x41CD08u);
    ctx->pc = 0x41CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CD00u;
    // 0x41cd04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x41CD00u, 0x41CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CD08u;
label_41cd08:
    // 0x41cd08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_41cd0c:
    if (ctx->pc == 0x41CD0Cu) {
        ctx->pc = 0x41CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD08u;
        // 0x41cd0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CD10u;
        goto label_41cd10;
    }
    ctx->pc = 0x41CD08u;
    {
        const bool branch_taken_0x41cd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD08u;
        // 0x41cd0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cd08) {
            ctx->pc = 0x41CD18u;
            goto label_41cd18;
        }
    }
    ctx->pc = 0x41CD10u;
label_41cd10:
    // 0x41cd10: 0x10000005  b           . + 4 + (0x5 << 2)
label_41cd14:
    if (ctx->pc == 0x41CD14u) {
        ctx->pc = 0x41CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD10u;
        // 0x41cd14: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CD18u;
        goto label_41cd18;
    }
    ctx->pc = 0x41CD10u;
    {
        const bool branch_taken_0x41cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD10u;
        // 0x41cd14: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cd10) {
            ctx->pc = 0x41CD28u;
            goto label_41cd28;
        }
    }
    ctx->pc = 0x41CD18u;
label_41cd18:
    // 0x41cd18: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x41cd18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_41cd1c:
    // 0x41cd1c: 0x5600ffea  bnel        $s0, $zero, . + 4 + (-0x16 << 2)
label_41cd20:
    if (ctx->pc == 0x41CD20u) {
        ctx->pc = 0x41CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD1Cu;
        // 0x41cd20: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CD24u;
        goto label_41cd24;
    }
    ctx->pc = 0x41CD1Cu;
    {
        const bool branch_taken_0x41cd1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41cd1c) {
            ctx->pc = 0x41CD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CD1Cu;
            // 0x41cd20: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41ccc8;
        }
    }
    ctx->pc = 0x41CD24u;
label_41cd24:
    // 0x41cd24: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x41cd24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41cd28:
    // 0x41cd28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x41cd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41cd2c:
    // 0x41cd2c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x41cd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41cd30:
    // 0x41cd30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x41cd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41cd34:
    // 0x41cd34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41cd34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41cd38:
    // 0x41cd38: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x41cd38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41cd3c:
    // 0x41cd3c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x41cd3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41cd40:
    // 0x41cd40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41cd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41cd44:
    // 0x41cd44: 0x3e00008  jr          $ra
label_41cd48:
    if (ctx->pc == 0x41CD48u) {
        ctx->pc = 0x41CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD44u;
        // 0x41cd48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CD4Cu;
        goto label_41cd4c;
    }
    ctx->pc = 0x41CD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD44u;
        // 0x41cd48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CD4Cu;
label_41cd4c:
    // 0x41cd4c: 0x0  nop
    ctx->pc = 0x41cd4cu;
    // NOP
label_41cd50:
    // 0x41cd50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x41cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_41cd54:
    // 0x41cd54: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x41cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_41cd58:
    // 0x41cd58: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x41cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_41cd5c:
    // 0x41cd5c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x41cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_41cd60:
    // 0x41cd60: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x41cd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_41cd64:
    // 0x41cd64: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x41cd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_41cd68:
    // 0x41cd68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x41cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_41cd6c:
    // 0x41cd6c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x41cd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_41cd70:
    // 0x41cd70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41cd74:
    // 0x41cd74: 0xc106d02  jal         func_41B408
label_41cd78:
    if (ctx->pc == 0x41CD78u) {
        ctx->pc = 0x41CD7Cu;
        goto label_41cd7c;
    }
    ctx->pc = 0x41CD74u;
    SET_GPR_U32(ctx, 31, 0x41CD7Cu);
    ctx->pc = 0x41B408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B408u, 0x41CD74u, 0x41CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CD7Cu;
label_41cd7c:
    // 0x41cd7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41cd7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cd80:
    // 0x41cd80: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_41cd84:
    if (ctx->pc == 0x41CD84u) {
        ctx->pc = 0x41CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD80u;
        // 0x41cd84: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CD88u;
        goto label_41cd88;
    }
    ctx->pc = 0x41CD80u;
    {
        const bool branch_taken_0x41cd80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD80u;
        // 0x41cd84: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cd80) {
            ctx->pc = 0x41CD90u;
            goto label_41cd90;
        }
    }
    ctx->pc = 0x41CD88u;
label_41cd88:
    // 0x41cd88: 0x1000003a  b           . + 4 + (0x3A << 2)
label_41cd8c:
    if (ctx->pc == 0x41CD8Cu) {
        ctx->pc = 0x41CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD88u;
        // 0x41cd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CD90u;
        goto label_41cd90;
    }
    ctx->pc = 0x41CD88u;
    {
        const bool branch_taken_0x41cd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD88u;
        // 0x41cd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cd88) {
            ctx->pc = 0x41CE74u;
            goto label_41ce74;
        }
    }
    ctx->pc = 0x41CD90u;
label_41cd90:
    // 0x41cd90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41cd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41cd94:
    // 0x41cd94: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x41cd94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_41cd98:
    // 0x41cd98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41cd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41cd9c:
    // 0x41cd9c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41cda0:
    // 0x41cda0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x41cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_41cda4:
    // 0x41cda4: 0x40f809  jalr        $v0
label_41cda8:
    if (ctx->pc == 0x41CDA8u) {
        ctx->pc = 0x41CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDA4u;
        // 0x41cda8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CDACu;
        goto label_41cdac;
    }
    ctx->pc = 0x41CDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CDACu);
        ctx->pc = 0x41CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDA4u;
        // 0x41cda8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CDA4u, 0x41CDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CDACu;
label_41cdac:
    // 0x41cdac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_41cdb0:
    if (ctx->pc == 0x41CDB0u) {
        ctx->pc = 0x41CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDACu;
        // 0x41cdb0: 0x93a20023  lbu         $v0, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CDB4u;
        goto label_41cdb4;
    }
    ctx->pc = 0x41CDACu;
    {
        const bool branch_taken_0x41cdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDACu;
        // 0x41cdb0: 0x93a20023  lbu         $v0, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cdac) {
            ctx->pc = 0x41CDCCu;
            goto label_41cdcc;
        }
    }
    ctx->pc = 0x41CDB4u;
label_41cdb4:
    // 0x41cdb4: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x41cdb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_41cdb8:
    // 0x41cdb8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x41cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_41cdbc:
    // 0x41cdbc: 0x8fb3000c  lw          $s3, 0xC($sp)
    ctx->pc = 0x41cdbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_41cdc0:
    // 0x41cdc0: 0x8fb20010  lw          $s2, 0x10($sp)
    ctx->pc = 0x41cdc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_41cdc4:
    // 0x41cdc4: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x41cdc4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_41cdc8:
    // 0x41cdc8: 0x8fb40014  lw          $s4, 0x14($sp)
    ctx->pc = 0x41cdc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_41cdcc:
    // 0x41cdcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x41cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41cdd0:
    // 0x41cdd0: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_41cdd4:
    if (ctx->pc == 0x41CDD4u) {
        ctx->pc = 0x41CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDD0u;
        // 0x41cdd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CDD8u;
        goto label_41cdd8;
    }
    ctx->pc = 0x41CDD0u;
    {
        const bool branch_taken_0x41cdd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x41CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDD0u;
        // 0x41cdd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cdd0) {
            ctx->pc = 0x41CDE4u;
            goto label_41cde4;
        }
    }
    ctx->pc = 0x41CDD8u;
label_41cdd8:
    // 0x41cdd8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x41cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41cddc:
    // 0x41cddc: 0x52420009  beql        $s2, $v0, . + 4 + (0x9 << 2)
label_41cde0:
    if (ctx->pc == 0x41CDE0u) {
        ctx->pc = 0x41CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDDCu;
        // 0x41cde0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CDE4u;
        goto label_41cde4;
    }
    ctx->pc = 0x41CDDCu;
    {
        const bool branch_taken_0x41cddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x41cddc) {
            ctx->pc = 0x41CDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CDDCu;
            // 0x41cde0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CE04u;
            goto label_41ce04;
        }
    }
    ctx->pc = 0x41CDE4u;
label_41cde4:
    // 0x41cde4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41cde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41cde8:
    // 0x41cde8: 0xc10786a  jal         func_41E1A8
label_41cdec:
    if (ctx->pc == 0x41CDECu) {
        ctx->pc = 0x41CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDE8u;
        // 0x41cdec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CDF0u;
        goto label_41cdf0;
    }
    ctx->pc = 0x41CDE8u;
    SET_GPR_U32(ctx, 31, 0x41CDF0u);
    ctx->pc = 0x41CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CDE8u;
    // 0x41cdec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x41CDE8u, 0x41CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CDF0u;
label_41cdf0:
    // 0x41cdf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41cdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cdf4:
    // 0x41cdf4: 0xc10705c  jal         func_41C170
label_41cdf8:
    if (ctx->pc == 0x41CDF8u) {
        ctx->pc = 0x41CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDF4u;
        // 0x41cdf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CDFCu;
        goto label_41cdfc;
    }
    ctx->pc = 0x41CDF4u;
    SET_GPR_U32(ctx, 31, 0x41CDFCu);
    ctx->pc = 0x41CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CDF4u;
    // 0x41cdf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41CDF4u, 0x41CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CDFCu;
label_41cdfc:
    // 0x41cdfc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x41cdfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ce00:
    // 0x41ce00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41ce00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41ce04:
    // 0x41ce04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41ce04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41ce08:
    // 0x41ce08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41ce08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41ce0c:
    // 0x41ce0c: 0xc10746c  jal         func_41D1B0
label_41ce10:
    if (ctx->pc == 0x41CE10u) {
        ctx->pc = 0x41CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE0Cu;
        // 0x41ce10: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CE14u;
        goto label_41ce14;
    }
    ctx->pc = 0x41CE0Cu;
    SET_GPR_U32(ctx, 31, 0x41CE14u);
    ctx->pc = 0x41CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CE0Cu;
    // 0x41ce10: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x41CE0Cu, 0x41CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CE14u;
label_41ce14:
    // 0x41ce14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41ce14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ce18:
    // 0x41ce18: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_41ce1c:
    if (ctx->pc == 0x41CE1Cu) {
        ctx->pc = 0x41CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE18u;
        // 0x41ce1c: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CE20u;
        goto label_41ce20;
    }
    ctx->pc = 0x41CE18u;
    {
        const bool branch_taken_0x41ce18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE18u;
        // 0x41ce1c: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ce18) {
            ctx->pc = 0x41CE30u;
            goto label_41ce30;
        }
    }
    ctx->pc = 0x41CE20u;
label_41ce20:
    // 0x41ce20: 0xc10705c  jal         func_41C170
label_41ce24:
    if (ctx->pc == 0x41CE24u) {
        ctx->pc = 0x41CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE20u;
        // 0x41ce24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CE28u;
        goto label_41ce28;
    }
    ctx->pc = 0x41CE20u;
    SET_GPR_U32(ctx, 31, 0x41CE28u);
    ctx->pc = 0x41CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CE20u;
    // 0x41ce24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41CE20u, 0x41CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CE28u;
label_41ce28:
    // 0x41ce28: 0x10000012  b           . + 4 + (0x12 << 2)
label_41ce2c:
    if (ctx->pc == 0x41CE2Cu) {
        ctx->pc = 0x41CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE28u;
        // 0x41ce2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CE30u;
        goto label_41ce30;
    }
    ctx->pc = 0x41CE28u;
    {
        const bool branch_taken_0x41ce28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE28u;
        // 0x41ce2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ce28) {
            ctx->pc = 0x41CE74u;
            goto label_41ce74;
        }
    }
    ctx->pc = 0x41CE30u;
label_41ce30:
    // 0x41ce30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41ce30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ce34:
    // 0x41ce34: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x41ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_41ce38:
    // 0x41ce38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41ce38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ce3c:
    // 0x41ce3c: 0x40f809  jalr        $v0
label_41ce40:
    if (ctx->pc == 0x41CE40u) {
        ctx->pc = 0x41CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE3Cu;
        // 0x41ce40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CE44u;
        goto label_41ce44;
    }
    ctx->pc = 0x41CE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CE44u);
        ctx->pc = 0x41CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE3Cu;
        // 0x41ce40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CE3Cu, 0x41CE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CE44u;
label_41ce44:
    // 0x41ce44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41ce48:
    if (ctx->pc == 0x41CE48u) {
        ctx->pc = 0x41CE4Cu;
        goto label_41ce4c;
    }
    ctx->pc = 0x41CE44u;
    {
        const bool branch_taken_0x41ce44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ce44) {
            ctx->pc = 0x41CE68u;
            goto label_41ce68;
        }
    }
    ctx->pc = 0x41CE4Cu;
label_41ce4c:
    // 0x41ce4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x41ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41ce50:
    // 0x41ce50: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x41ce50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_41ce54:
    // 0x41ce54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_41ce58:
    if (ctx->pc == 0x41CE58u) {
        ctx->pc = 0x41CE5Cu;
        goto label_41ce5c;
    }
    ctx->pc = 0x41CE54u;
    {
        const bool branch_taken_0x41ce54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ce54) {
            ctx->pc = 0x41CE68u;
            goto label_41ce68;
        }
    }
    ctx->pc = 0x41CE5Cu;
label_41ce5c:
    // 0x41ce5c: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x41ce5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_41ce60:
    // 0x41ce60: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x41ce60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_41ce64:
    // 0x41ce64: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x41ce64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_41ce68:
    // 0x41ce68: 0xc10705c  jal         func_41C170
label_41ce6c:
    if (ctx->pc == 0x41CE6Cu) {
        ctx->pc = 0x41CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE68u;
        // 0x41ce6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CE70u;
        goto label_41ce70;
    }
    ctx->pc = 0x41CE68u;
    SET_GPR_U32(ctx, 31, 0x41CE70u);
    ctx->pc = 0x41CE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CE68u;
    // 0x41ce6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41CE68u, 0x41CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CE70u;
label_41ce70:
    // 0x41ce70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41ce70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ce74:
    // 0x41ce74: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x41ce74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_41ce78:
    // 0x41ce78: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x41ce78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_41ce7c:
    // 0x41ce7c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x41ce7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41ce80:
    // 0x41ce80: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x41ce80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41ce84:
    // 0x41ce84: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x41ce84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41ce88:
    // 0x41ce88: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x41ce88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41ce8c:
    // 0x41ce8c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x41ce8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41ce90:
    // 0x41ce90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41ce90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41ce94:
    // 0x41ce94: 0x3e00008  jr          $ra
label_41ce98:
    if (ctx->pc == 0x41CE98u) {
        ctx->pc = 0x41CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE94u;
        // 0x41ce98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CE9Cu;
        goto label_41ce9c;
    }
    ctx->pc = 0x41CE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE94u;
        // 0x41ce98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CE9Cu;
label_41ce9c:
    // 0x41ce9c: 0x0  nop
    ctx->pc = 0x41ce9cu;
    // NOP
    ctx->pc = 0x41cea0u;
}
