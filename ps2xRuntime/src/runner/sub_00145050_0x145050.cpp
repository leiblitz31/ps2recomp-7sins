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

// Function: sub_00145050
// Address: 0x145050 - 0x1450a0
void sub_00145050_0x145050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145050_0x145050");
#endif

    switch (ctx->pc) {
        case 0x145050u: goto label_145050;
        case 0x145054u: goto label_145054;
        case 0x145058u: goto label_145058;
        case 0x14505cu: goto label_14505c;
        case 0x145060u: goto label_145060;
        case 0x145064u: goto label_145064;
        case 0x145068u: goto label_145068;
        case 0x14506cu: goto label_14506c;
        case 0x145070u: goto label_145070;
        case 0x145074u: goto label_145074;
        case 0x145078u: goto label_145078;
        case 0x14507cu: goto label_14507c;
        case 0x145080u: goto label_145080;
        case 0x145084u: goto label_145084;
        case 0x145088u: goto label_145088;
        case 0x14508cu: goto label_14508c;
        case 0x145090u: goto label_145090;
        case 0x145094u: goto label_145094;
        case 0x145098u: goto label_145098;
        case 0x14509cu: goto label_14509c;
        default: break;
    }

    ctx->pc = 0x145050u;

label_145050:
    // 0x145050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x145050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_145054:
    // 0x145054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_145058:
    // 0x145058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x145058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14505c:
    // 0x14505c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14505cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_145060:
    // 0x145060: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x145060u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_145064:
    // 0x145064: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x145064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_145068:
    // 0x145068: 0xc086230  jal         func_2188C0
label_14506c:
    if (ctx->pc == 0x14506Cu) {
        ctx->pc = 0x145070u;
        goto label_145070;
    }
    ctx->pc = 0x145068u;
    SET_GPR_U32(ctx, 31, 0x145070u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x145068u, 0x145070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145070u;
label_145070:
    // 0x145070: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x145070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_145074:
    // 0x145074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145078:
    // 0x145078: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x145078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14507c:
    // 0x14507c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14507cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_145080:
    // 0x145080: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x145080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_145084:
    // 0x145084: 0x320f809  jalr        $t9
label_145088:
    if (ctx->pc == 0x145088u) {
        ctx->pc = 0x14508Cu;
        goto label_14508c;
    }
    ctx->pc = 0x145084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14508Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145084u, 0x14508Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14508Cu;
label_14508c:
    // 0x14508c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145090:
    // 0x145090: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x145090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_145094:
    // 0x145094: 0x3e00008  jr          $ra
label_145098:
    if (ctx->pc == 0x145098u) {
        ctx->pc = 0x14509Cu;
        goto label_14509c;
    }
    ctx->pc = 0x145094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14509Cu;
label_14509c:
    // 0x14509c: 0x0  nop
    ctx->pc = 0x14509cu;
    // NOP
    ctx->pc = 0x1450a0u;
}
