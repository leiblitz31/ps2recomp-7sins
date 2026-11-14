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

// Function: sub_0048C720
// Address: 0x48c720 - 0x48c7e0
void sub_0048C720_0x48c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C720_0x48c720");
#endif

    ctx->pc = 0x48c720u;

    // 0x48c720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48c724: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48c724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48c728: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x48c728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48c72c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c730: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48c734: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c738: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48c738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x48c73c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c740: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x48c740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48c744: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c748: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x48c748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x48c74c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c750: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x48c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48c754: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c758: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x48c758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x48c75c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c760: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x48c760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x48c764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c768: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x48c768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x48c76c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c770: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x48c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x48c774: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c778: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x48c778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x48c77c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c780: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x48c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x48c784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c788: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x48c788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x48c78c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c790: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x48c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x48c794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c798: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48c798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x48c79c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c7a0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x48c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x48c7a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c7a8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x48c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x48c7ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c7b0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x48c7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48c7b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c7b8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x48c7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x48c7bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c7c0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x48c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x48c7c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c7c8: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x48c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x48c7cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c7d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48c7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x48C7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C7DCu;
    // 0x48c7dc: 0x0  nop
    ctx->pc = 0x48c7dcu;
    // NOP
    ctx->pc = 0x48c7e0u;
}
