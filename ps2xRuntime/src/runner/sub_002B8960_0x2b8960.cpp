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

// Function: sub_002B8960
// Address: 0x2b8960 - 0x2b89d0
void sub_002B8960_0x2b8960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8960_0x2b8960");
#endif

    switch (ctx->pc) {
        case 0x2b8994u: goto label_2b8994;
        case 0x2b89b4u: goto label_2b89b4;
        default: break;
    }

    ctx->pc = 0x2b8960u;

    // 0x2b8960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b8960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b8964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b8968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b896c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b896cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b8970: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b8970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b8974: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2b8974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2b8978: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2b8978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2b897c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8980: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2b8980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b8984: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b8984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8988: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b898c: 0xc04246c  jal         func_1091B0
    ctx->pc = 0x2B898Cu;
    SET_GPR_U32(ctx, 31, 0x2B8994u);
    ctx->pc = 0x1091B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1091B0u, 0x2B898Cu, 0x2B8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8994u;
label_2b8994:
    // 0x2b8994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8998: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2b8998u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b899c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b89a0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2b89a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b89a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b89a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89a8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2b89a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2b89ac: 0xc046a08  jal         func_11A820
    ctx->pc = 0x2B89ACu;
    SET_GPR_U32(ctx, 31, 0x2B89B4u);
    ctx->pc = 0x11A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A820u, 0x2B89ACu, 0x2B89B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89B4u;
label_2b89b4:
    // 0x2b89b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b89b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b89b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b89bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b89bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b89c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b89c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b89c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B89C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B89C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B89CCu;
    // 0x2b89cc: 0x0  nop
    ctx->pc = 0x2b89ccu;
    // NOP
    ctx->pc = 0x2b89d0u;
}
