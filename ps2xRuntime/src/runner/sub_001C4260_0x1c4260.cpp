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

// Function: sub_001C4260
// Address: 0x1c4260 - 0x1c42d0
void sub_001C4260_0x1c4260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4260_0x1c4260");
#endif

    switch (ctx->pc) {
        case 0x1c4294u: goto label_1c4294;
        case 0x1c42b4u: goto label_1c42b4;
        default: break;
    }

    ctx->pc = 0x1c4260u;

    // 0x1c4260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c4260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c4264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c426c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c426cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c4270: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c4270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c4274: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1c4274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1c4278: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1c4278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1c427c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4280: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c4280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c4284: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c4284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c428c: 0xc04484c  jal         func_112130
    ctx->pc = 0x1C428Cu;
    SET_GPR_U32(ctx, 31, 0x1C4294u);
    ctx->pc = 0x112130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112130u, 0x1C428Cu, 0x1C4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4294u;
label_1c4294:
    // 0x1c4294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4298: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1c4298u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c429c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c429cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c42a0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1c42a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c42a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c42a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42a8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1c42a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c42ac: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1C42ACu;
    SET_GPR_U32(ctx, 31, 0x1C42B4u);
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1C42ACu, 0x1C42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42B4u;
label_1c42b4:
    // 0x1c42b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c42b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c42b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c42bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c42bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c42c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c42c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c42c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C42C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C42C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C42CCu;
    // 0x1c42cc: 0x0  nop
    ctx->pc = 0x1c42ccu;
    // NOP
    ctx->pc = 0x1c42d0u;
}
