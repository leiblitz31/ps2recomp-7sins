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

// Function: sub_0046B100
// Address: 0x46b100 - 0x46b160
void sub_0046B100_0x46b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B100_0x46b100");
#endif

    switch (ctx->pc) {
        case 0x46b124u: goto label_46b124;
        case 0x46b140u: goto label_46b140;
        default: break;
    }

    ctx->pc = 0x46b100u;

    // 0x46b100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46b104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46b104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46b108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46b10c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46b110: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46b110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46b114: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x46b114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x46b118: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b11c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x46B11Cu;
    SET_GPR_U32(ctx, 31, 0x46B124u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x46B11Cu, 0x46B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B124u;
label_46b124:
    // 0x46b124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46b124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b128: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x46B128u;
    {
        const bool branch_taken_0x46b128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b128) {
            ctx->pc = 0x46B144u;
            goto label_46b144;
        }
    }
    ctx->pc = 0x46B130u;
    // 0x46b130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46b130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b134: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46b134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b138: 0xc11ac58  jal         func_46B160
    ctx->pc = 0x46B138u;
    SET_GPR_U32(ctx, 31, 0x46B140u);
    ctx->pc = 0x46B160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B160u, 0x46B138u, 0x46B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B140u;
label_46b140:
    // 0x46b140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46b140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b144:
    // 0x46b144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46b144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46b148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b14c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46b14cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46b150: 0x3e00008  jr          $ra
    ctx->pc = 0x46B150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B158u;
    // 0x46b158: 0x0  nop
    ctx->pc = 0x46b158u;
    // NOP
    // 0x46b15c: 0x0  nop
    ctx->pc = 0x46b15cu;
    // NOP
    ctx->pc = 0x46b160u;
}
