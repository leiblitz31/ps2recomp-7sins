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

// Function: sub_00183980
// Address: 0x183980 - 0x183a00
void sub_00183980_0x183980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183980_0x183980");
#endif

    switch (ctx->pc) {
        case 0x1839b4u: goto label_1839b4;
        case 0x1839c4u: goto label_1839c4;
        case 0x1839e4u: goto label_1839e4;
        default: break;
    }

    ctx->pc = 0x183980u;

    // 0x183980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18398c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18398cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x183990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183994: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x183994u;
    {
        const bool branch_taken_0x183994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183994) {
            ctx->pc = 0x1839E4u;
            goto label_1839e4;
        }
    }
    ctx->pc = 0x18399Cu;
    // 0x18399c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1839a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1839a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1839a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1839a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1839a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1839a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1839ac: 0xc060eac  jal         func_183AB0
    ctx->pc = 0x1839ACu;
    SET_GPR_U32(ctx, 31, 0x1839B4u);
    ctx->pc = 0x183AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AB0u, 0x1839ACu, 0x1839B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839B4u;
label_1839b4:
    // 0x1839b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1839b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1839b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1839b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839bc: 0xc060e80  jal         func_183A00
    ctx->pc = 0x1839BCu;
    SET_GPR_U32(ctx, 31, 0x1839C4u);
    ctx->pc = 0x183A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A00u, 0x1839BCu, 0x1839C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839C4u;
label_1839c4:
    // 0x1839c4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1839c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1839c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1839c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1839cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1839ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1839d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1839D0u;
    {
        const bool branch_taken_0x1839d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1839d0) {
            ctx->pc = 0x1839E4u;
            goto label_1839e4;
        }
    }
    ctx->pc = 0x1839D8u;
    // 0x1839d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1839d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1839dc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1839DCu;
    SET_GPR_U32(ctx, 31, 0x1839E4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1839DCu, 0x1839E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839E4u;
label_1839e4:
    // 0x1839e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1839e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1839e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1839e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1839ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1839f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1839F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1839F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1839F8u;
    // 0x1839f8: 0x0  nop
    ctx->pc = 0x1839f8u;
    // NOP
    // 0x1839fc: 0x0  nop
    ctx->pc = 0x1839fcu;
    // NOP
    ctx->pc = 0x183a00u;
}
