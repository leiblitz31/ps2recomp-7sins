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

// Function: sub_00102AC0
// Address: 0x102ac0 - 0x102b00
void sub_00102AC0_0x102ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102AC0_0x102ac0");
#endif

    switch (ctx->pc) {
        case 0x102ac0u: goto label_102ac0;
        case 0x102ac4u: goto label_102ac4;
        case 0x102ac8u: goto label_102ac8;
        case 0x102accu: goto label_102acc;
        case 0x102ad0u: goto label_102ad0;
        case 0x102ad4u: goto label_102ad4;
        case 0x102ad8u: goto label_102ad8;
        case 0x102adcu: goto label_102adc;
        case 0x102ae0u: goto label_102ae0;
        case 0x102ae4u: goto label_102ae4;
        case 0x102ae8u: goto label_102ae8;
        case 0x102aecu: goto label_102aec;
        case 0x102af0u: goto label_102af0;
        case 0x102af4u: goto label_102af4;
        case 0x102af8u: goto label_102af8;
        case 0x102afcu: goto label_102afc;
        default: break;
    }

    ctx->pc = 0x102ac0u;

label_102ac0:
    // 0x102ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_102ac4:
    // 0x102ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_102ac8:
    // 0x102ac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_102acc:
    // 0x102acc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x102accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_102ad0:
    // 0x102ad0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x102ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_102ad4:
    // 0x102ad4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102ad8:
    // 0x102ad8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x102ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102adc:
    // 0x102adc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x102adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_102ae0:
    // 0x102ae0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102ae4:
    // 0x102ae4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x102ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_102ae8:
    // 0x102ae8: 0x320f809  jalr        $t9
label_102aec:
    if (ctx->pc == 0x102AECu) {
        ctx->pc = 0x102AF0u;
        goto label_102af0;
    }
    ctx->pc = 0x102AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102AF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102AE8u, 0x102AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102AF0u;
label_102af0:
    // 0x102af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_102af4:
    // 0x102af4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x102af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_102af8:
    // 0x102af8: 0x3e00008  jr          $ra
label_102afc:
    if (ctx->pc == 0x102AFCu) {
        ctx->pc = 0x102B00u;
        goto label_fallthrough_0x102af8;
    }
    ctx->pc = 0x102AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x102af8:
    ctx->pc = 0x102B00u;
}
