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

// Function: sub_0011A980
// Address: 0x11a980 - 0x11aa20
void sub_0011A980_0x11a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A980_0x11a980");
#endif

    switch (ctx->pc) {
        case 0x11a9bcu: goto label_11a9bc;
        case 0x11a9d4u: goto label_11a9d4;
        default: break;
    }

    ctx->pc = 0x11a980u;

    // 0x11a980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11a988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11a98c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11a98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11a990: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x11a990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x11a994: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a998: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11a998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11a99c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x11a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x11a9a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9a8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x11a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x11a9ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x11a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a9b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9b4: 0xc042264  jal         func_108990
    ctx->pc = 0x11A9B4u;
    SET_GPR_U32(ctx, 31, 0x11A9BCu);
    ctx->pc = 0x108990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108990u, 0x11A9B4u, 0x11A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9BCu;
label_11a9bc:
    // 0x11a9bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9c0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x11a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x11a9c4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a9c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9cc: 0xc04246c  jal         func_1091B0
    ctx->pc = 0x11A9CCu;
    SET_GPR_U32(ctx, 31, 0x11A9D4u);
    ctx->pc = 0x1091B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1091B0u, 0x11A9CCu, 0x11A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9D4u;
label_11a9d4:
    // 0x11a9d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11a9dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11a9e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x11a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x11a9ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a9f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11a9f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a9fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x11a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11aa00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aa04: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x11aa04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x11aa08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aa0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11aa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11aa14: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AA1Cu;
    // 0x11aa1c: 0x0  nop
    ctx->pc = 0x11aa1cu;
    // NOP
    ctx->pc = 0x11aa20u;
}
