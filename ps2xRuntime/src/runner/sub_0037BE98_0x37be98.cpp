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

// Function: sub_0037BE98
// Address: 0x37be98 - 0x37c0a0
void sub_0037BE98_0x37be98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BE98_0x37be98");
#endif

    switch (ctx->pc) {
        case 0x37be98u: goto label_37be98;
        case 0x37be9cu: goto label_37be9c;
        case 0x37bea0u: goto label_37bea0;
        case 0x37bea4u: goto label_37bea4;
        case 0x37bea8u: goto label_37bea8;
        case 0x37beacu: goto label_37beac;
        case 0x37beb0u: goto label_37beb0;
        case 0x37beb4u: goto label_37beb4;
        case 0x37beb8u: goto label_37beb8;
        case 0x37bebcu: goto label_37bebc;
        case 0x37bec0u: goto label_37bec0;
        case 0x37bec4u: goto label_37bec4;
        case 0x37bec8u: goto label_37bec8;
        case 0x37beccu: goto label_37becc;
        case 0x37bed0u: goto label_37bed0;
        case 0x37bed4u: goto label_37bed4;
        case 0x37bed8u: goto label_37bed8;
        case 0x37bedcu: goto label_37bedc;
        case 0x37bee0u: goto label_37bee0;
        case 0x37bee4u: goto label_37bee4;
        case 0x37bee8u: goto label_37bee8;
        case 0x37beecu: goto label_37beec;
        case 0x37bef0u: goto label_37bef0;
        case 0x37bef4u: goto label_37bef4;
        case 0x37bef8u: goto label_37bef8;
        case 0x37befcu: goto label_37befc;
        case 0x37bf00u: goto label_37bf00;
        case 0x37bf04u: goto label_37bf04;
        case 0x37bf08u: goto label_37bf08;
        case 0x37bf0cu: goto label_37bf0c;
        case 0x37bf10u: goto label_37bf10;
        case 0x37bf14u: goto label_37bf14;
        case 0x37bf18u: goto label_37bf18;
        case 0x37bf1cu: goto label_37bf1c;
        case 0x37bf20u: goto label_37bf20;
        case 0x37bf24u: goto label_37bf24;
        case 0x37bf28u: goto label_37bf28;
        case 0x37bf2cu: goto label_37bf2c;
        case 0x37bf30u: goto label_37bf30;
        case 0x37bf34u: goto label_37bf34;
        case 0x37bf38u: goto label_37bf38;
        case 0x37bf3cu: goto label_37bf3c;
        case 0x37bf40u: goto label_37bf40;
        case 0x37bf44u: goto label_37bf44;
        case 0x37bf48u: goto label_37bf48;
        case 0x37bf4cu: goto label_37bf4c;
        case 0x37bf50u: goto label_37bf50;
        case 0x37bf54u: goto label_37bf54;
        case 0x37bf58u: goto label_37bf58;
        case 0x37bf5cu: goto label_37bf5c;
        case 0x37bf60u: goto label_37bf60;
        case 0x37bf64u: goto label_37bf64;
        case 0x37bf68u: goto label_37bf68;
        case 0x37bf6cu: goto label_37bf6c;
        case 0x37bf70u: goto label_37bf70;
        case 0x37bf74u: goto label_37bf74;
        case 0x37bf78u: goto label_37bf78;
        case 0x37bf7cu: goto label_37bf7c;
        case 0x37bf80u: goto label_37bf80;
        case 0x37bf84u: goto label_37bf84;
        case 0x37bf88u: goto label_37bf88;
        case 0x37bf8cu: goto label_37bf8c;
        case 0x37bf90u: goto label_37bf90;
        case 0x37bf94u: goto label_37bf94;
        case 0x37bf98u: goto label_37bf98;
        case 0x37bf9cu: goto label_37bf9c;
        case 0x37bfa0u: goto label_37bfa0;
        case 0x37bfa4u: goto label_37bfa4;
        case 0x37bfa8u: goto label_37bfa8;
        case 0x37bfacu: goto label_37bfac;
        case 0x37bfb0u: goto label_37bfb0;
        case 0x37bfb4u: goto label_37bfb4;
        case 0x37bfb8u: goto label_37bfb8;
        case 0x37bfbcu: goto label_37bfbc;
        case 0x37bfc0u: goto label_37bfc0;
        case 0x37bfc4u: goto label_37bfc4;
        case 0x37bfc8u: goto label_37bfc8;
        case 0x37bfccu: goto label_37bfcc;
        case 0x37bfd0u: goto label_37bfd0;
        case 0x37bfd4u: goto label_37bfd4;
        case 0x37bfd8u: goto label_37bfd8;
        case 0x37bfdcu: goto label_37bfdc;
        case 0x37bfe0u: goto label_37bfe0;
        case 0x37bfe4u: goto label_37bfe4;
        case 0x37bfe8u: goto label_37bfe8;
        case 0x37bfecu: goto label_37bfec;
        case 0x37bff0u: goto label_37bff0;
        case 0x37bff4u: goto label_37bff4;
        case 0x37bff8u: goto label_37bff8;
        case 0x37bffcu: goto label_37bffc;
        case 0x37c000u: goto label_37c000;
        case 0x37c004u: goto label_37c004;
        case 0x37c008u: goto label_37c008;
        case 0x37c00cu: goto label_37c00c;
        case 0x37c010u: goto label_37c010;
        case 0x37c014u: goto label_37c014;
        case 0x37c018u: goto label_37c018;
        case 0x37c01cu: goto label_37c01c;
        case 0x37c020u: goto label_37c020;
        case 0x37c024u: goto label_37c024;
        case 0x37c028u: goto label_37c028;
        case 0x37c02cu: goto label_37c02c;
        case 0x37c030u: goto label_37c030;
        case 0x37c034u: goto label_37c034;
        case 0x37c038u: goto label_37c038;
        case 0x37c03cu: goto label_37c03c;
        case 0x37c040u: goto label_37c040;
        case 0x37c044u: goto label_37c044;
        case 0x37c048u: goto label_37c048;
        case 0x37c04cu: goto label_37c04c;
        case 0x37c050u: goto label_37c050;
        case 0x37c054u: goto label_37c054;
        case 0x37c058u: goto label_37c058;
        case 0x37c05cu: goto label_37c05c;
        case 0x37c060u: goto label_37c060;
        case 0x37c064u: goto label_37c064;
        case 0x37c068u: goto label_37c068;
        case 0x37c06cu: goto label_37c06c;
        case 0x37c070u: goto label_37c070;
        case 0x37c074u: goto label_37c074;
        case 0x37c078u: goto label_37c078;
        case 0x37c07cu: goto label_37c07c;
        case 0x37c080u: goto label_37c080;
        case 0x37c084u: goto label_37c084;
        case 0x37c088u: goto label_37c088;
        case 0x37c08cu: goto label_37c08c;
        case 0x37c090u: goto label_37c090;
        case 0x37c094u: goto label_37c094;
        case 0x37c098u: goto label_37c098;
        case 0x37c09cu: goto label_37c09c;
        default: break;
    }

    ctx->pc = 0x37be98u;

label_37be98:
    // 0x37be98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x37be98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_37be9c:
    // 0x37be9c: 0x8f82bcf4  lw          $v0, -0x430C($gp)
    ctx->pc = 0x37be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950132)));
label_37bea0:
    // 0x37bea0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x37bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_37bea4:
    // 0x37bea4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x37bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_37bea8:
    // 0x37bea8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x37bea8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37beac:
    // 0x37beac: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37beacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_37beb0:
    // 0x37beb0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x37beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_37beb4:
    // 0x37beb4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37beb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_37beb8:
    // 0x37beb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37bebc:
    // 0x37bebc: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_37bec0:
    if (ctx->pc == 0x37BEC0u) {
        ctx->pc = 0x37BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEBCu;
        // 0x37bec0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BEC4u;
        goto label_37bec4;
    }
    ctx->pc = 0x37BEBCu;
    {
        const bool branch_taken_0x37bebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEBCu;
        // 0x37bec0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bebc) {
            ctx->pc = 0x37C068u;
            goto label_37c068;
        }
    }
    ctx->pc = 0x37BEC4u;
label_37bec4:
    // 0x37bec4: 0xc0de954  jal         func_37A550
label_37bec8:
    if (ctx->pc == 0x37BEC8u) {
        ctx->pc = 0x37BECCu;
        goto label_37becc;
    }
    ctx->pc = 0x37BEC4u;
    SET_GPR_U32(ctx, 31, 0x37BECCu);
    ctx->pc = 0x37A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A550u, 0x37BEC4u, 0x37BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BECCu;
label_37becc:
    // 0x37becc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_37bed0:
    if (ctx->pc == 0x37BED0u) {
        ctx->pc = 0x37BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BECCu;
        // 0x37bed0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BED4u;
        goto label_37bed4;
    }
    ctx->pc = 0x37BECCu;
    {
        const bool branch_taken_0x37becc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BECCu;
        // 0x37bed0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37becc) {
            ctx->pc = 0x37BEF0u;
            goto label_37bef0;
        }
    }
    ctx->pc = 0x37BED4u;
label_37bed4:
    // 0x37bed4: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37bed8:
    // 0x37bed8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37bedc:
    // 0x37bedc: 0xc1035f6  jal         func_40D7D8
label_37bee0:
    if (ctx->pc == 0x37BEE0u) {
        ctx->pc = 0x37BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEDCu;
        // 0x37bee0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BEE4u;
        goto label_37bee4;
    }
    ctx->pc = 0x37BEDCu;
    SET_GPR_U32(ctx, 31, 0x37BEE4u);
    ctx->pc = 0x37BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEDCu;
    // 0x37bee0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37BEDCu, 0x37BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BEE4u;
label_37bee4:
    // 0x37bee4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37bee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37bee8:
    // 0x37bee8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_37beec:
    if (ctx->pc == 0x37BEECu) {
        ctx->pc = 0x37BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEE8u;
        // 0x37beec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BEF0u;
        goto label_37bef0;
    }
    ctx->pc = 0x37BEE8u;
    {
        const bool branch_taken_0x37bee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEE8u;
        // 0x37beec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bee8) {
            ctx->pc = 0x37C058u;
            goto label_37c058;
        }
    }
    ctx->pc = 0x37BEF0u;
label_37bef0:
    // 0x37bef0: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x37bef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37bef4:
    // 0x37bef4: 0x2442c490  addiu       $v0, $v0, -0x3B70
    ctx->pc = 0x37bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952080));
label_37bef8:
    // 0x37bef8: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x37bef8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
label_37befc:
    // 0x37befc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37befcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37bf00:
    // 0x37bf00: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x37bf00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_37bf04:
    // 0x37bf04: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x37bf04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_37bf08:
    // 0x37bf08: 0xc0de9e2  jal         func_37A788
label_37bf0c:
    if (ctx->pc == 0x37BF0Cu) {
        ctx->pc = 0x37BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF08u;
        // 0x37bf0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF10u;
        goto label_37bf10;
    }
    ctx->pc = 0x37BF08u;
    SET_GPR_U32(ctx, 31, 0x37BF10u);
    ctx->pc = 0x37BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF08u;
    // 0x37bf0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A788u, 0x37BF08u, 0x37BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF10u;
label_37bf10:
    // 0x37bf10: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_37bf14:
    if (ctx->pc == 0x37BF14u) {
        ctx->pc = 0x37BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF10u;
        // 0x37bf14: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF18u;
        goto label_37bf18;
    }
    ctx->pc = 0x37BF10u;
    {
        const bool branch_taken_0x37bf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF10u;
        // 0x37bf14: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf10) {
            ctx->pc = 0x37C020u;
            goto label_37c020;
        }
    }
    ctx->pc = 0x37BF18u;
label_37bf18:
    // 0x37bf18: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x37bf18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_37bf1c:
    // 0x37bf1c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37bf1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_37bf20:
    // 0x37bf20: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_37bf24:
    if (ctx->pc == 0x37BF24u) {
        ctx->pc = 0x37BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF20u;
        // 0x37bf24: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF28u;
        goto label_37bf28;
    }
    ctx->pc = 0x37BF20u;
    {
        const bool branch_taken_0x37bf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF20u;
        // 0x37bf24: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf20) {
            ctx->pc = 0x37C018u;
            goto label_37c018;
        }
    }
    ctx->pc = 0x37BF28u;
label_37bf28:
    // 0x37bf28: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x37bf28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_37bf2c:
    // 0x37bf2c: 0x2662000f  addiu       $v0, $s3, 0xF
    ctx->pc = 0x37bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_37bf30:
    // 0x37bf30: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x37bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_37bf34:
    // 0x37bf34: 0x2692e880  addiu       $s2, $s4, -0x1780
    ctx->pc = 0x37bf34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_37bf38:
    // 0x37bf38: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x37bf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_37bf3c:
    // 0x37bf3c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x37bf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_37bf40:
    // 0x37bf40: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x37bf40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_37bf44:
    // 0x37bf44: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_37bf48:
    if (ctx->pc == 0x37BF48u) {
        ctx->pc = 0x37BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF44u;
        // 0x37bf48: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF4Cu;
        goto label_37bf4c;
    }
    ctx->pc = 0x37BF44u;
    {
        const bool branch_taken_0x37bf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF44u;
        // 0x37bf48: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf44) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BF4Cu;
label_37bf4c:
    // 0x37bf4c: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_37bf50:
    if (ctx->pc == 0x37BF50u) {
        ctx->pc = 0x37BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF4Cu;
        // 0x37bf50: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF54u;
        goto label_37bf54;
    }
    ctx->pc = 0x37BF4Cu;
    {
        const bool branch_taken_0x37bf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bf4c) {
            ctx->pc = 0x37BF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BF4Cu;
            // 0x37bf50: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BFC4u;
            goto label_37bfc4;
        }
    }
    ctx->pc = 0x37BF54u;
label_37bf54:
    // 0x37bf54: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x37bf54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_37bf58:
    // 0x37bf58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_37bf5c:
    if (ctx->pc == 0x37BF5Cu) {
        ctx->pc = 0x37BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF58u;
        // 0x37bf5c: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF60u;
        goto label_37bf60;
    }
    ctx->pc = 0x37BF58u;
    {
        const bool branch_taken_0x37bf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF58u;
        // 0x37bf5c: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf58) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BF60u;
label_37bf60:
    // 0x37bf60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_37bf64:
    if (ctx->pc == 0x37BF64u) {
        ctx->pc = 0x37BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF60u;
        // 0x37bf64: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF68u;
        goto label_37bf68;
    }
    ctx->pc = 0x37BF60u;
    {
        const bool branch_taken_0x37bf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF60u;
        // 0x37bf64: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf60) {
            ctx->pc = 0x37BF88u;
            goto label_37bf88;
        }
    }
    ctx->pc = 0x37BF68u;
label_37bf68:
    // 0x37bf68: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_37bf6c:
    if (ctx->pc == 0x37BF6Cu) {
        ctx->pc = 0x37BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF68u;
        // 0x37bf6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF70u;
        goto label_37bf70;
    }
    ctx->pc = 0x37BF68u;
    {
        const bool branch_taken_0x37bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37bf68) {
            ctx->pc = 0x37BF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BF68u;
            // 0x37bf6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BFC4u;
            goto label_37bfc4;
        }
    }
    ctx->pc = 0x37BF70u;
label_37bf70:
    // 0x37bf70: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37bf74:
    // 0x37bf74: 0x40f809  jalr        $v0
label_37bf78:
    if (ctx->pc == 0x37BF78u) {
        ctx->pc = 0x37BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF74u;
        // 0x37bf78: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF7Cu;
        goto label_37bf7c;
    }
    ctx->pc = 0x37BF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37BF7Cu);
        ctx->pc = 0x37BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF74u;
        // 0x37bf78: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BF74u, 0x37BF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37BF7Cu;
label_37bf7c:
    // 0x37bf7c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x37bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_37bf80:
    // 0x37bf80: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x37bf80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_37bf84:
    // 0x37bf84: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x37bf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37bf88:
    // 0x37bf88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x37bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37bf8c:
    // 0x37bf8c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37bf90:
    // 0x37bf90: 0x40f809  jalr        $v0
label_37bf94:
    if (ctx->pc == 0x37BF94u) {
        ctx->pc = 0x37BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF90u;
        // 0x37bf94: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BF98u;
        goto label_37bf98;
    }
    ctx->pc = 0x37BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37BF98u);
        ctx->pc = 0x37BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF90u;
        // 0x37bf94: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BF90u, 0x37BF98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37BF98u;
label_37bf98:
    // 0x37bf98: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x37bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_37bf9c:
    // 0x37bf9c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x37bf9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_37bfa0:
    // 0x37bfa0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x37bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37bfa4:
    // 0x37bfa4: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37bfa8:
    // 0x37bfa8: 0x40f809  jalr        $v0
label_37bfac:
    if (ctx->pc == 0x37BFACu) {
        ctx->pc = 0x37BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFA8u;
        // 0x37bfac: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BFB0u;
        goto label_37bfb0;
    }
    ctx->pc = 0x37BFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37BFB0u);
        ctx->pc = 0x37BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFA8u;
        // 0x37bfac: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BFA8u, 0x37BFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37BFB0u;
label_37bfb0:
    // 0x37bfb0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x37bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_37bfb4:
    // 0x37bfb4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x37bfb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_37bfb8:
    // 0x37bfb8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_37bfbc:
    if (ctx->pc == 0x37BFBCu) {
        ctx->pc = 0x37BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFB8u;
        // 0x37bfbc: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BFC0u;
        goto label_37bfc0;
    }
    ctx->pc = 0x37BFB8u;
    {
        const bool branch_taken_0x37bfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFB8u;
        // 0x37bfbc: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bfb8) {
            ctx->pc = 0x37C018u;
            goto label_37c018;
        }
    }
    ctx->pc = 0x37BFC0u;
label_37bfc0:
    // 0x37bfc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x37bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37bfc4:
    // 0x37bfc4: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37bfc8:
    // 0x37bfc8: 0x40f809  jalr        $v0
label_37bfcc:
    if (ctx->pc == 0x37BFCCu) {
        ctx->pc = 0x37BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFC8u;
        // 0x37bfcc: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BFD0u;
        goto label_37bfd0;
    }
    ctx->pc = 0x37BFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37BFD0u);
        ctx->pc = 0x37BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFC8u;
        // 0x37bfcc: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BFC8u, 0x37BFD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37BFD0u;
label_37bfd0:
    // 0x37bfd0: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x37bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_37bfd4:
    // 0x37bfd4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x37bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_37bfd8:
    // 0x37bfd8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37bfdc:
    // 0x37bfdc: 0x40f809  jalr        $v0
label_37bfe0:
    if (ctx->pc == 0x37BFE0u) {
        ctx->pc = 0x37BFE4u;
        goto label_37bfe4;
    }
    ctx->pc = 0x37BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37BFE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BFDCu, 0x37BFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37BFE4u;
label_37bfe4:
    // 0x37bfe4: 0x8e04fff8  lw          $a0, -0x8($s0)
    ctx->pc = 0x37bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
label_37bfe8:
    // 0x37bfe8: 0xae00fffc  sw          $zero, -0x4($s0)
    ctx->pc = 0x37bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
label_37bfec:
    // 0x37bfec: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37bff0:
    // 0x37bff0: 0x40f809  jalr        $v0
label_37bff4:
    if (ctx->pc == 0x37BFF4u) {
        ctx->pc = 0x37BFF8u;
        goto label_37bff8;
    }
    ctx->pc = 0x37BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37BFF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BFF0u, 0x37BFF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37BFF8u;
label_37bff8:
    // 0x37bff8: 0xae00fff8  sw          $zero, -0x8($s0)
    ctx->pc = 0x37bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
label_37bffc:
    // 0x37bffc: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37c000:
    // 0x37c000: 0x40f809  jalr        $v0
label_37c004:
    if (ctx->pc == 0x37C004u) {
        ctx->pc = 0x37C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C000u;
        // 0x37c004: 0x8e04fff4  lw          $a0, -0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C008u;
        goto label_37c008;
    }
    ctx->pc = 0x37C000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37C008u);
        ctx->pc = 0x37C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C000u;
        // 0x37c004: 0x8e04fff4  lw          $a0, -0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C000u, 0x37C008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C008u;
label_37c008:
    // 0x37c008: 0xae00fff4  sw          $zero, -0xC($s0)
    ctx->pc = 0x37c008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 0));
label_37c00c:
    // 0x37c00c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x37c00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_37c010:
    // 0x37c010: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
label_37c014:
    if (ctx->pc == 0x37C014u) {
        ctx->pc = 0x37C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C010u;
        // 0x37c014: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C018u;
        goto label_37c018;
    }
    ctx->pc = 0x37C010u;
    {
        const bool branch_taken_0x37c010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C010u;
        // 0x37c014: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c010) {
            ctx->pc = 0x37BFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bfc0;
        }
    }
    ctx->pc = 0x37C018u;
label_37c018:
    // 0x37c018: 0x10000007  b           . + 4 + (0x7 << 2)
label_37c01c:
    if (ctx->pc == 0x37C01Cu) {
        ctx->pc = 0x37C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C018u;
        // 0x37c01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C020u;
        goto label_37c020;
    }
    ctx->pc = 0x37C018u;
    {
        const bool branch_taken_0x37c018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C018u;
        // 0x37c01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c018) {
            ctx->pc = 0x37C038u;
            goto label_37c038;
        }
    }
    ctx->pc = 0x37C020u;
label_37c020:
    // 0x37c020: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37c020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_37c024:
    // 0x37c024: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x37c024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_37c028:
    // 0x37c028: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x37c028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_37c02c:
    // 0x37c02c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_37c030:
    if (ctx->pc == 0x37C030u) {
        ctx->pc = 0x37C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C02Cu;
        // 0x37c030: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C034u;
        goto label_37c034;
    }
    ctx->pc = 0x37C02Cu;
    {
        const bool branch_taken_0x37c02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C02Cu;
        // 0x37c030: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c02c) {
            ctx->pc = 0x37BF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bf08;
        }
    }
    ctx->pc = 0x37C034u;
label_37c034:
    // 0x37c034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c038:
    // 0x37c038: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_37c03c:
    if (ctx->pc == 0x37C03Cu) {
        ctx->pc = 0x37C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C038u;
        // 0x37c03c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C040u;
        goto label_37c040;
    }
    ctx->pc = 0x37C038u;
    {
        const bool branch_taken_0x37c038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C038u;
        // 0x37c03c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c038) {
            ctx->pc = 0x37C068u;
            goto label_37c068;
        }
    }
    ctx->pc = 0x37C040u;
label_37c040:
    // 0x37c040: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37c040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37c044:
    // 0x37c044: 0xc1035f6  jal         func_40D7D8
label_37c048:
    if (ctx->pc == 0x37C048u) {
        ctx->pc = 0x37C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C044u;
        // 0x37c048: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C04Cu;
        goto label_37c04c;
    }
    ctx->pc = 0x37C044u;
    SET_GPR_U32(ctx, 31, 0x37C04Cu);
    ctx->pc = 0x37C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C044u;
    // 0x37c048: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37C044u, 0x37C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C04Cu;
label_37c04c:
    // 0x37c04c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x37c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_37c050:
    // 0x37c050: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37c050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_37c054:
    // 0x37c054: 0x0  nop
    ctx->pc = 0x37c054u;
    // NOP
label_37c058:
    // 0x37c058: 0xc103628  jal         func_40D8A0
label_37c05c:
    if (ctx->pc == 0x37C05Cu) {
        ctx->pc = 0x37C060u;
        goto label_37c060;
    }
    ctx->pc = 0x37C058u;
    SET_GPR_U32(ctx, 31, 0x37C060u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37C058u, 0x37C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C060u;
label_37c060:
    // 0x37c060: 0x10000005  b           . + 4 + (0x5 << 2)
label_37c064:
    if (ctx->pc == 0x37C064u) {
        ctx->pc = 0x37C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C060u;
        // 0x37c064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C068u;
        goto label_37c068;
    }
    ctx->pc = 0x37C060u;
    {
        const bool branch_taken_0x37c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C060u;
        // 0x37c064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c060) {
            ctx->pc = 0x37C078u;
            goto label_37c078;
        }
    }
    ctx->pc = 0x37C068u;
label_37c068:
    // 0x37c068: 0x8f83bcf4  lw          $v1, -0x430C($gp)
    ctx->pc = 0x37c068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950132)));
label_37c06c:
    // 0x37c06c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x37c06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37c070:
    // 0x37c070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37c074:
    // 0x37c074: 0xaf83bcf4  sw          $v1, -0x430C($gp)
    ctx->pc = 0x37c074u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950132), GPR_U32(ctx, 3));
label_37c078:
    // 0x37c078: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x37c078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37c07c:
    // 0x37c07c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x37c07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37c080:
    // 0x37c080: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x37c080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37c084:
    // 0x37c084: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37c084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37c088:
    // 0x37c088: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37c088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37c08c:
    // 0x37c08c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x37c08cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37c090:
    // 0x37c090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37c090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37c094:
    // 0x37c094: 0x3e00008  jr          $ra
label_37c098:
    if (ctx->pc == 0x37C098u) {
        ctx->pc = 0x37C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C094u;
        // 0x37c098: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37C09Cu;
        goto label_37c09c;
    }
    ctx->pc = 0x37C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C094u;
        // 0x37c098: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C09Cu;
label_37c09c:
    // 0x37c09c: 0x0  nop
    ctx->pc = 0x37c09cu;
    // NOP
    ctx->pc = 0x37c0a0u;
}
