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

// Function: sub_003C4F00
// Address: 0x3c4f00 - 0x3c4f80
void sub_003C4F00_0x3c4f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4F00_0x3c4f00");
#endif

    switch (ctx->pc) {
        case 0x3c4f30u: goto label_3c4f30;
        case 0x3c4f68u: goto label_3c4f68;
        default: break;
    }

    ctx->pc = 0x3c4f00u;

    // 0x3c4f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c4f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c4f04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c4f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c4f08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c4f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c4f0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c4f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c4f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c4f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4f14: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3c4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3c4f18: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4F18u;
    {
        const bool branch_taken_0x3c4f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c4f18) {
            ctx->pc = 0x3C4F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4F18u;
            // 0x3c4f1c: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4F34u;
            goto label_3c4f34;
        }
    }
    ctx->pc = 0x3C4F20u;
    // 0x3c4f20: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C4F20u;
    {
        const bool branch_taken_0x3c4f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4f20) {
            ctx->pc = 0x3C4F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4F20u;
            // 0x3c4f24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4F70u;
            goto label_3c4f70;
        }
    }
    ctx->pc = 0x3C4F28u;
    // 0x3c4f28: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3C4F28u;
    SET_GPR_U32(ctx, 31, 0x3C4F30u);
    ctx->pc = 0x3C4F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4F28u;
    // 0x3c4f2c: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4F28u, 0x3C4F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4F30u;
label_3c4f30:
    // 0x3c4f30: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x3c4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3c4f34:
    // 0x3c4f34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c4f38: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C4F38u;
    {
        const bool branch_taken_0x3c4f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c4f38) {
            ctx->pc = 0x3C4F60u;
            goto label_3c4f60;
        }
    }
    ctx->pc = 0x3C4F40u;
    // 0x3c4f40: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3c4f40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c4f44: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x3c4f44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c4f48: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3c4f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3c4f4c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3c4f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3c4f50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c4f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c4f54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c4f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c4f58: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4F58u;
    {
        const bool branch_taken_0x3c4f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F58u;
        // 0x3c4f5c: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4f58) {
            ctx->pc = 0x3C4F68u;
            goto label_3c4f68;
        }
    }
    ctx->pc = 0x3C4F60u;
label_3c4f60:
    // 0x3c4f60: 0xc0f0930  jal         func_3C24C0
    ctx->pc = 0x3C4F60u;
    SET_GPR_U32(ctx, 31, 0x3C4F68u);
    ctx->pc = 0x3C4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4F60u;
    // 0x3c4f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C24C0u, 0x3C4F60u, 0x3C4F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4F68u;
label_3c4f68:
    // 0x3c4f68: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3c4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3c4f6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c4f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4f70:
    // 0x3c4f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c4f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c4f74: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F74u;
        // 0x3c4f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4F7Cu;
    // 0x3c4f7c: 0x0  nop
    ctx->pc = 0x3c4f7cu;
    // NOP
    ctx->pc = 0x3c4f80u;
}
