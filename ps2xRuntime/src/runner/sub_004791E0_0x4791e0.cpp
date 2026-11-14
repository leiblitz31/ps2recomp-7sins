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

// Function: sub_004791E0
// Address: 0x4791e0 - 0x479240
void sub_004791E0_0x4791e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004791E0_0x4791e0");
#endif

    switch (ctx->pc) {
        case 0x479218u: goto label_479218;
        case 0x479228u: goto label_479228;
        default: break;
    }

    ctx->pc = 0x4791e0u;

    // 0x4791e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4791e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4791e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4791e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4791e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4791e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4791ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4791ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4791f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4791f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4791f4: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x4791f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x4791f8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4791f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4791fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4791fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x479200: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x479200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x479204: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x479204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x479208: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x479208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47920c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x47920cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479210: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x479210u;
    SET_GPR_U32(ctx, 31, 0x479218u);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x479210u, 0x479218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479218u;
label_479218:
    // 0x479218: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x479218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47921c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x47921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x479220: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x479220u;
    SET_GPR_U32(ctx, 31, 0x479228u);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x479220u, 0x479228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479228u;
label_479228:
    // 0x479228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47922c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x47922cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x479230: 0x3e00008  jr          $ra
    ctx->pc = 0x479230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479238u;
    // 0x479238: 0x0  nop
    ctx->pc = 0x479238u;
    // NOP
    // 0x47923c: 0x0  nop
    ctx->pc = 0x47923cu;
    // NOP
    ctx->pc = 0x479240u;
}
