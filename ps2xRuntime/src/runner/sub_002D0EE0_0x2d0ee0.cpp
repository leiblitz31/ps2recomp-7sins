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

// Function: sub_002D0EE0
// Address: 0x2d0ee0 - 0x2d0f60
void sub_002D0EE0_0x2d0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0EE0_0x2d0ee0");
#endif

    switch (ctx->pc) {
        case 0x2d0f14u: goto label_2d0f14;
        case 0x2d0f34u: goto label_2d0f34;
        default: break;
    }

    ctx->pc = 0x2d0ee0u;

    // 0x2d0ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0ee8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d0eec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d0ef0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2d0ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2d0ef4: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2d0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2d0ef8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2d0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2d0efc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0f00: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x2d0f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d0f04: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2d0f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0f08: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2d0f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0f0c: 0xc0b4648  jal         func_2D1920
    ctx->pc = 0x2D0F0Cu;
    SET_GPR_U32(ctx, 31, 0x2D0F14u);
    ctx->pc = 0x2D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1920u, 0x2D0F0Cu, 0x2D0F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F14u;
label_2d0f14:
    // 0x2d0f14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0F14u;
    {
        const bool branch_taken_0x2d0f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f14) {
            ctx->pc = 0x2D0F40u;
            goto label_2d0f40;
        }
    }
    ctx->pc = 0x2D0F1Cu;
    // 0x2d0f1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0f20: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d0f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0f24: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x2d0f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2d0f28: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x2d0f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0f2c: 0xc0b44cc  jal         func_2D1330
    ctx->pc = 0x2D0F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D0F34u);
    ctx->pc = 0x2D1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1330u, 0x2D0F2Cu, 0x2D0F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F34u;
label_2d0f34:
    // 0x2d0f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0f38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0F38u;
    {
        const bool branch_taken_0x2d0f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f38) {
            ctx->pc = 0x2D0F44u;
            goto label_2d0f44;
        }
    }
    ctx->pc = 0x2D0F40u;
label_2d0f40:
    // 0x2d0f40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0f44:
    // 0x2d0f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0f48: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d0f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d0f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0F54u;
    // 0x2d0f54: 0x0  nop
    ctx->pc = 0x2d0f54u;
    // NOP
    // 0x2d0f58: 0x0  nop
    ctx->pc = 0x2d0f58u;
    // NOP
    // 0x2d0f5c: 0x0  nop
    ctx->pc = 0x2d0f5cu;
    // NOP
    ctx->pc = 0x2d0f60u;
}
