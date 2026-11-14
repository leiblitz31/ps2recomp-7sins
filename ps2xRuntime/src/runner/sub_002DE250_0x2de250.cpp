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

// Function: sub_002DE250
// Address: 0x2de250 - 0x2de2d0
void sub_002DE250_0x2de250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE250_0x2de250");
#endif

    switch (ctx->pc) {
        case 0x2de274u: goto label_2de274;
        case 0x2de2b8u: goto label_2de2b8;
        default: break;
    }

    ctx->pc = 0x2de250u;

    // 0x2de250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de258: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2de258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2de25c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2de25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de264: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de268: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2de268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de26c: 0xc0b77c0  jal         func_2DDF00
    ctx->pc = 0x2DE26Cu;
    SET_GPR_U32(ctx, 31, 0x2DE274u);
    ctx->pc = 0x2DDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF00u, 0x2DE26Cu, 0x2DE274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE274u;
label_2de274:
    // 0x2de274: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2de274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de278: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2de278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de27c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de280: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2de280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2de284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de288: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2de288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de28c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2de28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de290: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2de290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2de294: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2de294u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2de298: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE298u;
    {
        const bool branch_taken_0x2de298 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2de298) {
            ctx->pc = 0x2DE2A8u;
            goto label_2de2a8;
        }
    }
    ctx->pc = 0x2DE2A0u;
    // 0x2de2a0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2de2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2de2a4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2de2a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2de2a8:
    // 0x2de2a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2de2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2de2ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2de2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2de2b0: 0xc0b799c  jal         func_2DE670
    ctx->pc = 0x2DE2B0u;
    SET_GPR_U32(ctx, 31, 0x2DE2B8u);
    ctx->pc = 0x2DE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE670u, 0x2DE2B0u, 0x2DE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE2B8u;
label_2de2b8:
    // 0x2de2b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de2bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2de2bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2de2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE2C8u;
    // 0x2de2c8: 0x0  nop
    ctx->pc = 0x2de2c8u;
    // NOP
    // 0x2de2cc: 0x0  nop
    ctx->pc = 0x2de2ccu;
    // NOP
    ctx->pc = 0x2de2d0u;
}
