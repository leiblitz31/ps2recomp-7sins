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

// Function: sub_00419FE8
// Address: 0x419fe8 - 0x41a140
void sub_00419FE8_0x419fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419FE8_0x419fe8");
#endif

    switch (ctx->pc) {
        case 0x41a008u: goto label_41a008;
        case 0x41a010u: goto label_41a010;
        case 0x41a05cu: goto label_41a05c;
        case 0x41a07cu: goto label_41a07c;
        case 0x41a0c0u: goto label_41a0c0;
        case 0x41a0d4u: goto label_41a0d4;
        case 0x41a110u: goto label_41a110;
        default: break;
    }

    ctx->pc = 0x419fe8u;

label_419fe8:
    // 0x419fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x419fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x419fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x419fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x419ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419ff4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x419ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x419ff8: 0x8c900098  lw          $s0, 0x98($a0)
    ctx->pc = 0x419ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x419ffc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x419FFCu;
    {
        const bool branch_taken_0x419ffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419FFCu;
        // 0x41a000: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419ffc) {
            ctx->pc = 0x41A01Cu;
            goto label_41a01c;
        }
    }
    ctx->pc = 0x41A004u;
    // 0x41a004: 0x0  nop
    ctx->pc = 0x41a004u;
    // NOP
label_41a008:
    // 0x41a008: 0xc1067fa  jal         func_419FE8
    ctx->pc = 0x41A008u;
    SET_GPR_U32(ctx, 31, 0x41A010u);
    ctx->pc = 0x41A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A008u;
    // 0x41a00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FE8u;
    goto label_419fe8;
    ctx->pc = 0x41A010u;
label_41a010:
    // 0x41a010: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x41a010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x41a014: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x41A014u;
    {
        const bool branch_taken_0x41a014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A014u;
        // 0x41a018: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a014) {
            ctx->pc = 0x41A008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a008;
        }
    }
    ctx->pc = 0x41A01Cu;
label_41a01c:
    // 0x41a01c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41a01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a020: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41a020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41a024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a02c: 0x3e00008  jr          $ra
    ctx->pc = 0x41A02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A02Cu;
        // 0x41a030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A034u;
    // 0x41a034: 0x0  nop
    ctx->pc = 0x41a034u;
    // NOP
    // 0x41a038: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x41a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x41a03c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x41a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x41a040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41a044: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x41a044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x41a048: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41a048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41a04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a050: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x41a050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x41a054: 0xc104c62  jal         func_413188
    ctx->pc = 0x41A054u;
    SET_GPR_U32(ctx, 31, 0x41A05Cu);
    ctx->pc = 0x41A058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A054u;
    // 0x41a058: 0x2484c9c8  addiu       $a0, $a0, -0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413188u, 0x41A054u, 0x41A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A05Cu;
label_41a05c:
    // 0x41a05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a060: 0x3e00008  jr          $ra
    ctx->pc = 0x41A060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A060u;
        // 0x41a064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A068u;
    // 0x41a068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41a068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41a06c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41a070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a074: 0xc106544  jal         func_419510
    ctx->pc = 0x41A074u;
    SET_GPR_U32(ctx, 31, 0x41A07Cu);
    ctx->pc = 0x41A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A074u;
    // 0x41a078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419510u, 0x41A074u, 0x41A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A07Cu;
label_41a07c:
    // 0x41a07c: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x41a07cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x41a080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41a084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a088: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x41a088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x41a08c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x41a08cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x41a090: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41a090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a094: 0x3e00008  jr          $ra
    ctx->pc = 0x41A094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A094u;
        // 0x41a098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A09Cu;
    // 0x41a09c: 0x0  nop
    ctx->pc = 0x41a09cu;
    // NOP
    // 0x41a0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41a0a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41a0a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41a0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a0b0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41a0b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41a0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a0b8: 0xc104ca6  jal         func_413298
    ctx->pc = 0x41A0B8u;
    SET_GPR_U32(ctx, 31, 0x41A0C0u);
    ctx->pc = 0x41A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A0B8u;
    // 0x41a0bc: 0x2484c9c8  addiu       $a0, $a0, -0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41A0B8u, 0x41A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A0C0u;
label_41a0c0:
    // 0x41a0c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x41a0c4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x41A0C4u;
    {
        const bool branch_taken_0x41a0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a0c4) {
            ctx->pc = 0x41A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A0C4u;
            // 0x41a0c8: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A0D8u;
            goto label_41a0d8;
        }
    }
    ctx->pc = 0x41A0CCu;
    // 0x41a0cc: 0xc1066de  jal         func_419B78
    ctx->pc = 0x41A0CCu;
    SET_GPR_U32(ctx, 31, 0x41A0D4u);
    ctx->pc = 0x41A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A0CCu;
    // 0x41a0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x41A0CCu, 0x41A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A0D4u;
label_41a0d4:
    // 0x41a0d4: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x41a0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_41a0d8:
    // 0x41a0d8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x41a0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x41a0dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x41A0DCu;
    {
        const bool branch_taken_0x41a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a0dc) {
            ctx->pc = 0x41A0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A0DCu;
            // 0x41a0e0: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A100u;
            goto label_41a100;
        }
    }
    ctx->pc = 0x41A0E4u;
    // 0x41a0e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41a0e8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x41a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41a0ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x41a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x41a0f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x41a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41a0f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x41a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41a0f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x41a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x41a0fc: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x41a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_41a100:
    // 0x41a100: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x41A100u;
    {
        const bool branch_taken_0x41a100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A100u;
        // 0x41a104: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a100) {
            ctx->pc = 0x41A130u;
            goto label_41a130;
        }
    }
    ctx->pc = 0x41A108u;
    // 0x41a108: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x41a108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x41a10c: 0x0  nop
    ctx->pc = 0x41a10cu;
    // NOP
label_41a110:
    // 0x41a110: 0x8c84009c  lw          $a0, 0x9C($a0)
    ctx->pc = 0x41a110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x41a114: 0x0  nop
    ctx->pc = 0x41a114u;
    // NOP
    // 0x41a118: 0x0  nop
    ctx->pc = 0x41a118u;
    // NOP
    // 0x41a11c: 0x0  nop
    ctx->pc = 0x41a11cu;
    // NOP
    // 0x41a120: 0x0  nop
    ctx->pc = 0x41a120u;
    // NOP
    // 0x41a124: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x41A124u;
    {
        const bool branch_taken_0x41a124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a124) {
            ctx->pc = 0x41A128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A124u;
            // 0x41a128: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a110;
        }
    }
    ctx->pc = 0x41A12Cu;
    // 0x41a12c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41a12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a130:
    // 0x41a130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41a134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a138: 0x3e00008  jr          $ra
    ctx->pc = 0x41A138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A138u;
        // 0x41a13c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A140u;
}
