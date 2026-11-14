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

// Function: sub_00458700
// Address: 0x458700 - 0x458760
void sub_00458700_0x458700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458700_0x458700");
#endif

    ctx->pc = 0x458700u;

    // 0x458700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x458700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x458704: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x458704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x458708: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x458708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45870c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458710: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x458710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x458714: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x458714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458718: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x458718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45871c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458720: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x458720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458724: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x458724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x458728: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x458728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45872c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x45872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x458730: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x458730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x458734: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x458734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x458738: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x458738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x45873c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x45873cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x458740: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x458740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x458744: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x458744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458748: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x458748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45874c: 0x3e00008  jr          $ra
    ctx->pc = 0x45874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45874Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458754u;
    // 0x458754: 0x0  nop
    ctx->pc = 0x458754u;
    // NOP
    // 0x458758: 0x0  nop
    ctx->pc = 0x458758u;
    // NOP
    // 0x45875c: 0x0  nop
    ctx->pc = 0x45875cu;
    // NOP
    ctx->pc = 0x458760u;
}
