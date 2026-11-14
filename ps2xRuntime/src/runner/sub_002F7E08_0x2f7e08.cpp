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

// Function: sub_002F7E08
// Address: 0x2f7e08 - 0x2f7e78
void sub_002F7E08_0x2f7e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7E08_0x2f7e08");
#endif

    switch (ctx->pc) {
        case 0x2f7e4cu: goto label_2f7e4c;
        case 0x2f7e60u: goto label_2f7e60;
        default: break;
    }

    ctx->pc = 0x2f7e08u;

    // 0x2f7e08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7e0c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f7e10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7e14: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f7e18: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x2f7e18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x2f7e1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7e20: 0x2607c740  addiu       $a3, $s0, -0x38C0
    ctx->pc = 0x2f7e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952768));
    // 0x2f7e24: 0x34a51304  ori         $a1, $a1, 0x1304
    ctx->pc = 0x2f7e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4868);
    // 0x2f7e28: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x2f7e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60C744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C744u, _value); } while (0);
    // 0x2f7e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e30: 0x2444c648  addiu       $a0, $v0, -0x39B8
    ctx->pc = 0x2f7e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952520));
    // 0x2f7e34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f7e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f7e38: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f7e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7e3c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f7e3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e40: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f7e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7e44: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F7E44u;
    SET_GPR_U32(ctx, 31, 0x2F7E4Cu);
    ctx->pc = 0x2F7E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E44u;
    // 0x2f7e48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F7E44u, 0x2F7E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E4Cu;
label_2f7e4c:
    // 0x2f7e4c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7E4Cu;
    {
        const bool branch_taken_0x2f7e4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E4Cu;
        // 0x2f7e50: 0x8e02c740  lw          $v0, -0x38C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e4c) {
            ctx->pc = 0x2F7E64u;
            goto label_2f7e64;
        }
    }
    ctx->pc = 0x2F7E54u;
    // 0x2f7e54: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f7e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7e58: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F7E58u;
    SET_GPR_U32(ctx, 31, 0x2F7E60u);
    ctx->pc = 0x2F7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E58u;
    // 0x2f7e5c: 0x24849ce8  addiu       $a0, $a0, -0x6318 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F7E58u, 0x2F7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E60u;
label_2f7e60:
    // 0x2f7e60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e64:
    // 0x2f7e64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7e68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E6Cu;
        // 0x2f7e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7E74u;
    // 0x2f7e74: 0x0  nop
    ctx->pc = 0x2f7e74u;
    // NOP
    ctx->pc = 0x2f7e78u;
}
