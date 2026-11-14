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

// Function: sub_00108240
// Address: 0x108240 - 0x108280
void sub_00108240_0x108240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108240_0x108240");
#endif

    switch (ctx->pc) {
        case 0x108240u: goto label_108240;
        case 0x108244u: goto label_108244;
        case 0x108248u: goto label_108248;
        case 0x10824cu: goto label_10824c;
        case 0x108250u: goto label_108250;
        case 0x108254u: goto label_108254;
        case 0x108258u: goto label_108258;
        case 0x10825cu: goto label_10825c;
        case 0x108260u: goto label_108260;
        case 0x108264u: goto label_108264;
        case 0x108268u: goto label_108268;
        case 0x10826cu: goto label_10826c;
        case 0x108270u: goto label_108270;
        case 0x108274u: goto label_108274;
        case 0x108278u: goto label_108278;
        case 0x10827cu: goto label_10827c;
        default: break;
    }

    ctx->pc = 0x108240u;

label_108240:
    // 0x108240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_108244:
    // 0x108244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_108248:
    // 0x108248: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10824c:
    // 0x10824c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10824cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_108250:
    // 0x108250: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x108250u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_108254:
    // 0x108254: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x108254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_108258:
    // 0x108258: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x108258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10825c:
    // 0x10825c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x10825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_108260:
    // 0x108260: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x108260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_108264:
    // 0x108264: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x108264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_108268:
    // 0x108268: 0x320f809  jalr        $t9
label_10826c:
    if (ctx->pc == 0x10826Cu) {
        ctx->pc = 0x108270u;
        goto label_108270;
    }
    ctx->pc = 0x108268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x108270u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108268u, 0x108270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108270u;
label_108270:
    // 0x108270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108274:
    // 0x108274: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x108274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_108278:
    // 0x108278: 0x3e00008  jr          $ra
label_10827c:
    if (ctx->pc == 0x10827Cu) {
        ctx->pc = 0x108280u;
        goto label_fallthrough_0x108278;
    }
    ctx->pc = 0x108278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x108278:
    ctx->pc = 0x108280u;
}
