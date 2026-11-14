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

// Function: sub_00252B80
// Address: 0x252b80 - 0x252c00
void sub_00252B80_0x252b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252B80_0x252b80");
#endif

    switch (ctx->pc) {
        case 0x252be8u: goto label_252be8;
        default: break;
    }

    ctx->pc = 0x252b80u;

    // 0x252b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252b88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x252b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x252b8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x252b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x252b90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x252b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252b98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252b9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x252b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x252ba0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x252ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252ba4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x252ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252ba8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252bac: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x252bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x252bb0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x252bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252bb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252bb8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x252bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x252bbc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x252bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x252bc0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x252bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252bc4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x252bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252bc8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x252bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x252bcc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x252bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x252bd0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x252bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252bd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x252bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252bd8: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x252bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x252bdc: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x252bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x252be0: 0xc094b00  jal         func_252C00
    ctx->pc = 0x252BE0u;
    SET_GPR_U32(ctx, 31, 0x252BE8u);
    ctx->pc = 0x252C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252C00u, 0x252BE0u, 0x252BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BE8u;
label_252be8:
    // 0x252be8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252bf0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x252bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x252bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x252BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252BFCu;
    // 0x252bfc: 0x0  nop
    ctx->pc = 0x252bfcu;
    // NOP
    ctx->pc = 0x252c00u;
}
