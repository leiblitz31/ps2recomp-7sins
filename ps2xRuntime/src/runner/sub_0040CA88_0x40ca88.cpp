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

// Function: sub_0040CA88
// Address: 0x40ca88 - 0x40cc40
void sub_0040CA88_0x40ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CA88_0x40ca88");
#endif

    switch (ctx->pc) {
        case 0x40caecu: goto label_40caec;
        case 0x40cb08u: goto label_40cb08;
        case 0x40cb60u: goto label_40cb60;
        case 0x40cb8cu: goto label_40cb8c;
        case 0x40cba8u: goto label_40cba8;
        case 0x40cbb8u: goto label_40cbb8;
        case 0x40cc04u: goto label_40cc04;
        default: break;
    }

    ctx->pc = 0x40ca88u;

    // 0x40ca88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40ca8c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x40ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x40ca90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x40ca94: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x40ca94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x40ca98: 0x3e00008  jr          $ra
    ctx->pc = 0x40CA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA98u;
        // 0x40ca9c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CAA0u;
    // 0x40caa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x40caa4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x40caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x40caa8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x40caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x40caac: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x40caacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x40cab0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x40cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x40cab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40cab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cab8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x40cabc: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x40cabcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x40cac0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x40cac4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40cac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40cac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cacc: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x40caccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x40cad0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x40cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x40cad4: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x40cad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x40cad8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x40cadc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x40cadcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x40cae0: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x40cae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x40cae4: 0xc103404  jal         func_40D010
    ctx->pc = 0x40CAE4u;
    SET_GPR_U32(ctx, 31, 0x40CAECu);
    ctx->pc = 0x40CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CAE4u;
    // 0x40cae8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x40CAE4u, 0x40CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CAECu;
label_40caec:
    // 0x40caec: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x40CAECu;
    {
        const bool branch_taken_0x40caec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40caec) {
            ctx->pc = 0x40CAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40CAECu;
            // 0x40caf0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40CB18u;
            goto label_40cb18;
        }
    }
    ctx->pc = 0x40CAF4u;
    // 0x40caf4: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x40caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x40caf8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40cafc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x40cb00: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40CB00u;
    SET_GPR_U32(ctx, 31, 0x40CB08u);
    ctx->pc = 0x40CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CB00u;
    // 0x40cb04: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40CB00u, 0x40CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CB08u;
label_40cb08:
    // 0x40cb08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cb0c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x40CB0Cu;
    {
        const bool branch_taken_0x40cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB0Cu;
        // 0x40cb10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cb0c) {
            ctx->pc = 0x40CBB0u;
            goto label_40cbb0;
        }
    }
    ctx->pc = 0x40CB14u;
    // 0x40cb14: 0x0  nop
    ctx->pc = 0x40cb14u;
    // NOP
label_40cb18:
    // 0x40cb18: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x40CB18u;
    {
        const bool branch_taken_0x40cb18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x40CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB18u;
        // 0x40cb1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cb18) {
            ctx->pc = 0x40CB7Cu;
            goto label_40cb7c;
        }
    }
    ctx->pc = 0x40CB20u;
    // 0x40cb20: 0x41023  negu        $v0, $a0
    ctx->pc = 0x40cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x40cb24: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x40cb24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x40cb28: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x40CB28u;
    {
        const bool branch_taken_0x40cb28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cb28) {
            ctx->pc = 0x40CB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40CB28u;
            // 0x40cb2c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40CB60u;
            goto label_40cb60;
        }
    }
    ctx->pc = 0x40CB30u;
    // 0x40cb30: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x40cb30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40cb34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40CB34u;
    {
        const bool branch_taken_0x40cb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB34u;
        // 0x40cb38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cb34) {
            ctx->pc = 0x40CB4Cu;
            goto label_40cb4c;
        }
    }
    ctx->pc = 0x40CB3Cu;
    // 0x40cb3c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x40cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x40cb40: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x40cb40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x40cb44: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x40cb44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x40cb48: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x40cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_40cb4c:
    // 0x40cb4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x40cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x40cb50: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x40CB50u;
    {
        const bool branch_taken_0x40cb50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cb50) {
            ctx->pc = 0x40CB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40CB50u;
            // 0x40cb54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40CB80u;
            goto label_40cb80;
        }
    }
    ctx->pc = 0x40CB58u;
    // 0x40cb58: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x40cb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x40cb5c: 0x0  nop
    ctx->pc = 0x40cb5cu;
    // NOP
label_40cb60:
    // 0x40cb60: 0x0  nop
    ctx->pc = 0x40cb60u;
    // NOP
    // 0x40cb64: 0x0  nop
    ctx->pc = 0x40cb64u;
    // NOP
    // 0x40cb68: 0x0  nop
    ctx->pc = 0x40cb68u;
    // NOP
    // 0x40cb6c: 0x0  nop
    ctx->pc = 0x40cb6cu;
    // NOP
    // 0x40cb70: 0x0  nop
    ctx->pc = 0x40cb70u;
    // NOP
    // 0x40cb74: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x40CB74u;
    {
        const bool branch_taken_0x40cb74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x40CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB74u;
        // 0x40cb78: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cb74) {
            ctx->pc = 0x40CB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40cb60;
        }
    }
    ctx->pc = 0x40CB7Cu;
label_40cb7c:
    // 0x40cb7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40cb80:
    // 0x40cb80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40cb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cb84: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x40CB84u;
    SET_GPR_U32(ctx, 31, 0x40CB8Cu);
    ctx->pc = 0x40CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CB84u;
    // 0x40cb88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x40CB84u, 0x40CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CB8Cu;
label_40cb8c:
    // 0x40cb8c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x40CB8Cu;
    {
        const bool branch_taken_0x40cb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40cb8c) {
            ctx->pc = 0x40CB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40CB8Cu;
            // 0x40cb90: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40CBC0u;
            goto label_40cbc0;
        }
    }
    ctx->pc = 0x40CB94u;
    // 0x40cb94: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x40cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x40cb98: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40cb9c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x40cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x40cba0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40CBA0u;
    SET_GPR_U32(ctx, 31, 0x40CBA8u);
    ctx->pc = 0x40CBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CBA0u;
    // 0x40cba4: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40CBA0u, 0x40CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CBA8u;
label_40cba8:
    // 0x40cba8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x40cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x40cbac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x40cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40cbb0:
    // 0x40cbb0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40CBB0u;
    SET_GPR_U32(ctx, 31, 0x40CBB8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40CBB0u, 0x40CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CBB8u;
label_40cbb8:
    // 0x40cbb8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x40CBB8u;
    {
        const bool branch_taken_0x40cbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CBB8u;
        // 0x40cbbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cbb8) {
            ctx->pc = 0x40CC24u;
            goto label_40cc24;
        }
    }
    ctx->pc = 0x40CBC0u;
label_40cbc0:
    // 0x40cbc0: 0x18a00017  blez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x40CBC0u;
    {
        const bool branch_taken_0x40cbc0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x40CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CBC0u;
        // 0x40cbc4: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cbc0) {
            ctx->pc = 0x40CC20u;
            goto label_40cc20;
        }
    }
    ctx->pc = 0x40CBC8u;
    // 0x40cbc8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x40cbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x40cbcc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x40CBCCu;
    {
        const bool branch_taken_0x40cbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CBCCu;
        // 0x40cbd0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cbcc) {
            ctx->pc = 0x40CC00u;
            goto label_40cc00;
        }
    }
    ctx->pc = 0x40CBD4u;
    // 0x40cbd4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x40cbd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40cbd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40CBD8u;
    {
        const bool branch_taken_0x40cbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CBD8u;
        // 0x40cbdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cbd8) {
            ctx->pc = 0x40CBF0u;
            goto label_40cbf0;
        }
    }
    ctx->pc = 0x40CBE0u;
    // 0x40cbe0: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x40cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x40cbe4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x40cbe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x40cbe8: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x40cbe8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x40cbec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x40cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_40cbf0:
    // 0x40cbf0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x40cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x40cbf4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x40CBF4u;
    {
        const bool branch_taken_0x40cbf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CBF4u;
        // 0x40cbf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cbf4) {
            ctx->pc = 0x40CC24u;
            goto label_40cc24;
        }
    }
    ctx->pc = 0x40CBFCu;
    // 0x40cbfc: 0x0  nop
    ctx->pc = 0x40cbfcu;
    // NOP
label_40cc00:
    // 0x40cc00: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x40cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_40cc04:
    // 0x40cc04: 0x0  nop
    ctx->pc = 0x40cc04u;
    // NOP
    // 0x40cc08: 0x0  nop
    ctx->pc = 0x40cc08u;
    // NOP
    // 0x40cc0c: 0x0  nop
    ctx->pc = 0x40cc0cu;
    // NOP
    // 0x40cc10: 0x0  nop
    ctx->pc = 0x40cc10u;
    // NOP
    // 0x40cc14: 0x0  nop
    ctx->pc = 0x40cc14u;
    // NOP
    // 0x40cc18: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x40CC18u;
    {
        const bool branch_taken_0x40cc18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x40cc18) {
            ctx->pc = 0x40CC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40CC18u;
            // 0x40cc1c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40CC04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40cc04;
        }
    }
    ctx->pc = 0x40CC20u;
label_40cc20:
    // 0x40cc20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40cc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40cc24:
    // 0x40cc24: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x40cc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40cc28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x40cc28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40cc2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40cc2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40cc30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40cc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40cc34: 0x3e00008  jr          $ra
    ctx->pc = 0x40CC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CC34u;
        // 0x40cc38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CC3Cu;
    // 0x40cc3c: 0x0  nop
    ctx->pc = 0x40cc3cu;
    // NOP
    ctx->pc = 0x40cc40u;
}
