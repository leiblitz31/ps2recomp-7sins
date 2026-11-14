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

// Function: sub_00406F68
// Address: 0x406f68 - 0x407058
void sub_00406F68_0x406f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406F68_0x406f68");
#endif

    switch (ctx->pc) {
        case 0x406fbcu: goto label_406fbc;
        default: break;
    }

    ctx->pc = 0x406f68u;

    // 0x406f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x406f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x406f6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x406f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x406f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x406f74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x406f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406f78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x406f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x406f7c: 0xdc4301f0  ld          $v1, 0x1F0($v0)
    ctx->pc = 0x406f7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x406f80: 0x904801f3  lbu         $t0, 0x1F3($v0)
    ctx->pc = 0x406f80u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 499)));
    // 0x406f84: 0x3143a  dsrl        $v0, $v1, 16
    ctx->pc = 0x406f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 16);
    // 0x406f88: 0x33a3a  dsrl        $a3, $v1, 8
    ctx->pc = 0x406f88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 8);
    // 0x406f8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x406f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406f90: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x406f90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x406f94: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x406f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x406f98: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x406f98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x406f9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x406f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406fa0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x406fa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x406fa4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x406fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x406fa8: 0xa3a80000  sb          $t0, 0x0($sp)
    ctx->pc = 0x406fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x406fac: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x406facu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x406fb0: 0xa3a70002  sb          $a3, 0x2($sp)
    ctx->pc = 0x406fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x406fb4: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x406FB4u;
    SET_GPR_U32(ctx, 31, 0x406FBCu);
    ctx->pc = 0x406FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406FB4u;
    // 0x406fb8: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x406FB4u, 0x406FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406FBCu;
label_406fbc:
    // 0x406fbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x406fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x406fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x406FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406FC0u;
        // 0x406fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x406FC8u;
    // 0x406fc8: 0x5163a  dsrl        $v0, $a1, 24
    ctx->pc = 0x406fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 24);
    // 0x406fcc: 0x51c3a  dsrl        $v1, $a1, 16
    ctx->pc = 0x406fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> 16);
    // 0x406fd0: 0x5323a  dsrl        $a2, $a1, 8
    ctx->pc = 0x406fd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) >> 8);
    // 0x406fd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x406fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406fd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x406fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x406fdc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x406fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x406fe0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x406fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x406fe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x406fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406fe8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x406fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x406fec: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x406fecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x406ff0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x406ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x406ff4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x406ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x406ff8: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x406ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x406ffc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x406ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x407000: 0x3e00008  jr          $ra
    ctx->pc = 0x407000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407000u;
        // 0x407004: 0xa0860002  sb          $a2, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407008u;
    // 0x407008: 0x5163b  dsra        $v0, $a1, 24
    ctx->pc = 0x407008u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 5) >> 24);
    // 0x40700c: 0x51c3b  dsra        $v1, $a1, 16
    ctx->pc = 0x40700cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> 16);
    // 0x407010: 0x5323b  dsra        $a2, $a1, 8
    ctx->pc = 0x407010u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 5) >> 8);
    // 0x407014: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x407014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x407018: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x407018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x40701c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x40701cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x407020: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x407020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x407024: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x407024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x407028: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x407028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x40702c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x40702cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x407030: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x407030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x407034: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x407034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x407038: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x407038u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x40703c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x40703cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x407040: 0x3e00008  jr          $ra
    ctx->pc = 0x407040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407040u;
        // 0x407044: 0xa0860002  sb          $a2, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407048u;
    // 0x407048: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x407048u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x40704c: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x40704cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x407050: 0x3e00008  jr          $ra
    ctx->pc = 0x407050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407050u;
        // 0x407054: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407058u;
}
