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

// Function: sub_00197190
// Address: 0x197190 - 0x1971f0
void sub_00197190_0x197190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197190_0x197190");
#endif

    ctx->pc = 0x197190u;

    // 0x197190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197194: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x197194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x197198: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x197198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x19719c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1971a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1971a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1971a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1971a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1971a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1971a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1971ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1971acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1971b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1971b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1971b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1971b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1971b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1971b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1971bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1971bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1971c0: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x1971c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1971c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1971c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1971c8: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1971c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1971cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1971ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1971d0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1971d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1971d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1971d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1971d8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1971d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1971dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1971dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1971e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1971e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1971e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1971E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1971E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1971ECu;
    // 0x1971ec: 0x0  nop
    ctx->pc = 0x1971ecu;
    // NOP
    ctx->pc = 0x1971f0u;
}
