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

// Function: sub_00485350
// Address: 0x485350 - 0x4853b0
void sub_00485350_0x485350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485350_0x485350");
#endif

    switch (ctx->pc) {
        case 0x485374u: goto label_485374;
        case 0x485390u: goto label_485390;
        default: break;
    }

    ctx->pc = 0x485350u;

    // 0x485350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x485350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x485354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x485358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48535c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x485360: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x485360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x485364: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x485364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x485368: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x485368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48536c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x48536Cu;
    SET_GPR_U32(ctx, 31, 0x485374u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x48536Cu, 0x485374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485374u;
label_485374:
    // 0x485374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x485374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485378: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x485378u;
    {
        const bool branch_taken_0x485378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x485378) {
            ctx->pc = 0x485394u;
            goto label_485394;
        }
    }
    ctx->pc = 0x485380u;
    // 0x485380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485384: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x485384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485388: 0xc1214ec  jal         func_4853B0
    ctx->pc = 0x485388u;
    SET_GPR_U32(ctx, 31, 0x485390u);
    ctx->pc = 0x4853B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4853B0u, 0x485388u, 0x485390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485390u;
label_485390:
    // 0x485390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x485390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485394:
    // 0x485394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48539c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48539cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4853a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4853A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4853A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4853A8u;
    // 0x4853a8: 0x0  nop
    ctx->pc = 0x4853a8u;
    // NOP
    // 0x4853ac: 0x0  nop
    ctx->pc = 0x4853acu;
    // NOP
    ctx->pc = 0x4853b0u;
}
