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

// Function: sub_004AFEF0
// Address: 0x4afef0 - 0x4b04a8
void sub_004AFEF0_0x4afef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFEF0_0x4afef0");
#endif

    switch (ctx->pc) {
        case 0x4aff20u: goto label_4aff20;
        case 0x4b000cu: goto label_4b000c;
        case 0x4b0088u: goto label_4b0088;
        case 0x4b00d8u: goto label_4b00d8;
        case 0x4b00f0u: goto label_4b00f0;
        case 0x4b0108u: goto label_4b0108;
        case 0x4b0144u: goto label_4b0144;
        case 0x4b01e8u: goto label_4b01e8;
        case 0x4b0210u: goto label_4b0210;
        case 0x4b0268u: goto label_4b0268;
        case 0x4b0278u: goto label_4b0278;
        case 0x4b02fcu: goto label_4b02fc;
        case 0x4b0304u: goto label_4b0304;
        case 0x4b0328u: goto label_4b0328;
        case 0x4b0330u: goto label_4b0330;
        case 0x4b0370u: goto label_4b0370;
        case 0x4b03dcu: goto label_4b03dc;
        case 0x4b03e4u: goto label_4b03e4;
        case 0x4b0408u: goto label_4b0408;
        case 0x4b0410u: goto label_4b0410;
        case 0x4b0448u: goto label_4b0448;
        case 0x4b0458u: goto label_4b0458;
        case 0x4b0468u: goto label_4b0468;
        case 0x4b0478u: goto label_4b0478;
        case 0x4b0488u: goto label_4b0488;
        case 0x4b0490u: goto label_4b0490;
        case 0x4b0498u: goto label_4b0498;
        default: break;
    }

    ctx->pc = 0x4afef0u;

    // 0x4afef0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4afef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afef4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x4afef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x4afef8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4afef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4afefc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFEFCu;
        // 0x4aff00: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFF04u;
    // 0x4aff04: 0x0  nop
    ctx->pc = 0x4aff04u;
    // NOP
    // 0x4aff08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aff08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aff0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4aff10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aff10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aff14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aff14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aff18: 0xc12bd64  jal         func_4AF590
    ctx->pc = 0x4AFF18u;
    SET_GPR_U32(ctx, 31, 0x4AFF20u);
    ctx->pc = 0x4AFF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFF18u;
    // 0x4aff1c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF590u, 0x4AFF18u, 0x4AFF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFF20u;
label_4aff20:
    // 0x4aff20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aff20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aff24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aff24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aff28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4aff28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aff2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF2Cu;
        // 0x4aff30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFF34u;
    // 0x4aff34: 0x0  nop
    ctx->pc = 0x4aff34u;
    // NOP
    // 0x4aff38: 0x8c850f5c  lw          $a1, 0xF5C($a0)
    ctx->pc = 0x4aff38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3932)));
    // 0x4aff3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4aff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aff40: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4aff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4aff44: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4AFF44u;
    {
        const bool branch_taken_0x4aff44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AFF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF44u;
        // 0x4aff48: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff44) {
            ctx->pc = 0x4AFFB8u;
            goto label_4affb8;
        }
    }
    ctx->pc = 0x4AFF4Cu;
    // 0x4aff4c: 0x8c870f4c  lw          $a3, 0xF4C($a0)
    ctx->pc = 0x4aff4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3916)));
    // 0x4aff50: 0x50e00019  beql        $a3, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x4AFF50u;
    {
        const bool branch_taken_0x4aff50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aff50) {
            ctx->pc = 0x4AFF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFF50u;
            // 0x4aff54: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFFB8u;
            goto label_4affb8;
        }
    }
    ctx->pc = 0x4AFF58u;
    // 0x4aff58: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AFF58u;
    {
        const bool branch_taken_0x4aff58 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4AFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF58u;
        // 0x4aff5c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff58) {
            ctx->pc = 0x4AFF70u;
            goto label_4aff70;
        }
    }
    ctx->pc = 0x4AFF60u;
    // 0x4aff60: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4aff60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4aff64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4aff64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4aff68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AFF68u;
    {
        const bool branch_taken_0x4aff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aff68) {
            ctx->pc = 0x4AFF84u;
            goto label_4aff84;
        }
    }
    ctx->pc = 0x4AFF70u;
label_4aff70:
    // 0x4aff70: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4aff70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4aff74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4aff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4aff78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4aff78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4aff7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4aff7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4aff80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4aff80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4aff84:
    // 0x4aff84: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AFF84u;
    {
        const bool branch_taken_0x4aff84 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x4AFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF84u;
        // 0x4aff88: 0x71842  srl         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff84) {
            ctx->pc = 0x4AFF9Cu;
            goto label_4aff9c;
        }
    }
    ctx->pc = 0x4AFF8Cu;
    // 0x4aff8c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4aff8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4aff90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4aff90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4aff94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AFF94u;
    {
        const bool branch_taken_0x4aff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aff94) {
            ctx->pc = 0x4AFFB0u;
            goto label_4affb0;
        }
    }
    ctx->pc = 0x4AFF9Cu;
label_4aff9c:
    // 0x4aff9c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x4aff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4affa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4affa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4affa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4affa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4affa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4affa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4affac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4affacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4affb0:
    // 0x4affb0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4affb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4affb4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x4affb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_4affb8:
    // 0x4affb8: 0x8c820f54  lw          $v0, 0xF54($a0)
    ctx->pc = 0x4affb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3924)));
    // 0x4affbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4affbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4affc0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x4affc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4affc4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AFFC4u;
    {
        const bool branch_taken_0x4affc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFFC4u;
        // 0x4affc8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4affc4) {
            ctx->pc = 0x4AFFD4u;
            goto label_4affd4;
        }
    }
    ctx->pc = 0x4AFFCCu;
    // 0x4affcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFFCCu;
    {
        const bool branch_taken_0x4affcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFFCCu;
        // 0x4affd0: 0x24820f64  addiu       $v0, $a0, 0xF64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3940));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4affcc) {
            ctx->pc = 0x4AFFE0u;
            goto label_4affe0;
        }
    }
    ctx->pc = 0x4AFFD4u;
label_4affd4:
    // 0x4affd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4affd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4affd8: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFFD8u;
    {
        const bool branch_taken_0x4affd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFFD8u;
        // 0x4affdc: 0x24820fe4  addiu       $v0, $a0, 0xFE4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4068));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4affd8) {
            ctx->pc = 0x4AFFE4u;
            goto label_4affe4;
        }
    }
    ctx->pc = 0x4AFFE0u;
label_4affe0:
    // 0x4affe0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4affe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4affe4:
    // 0x4affe4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFFE4u;
        // 0x4affe8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFFECu;
    // 0x4affec: 0x0  nop
    ctx->pc = 0x4affecu;
    // NOP
    // 0x4afff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4afff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4afff4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4afff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4afff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4afffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0000: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x4b0000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x4b0004: 0xc12d188  jal         func_4B4620
    ctx->pc = 0x4B0004u;
    SET_GPR_U32(ctx, 31, 0x4B000Cu);
    ctx->pc = 0x4B0008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0004u;
    // 0x4b0008: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4620u, 0x4B0004u, 0x4B000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B000Cu;
label_4b000c:
    // 0x4b000c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b000cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0014: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b0014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0018: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0018u;
        // 0x4b001c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0020u;
    // 0x4b0020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b0020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b0024: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b0024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4b0028: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4b0028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4b002c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4b002cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0030: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4b0030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4b0034: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b0034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0038: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x4B0038u;
    {
        const bool branch_taken_0x4b0038 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0038u;
        // 0x4b003c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0038) {
            ctx->pc = 0x4B00FCu;
            goto label_4b00fc;
        }
    }
    ctx->pc = 0x4B0040u;
    // 0x4b0040: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4b0040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b0044: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x4b0044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x4b0048: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b0048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b004c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4b004cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x4b0050: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4b0050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4b0054: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4b0054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x4b0058: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x4b0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4b005c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x4b005cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x4b0060: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x4b0060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x4b0064: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x4b0064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x4b0068: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x4b0068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4b006c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x4b006cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x4b0070: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4b0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b0074: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B0074u;
    {
        const bool branch_taken_0x4b0074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4b0074) {
            ctx->pc = 0x4B0078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0074u;
            // 0x4b0078: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0090u;
            goto label_4b0090;
        }
    }
    ctx->pc = 0x4B007Cu;
    // 0x4b007c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4b007cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b0080: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x4B0080u;
    SET_GPR_U32(ctx, 31, 0x4B0088u);
    ctx->pc = 0x4B0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0080u;
    // 0x4b0084: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4B0080u, 0x4B0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0088u;
label_4b0088:
    // 0x4b0088: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4b0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4b008c: 0x0  nop
    ctx->pc = 0x4b008cu;
    // NOP
label_4b0090:
    // 0x4b0090: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4B0090u;
    {
        const bool branch_taken_0x4b0090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0090) {
            ctx->pc = 0x4B0094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0090u;
            // 0x4b0094: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B00C4u;
            goto label_4b00c4;
        }
    }
    ctx->pc = 0x4B0098u;
    // 0x4b0098: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x4b0098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b009c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x4b009cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b00a0: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x4b00a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4b00a4: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x4b00a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4b00a8: 0xb24301eb  sdl         $v1, 0x1EB($s2)
    ctx->pc = 0x4b00a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 491); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b00ac: 0xb64301e4  sdr         $v1, 0x1E4($s2)
    ctx->pc = 0x4b00acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 484); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b00b0: 0xb24401f3  sdl         $a0, 0x1F3($s2)
    ctx->pc = 0x4b00b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b00b4: 0xb64401ec  sdr         $a0, 0x1EC($s2)
    ctx->pc = 0x4b00b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 492); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b00b8: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x4b00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x4b00bc: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x4b00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x4b00c0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4b00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4b00c4:
    // 0x4b00c4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x4b00c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4b00c8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B00C8u;
    {
        const bool branch_taken_0x4b00c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b00c8) {
            ctx->pc = 0x4B00CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B00C8u;
            // 0x4b00cc: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B00E4u;
            goto label_4b00e4;
        }
    }
    ctx->pc = 0x4B00D0u;
    // 0x4b00d0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x4B00D0u;
    SET_GPR_U32(ctx, 31, 0x4B00D8u);
    ctx->pc = 0x4B00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B00D0u;
    // 0x4b00d4: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4B00D0u, 0x4B00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B00D8u;
label_4b00d8:
    // 0x4b00d8: 0x8e431040  lw          $v1, 0x1040($s2)
    ctx->pc = 0x4b00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x4b00dc: 0x24630124  addiu       $v1, $v1, 0x124
    ctx->pc = 0x4b00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
    // 0x4b00e0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4b00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_4b00e4:
    // 0x4b00e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b00e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b00e8: 0xc12d172  jal         func_4B45C8
    ctx->pc = 0x4B00E8u;
    SET_GPR_U32(ctx, 31, 0x4B00F0u);
    ctx->pc = 0x4B00ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B00E8u;
    // 0x4b00ec: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B45C8u, 0x4B00E8u, 0x4B00F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B00F0u;
label_4b00f0:
    // 0x4b00f0: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x4b00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x4b00f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B00F4u;
    {
        const bool branch_taken_0x4b00f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B00F4u;
        // 0x4b00f8: 0xae4202c8  sw          $v0, 0x2C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b00f4) {
            ctx->pc = 0x4B0108u;
            goto label_4b0108;
        }
    }
    ctx->pc = 0x4B00FCu;
label_4b00fc:
    // 0x4b00fc: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x4b00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x4b0100: 0xc12d172  jal         func_4B45C8
    ctx->pc = 0x4B0100u;
    SET_GPR_U32(ctx, 31, 0x4B0108u);
    ctx->pc = 0x4B0104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0100u;
    // 0x4b0104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B45C8u, 0x4B0100u, 0x4B0108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0108u;
label_4b0108:
    // 0x4b0108: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b0108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b010c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4b010cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b0110: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b0110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b0114: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4b0114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b011c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B011Cu;
        // 0x4b0120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0124u;
    // 0x4b0124: 0x0  nop
    ctx->pc = 0x4b0124u;
    // NOP
    // 0x4b0128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b012c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b0130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0138: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x4b0138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x4b013c: 0xc12d18e  jal         func_4B4638
    ctx->pc = 0x4B013Cu;
    SET_GPR_U32(ctx, 31, 0x4B0144u);
    ctx->pc = 0x4B0140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B013Cu;
    // 0x4b0140: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4638u, 0x4B013Cu, 0x4B0144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0144u;
label_4b0144:
    // 0x4b0144: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b0144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b014c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b014cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0150: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0150u;
        // 0x4b0154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0158u;
    // 0x4b0158: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b0158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b015c: 0x24a21080  addiu       $v0, $a1, 0x1080
    ctx->pc = 0x4b015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4224));
    // 0x4b0160: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x4b0160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x4b0164: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b0164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b0168: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x4b0168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x4b016c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x4b016cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x4b0170: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0170u;
    {
        const bool branch_taken_0x4b0170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0170u;
        // 0x4b0174: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0170) {
            ctx->pc = 0x4B0180u;
            goto label_4b0180;
        }
    }
    ctx->pc = 0x4B0178u;
    // 0x4b0178: 0x8ca70f40  lw          $a3, 0xF40($a1)
    ctx->pc = 0x4b0178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3904)));
    // 0x4b017c: 0x0  nop
    ctx->pc = 0x4b017cu;
    // NOP
label_4b0180:
    // 0x4b0180: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4b0180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4b0184: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0184u;
        // 0x4b0188: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B018Cu;
    // 0x4b018c: 0x0  nop
    ctx->pc = 0x4b018cu;
    // NOP
    // 0x4b0190: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b0190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0194: 0x8c430f44  lw          $v1, 0xF44($v0)
    ctx->pc = 0x4b0194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3908)));
    // 0x4b0198: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0198u;
        // 0x4b019c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B01A0u;
    // 0x4b01a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b01a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b01a4: 0x8c430f48  lw          $v1, 0xF48($v0)
    ctx->pc = 0x4b01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3912)));
    // 0x4b01a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B01A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B01ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01A8u;
        // 0x4b01ac: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B01A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B01B0u;
    // 0x4b01b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b01b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b01b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4b01b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4b01b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b01b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b01bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b01bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b01c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b01c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b01c4: 0x8e230f40  lw          $v1, 0xF40($s1)
    ctx->pc = 0x4b01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3904)));
    // 0x4b01c8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4b01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4b01cc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B01CCu;
    {
        const bool branch_taken_0x4b01cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01CCu;
        // 0x4b01d0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b01cc) {
            ctx->pc = 0x4B0210u;
            goto label_4b0210;
        }
    }
    ctx->pc = 0x4B01D4u;
    // 0x4b01d4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x4b01d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b01d8: 0x3c014b80  lui         $at, 0x4B80
    ctx->pc = 0x4b01d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19328 << 16));
    // 0x4b01dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4b01dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b01e0: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x4B01E0u;
    SET_GPR_U32(ctx, 31, 0x4B01E8u);
    ctx->pc = 0x4B01E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B01E0u;
    // 0x4b01e4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x4B01E0u, 0x4B01E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B01E8u;
label_4b01e8:
    // 0x4b01e8: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x4b01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x4b01ec: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x4b01ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b01f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b01f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b01f4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b01f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b01f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b01f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b01fc: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x4b01fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b0200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4b0200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b0204: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x4b0204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x4b0208: 0xc12d1a0  jal         func_4B4680
    ctx->pc = 0x4B0208u;
    SET_GPR_U32(ctx, 31, 0x4B0210u);
    ctx->pc = 0x4B020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0208u;
    // 0x4b020c: 0x26250f00  addiu       $a1, $s1, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4680u, 0x4B0208u, 0x4B0210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0210u;
label_4b0210:
    // 0x4b0210: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b0210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0214: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4b0214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b0218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b0218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b021c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0220: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0220u;
        // 0x4b0224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0228u;
    // 0x4b0228: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4b0228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x4b022c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B022Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B022Cu;
        // 0x4b0230: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B022Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0234u;
    // 0x4b0234: 0x0  nop
    ctx->pc = 0x4b0234u;
    // NOP
    // 0x4b0238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b023c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b0240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0248: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x4b0248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4b024c: 0x8e020f40  lw          $v0, 0xF40($s0)
    ctx->pc = 0x4b024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
    // 0x4b0250: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B0250u;
    {
        const bool branch_taken_0x4b0250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0250u;
        // 0x4b0254: 0xc4c00000  lwc1        $f0, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0250) {
            ctx->pc = 0x4B0278u;
            goto label_4b0278;
        }
    }
    ctx->pc = 0x4B0258u;
    // 0x4b0258: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x4b0258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x4b025c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4b025cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b0260: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x4B0260u;
    SET_GPR_U32(ctx, 31, 0x4B0268u);
    ctx->pc = 0x4B0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0260u;
    // 0x4b0264: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x4B0260u, 0x4B0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0268u;
label_4b0268:
    // 0x4b0268: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4b0268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b026c: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x4b026cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x4b0270: 0xc12d194  jal         func_4B4650
    ctx->pc = 0x4B0270u;
    SET_GPR_U32(ctx, 31, 0x4B0278u);
    ctx->pc = 0x4B0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0270u;
    // 0x4b0274: 0x26050f00  addiu       $a1, $s0, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4650u, 0x4B0270u, 0x4B0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0278u;
label_4b0278:
    // 0x4b0278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b0278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b027c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b027cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b0280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0284: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0284u;
        // 0x4b0288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B028Cu;
    // 0x4b028c: 0x0  nop
    ctx->pc = 0x4b028cu;
    // NOP
    // 0x4b0290: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b0290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0294: 0xc4400f50  lwc1        $f0, 0xF50($v0)
    ctx->pc = 0x4b0294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b0298: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x4b0298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x4b029c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4b029cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4b02a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b02a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4b02a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B02A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B02A4u;
        // 0x4b02a8: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B02A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B02ACu;
    // 0x4b02ac: 0x0  nop
    ctx->pc = 0x4b02acu;
    // NOP
    // 0x4b02b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b02b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b02b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b02b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b02b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4b02b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4b02bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b02bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b02c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4b02c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b02c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b02c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b02c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b02c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b02cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b02ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b02d0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b02d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4b02d4: 0x8e441044  lw          $a0, 0x1044($s2)
    ctx->pc = 0x4b02d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4164)));
    // 0x4b02d8: 0x2470ea40  addiu       $s0, $v1, -0x15C0
    ctx->pc = 0x4b02d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961728));
    // 0x4b02dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b02e0: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x4b02e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x4b02e4: 0xac64ea40  sw          $a0, -0x15C0($v1)
    ctx->pc = 0x4b02e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65EA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EA40u, _value); } while (0);
    // 0x4b02e8: 0x2118825  or          $s1, $s0, $s1
    ctx->pc = 0x4b02e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x4b02ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b02ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b02f0: 0x260500bf  addiu       $a1, $s0, 0xBF
    ctx->pc = 0x4b02f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    // 0x4b02f4: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4B02F4u;
    SET_GPR_U32(ctx, 31, 0x4B02FCu);
    ctx->pc = 0x4B02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B02F4u;
    // 0x4b02f8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B02F4u, 0x4B02FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B02FCu;
label_4b02fc:
    // 0x4b02fc: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4B02FCu;
    SET_GPR_U32(ctx, 31, 0x4B0304u);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4B02FCu, 0x4B0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0304u;
label_4b0304:
    // 0x4b0304: 0x8f84b8e0  lw          $a0, -0x4720($gp)
    ctx->pc = 0x4b0304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
    // 0x4b0308: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b0308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b030c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4b030cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0310: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x4b0310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4b0314: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x4b0314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4b0318: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b0318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b031c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b031cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0320: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B0320u;
    SET_GPR_U32(ctx, 31, 0x4B0328u);
    ctx->pc = 0x4B0324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0320u;
    // 0x4b0324: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B0320u, 0x4B0328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0328u;
label_4b0328:
    // 0x4b0328: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4B0328u;
    SET_GPR_U32(ctx, 31, 0x4B0330u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4B0328u, 0x4B0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0330u;
label_4b0330:
    // 0x4b0330: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4b0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b0334: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b0334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0338: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b0338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b033c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b033cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b0340: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b0340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b0344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b0344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b0348: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4b0348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b034c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0350: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0350u;
        // 0x4b0354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0358u;
    // 0x4b0358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b035c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b0360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0368: 0xc12bdbe  jal         func_4AF6F8
    ctx->pc = 0x4B0368u;
    SET_GPR_U32(ctx, 31, 0x4B0370u);
    ctx->pc = 0x4B036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0368u;
    // 0x4b036c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF6F8u, 0x4B0368u, 0x4B0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0370u;
label_4b0370:
    // 0x4b0370: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b0370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0378: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b0378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b037c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B037Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B037Cu;
        // 0x4b0380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B037Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0384u;
    // 0x4b0384: 0x0  nop
    ctx->pc = 0x4b0384u;
    // NOP
    // 0x4b0388: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b0388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b038c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b0390: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4b0390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4b0394: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b0394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0398: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4b0398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b039c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b03a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b03a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b03a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b03a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b03a8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b03ac: 0x8e431044  lw          $v1, 0x1044($s2)
    ctx->pc = 0x4b03acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4164)));
    // 0x4b03b0: 0x2450ea40  addiu       $s0, $v0, -0x15C0
    ctx->pc = 0x4b03b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x4b03b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4b03b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b03b8: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x4b03b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x4b03bc: 0xac43ea40  sw          $v1, -0x15C0($v0)
    ctx->pc = 0x4b03bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EA40u, _value); } while (0);
    // 0x4b03c0: 0x2118825  or          $s1, $s0, $s1
    ctx->pc = 0x4b03c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x4b03c4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x4b03c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65EA44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EA44u, _value); } while (0);
    // 0x4b03c8: 0x260500bf  addiu       $a1, $s0, 0xBF
    ctx->pc = 0x4b03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    // 0x4b03cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b03ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b03d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4b03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4b03d4: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4B03D4u;
    SET_GPR_U32(ctx, 31, 0x4B03DCu);
    ctx->pc = 0x4B03D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B03D4u;
    // 0x4b03d8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B03D4u, 0x4B03DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B03DCu;
label_4b03dc:
    // 0x4b03dc: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4B03DCu;
    SET_GPR_U32(ctx, 31, 0x4B03E4u);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4B03DCu, 0x4B03E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B03E4u;
label_4b03e4:
    // 0x4b03e4: 0x8f84b8e0  lw          $a0, -0x4720($gp)
    ctx->pc = 0x4b03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
    // 0x4b03e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b03e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b03ec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4b03ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b03f0: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x4b03f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4b03f4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x4b03f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4b03f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b03f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b03fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b03fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0400: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B0400u;
    SET_GPR_U32(ctx, 31, 0x4B0408u);
    ctx->pc = 0x4B0404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0400u;
    // 0x4b0404: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B0400u, 0x4B0408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0408u;
label_4b0408:
    // 0x4b0408: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4B0408u;
    SET_GPR_U32(ctx, 31, 0x4B0410u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4B0408u, 0x4B0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0410u;
label_4b0410:
    // 0x4b0410: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4b0410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4b0414: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b0414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0418: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b0418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b041c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x4b041cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x4b0420: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b0420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b0424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b0424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b0428: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4b0428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b042c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b042cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0430: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0430u;
        // 0x4b0434: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0438u;
    // 0x4b0438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b043c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0440: 0xc12c5f2  jal         func_4B17C8
    ctx->pc = 0x4B0440u;
    SET_GPR_U32(ctx, 31, 0x4B0448u);
    ctx->pc = 0x4B17C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B17C8u, 0x4B0440u, 0x4B0448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0448u;
label_4b0448:
    // 0x4b0448: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4B0448u;
    {
        const bool branch_taken_0x4b0448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0448u;
        // 0x4b044c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0448) {
            ctx->pc = 0x4B049Cu;
            goto label_4b049c;
        }
    }
    ctx->pc = 0x4B0450u;
    // 0x4b0450: 0xc12cc4c  jal         func_4B3130
    ctx->pc = 0x4B0450u;
    SET_GPR_U32(ctx, 31, 0x4B0458u);
    ctx->pc = 0x4B3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3130u, 0x4B0450u, 0x4B0458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0458u;
label_4b0458:
    // 0x4b0458: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B0458u;
    {
        const bool branch_taken_0x4b0458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0458) {
            ctx->pc = 0x4B0490u;
            goto label_4b0490;
        }
    }
    ctx->pc = 0x4B0460u;
    // 0x4b0460: 0xc12cfa8  jal         func_4B3EA0
    ctx->pc = 0x4B0460u;
    SET_GPR_U32(ctx, 31, 0x4B0468u);
    ctx->pc = 0x4B3EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3EA0u, 0x4B0460u, 0x4B0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0468u;
label_4b0468:
    // 0x4b0468: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B0468u;
    {
        const bool branch_taken_0x4b0468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0468) {
            ctx->pc = 0x4B0488u;
            goto label_4b0488;
        }
    }
    ctx->pc = 0x4B0470u;
    // 0x4b0470: 0xc12be46  jal         func_4AF918
    ctx->pc = 0x4B0470u;
    SET_GPR_U32(ctx, 31, 0x4B0478u);
    ctx->pc = 0x4AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF918u, 0x4B0470u, 0x4B0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0478u;
label_4b0478:
    // 0x4b0478: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B0478u;
    {
        const bool branch_taken_0x4b0478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0478u;
        // 0x4b047c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0478) {
            ctx->pc = 0x4B049Cu;
            goto label_4b049c;
        }
    }
    ctx->pc = 0x4B0480u;
    // 0x4b0480: 0xc12cfd6  jal         func_4B3F58
    ctx->pc = 0x4B0480u;
    SET_GPR_U32(ctx, 31, 0x4B0488u);
    ctx->pc = 0x4B3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3F58u, 0x4B0480u, 0x4B0488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0488u;
label_4b0488:
    // 0x4b0488: 0xc12cc68  jal         func_4B31A0
    ctx->pc = 0x4B0488u;
    SET_GPR_U32(ctx, 31, 0x4B0490u);
    ctx->pc = 0x4B31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31A0u, 0x4B0488u, 0x4B0490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0490u;
label_4b0490:
    // 0x4b0490: 0xc12c608  jal         func_4B1820
    ctx->pc = 0x4B0490u;
    SET_GPR_U32(ctx, 31, 0x4B0498u);
    ctx->pc = 0x4B1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1820u, 0x4B0490u, 0x4B0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0498u;
label_4b0498:
    // 0x4b0498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b0498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b049c:
    // 0x4b049c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b049cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b04a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B04A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B04A0u;
        // 0x4b04a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B04A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B04A8u;
}
