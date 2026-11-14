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

// Function: sub_0048A640
// Address: 0x48a640 - 0x48a6e0
void sub_0048A640_0x48a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A640_0x48a640");
#endif

    switch (ctx->pc) {
        case 0x48a660u: goto label_48a660;
        case 0x48a674u: goto label_48a674;
        case 0x48a688u: goto label_48a688;
        case 0x48a69cu: goto label_48a69c;
        case 0x48a6b8u: goto label_48a6b8;
        case 0x48a6c8u: goto label_48a6c8;
        default: break;
    }

    ctx->pc = 0x48a640u;

    // 0x48a640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48a644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48a648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48a648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48a64c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a650: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x48a650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x48a654: 0x24a51b68  addiu       $a1, $a1, 0x1B68
    ctx->pc = 0x48a654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7016));
    // 0x48a658: 0xc1229b8  jal         func_48A6E0
    ctx->pc = 0x48A658u;
    SET_GPR_U32(ctx, 31, 0x48A660u);
    ctx->pc = 0x48A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A6E0u, 0x48A658u, 0x48A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A660u;
label_48a660:
    // 0x48a660: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48a660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a664: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x48a664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x48a668: 0x24a51b88  addiu       $a1, $a1, 0x1B88
    ctx->pc = 0x48a668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7048));
    // 0x48a66c: 0xc122b74  jal         func_48ADD0
    ctx->pc = 0x48A66Cu;
    SET_GPR_U32(ctx, 31, 0x48A674u);
    ctx->pc = 0x48ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ADD0u, 0x48A66Cu, 0x48A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A674u;
label_48a674:
    // 0x48a674: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48a674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a678: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x48a678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x48a67c: 0x24a51b78  addiu       $a1, $a1, 0x1B78
    ctx->pc = 0x48a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7032));
    // 0x48a680: 0xc122af0  jal         func_48ABC0
    ctx->pc = 0x48A680u;
    SET_GPR_U32(ctx, 31, 0x48A688u);
    ctx->pc = 0x48ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ABC0u, 0x48A680u, 0x48A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A688u;
label_48a688:
    // 0x48a688: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x48a688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x48a68c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x48a68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x48a690: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48a690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a694: 0xc122b40  jal         func_48AD00
    ctx->pc = 0x48A694u;
    SET_GPR_U32(ctx, 31, 0x48A69Cu);
    ctx->pc = 0x48AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48AD00u, 0x48A694u, 0x48A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A69Cu;
label_48a69c:
    // 0x48a69c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a6a0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x48a6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x48a6a4: 0x24a51b98  addiu       $a1, $a1, 0x1B98
    ctx->pc = 0x48a6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7064));
    // 0x48a6a8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x48a6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x48a6ac: 0x24c61ba0  addiu       $a2, $a2, 0x1BA0
    ctx->pc = 0x48a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7072));
    // 0x48a6b0: 0xc122b50  jal         func_48AD40
    ctx->pc = 0x48A6B0u;
    SET_GPR_U32(ctx, 31, 0x48A6B8u);
    ctx->pc = 0x48AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48AD40u, 0x48A6B0u, 0x48A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A6B8u;
label_48a6b8:
    // 0x48a6b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a6bc: 0xc78c8188  lwc1        $f12, -0x7E78($gp)
    ctx->pc = 0x48a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x48a6c0: 0xc122b68  jal         func_48ADA0
    ctx->pc = 0x48A6C0u;
    SET_GPR_U32(ctx, 31, 0x48A6C8u);
    ctx->pc = 0x48ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ADA0u, 0x48A6C0u, 0x48A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A6C8u;
label_48a6c8:
    // 0x48a6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48a6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48a6cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48a6ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48a6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x48A6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48A6D8u;
    // 0x48a6d8: 0x0  nop
    ctx->pc = 0x48a6d8u;
    // NOP
    // 0x48a6dc: 0x0  nop
    ctx->pc = 0x48a6dcu;
    // NOP
    ctx->pc = 0x48a6e0u;
}
