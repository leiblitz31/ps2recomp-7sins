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

// Function: sub_002F7F50
// Address: 0x2f7f50 - 0x2f7fd8
void sub_002F7F50_0x2f7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7F50_0x2f7f50");
#endif

    switch (ctx->pc) {
        case 0x2f7fb0u: goto label_2f7fb0;
        case 0x2f7fc4u: goto label_2f7fc4;
        default: break;
    }

    ctx->pc = 0x2f7f50u;

    // 0x2f7f50: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f7f54: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7f58: 0x8c620ac8  lw          $v0, 0xAC8($v1)
    ctx->pc = 0x2f7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0AC8u));
    // 0x2f7f5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f7f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7f64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7F64u;
    {
        const bool branch_taken_0x2f7f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F64u;
        // 0x2f7f68: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f64) {
            ctx->pc = 0x2F7F74u;
            goto label_2f7f74;
        }
    }
    ctx->pc = 0x2F7F6Cu;
    // 0x2f7f6c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F7F6Cu;
    {
        const bool branch_taken_0x2f7f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F6Cu;
        // 0x2f7f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f6c) {
            ctx->pc = 0x2F7FC8u;
            goto label_2f7fc8;
        }
    }
    ctx->pc = 0x2F7F74u;
label_2f7f74:
    // 0x2f7f74: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f7f78: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2f7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2f7f7c: 0x2450c740  addiu       $s0, $v0, -0x38C0
    ctx->pc = 0x2f7f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x2f7f80: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f7f84: 0xac46c740  sw          $a2, -0x38C0($v0)
    ctx->pc = 0x2f7f84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x60C740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C740u, _value); } while (0);
    // 0x2f7f88: 0x2484c648  addiu       $a0, $a0, -0x39B8
    ctx->pc = 0x2f7f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
    // 0x2f7f8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f7f90: 0x34a51302  ori         $a1, $a1, 0x1302
    ctx->pc = 0x2f7f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4866);
    // 0x2f7f94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f7f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f9c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f7f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7fa0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f7fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7fa4: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f7fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7fa8: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F7FA8u;
    SET_GPR_U32(ctx, 31, 0x2F7FB0u);
    ctx->pc = 0x2F7FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7FA8u;
    // 0x2f7fac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F7FA8u, 0x2F7FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7FB0u;
label_2f7fb0:
    // 0x2f7fb0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7FB0u;
    {
        const bool branch_taken_0x2f7fb0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f7fb0) {
            ctx->pc = 0x2F7FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7FB0u;
            // 0x2f7fb4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7FC8u;
            goto label_2f7fc8;
        }
    }
    ctx->pc = 0x2F7FB8u;
    // 0x2f7fb8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f7fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7fbc: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F7FBCu;
    SET_GPR_U32(ctx, 31, 0x2F7FC4u);
    ctx->pc = 0x2F7FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7FBCu;
    // 0x2f7fc0: 0x24849d28  addiu       $a0, $a0, -0x62D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F7FBCu, 0x2F7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7FC4u;
label_2f7fc4:
    // 0x2f7fc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7fc8:
    // 0x2f7fc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7fcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FD0u;
        // 0x2f7fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7FD8u;
}
