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

// Function: sub_00244480
// Address: 0x244480 - 0x2444c0
void sub_00244480_0x244480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244480_0x244480");
#endif

    switch (ctx->pc) {
        case 0x2444acu: goto label_2444ac;
        default: break;
    }

    ctx->pc = 0x244480u;

    // 0x244480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244488: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x244488u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24448c: 0x3c024434  lui         $v0, 0x4434
    ctx->pc = 0x24448cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17460 << 16));
    // 0x244490: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x244490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244494: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x244494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244498: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x244498u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24449c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x24449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2444a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2444a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2444a4: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x2444A4u;
    SET_GPR_U32(ctx, 31, 0x2444ACu);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x2444A4u, 0x2444ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444ACu;
label_2444ac:
    // 0x2444ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2444acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2444b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2444b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2444b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2444B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2444B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2444BCu;
    // 0x2444bc: 0x0  nop
    ctx->pc = 0x2444bcu;
    // NOP
    ctx->pc = 0x2444c0u;
}
