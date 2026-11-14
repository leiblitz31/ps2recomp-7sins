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

// Function: sub_0038F9B0
// Address: 0x38f9b0 - 0x38fa90
void sub_0038F9B0_0x38f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F9B0_0x38f9b0");
#endif

    switch (ctx->pc) {
        case 0x38f9e4u: goto label_38f9e4;
        case 0x38f9fcu: goto label_38f9fc;
        default: break;
    }

    ctx->pc = 0x38f9b0u;

    // 0x38f9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f9b4: 0x8f82bd54  lw          $v0, -0x42AC($gp)
    ctx->pc = 0x38f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950228)));
    // 0x38f9b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38f9bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38f9c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f9c4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38F9C4u;
    {
        const bool branch_taken_0x38f9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9C4u;
        // 0x38f9c8: 0xaf85bd50  sw          $a1, -0x42B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f9c4) {
            ctx->pc = 0x38FA08u;
            goto label_38fa08;
        }
    }
    ctx->pc = 0x38F9CCu;
    // 0x38f9cc: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x38f9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
    // 0x38f9d0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x38f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38f9d4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x38f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x38f9d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38f9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38f9dc: 0xc103fb2  jal         func_40FEC8
    ctx->pc = 0x38F9DCu;
    SET_GPR_U32(ctx, 31, 0x38F9E4u);
    ctx->pc = 0x38F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F9DCu;
    // 0x38f9e0: 0x34e70502  ori         $a3, $a3, 0x502 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FEC8u, 0x38F9DCu, 0x38F9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F9E4u;
label_38f9e4:
    // 0x38f9e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38F9E4u;
    {
        const bool branch_taken_0x38f9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9E4u;
        // 0x38f9e8: 0xaf82a9c8  sw          $v0, -0x5638($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f9e4) {
            ctx->pc = 0x38FA08u;
            goto label_38fa08;
        }
    }
    ctx->pc = 0x38F9ECu;
    // 0x38f9ec: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x38F9ECu;
    {
        const bool branch_taken_0x38f9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f9ec) {
            ctx->pc = 0x38F9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F9ECu;
            // 0x38f9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FA7Cu;
            goto label_38fa7c;
        }
    }
    ctx->pc = 0x38F9F4u;
    // 0x38f9f4: 0xc104284  jal         func_410A10
    ctx->pc = 0x38F9F4u;
    SET_GPR_U32(ctx, 31, 0x38F9FCu);
    ctx->pc = 0x38F9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F9F4u;
    // 0x38f9f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x38F9F4u, 0x38F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F9FCu;
label_38f9fc:
    // 0x38f9fc: 0xaf80a9c8  sw          $zero, -0x5638($gp)
    ctx->pc = 0x38f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945224), GPR_U32(ctx, 0));
    // 0x38fa00: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x38FA00u;
    {
        const bool branch_taken_0x38fa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA00u;
        // 0x38fa04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa00) {
            ctx->pc = 0x38FA7Cu;
            goto label_38fa7c;
        }
    }
    ctx->pc = 0x38FA08u;
label_38fa08:
    // 0x38fa08: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x38fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
    // 0x38fa0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x38fa10: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x38fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x38fa14: 0x8f84bd54  lw          $a0, -0x42AC($gp)
    ctx->pc = 0x38fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950228)));
    // 0x38fa18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38fa1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38fa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fa20: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x38fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38fa24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38fa28: 0xa062002d  sb          $v0, 0x2D($v1)
    ctx->pc = 0x38fa28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x38fa2c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x38fa2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38fa30: 0xaf84bd54  sw          $a0, -0x42AC($gp)
    ctx->pc = 0x38fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950228), GPR_U32(ctx, 4));
    // 0x38fa34: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x38fa34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38fa38: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x38fa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38fa3c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x38fa3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38fa40: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x38fa40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38fa44: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38fa44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38fa48: 0xa0660008  sb          $a2, 0x8($v1)
    ctx->pc = 0x38fa48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x38fa4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38fa4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa50: 0xa067000a  sb          $a3, 0xA($v1)
    ctx->pc = 0x38fa50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 7));
    // 0x38fa54: 0xa0680018  sb          $t0, 0x18($v1)
    ctx->pc = 0x38fa54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 8));
    // 0x38fa58: 0xa06a0028  sb          $t2, 0x28($v1)
    ctx->pc = 0x38fa58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 10));
    // 0x38fa5c: 0xa0690029  sb          $t1, 0x29($v1)
    ctx->pc = 0x38fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 9));
    // 0x38fa60: 0xa065002b  sb          $a1, 0x2B($v1)
    ctx->pc = 0x38fa60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 5));
    // 0x38fa64: 0xa06b002c  sb          $t3, 0x2C($v1)
    ctx->pc = 0x38fa64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 11));
    // 0x38fa68: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x38fa68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x38fa6c: 0xa06a0009  sb          $t2, 0x9($v1)
    ctx->pc = 0x38fa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 10));
    // 0x38fa70: 0xa065000c  sb          $a1, 0xC($v1)
    ctx->pc = 0x38fa70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x38fa74: 0xa06b0010  sb          $t3, 0x10($v1)
    ctx->pc = 0x38fa74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x38fa78: 0xa060002a  sb          $zero, 0x2A($v1)
    ctx->pc = 0x38fa78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 0));
label_38fa7c:
    // 0x38fa7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38fa7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38fa80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38fa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38fa84: 0x3e00008  jr          $ra
    ctx->pc = 0x38FA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA84u;
        // 0x38fa88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FA8Cu;
    // 0x38fa8c: 0x0  nop
    ctx->pc = 0x38fa8cu;
    // NOP
    ctx->pc = 0x38fa90u;
}
