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

// Function: sub_001081B0
// Address: 0x1081b0 - 0x108200
void sub_001081B0_0x1081b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001081B0_0x1081b0");
#endif

    switch (ctx->pc) {
        case 0x1081b0u: goto label_1081b0;
        case 0x1081b4u: goto label_1081b4;
        case 0x1081b8u: goto label_1081b8;
        case 0x1081bcu: goto label_1081bc;
        case 0x1081c0u: goto label_1081c0;
        case 0x1081c4u: goto label_1081c4;
        case 0x1081c8u: goto label_1081c8;
        case 0x1081ccu: goto label_1081cc;
        case 0x1081d0u: goto label_1081d0;
        case 0x1081d4u: goto label_1081d4;
        case 0x1081d8u: goto label_1081d8;
        case 0x1081dcu: goto label_1081dc;
        case 0x1081e0u: goto label_1081e0;
        case 0x1081e4u: goto label_1081e4;
        case 0x1081e8u: goto label_1081e8;
        case 0x1081ecu: goto label_1081ec;
        case 0x1081f0u: goto label_1081f0;
        case 0x1081f4u: goto label_1081f4;
        case 0x1081f8u: goto label_1081f8;
        case 0x1081fcu: goto label_1081fc;
        default: break;
    }

    ctx->pc = 0x1081b0u;

label_1081b0:
    // 0x1081b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1081b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1081b4:
    // 0x1081b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1081b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1081b8:
    // 0x1081b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1081b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1081bc:
    // 0x1081bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1081bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1081c0:
    // 0x1081c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1081c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_1081c4:
    // 0x1081c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1081c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1081c8:
    // 0x1081c8: 0xc086230  jal         func_2188C0
label_1081cc:
    if (ctx->pc == 0x1081CCu) {
        ctx->pc = 0x1081D0u;
        goto label_1081d0;
    }
    ctx->pc = 0x1081C8u;
    SET_GPR_U32(ctx, 31, 0x1081D0u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x1081C8u, 0x1081D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1081D0u;
label_1081d0:
    // 0x1081d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1081d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1081d4:
    // 0x1081d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1081d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1081d8:
    // 0x1081d8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1081d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1081dc:
    // 0x1081dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1081dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1081e0:
    // 0x1081e0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1081e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1081e4:
    // 0x1081e4: 0x320f809  jalr        $t9
label_1081e8:
    if (ctx->pc == 0x1081E8u) {
        ctx->pc = 0x1081ECu;
        goto label_1081ec;
    }
    ctx->pc = 0x1081E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1081ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1081E4u, 0x1081ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1081ECu;
label_1081ec:
    // 0x1081ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1081ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1081f0:
    // 0x1081f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1081f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1081f4:
    // 0x1081f4: 0x3e00008  jr          $ra
label_1081f8:
    if (ctx->pc == 0x1081F8u) {
        ctx->pc = 0x1081FCu;
        goto label_1081fc;
    }
    ctx->pc = 0x1081F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1081F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1081FCu;
label_1081fc:
    // 0x1081fc: 0x0  nop
    ctx->pc = 0x1081fcu;
    // NOP
    ctx->pc = 0x108200u;
}
