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

// Function: sub_0025A6C0
// Address: 0x25a6c0 - 0x25a720
void sub_0025A6C0_0x25a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A6C0_0x25a6c0");
#endif

    ctx->pc = 0x25a6c0u;

    // 0x25a6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a6c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a6cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25a6d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25a6d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a6d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A6D8u;
    {
        const bool branch_taken_0x25a6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a6d8) {
            ctx->pc = 0x25A6F0u;
            goto label_25a6f0;
        }
    }
    ctx->pc = 0x25A6E0u;
    // 0x25a6e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a6e4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x25a6e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a6e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25A6E8u;
    {
        const bool branch_taken_0x25a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a6e8) {
            ctx->pc = 0x25A6F4u;
            goto label_25a6f4;
        }
    }
    ctx->pc = 0x25A6F0u;
label_25a6f0:
    // 0x25a6f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25a6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a6f4:
    // 0x25a6f4: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x25a6f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x25a6f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A6F8u;
    {
        const bool branch_taken_0x25a6f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a6f8) {
            ctx->pc = 0x25A70Cu;
            goto label_25a70c;
        }
    }
    ctx->pc = 0x25A700u;
    // 0x25a700: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25a700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a704: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a708: 0xac640144  sw          $a0, 0x144($v1)
    ctx->pc = 0x25a708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 4));
label_25a70c:
    // 0x25a70c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a714: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25a714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25a718: 0x3e00008  jr          $ra
    ctx->pc = 0x25A718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A720u;
}
