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

// Function: sub_004A5F68
// Address: 0x4a5f68 - 0x4a5ff0
void sub_004A5F68_0x4a5f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5F68_0x4a5f68");
#endif

    ctx->pc = 0x4a5f68u;

    // 0x4a5f68: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4A5F68u;
    {
        const bool branch_taken_0x4a5f68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5F68u;
        // 0x4a5f6c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5f68) {
            ctx->pc = 0x4A5F98u;
            goto label_4a5f98;
        }
    }
    ctx->pc = 0x4A5F70u;
    // 0x4a5f70: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4a5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4a5f74: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x4a5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x4a5f78: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x4a5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x4a5f7c: 0xa0a0000c  sb          $zero, 0xC($a1)
    ctx->pc = 0x4a5f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a5f80: 0xa0a0000d  sb          $zero, 0xD($a1)
    ctx->pc = 0x4a5f80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a5f84: 0xa0a00018  sb          $zero, 0x18($a1)
    ctx->pc = 0x4a5f84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a5f88: 0xa0a00019  sb          $zero, 0x19($a1)
    ctx->pc = 0x4a5f88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a5f8c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x4a5f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x4a5f90: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x4a5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x4a5f94: 0x0  nop
    ctx->pc = 0x4a5f94u;
    // NOP
label_4a5f98:
    // 0x4a5f98: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x4a5f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4a5f9c: 0xa0a2000c  sb          $v0, 0xC($a1)
    ctx->pc = 0x4a5f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a5fa0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a5fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a5fa4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x4a5fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x4a5fa8: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x4a5fa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x4a5fac: 0xa0a00018  sb          $zero, 0x18($a1)
    ctx->pc = 0x4a5facu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a5fb0: 0xa0a4000d  sb          $a0, 0xD($a1)
    ctx->pc = 0x4a5fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x4a5fb4: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x4a5fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4a5fb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a5fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a5fbc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A5FBCu;
    {
        const bool branch_taken_0x4a5fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5FBCu;
        // 0x4a5fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5fbc) {
            ctx->pc = 0x4A5FC8u;
            goto label_4a5fc8;
        }
    }
    ctx->pc = 0x4A5FC4u;
    // 0x4a5fc4: 0xa0a20018  sb          $v0, 0x18($a1)
    ctx->pc = 0x4a5fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 2));
label_4a5fc8:
    // 0x4a5fc8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x4a5fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4a5fcc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4a5fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x4a5fd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A5FD0u;
    {
        const bool branch_taken_0x4a5fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5fd0) {
            ctx->pc = 0x4A5FE4u;
            goto label_4a5fe4;
        }
    }
    ctx->pc = 0x4A5FD8u;
    // 0x4a5fd8: 0x90a20018  lbu         $v0, 0x18($a1)
    ctx->pc = 0x4a5fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4a5fdc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4a5fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4a5fe0: 0xa0a20018  sb          $v0, 0x18($a1)
    ctx->pc = 0x4a5fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 2));
label_4a5fe4:
    // 0x4a5fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5FECu;
    // 0x4a5fec: 0x0  nop
    ctx->pc = 0x4a5fecu;
    // NOP
    ctx->pc = 0x4a5ff0u;
}
