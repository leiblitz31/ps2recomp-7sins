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

// Function: sub_00221430
// Address: 0x221430 - 0x221490
void sub_00221430_0x221430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221430_0x221430");
#endif

    switch (ctx->pc) {
        case 0x221454u: goto label_221454;
        case 0x221470u: goto label_221470;
        default: break;
    }

    ctx->pc = 0x221430u;

    // 0x221430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x221430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22143c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22143cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x221440: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x221440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x221444: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x221444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x221448: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x221448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22144c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22144Cu;
    SET_GPR_U32(ctx, 31, 0x221454u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22144Cu, 0x221454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221454u;
label_221454:
    // 0x221454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221458: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x221458u;
    {
        const bool branch_taken_0x221458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x221458) {
            ctx->pc = 0x221474u;
            goto label_221474;
        }
    }
    ctx->pc = 0x221460u;
    // 0x221460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221464: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x221464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221468: 0xc088524  jal         func_221490
    ctx->pc = 0x221468u;
    SET_GPR_U32(ctx, 31, 0x221470u);
    ctx->pc = 0x221490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221490u, 0x221468u, 0x221470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221470u;
label_221470:
    // 0x221470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_221474:
    // 0x221474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22147c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22147cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x221480: 0x3e00008  jr          $ra
    ctx->pc = 0x221480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221488u;
    // 0x221488: 0x0  nop
    ctx->pc = 0x221488u;
    // NOP
    // 0x22148c: 0x0  nop
    ctx->pc = 0x22148cu;
    // NOP
    ctx->pc = 0x221490u;
}
