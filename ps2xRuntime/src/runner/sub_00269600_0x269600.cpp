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

// Function: sub_00269600
// Address: 0x269600 - 0x269660
void sub_00269600_0x269600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269600_0x269600");
#endif

    switch (ctx->pc) {
        case 0x269624u: goto label_269624;
        case 0x269640u: goto label_269640;
        default: break;
    }

    ctx->pc = 0x269600u;

    // 0x269600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x269600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x269604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26960c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x269610: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x269610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x269614: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x269614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x269618: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x269618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26961c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26961Cu;
    SET_GPR_U32(ctx, 31, 0x269624u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26961Cu, 0x269624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269624u;
label_269624:
    // 0x269624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269628: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x269628u;
    {
        const bool branch_taken_0x269628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x269628) {
            ctx->pc = 0x269644u;
            goto label_269644;
        }
    }
    ctx->pc = 0x269630u;
    // 0x269630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269634: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x269634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269638: 0xc09a598  jal         func_269660
    ctx->pc = 0x269638u;
    SET_GPR_U32(ctx, 31, 0x269640u);
    ctx->pc = 0x269660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269660u, 0x269638u, 0x269640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269640u;
label_269640:
    // 0x269640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269644:
    // 0x269644: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x269644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26964c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26964cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x269650: 0x3e00008  jr          $ra
    ctx->pc = 0x269650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269658u;
    // 0x269658: 0x0  nop
    ctx->pc = 0x269658u;
    // NOP
    // 0x26965c: 0x0  nop
    ctx->pc = 0x26965cu;
    // NOP
    ctx->pc = 0x269660u;
}
