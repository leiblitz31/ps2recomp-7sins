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

// Function: sub_0019D230
// Address: 0x19d230 - 0x19d290
void sub_0019D230_0x19d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D230_0x19d230");
#endif

    switch (ctx->pc) {
        case 0x19d254u: goto label_19d254;
        case 0x19d270u: goto label_19d270;
        default: break;
    }

    ctx->pc = 0x19d230u;

    // 0x19d230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d23c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19d240: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19d240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19d244: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x19d244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19d248: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19d248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d24c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x19D24Cu;
    SET_GPR_U32(ctx, 31, 0x19D254u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x19D24Cu, 0x19D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D254u;
label_19d254:
    // 0x19d254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d258: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D258u;
    {
        const bool branch_taken_0x19d258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d258) {
            ctx->pc = 0x19D274u;
            goto label_19d274;
        }
    }
    ctx->pc = 0x19D260u;
    // 0x19d260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d264: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19d264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d268: 0xc067520  jal         func_19D480
    ctx->pc = 0x19D268u;
    SET_GPR_U32(ctx, 31, 0x19D270u);
    ctx->pc = 0x19D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D480u, 0x19D268u, 0x19D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D270u;
label_19d270:
    // 0x19d270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d274:
    // 0x19d274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d27c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19d27cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19d280: 0x3e00008  jr          $ra
    ctx->pc = 0x19D280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D288u;
    // 0x19d288: 0x0  nop
    ctx->pc = 0x19d288u;
    // NOP
    // 0x19d28c: 0x0  nop
    ctx->pc = 0x19d28cu;
    // NOP
    ctx->pc = 0x19d290u;
}
