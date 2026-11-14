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

// Function: sub_002F8980
// Address: 0x2f8980 - 0x2f8a70
void sub_002F8980_0x2f8980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8980_0x2f8980");
#endif

    switch (ctx->pc) {
        case 0x2f89e4u: goto label_2f89e4;
        case 0x2f89f8u: goto label_2f89f8;
        case 0x2f8a28u: goto label_2f8a28;
        default: break;
    }

    ctx->pc = 0x2f8980u;

    // 0x2f8980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f8980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f8984: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f8984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f8988: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f898c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f898cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8990: 0x2450c740  addiu       $s0, $v0, -0x38C0
    ctx->pc = 0x2f8990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x2f8994: 0xac44c740  sw          $a0, -0x38C0($v0)
    ctx->pc = 0x2f8994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60C740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C740u, _value); } while (0);
    // 0x2f8998: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f8998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f899c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2f899cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2f89a0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f89a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f89a4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2f89a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f89a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f89ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f89acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89b0: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x2f89b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x60C744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C744u, _value); } while (0);
    // 0x2f89b4: 0x2484c648  addiu       $a0, $a0, -0x39B8
    ctx->pc = 0x2f89b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
    // 0x2f89b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f89b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f89bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f89bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f89c4: 0x34a5131a  ori         $a1, $a1, 0x131A
    ctx->pc = 0x2f89c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4890);
    // 0x2f89c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f89c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f89cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f89ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2f89d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60C748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C748u, _value); } while (0);
    // 0x2f89d4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f89d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89d8: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f89d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f89dc: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F89DCu;
    SET_GPR_U32(ctx, 31, 0x2F89E4u);
    ctx->pc = 0x2F89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F89DCu;
    // 0x2f89e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F89DCu, 0x2F89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F89E4u;
label_2f89e4:
    // 0x2f89e4: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F89E4u;
    {
        const bool branch_taken_0x2f89e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f89e4) {
            ctx->pc = 0x2F89E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F89E4u;
            // 0x2f89e8: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8A00u;
            goto label_2f8a00;
        }
    }
    ctx->pc = 0x2F89ECu;
    // 0x2f89ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f89f0: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F89F0u;
    SET_GPR_U32(ctx, 31, 0x2F89F8u);
    ctx->pc = 0x2F89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F89F0u;
    // 0x2f89f4: 0x24849ed0  addiu       $a0, $a0, -0x6130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F89F0u, 0x2F89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F89F8u;
label_2f89f8:
    // 0x2f89f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F89F8u;
    {
        const bool branch_taken_0x2f89f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89F8u;
        // 0x2f89fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89f8) {
            ctx->pc = 0x2F8A54u;
            goto label_2f8a54;
        }
    }
    ctx->pc = 0x2F8A00u;
label_2f8a00:
    // 0x2f8a00: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F8A00u;
    {
        const bool branch_taken_0x2f8a00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A00u;
        // 0x2f8a04: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a00) {
            ctx->pc = 0x2F8A58u;
            goto label_2f8a58;
        }
    }
    ctx->pc = 0x2F8A08u;
    // 0x2f8a08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2f8a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f8a0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2f8a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2f8a10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f8a14: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F8A14u;
    {
        const bool branch_taken_0x2f8a14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A14u;
        // 0x2f8a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a14) {
            ctx->pc = 0x2F8A50u;
            goto label_2f8a50;
        }
    }
    ctx->pc = 0x2F8A1Cu;
    // 0x2f8a1c: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2f8a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2f8a20: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2f8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f8a24: 0x0  nop
    ctx->pc = 0x2f8a24u;
    // NOP
label_2f8a28:
    // 0x2f8a28: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x2f8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2f8a2c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f8a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8a30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f8a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f8a34: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f8a34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8a38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f8a3c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f8a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f8a40: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F8A40u;
    {
        const bool branch_taken_0x2f8a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A40u;
        // 0x2f8a44: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a40) {
            ctx->pc = 0x2F8A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8a28;
        }
    }
    ctx->pc = 0x2F8A48u;
    // 0x2f8a48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8A48u;
    {
        const bool branch_taken_0x2f8a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A48u;
        // 0x2f8a4c: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a48) {
            ctx->pc = 0x2F8A54u;
            goto label_2f8a54;
        }
    }
    ctx->pc = 0x2F8A50u;
label_2f8a50:
    // 0x2f8a50: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2f8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2f8a54:
    // 0x2f8a54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f8a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f8a58:
    // 0x2f8a58: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f8a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8a5c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f8a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8a60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8a64: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A64u;
        // 0x2f8a68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8A6Cu;
    // 0x2f8a6c: 0x0  nop
    ctx->pc = 0x2f8a6cu;
    // NOP
    ctx->pc = 0x2f8a70u;
}
