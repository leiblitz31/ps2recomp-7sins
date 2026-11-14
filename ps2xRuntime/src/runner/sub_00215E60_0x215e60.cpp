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

// Function: sub_00215E60
// Address: 0x215e60 - 0x215ef0
void sub_00215E60_0x215e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215E60_0x215e60");
#endif

    switch (ctx->pc) {
        case 0x215e8cu: goto label_215e8c;
        case 0x215e9cu: goto label_215e9c;
        case 0x215eacu: goto label_215eac;
        case 0x215ebcu: goto label_215ebc;
        case 0x215ed4u: goto label_215ed4;
        default: break;
    }

    ctx->pc = 0x215e60u;

    // 0x215e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215e68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x215e6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e70: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x215e70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x215e74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e78: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x215e78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x215e7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e80: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x215e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x215e84: 0xc08581c  jal         func_216070
    ctx->pc = 0x215E84u;
    SET_GPR_U32(ctx, 31, 0x215E8Cu);
    ctx->pc = 0x216070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216070u, 0x215E84u, 0x215E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E8Cu;
label_215e8c:
    // 0x215e8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e90: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x215e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x215e94: 0xc085838  jal         func_2160E0
    ctx->pc = 0x215E94u;
    SET_GPR_U32(ctx, 31, 0x215E9Cu);
    ctx->pc = 0x2160E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160E0u, 0x215E94u, 0x215E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E9Cu;
label_215e9c:
    // 0x215e9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215ea0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x215ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x215ea4: 0xc085920  jal         func_216480
    ctx->pc = 0x215EA4u;
    SET_GPR_U32(ctx, 31, 0x215EACu);
    ctx->pc = 0x216480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216480u, 0x215EA4u, 0x215EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EACu;
label_215eac:
    // 0x215eac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215eb0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x215eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x215eb4: 0xc085930  jal         func_2164C0
    ctx->pc = 0x215EB4u;
    SET_GPR_U32(ctx, 31, 0x215EBCu);
    ctx->pc = 0x2164C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2164C0u, 0x215EB4u, 0x215EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EBCu;
label_215ebc:
    // 0x215ebc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215ec0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x215ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x215ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ec8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x215ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x215ecc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x215ECCu;
    SET_GPR_U32(ctx, 31, 0x215ED4u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x215ECCu, 0x215ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215ED4u;
label_215ed4:
    // 0x215ed4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215ed8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x215ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x215edc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215ee4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x215ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x215ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x215EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215EF0u;
}
