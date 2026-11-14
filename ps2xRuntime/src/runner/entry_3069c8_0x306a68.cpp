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

// Function: entry_3069c8
// Address: 0x3069c8 - 0x306a68
void entry_3069c8_0x306a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_3069c8_0x306a68");
#endif

    switch (ctx->pc) {
        case 0x3069dcu: goto label_3069dc;
        case 0x3069ecu: goto label_3069ec;
        case 0x306a14u: goto label_306a14;
        case 0x306a48u: goto label_306a48;
        default: break;
    }

    ctx->pc = 0x3069c8u;

    // 0x3069c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3069c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3069cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3069ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3069d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3069d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3069d4: 0xc0c18d8  jal         func_306360
    ctx->pc = 0x3069D4u;
    SET_GPR_U32(ctx, 31, 0x3069DCu);
    ctx->pc = 0x3069D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3069D4u;
    // 0x3069d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306360u, 0x3069D4u, 0x3069DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069DCu;
label_3069dc:
    // 0x3069dc: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3069DCu;
    {
        const bool branch_taken_0x3069dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3069E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069DCu;
        // 0x3069e0: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069dc) {
            ctx->pc = 0x306A58u;
            goto label_306a58;
        }
    }
    ctx->pc = 0x3069E4u;
    // 0x3069e4: 0xc0c1918  jal         func_306460
    ctx->pc = 0x3069E4u;
    SET_GPR_U32(ctx, 31, 0x3069ECu);
    ctx->pc = 0x306460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306460u, 0x3069E4u, 0x3069ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069ECu;
label_3069ec:
    // 0x3069ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3069ECu;
    {
        const bool branch_taken_0x3069ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3069ec) {
            ctx->pc = 0x3069F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3069ECu;
            // 0x3069f0: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306A00u;
            goto label_306a00;
        }
    }
    ctx->pc = 0x3069F4u;
    // 0x3069f4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3069f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3069f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3069F8u;
    {
        const bool branch_taken_0x3069f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3069FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069F8u;
        // 0x3069fc: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069f8) {
            ctx->pc = 0x306A58u;
            goto label_306a58;
        }
    }
    ctx->pc = 0x306A00u;
label_306a00:
    // 0x306a00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x306a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a04: 0x24502d08  addiu       $s0, $v0, 0x2D08
    ctx->pc = 0x306a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11528));
    // 0x306a08: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x306a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x306a0c: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x306A0Cu;
    SET_GPR_U32(ctx, 31, 0x306A14u);
    ctx->pc = 0x306A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A0Cu;
    // 0x306a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x306A0Cu, 0x306A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A14u;
label_306a14:
    // 0x306a14: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x306a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x306a18: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x306a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x306a1c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x306a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a20: 0xa0600103  sb          $zero, 0x103($v1)
    ctx->pc = 0x306a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x306a24: 0x24842f00  addiu       $a0, $a0, 0x2F00
    ctx->pc = 0x306a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12032));
    // 0x306a28: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x306a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x306a2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x306a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x306a30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a34: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x306a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x306a38: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x306a38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a3c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x306a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306a40: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x306A40u;
    SET_GPR_U32(ctx, 31, 0x306A48u);
    ctx->pc = 0x306A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A40u;
    // 0x306a44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x306A40u, 0x306A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A48u;
label_306a48:
    // 0x306a48: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306A48u;
    {
        const bool branch_taken_0x306a48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x306a48) {
            ctx->pc = 0x306A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A48u;
            // 0x306a4c: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306A58u;
            goto label_306a58;
        }
    }
    ctx->pc = 0x306A50u;
    // 0x306a50: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x306a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x306a54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x306a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_306a58:
    // 0x306a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x306a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306a5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x306a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306a60: 0x3e00008  jr          $ra
    ctx->pc = 0x306A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A60u;
        // 0x306a64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306A68u;
}
