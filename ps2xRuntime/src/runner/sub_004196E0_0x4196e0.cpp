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

// Function: sub_004196E0
// Address: 0x4196e0 - 0x419760
void sub_004196E0_0x4196e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004196E0_0x4196e0");
#endif

    switch (ctx->pc) {
        case 0x4196f8u: goto label_4196f8;
        default: break;
    }

    ctx->pc = 0x4196e0u;

    // 0x4196e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4196e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4196e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4196e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4196e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4196e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4196ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4196ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4196f0: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x4196F0u;
    SET_GPR_U32(ctx, 31, 0x4196F8u);
    ctx->pc = 0x4196F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4196F0u;
    // 0x4196f4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x4196F0u, 0x4196F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4196F8u;
label_4196f8:
    // 0x4196f8: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x4196f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x4196fc: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x4196fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x419700: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x419700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x419704: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x419704u;
    {
        const bool branch_taken_0x419704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419704) {
            ctx->pc = 0x419708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419704u;
            // 0x419708: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419734u;
            goto label_419734;
        }
    }
    ctx->pc = 0x41970Cu;
    // 0x41970c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41970cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x419710: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x419710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x419714: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x419714u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419718: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x419718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
    // 0x41971c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x41971cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x419720: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x419720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x419724: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x419724u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419728: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x419728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x41972c: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x41972cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E93Cu, _value); } while (0);
    // 0x419730: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x419730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_419734:
    // 0x419734: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x419734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x419738: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x419738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41973c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419740: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x419740u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x419744: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x419744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x419748: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x419748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x41974c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x41974cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x419750: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419754: 0x3e00008  jr          $ra
    ctx->pc = 0x419754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419754u;
        // 0x419758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41975Cu;
    // 0x41975c: 0x0  nop
    ctx->pc = 0x41975cu;
    // NOP
    ctx->pc = 0x419760u;
}
