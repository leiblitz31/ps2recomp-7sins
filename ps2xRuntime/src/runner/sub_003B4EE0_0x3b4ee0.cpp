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

// Function: sub_003B4EE0
// Address: 0x3b4ee0 - 0x3b4f80
void sub_003B4EE0_0x3b4ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4EE0_0x3b4ee0");
#endif

    switch (ctx->pc) {
        case 0x3b4f3cu: goto label_3b4f3c;
        case 0x3b4f4cu: goto label_3b4f4c;
        case 0x3b4f5cu: goto label_3b4f5c;
        case 0x3b4f6cu: goto label_3b4f6c;
        default: break;
    }

    ctx->pc = 0x3b4ee0u;

    // 0x3b4ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b4ee4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b4ee8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b4ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b4eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b4ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ef4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b4ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b4ef8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B4EF8u;
    {
        const bool branch_taken_0x3b4ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EF8u;
        // 0x3b4efc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ef8) {
            ctx->pc = 0x3B4F44u;
            goto label_3b4f44;
        }
    }
    ctx->pc = 0x3B4F00u;
    // 0x3b4f00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4F00u;
    {
        const bool branch_taken_0x3b4f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F00u;
        // 0x3b4f04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f00) {
            ctx->pc = 0x3B4F18u;
            goto label_3b4f18;
        }
    }
    ctx->pc = 0x3B4F08u;
    // 0x3b4f08: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B4F08u;
    {
        const bool branch_taken_0x3b4f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F08u;
        // 0x3b4f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f08) {
            ctx->pc = 0x3B4F34u;
            goto label_3b4f34;
        }
    }
    ctx->pc = 0x3B4F10u;
    // 0x3b4f10: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3B4F10u;
    {
        const bool branch_taken_0x3b4f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F10u;
        // 0x3b4f14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f10) {
            ctx->pc = 0x3B4F74u;
            goto label_3b4f74;
        }
    }
    ctx->pc = 0x3B4F18u;
label_3b4f18:
    // 0x3b4f18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b4f1c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B4F1Cu;
    {
        const bool branch_taken_0x3b4f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F1Cu;
        // 0x3b4f20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f1c) {
            ctx->pc = 0x3B4F54u;
            goto label_3b4f54;
        }
    }
    ctx->pc = 0x3B4F24u;
    // 0x3b4f24: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B4F24u;
    {
        const bool branch_taken_0x3b4f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F24u;
        // 0x3b4f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f24) {
            ctx->pc = 0x3B4F64u;
            goto label_3b4f64;
        }
    }
    ctx->pc = 0x3B4F2Cu;
    // 0x3b4f2c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B4F2Cu;
    {
        const bool branch_taken_0x3b4f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F2Cu;
        // 0x3b4f30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f2c) {
            ctx->pc = 0x3B4F74u;
            goto label_3b4f74;
        }
    }
    ctx->pc = 0x3B4F34u;
label_3b4f34:
    // 0x3b4f34: 0xc0ed9ee  jal         func_3B67B8
    ctx->pc = 0x3B4F34u;
    SET_GPR_U32(ctx, 31, 0x3B4F3Cu);
    ctx->pc = 0x3B4F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F34u;
    // 0x3b4f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B67B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B67B8u, 0x3B4F34u, 0x3B4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F3Cu;
label_3b4f3c:
    // 0x3b4f3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B4F3Cu;
    {
        const bool branch_taken_0x3b4f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F3Cu;
        // 0x3b4f40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f3c) {
            ctx->pc = 0x3B4F70u;
            goto label_3b4f70;
        }
    }
    ctx->pc = 0x3B4F44u;
label_3b4f44:
    // 0x3b4f44: 0xc0ee452  jal         func_3B9148
    ctx->pc = 0x3B4F44u;
    SET_GPR_U32(ctx, 31, 0x3B4F4Cu);
    ctx->pc = 0x3B4F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F44u;
    // 0x3b4f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9148u, 0x3B4F44u, 0x3B4F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F4Cu;
label_3b4f4c:
    // 0x3b4f4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B4F4Cu;
    {
        const bool branch_taken_0x3b4f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F4Cu;
        // 0x3b4f50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f4c) {
            ctx->pc = 0x3B4F70u;
            goto label_3b4f70;
        }
    }
    ctx->pc = 0x3B4F54u;
label_3b4f54:
    // 0x3b4f54: 0xc0ed4d8  jal         func_3B5360
    ctx->pc = 0x3B4F54u;
    SET_GPR_U32(ctx, 31, 0x3B4F5Cu);
    ctx->pc = 0x3B4F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F54u;
    // 0x3b4f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5360u, 0x3B4F54u, 0x3B4F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F5Cu;
label_3b4f5c:
    // 0x3b4f5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4F5Cu;
    {
        const bool branch_taken_0x3b4f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F5Cu;
        // 0x3b4f60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f5c) {
            ctx->pc = 0x3B4F70u;
            goto label_3b4f70;
        }
    }
    ctx->pc = 0x3B4F64u;
label_3b4f64:
    // 0x3b4f64: 0xc0ece62  jal         func_3B3988
    ctx->pc = 0x3B4F64u;
    SET_GPR_U32(ctx, 31, 0x3B4F6Cu);
    ctx->pc = 0x3B4F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F64u;
    // 0x3b4f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3988u, 0x3B4F64u, 0x3B4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F6Cu;
label_3b4f6c:
    // 0x3b4f6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b4f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4f70:
    // 0x3b4f70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b4f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4f74:
    // 0x3b4f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4f78: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F78u;
        // 0x3b4f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4F80u;
}
