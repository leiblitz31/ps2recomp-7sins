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

// Function: sub_00419E50
// Address: 0x419e50 - 0x419ec0
void sub_00419E50_0x419e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419E50_0x419e50");
#endif

    ctx->pc = 0x419e50u;

    // 0x419e50: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x419e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419e54: 0x8ce600a0  lw          $a2, 0xA0($a3)
    ctx->pc = 0x419e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x419e58: 0x90c80003  lbu         $t0, 0x3($a2)
    ctx->pc = 0x419e58u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x419e5c: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x419e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x419e60: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x419E60u;
    {
        const bool branch_taken_0x419e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419e60) {
            ctx->pc = 0x419E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419E60u;
            // 0x419e64: 0x8ce500a0  lw          $a1, 0xA0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419E90u;
            goto label_419e90;
        }
    }
    ctx->pc = 0x419E68u;
    // 0x419e68: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x419e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x419e6c: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x419e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x419e70: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x419e70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419e74: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x419e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
    // 0x419e78: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x419e78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x419e7c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x419e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x419e80: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x419e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419e84: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x419e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x419e88: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x419e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E93Cu, _value); } while (0);
    // 0x419e8c: 0x8ce500a0  lw          $a1, 0xA0($a3)
    ctx->pc = 0x419e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
label_419e90:
    // 0x419e90: 0x35040003  ori         $a0, $t0, 0x3
    ctx->pc = 0x419e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
    // 0x419e94: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x419e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419e98: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x419e98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x419e9c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x419e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x419ea0: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x419ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x419ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x419EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419EA4u;
        // 0x419ea8: 0xa0e30003  sb          $v1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419EACu;
    // 0x419eac: 0x0  nop
    ctx->pc = 0x419eacu;
    // NOP
    // 0x419eb0: 0xaf84ad84  sw          $a0, -0x527C($gp)
    ctx->pc = 0x419eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946180), GPR_U32(ctx, 4));
    // 0x419eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x419EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419EB4u;
        // 0x419eb8: 0xaf85ad88  sw          $a1, -0x5278($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946184), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419EBCu;
    // 0x419ebc: 0x0  nop
    ctx->pc = 0x419ebcu;
    // NOP
    ctx->pc = 0x419ec0u;
}
