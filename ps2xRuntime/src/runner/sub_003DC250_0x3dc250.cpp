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

// Function: sub_003DC250
// Address: 0x3dc250 - 0x3dc2d0
void sub_003DC250_0x3dc250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC250_0x3dc250");
#endif

    ctx->pc = 0x3dc250u;

    // 0x3dc250: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3dc250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc254: 0x8cc316d4  lw          $v1, 0x16D4($a2)
    ctx->pc = 0x3dc254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5844)));
    // 0x3dc258: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3dc258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3dc25c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DC25Cu;
    {
        const bool branch_taken_0x3dc25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc25c) {
            ctx->pc = 0x3DC2A0u;
            goto label_3dc2a0;
        }
    }
    ctx->pc = 0x3DC264u;
    // 0x3dc264: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x3dc264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3dc268: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3dc268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dc26c: 0x90c316d0  lbu         $v1, 0x16D0($a2)
    ctx->pc = 0x3dc26cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5840)));
    // 0x3dc270: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dc270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dc274: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dc274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dc278: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dc278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc27c: 0xacc4001c  sw          $a0, 0x1C($a2)
    ctx->pc = 0x3dc27cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
    // 0x3dc280: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3dc280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc284: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3dc284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dc288: 0x94c216d0  lhu         $v0, 0x16D0($a2)
    ctx->pc = 0x3dc288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 5840)));
    // 0x3dc28c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dc28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dc290: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3dc290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3dc294: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3dc294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dc298: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DC298u;
    {
        const bool branch_taken_0x3dc298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC298u;
        // 0x3dc29c: 0xacc5001c  sw          $a1, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc298) {
            ctx->pc = 0x3DC2C4u;
            goto label_3dc2c4;
        }
    }
    ctx->pc = 0x3DC2A0u;
label_3dc2a0:
    // 0x3dc2a0: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DC2A0u;
    {
        const bool branch_taken_0x3dc2a0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3dc2a0) {
            ctx->pc = 0x3DC2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC2A0u;
            // 0x3dc2a4: 0xacc016d4  sw          $zero, 0x16D4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 5844), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC2C8u;
            goto label_3dc2c8;
        }
    }
    ctx->pc = 0x3DC2A8u;
    // 0x3dc2a8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3dc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3dc2ac: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3dc2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dc2b0: 0x90c416d0  lbu         $a0, 0x16D0($a2)
    ctx->pc = 0x3dc2b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5840)));
    // 0x3dc2b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dc2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dc2b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3dc2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dc2bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dc2c0: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x3dc2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_3dc2c4:
    // 0x3dc2c4: 0xacc016d4  sw          $zero, 0x16D4($a2)
    ctx->pc = 0x3dc2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5844), GPR_U32(ctx, 0));
label_3dc2c8:
    // 0x3dc2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC2C8u;
        // 0x3dc2cc: 0xa4c016d0  sh          $zero, 0x16D0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 5840), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC2D0u;
}
