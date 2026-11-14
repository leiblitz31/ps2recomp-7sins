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

// Function: sub_002B2160
// Address: 0x2b2160 - 0x2b21a0
void sub_002B2160_0x2b2160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2160_0x2b2160");
#endif

    switch (ctx->pc) {
        case 0x2b2160u: goto label_2b2160;
        case 0x2b2164u: goto label_2b2164;
        case 0x2b2168u: goto label_2b2168;
        case 0x2b216cu: goto label_2b216c;
        case 0x2b2170u: goto label_2b2170;
        case 0x2b2174u: goto label_2b2174;
        case 0x2b2178u: goto label_2b2178;
        case 0x2b217cu: goto label_2b217c;
        case 0x2b2180u: goto label_2b2180;
        case 0x2b2184u: goto label_2b2184;
        case 0x2b2188u: goto label_2b2188;
        case 0x2b218cu: goto label_2b218c;
        case 0x2b2190u: goto label_2b2190;
        case 0x2b2194u: goto label_2b2194;
        case 0x2b2198u: goto label_2b2198;
        case 0x2b219cu: goto label_2b219c;
        default: break;
    }

    ctx->pc = 0x2b2160u;

label_2b2160:
    // 0x2b2160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b2164:
    // 0x2b2164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b2168:
    // 0x2b2168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b2168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b216c:
    // 0x2b216c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b216cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2b2170:
    // 0x2b2170: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2174:
    // 0x2b2174: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2b2174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b2178:
    // 0x2b2178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b217c:
    // 0x2b217c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b217cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2180:
    // 0x2b2180: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b2180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b2184:
    // 0x2b2184: 0x320f809  jalr        $t9
label_2b2188:
    if (ctx->pc == 0x2B2188u) {
        ctx->pc = 0x2B218Cu;
        goto label_2b218c;
    }
    ctx->pc = 0x2B2184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B218Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2184u, 0x2B218Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B218Cu;
label_2b218c:
    // 0x2b218c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b218cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2190:
    // 0x2b2190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2194:
    // 0x2b2194: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b2194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b2198:
    // 0x2b2198: 0x3e00008  jr          $ra
label_2b219c:
    if (ctx->pc == 0x2B219Cu) {
        ctx->pc = 0x2B21A0u;
        goto label_fallthrough_0x2b2198;
    }
    ctx->pc = 0x2B2198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b2198:
    ctx->pc = 0x2B21A0u;
}
