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

// Function: sub_00419660
// Address: 0x419660 - 0x4196e0
void sub_00419660_0x419660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419660_0x419660");
#endif

    switch (ctx->pc) {
        case 0x419678u: goto label_419678;
        default: break;
    }

    ctx->pc = 0x419660u;

    // 0x419660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x419664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x419668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41966c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419670: 0xc103d16  jal         func_40F458
    ctx->pc = 0x419670u;
    SET_GPR_U32(ctx, 31, 0x419678u);
    ctx->pc = 0x419674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419670u;
    // 0x419674: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x419670u, 0x419678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419678u;
label_419678:
    // 0x419678: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x419678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x41967c: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x41967cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x419680: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x419680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x419684: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x419684u;
    {
        const bool branch_taken_0x419684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419684) {
            ctx->pc = 0x419688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419684u;
            // 0x419688: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4196B4u;
            goto label_4196b4;
        }
    }
    ctx->pc = 0x41968Cu;
    // 0x41968c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41968cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x419690: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x419690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x419694: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x419694u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419698: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x419698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
    // 0x41969c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x41969cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x4196a0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4196a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4196a4: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x4196a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x4196a8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x4196a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x4196ac: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x4196acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E93Cu, _value); } while (0);
    // 0x4196b0: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x4196b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4196b4:
    // 0x4196b4: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x4196b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x4196b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4196b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4196bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4196bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4196c0: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x4196c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x4196c4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x4196c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x4196c8: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x4196c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x4196cc: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x4196ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x4196d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4196d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4196d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4196D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4196D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4196D4u;
        // 0x4196d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4196D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4196DCu;
    // 0x4196dc: 0x0  nop
    ctx->pc = 0x4196dcu;
    // NOP
    ctx->pc = 0x4196e0u;
}
