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

// Function: sub_0048FD00
// Address: 0x48fd00 - 0x48fd60
void sub_0048FD00_0x48fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FD00_0x48fd00");
#endif

    switch (ctx->pc) {
        case 0x48fd24u: goto label_48fd24;
        case 0x48fd40u: goto label_48fd40;
        default: break;
    }

    ctx->pc = 0x48fd00u;

    // 0x48fd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48fd04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48fd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48fd0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48fd10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x48fd14: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x48fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x48fd18: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fd1c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x48FD1Cu;
    SET_GPR_U32(ctx, 31, 0x48FD24u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x48FD1Cu, 0x48FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FD24u;
label_48fd24:
    // 0x48fd24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48fd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fd28: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48FD28u;
    {
        const bool branch_taken_0x48fd28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fd28) {
            ctx->pc = 0x48FD44u;
            goto label_48fd44;
        }
    }
    ctx->pc = 0x48FD30u;
    // 0x48fd30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48fd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fd34: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48fd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48fd38: 0xc123f58  jal         func_48FD60
    ctx->pc = 0x48FD38u;
    SET_GPR_U32(ctx, 31, 0x48FD40u);
    ctx->pc = 0x48FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FD60u, 0x48FD38u, 0x48FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FD40u;
label_48fd40:
    // 0x48fd40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48fd40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48fd44:
    // 0x48fd44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48fd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fd48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48fd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fd4c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48fd4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48fd50: 0x3e00008  jr          $ra
    ctx->pc = 0x48FD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FD58u;
    // 0x48fd58: 0x0  nop
    ctx->pc = 0x48fd58u;
    // NOP
    // 0x48fd5c: 0x0  nop
    ctx->pc = 0x48fd5cu;
    // NOP
    ctx->pc = 0x48fd60u;
}
