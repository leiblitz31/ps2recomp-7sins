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

// Function: sub_00126DB0
// Address: 0x126db0 - 0x126e00
void sub_00126DB0_0x126db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126DB0_0x126db0");
#endif

    switch (ctx->pc) {
        case 0x126db0u: goto label_126db0;
        case 0x126db4u: goto label_126db4;
        case 0x126db8u: goto label_126db8;
        case 0x126dbcu: goto label_126dbc;
        case 0x126dc0u: goto label_126dc0;
        case 0x126dc4u: goto label_126dc4;
        case 0x126dc8u: goto label_126dc8;
        case 0x126dccu: goto label_126dcc;
        case 0x126dd0u: goto label_126dd0;
        case 0x126dd4u: goto label_126dd4;
        case 0x126dd8u: goto label_126dd8;
        case 0x126ddcu: goto label_126ddc;
        case 0x126de0u: goto label_126de0;
        case 0x126de4u: goto label_126de4;
        case 0x126de8u: goto label_126de8;
        case 0x126decu: goto label_126dec;
        case 0x126df0u: goto label_126df0;
        case 0x126df4u: goto label_126df4;
        case 0x126df8u: goto label_126df8;
        case 0x126dfcu: goto label_126dfc;
        default: break;
    }

    ctx->pc = 0x126db0u;

label_126db0:
    // 0x126db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_126db4:
    // 0x126db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_126db8:
    // 0x126db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x126db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_126dbc:
    // 0x126dbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x126dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_126dc0:
    // 0x126dc0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x126dc0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_126dc4:
    // 0x126dc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x126dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_126dc8:
    // 0x126dc8: 0xc086230  jal         func_2188C0
label_126dcc:
    if (ctx->pc == 0x126DCCu) {
        ctx->pc = 0x126DD0u;
        goto label_126dd0;
    }
    ctx->pc = 0x126DC8u;
    SET_GPR_U32(ctx, 31, 0x126DD0u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x126DC8u, 0x126DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126DD0u;
label_126dd0:
    // 0x126dd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x126dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_126dd4:
    // 0x126dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126dd8:
    // 0x126dd8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x126dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_126ddc:
    // 0x126ddc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x126ddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126de0:
    // 0x126de0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x126de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_126de4:
    // 0x126de4: 0x320f809  jalr        $t9
label_126de8:
    if (ctx->pc == 0x126DE8u) {
        ctx->pc = 0x126DECu;
        goto label_126dec;
    }
    ctx->pc = 0x126DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x126DECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126DE4u, 0x126DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126DECu;
label_126dec:
    // 0x126dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126df0:
    // 0x126df0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x126df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_126df4:
    // 0x126df4: 0x3e00008  jr          $ra
label_126df8:
    if (ctx->pc == 0x126DF8u) {
        ctx->pc = 0x126DFCu;
        goto label_126dfc;
    }
    ctx->pc = 0x126DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126DFCu;
label_126dfc:
    // 0x126dfc: 0x0  nop
    ctx->pc = 0x126dfcu;
    // NOP
    ctx->pc = 0x126e00u;
}
