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

// Function: sub_003A7C00
// Address: 0x3a7c00 - 0x3a7c78
void sub_003A7C00_0x3a7c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7C00_0x3a7c00");
#endif

    switch (ctx->pc) {
        case 0x3a7c5cu: goto label_3a7c5c;
        default: break;
    }

    ctx->pc = 0x3a7c00u;

    // 0x3a7c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7c04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a7c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a7c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a7c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a7c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7c10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a7c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7c14: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A7C14u;
    {
        const bool branch_taken_0x3a7c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C14u;
        // 0x3a7c18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7c14) {
            ctx->pc = 0x3A7C38u;
            goto label_3a7c38;
        }
    }
    ctx->pc = 0x3A7C1Cu;
    // 0x3a7c1c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3a7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3a7c20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3a7c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3a7c24: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3a7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3a7c28: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3a7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3a7c2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a7c30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7C30u;
    {
        const bool branch_taken_0x3a7c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C30u;
        // 0x3a7c34: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7c30) {
            ctx->pc = 0x3A7C48u;
            goto label_3a7c48;
        }
    }
    ctx->pc = 0x3A7C38u;
label_3a7c38:
    // 0x3a7c38: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3a7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3a7c3c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3a7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3a7c40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a7c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a7c44: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3a7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3a7c48:
    // 0x3a7c48: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3a7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3a7c4c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7C4Cu;
    {
        const bool branch_taken_0x3a7c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7c4c) {
            ctx->pc = 0x3A7C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7C4Cu;
            // 0x3a7c50: 0xae110068  sw          $s1, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7C60u;
            goto label_3a7c60;
        }
    }
    ctx->pc = 0x3A7C54u;
    // 0x3a7c54: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x3A7C54u;
    SET_GPR_U32(ctx, 31, 0x3A7C5Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3A7C54u, 0x3A7C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C5Cu;
label_3a7c5c:
    // 0x3a7c5c: 0xae110068  sw          $s1, 0x68($s0)
    ctx->pc = 0x3a7c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
label_3a7c60:
    // 0x3a7c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7c64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a7c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a7c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7c6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7c70: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C70u;
        // 0x3a7c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7C78u;
}
