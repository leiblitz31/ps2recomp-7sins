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

// Function: sub_0019C1F0
// Address: 0x19c1f0 - 0x19c240
void sub_0019C1F0_0x19c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C1F0_0x19c1f0");
#endif

    switch (ctx->pc) {
        case 0x19c1f0u: goto label_19c1f0;
        case 0x19c1f4u: goto label_19c1f4;
        case 0x19c1f8u: goto label_19c1f8;
        case 0x19c1fcu: goto label_19c1fc;
        case 0x19c200u: goto label_19c200;
        case 0x19c204u: goto label_19c204;
        case 0x19c208u: goto label_19c208;
        case 0x19c20cu: goto label_19c20c;
        case 0x19c210u: goto label_19c210;
        case 0x19c214u: goto label_19c214;
        case 0x19c218u: goto label_19c218;
        case 0x19c21cu: goto label_19c21c;
        case 0x19c220u: goto label_19c220;
        case 0x19c224u: goto label_19c224;
        case 0x19c228u: goto label_19c228;
        case 0x19c22cu: goto label_19c22c;
        case 0x19c230u: goto label_19c230;
        case 0x19c234u: goto label_19c234;
        case 0x19c238u: goto label_19c238;
        case 0x19c23cu: goto label_19c23c;
        default: break;
    }

    ctx->pc = 0x19c1f0u;

label_19c1f0:
    // 0x19c1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19c1f4:
    // 0x19c1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19c1f8:
    // 0x19c1f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_19c1fc:
    // 0x19c1fc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x19c1fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19c200:
    // 0x19c200: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19c204:
    // 0x19c204: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x19c204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_19c208:
    // 0x19c208: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19c20c:
    if (ctx->pc == 0x19C20Cu) {
        ctx->pc = 0x19C210u;
        goto label_19c210;
    }
    ctx->pc = 0x19C208u;
    {
        const bool branch_taken_0x19c208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c208) {
            ctx->pc = 0x19C22Cu;
            goto label_19c22c;
        }
    }
    ctx->pc = 0x19C210u;
label_19c210:
    // 0x19c210: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x19c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_19c214:
    // 0x19c214: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x19c214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19c218:
    // 0x19c218: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x19c218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19c21c:
    // 0x19c21c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19c220:
    // 0x19c220: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x19c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19c224:
    // 0x19c224: 0x40f809  jalr        $v0
label_19c228:
    if (ctx->pc == 0x19C228u) {
        ctx->pc = 0x19C22Cu;
        goto label_19c22c;
    }
    ctx->pc = 0x19C224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C22Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C224u, 0x19C22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C22Cu;
label_19c22c:
    // 0x19c22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c230:
    // 0x19c230: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19c234:
    // 0x19c234: 0x3e00008  jr          $ra
label_19c238:
    if (ctx->pc == 0x19C238u) {
        ctx->pc = 0x19C23Cu;
        goto label_19c23c;
    }
    ctx->pc = 0x19C234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C23Cu;
label_19c23c:
    // 0x19c23c: 0x0  nop
    ctx->pc = 0x19c23cu;
    // NOP
    ctx->pc = 0x19c240u;
}
