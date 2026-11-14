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

// Function: sub_0048DE50
// Address: 0x48de50 - 0x48dec0
void sub_0048DE50_0x48de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DE50_0x48de50");
#endif

    switch (ctx->pc) {
        case 0x48de78u: goto label_48de78;
        case 0x48de8cu: goto label_48de8c;
        case 0x48deacu: goto label_48deac;
        default: break;
    }

    ctx->pc = 0x48de50u;

    // 0x48de50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48de50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48de54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48de54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48de58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48de58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48de5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x48de5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x48de60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48de64: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x48DE64u;
    {
        const bool branch_taken_0x48de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48de64) {
            ctx->pc = 0x48DEACu;
            goto label_48deac;
        }
    }
    ctx->pc = 0x48DE6Cu;
    // 0x48de6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48de70: 0xc123fa4  jal         func_48FE90
    ctx->pc = 0x48DE70u;
    SET_GPR_U32(ctx, 31, 0x48DE78u);
    ctx->pc = 0x48FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FE90u, 0x48DE70u, 0x48DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE78u;
label_48de78:
    // 0x48de78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48de7c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48de80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48de80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48de84: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x48DE84u;
    SET_GPR_U32(ctx, 31, 0x48DE8Cu);
    ctx->pc = 0x137F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F50u, 0x48DE84u, 0x48DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE8Cu;
label_48de8c:
    // 0x48de8c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x48de8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48de90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x48de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x48de94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48de94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x48de98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48DE98u;
    {
        const bool branch_taken_0x48de98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48de98) {
            ctx->pc = 0x48DEACu;
            goto label_48deac;
        }
    }
    ctx->pc = 0x48DEA0u;
    // 0x48dea0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dea4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x48DEA4u;
    SET_GPR_U32(ctx, 31, 0x48DEACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x48DEA4u, 0x48DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DEACu;
label_48deac:
    // 0x48deac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48deb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48deb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48deb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48deb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48deb8: 0x3e00008  jr          $ra
    ctx->pc = 0x48DEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DEC0u;
}
