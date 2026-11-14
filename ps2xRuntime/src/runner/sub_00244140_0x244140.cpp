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

// Function: sub_00244140
// Address: 0x244140 - 0x2441b0
void sub_00244140_0x244140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244140_0x244140");
#endif

    switch (ctx->pc) {
        case 0x244194u: goto label_244194;
        default: break;
    }

    ctx->pc = 0x244140u;

    // 0x244140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244148: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x244148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24414c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244150: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x244150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x244154: 0x1003000f  beq         $zero, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x244154u;
    {
        const bool branch_taken_0x244154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x244154) {
            ctx->pc = 0x244194u;
            goto label_244194;
        }
    }
    ctx->pc = 0x24415Cu;
    // 0x24415c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244160: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x244160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x244164: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x244164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x244168: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x244168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24416c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x244170: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x244170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244174: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x244174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244178: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x244178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24417c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x24417cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x244180: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x244180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x244184: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x244184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244188: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x244188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24418c: 0xc090f14  jal         func_243C50
    ctx->pc = 0x24418Cu;
    SET_GPR_U32(ctx, 31, 0x244194u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x24418Cu, 0x244194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244194u;
label_244194:
    // 0x244194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244198: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x244198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24419c: 0x3e00008  jr          $ra
    ctx->pc = 0x24419Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24419Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2441A4u;
    // 0x2441a4: 0x0  nop
    ctx->pc = 0x2441a4u;
    // NOP
    // 0x2441a8: 0x0  nop
    ctx->pc = 0x2441a8u;
    // NOP
    // 0x2441ac: 0x0  nop
    ctx->pc = 0x2441acu;
    // NOP
    ctx->pc = 0x2441b0u;
}
