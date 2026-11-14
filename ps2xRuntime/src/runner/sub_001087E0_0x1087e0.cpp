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

// Function: sub_001087E0
// Address: 0x1087e0 - 0x108850
void sub_001087E0_0x1087e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001087E0_0x1087e0");
#endif

    ctx->pc = 0x1087e0u;

    // 0x1087e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1087e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1087e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1087e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1087e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1087e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1087ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1087ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1087f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1087f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1087f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1087f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1087f8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1087f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1087fc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1087FCu;
    {
        const bool branch_taken_0x1087fc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1087fc) {
            ctx->pc = 0x108810u;
            goto label_108810;
        }
    }
    ctx->pc = 0x108804u;
    // 0x108804: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x108804u;
    {
        const bool branch_taken_0x108804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108804) {
            ctx->pc = 0x108810u;
            goto label_108810;
        }
    }
    ctx->pc = 0x10880Cu;
    // 0x10880c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x10880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_108810:
    // 0x108810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108810u;
    {
        const bool branch_taken_0x108810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108810) {
            ctx->pc = 0x108828u;
            goto label_108828;
        }
    }
    ctx->pc = 0x108818u;
    // 0x108818: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10881c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x10881cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x108820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108820u;
    {
        const bool branch_taken_0x108820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108820) {
            ctx->pc = 0x108830u;
            goto label_108830;
        }
    }
    ctx->pc = 0x108828u;
label_108828:
    // 0x108828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10882c: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10882cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_108830:
    // 0x108830: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x108830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108838: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x108838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10883c: 0x3e00008  jr          $ra
    ctx->pc = 0x10883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10883Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108844u;
    // 0x108844: 0x0  nop
    ctx->pc = 0x108844u;
    // NOP
    // 0x108848: 0x0  nop
    ctx->pc = 0x108848u;
    // NOP
    // 0x10884c: 0x0  nop
    ctx->pc = 0x10884cu;
    // NOP
    ctx->pc = 0x108850u;
}
